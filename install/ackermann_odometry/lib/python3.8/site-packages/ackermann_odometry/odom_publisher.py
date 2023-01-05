import math
from turtle import stamp
from typing import NamedTuple
import builtin_interfaces.msg
import numpy as np
import rclpy
import tf2_py
from ackermann_interfaces.msg import AckermannFeedback
from geometry_msgs.msg import (Point, Pose, PoseWithCovariance, Quaternion,
                               Twist, Transform, TwistWithCovariance, Vector3)
from nav_msgs.msg import Odometry
from rclpy.node import Node
from scipy.spatial.transform import Rotation
from std_msgs.msg import Header
from buggy_msgs.msg import VehicleState
from geometry_msgs.msg import TransformStamped
from tf2_ros import TransformBroadcaster
from ackermann_msgs.msg import AckermannDrive
from std_msgs.msg import Float64
class AckermannState(NamedTuple):
    position: np.array
    orientation: Rotation
    covariance_values:np.array
    left_wheel_speed: float
    right_wheel_speed: float
    steering_angle: float
    time: rclpy.time.Time


class OdomPublisher(Node):
    """Listens to odometry information and publishes Odometry message at regular rate"""

    def __init__(self):
        super().__init__('odom_publisher')

        # Parameters
        self.declare_parameters(
            namespace='',
            parameters=[
                ('axle_length', 0.690),
                ('wheelbase_length', 0.670),
                ('wheel_radius', 0.14),
                ('center_of_mass_offset', 0.0),
                ('damping_factor', 1)
            ]
        )

        try:
            self.axle_length = float(self.get_parameter('axle_length').value)
            self.wheelbase_length = float(self.get_parameter('wheelbase_length').value)
            self.wheel_radius = float(self.get_parameter('wheel_radius').value)
            self.center_of_mass_offset = float(self.get_parameter('center_of_mass_offset').value)
            self.damping_factor = float(self.get_parameter('damping_factor').value)
        except TypeError as e:
            raise RuntimeError('Not all parameters are set properly') from e

        # Publishers
        queue_size = 10
        self.publisher = self.create_publisher(Odometry, 'odom', queue_size)
        self.br = TransformBroadcaster(self)
        # Subscribers
        self.create_subscription(
            VehicleState,
            'vehicle_state',
            self.feedback_callback,
            10
        )

        self.state = AckermannState(
            position=np.array([0,0,0]),
            orientation=Rotation([0, 0, 0, 1]),
            covariance_values=np.array([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                               0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0]), # identity
            left_wheel_speed=0.0,
            right_wheel_speed=0.0,
            steering_angle=0.0,
            time=self.get_clock().now()
        )

    def state_update(self, state: AckermannState, vehicle_state: VehicleState) -> AckermannState:
        """Calculate the next state based off the current state"""
        average_wheel_speed = (state.left_wheel_speed + state.right_wheel_speed) / 2
        linear_speed = average_wheel_speed * self.wheel_radius
        #linear_speed = average_wheel_speed
        turn_radius = self.turn_radius(state.steering_angle)
        angular_speed = linear_speed / turn_radius # This is zero if turn_radius is infinite

        feedback_time = self.get_clock().now()
        time_delta = (feedback_time - state.time).nanoseconds * 1e-9

        heading_delta = angular_speed * time_delta # This is zero if angular_speed is zero

        orientation_delta = Rotation.from_euler('xyz', [0, 0, heading_delta])
        if math.isfinite(turn_radius):
            lateral_delta = turn_radius * (1 - math.cos(heading_delta))
            forward_delta = turn_radius * math.sin(heading_delta)
            relative_delta = np.array([forward_delta, lateral_delta, 0])
            position_delta = state.orientation.apply(relative_delta)
        else:
            position_delta = time_delta * self.linear_velocity(state.orientation, linear_speed)

        return AckermannState(
            position=state.position + self.damping_factor * position_delta,
            orientation=orientation_delta * state.orientation,
            covariance_values=[0.00001,0.0,0.0,0.0,0.0,0.0,0.0,0.00001,0.0,0.0,0.0,0.0,0.0,0.0,1000000000000,0.0,0.0,0.0,0.0,0.0,0.0,
                               1000000000000,0.0,0.0,0.0,0.0,0.0,0.0,1000000000000,0.0,0.0,0.0,0.0,0.0,0.0,0.001],
            left_wheel_speed=(vehicle_state.wheels._lr_speed.data) * 2 * math.pi,
            right_wheel_speed=(vehicle_state.wheels._rr_speed.data) * 2 * math.pi,
            steering_angle=math.radians(vehicle_state.steering_wheel.steering_wheel_angle.data),
            time=feedback_time
        )

    def output(self, state: AckermannState) -> Odometry:
        """Build Odometry message from state"""
        odom_trans =TransformStamped()
        quaternion = state.orientation.as_quat()
        linear_speed = self.wheel_radius * (state.left_wheel_speed + state.right_wheel_speed) / 2
        linear_velocity = self.linear_velocity(state.orientation, linear_speed)
        angular_speed = linear_speed / self.turn_radius(state.steering_angle)

        odom_trans.header.frame_id = 'odom'
        odom_trans.child_frame_id = 'base_footprint'
        odom_trans.header.stamp = state.time.to_msg()
        odom_trans.transform.translation.x = state.position[0]
        odom_trans.transform.translation.y = state.position[1]
        odom_trans.transform.translation.z = state.position[2]
        odom_trans.transform.rotation.x = quaternion[0]
        odom_trans.transform.rotation.y = quaternion[1]
        odom_trans.transform.rotation.z = quaternion[2]
        odom_trans.transform.rotation.w = quaternion[3]
     
        self.br.sendTransform(odom_trans)
        
        return Odometry(
            header=Header(
                stamp=state.time.to_msg(),
                frame_id='odom'
            ),
            child_frame_id='base_footprint',
            pose=PoseWithCovariance(
                pose=Pose(
                    position=Point(
                        x=state.position[0],
                        y=state.position[1],
                        z=state.position[2]
                    ),
                    orientation=Quaternion(
                        x=quaternion[0],
                        y=quaternion[1],
                        z=quaternion[2],
                        w=quaternion[3]
                    )       
                ),
                covariance=state.covariance_values,

            ),
            twist=TwistWithCovariance(
                twist=Twist(
                    linear=Vector3(
                        x=linear_velocity[0],
                        y=linear_velocity[1],
                        z=linear_velocity[2]
                    ),
                    angular=Vector3(
                        z=angular_speed
                    )
                ),
                covariance=state.covariance_values,
            )
        )
        
    def feedback_callback(self, msg: VehicleState):
        """Update state and publish to Odometry"""
        self.state = self.state_update(self.state, msg)
        self.get_logger().debug(f'state update: {self.state}')
        output = self.output(self.state)
        self.get_logger().debug(f'odometry: {output}')
        self.publisher.publish(output)

    def turn_radius(self, steering_angle: float) -> float:
        """
        Calculate the radius of the circle tracked by a turning vehicle
        For left turns, the radius is positive. For right turns, the radius is negative.
        """
        # If the steering angle is 0, then cot(0) is undefined
        if steering_angle == 0:
            return math.inf
        else:
            radius = math.sqrt(self.center_of_mass_offset**2 + self.wheelbase_length**2 * 1 / math.tan(steering_angle)**2)
            return math.copysign(radius, steering_angle)

    def linear_velocity(self, orientation: Rotation, speed: float) -> np.array:
        return orientation.apply([speed, 0, 0]) # rotate from +x direction

def main(args=None):
    rclpy.init(args=args)

    odom_publisher = OdomPublisher()

    rclpy.spin(odom_publisher)

    odom_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()