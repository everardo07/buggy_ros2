

import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess, IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.conditions import IfCondition, UnlessCondition



def generate_launch_description():
    # Get the launch directory
    camera_name = 'zed2'
    node_name = 'zed_node'
    camera_model = 'zed2'
    base_frame = 'base_footprint'
    bringup_dir = get_package_share_directory('buggy_mobile_navigation')
    #lidarslam_launch_file_dir = os.path.join(get_package_share_directory('lidarslam'), 'launch')
    pkg_share = FindPackageShare(package='buggy_mobile_robot').find('buggy_mobile_robot')
    velodyne_launch_file_dir = os.path.join(get_package_share_directory('velodyne'), 'launch')
    robot_localization_file_path = os.path.join(pkg_share, 'params/ekf.yaml') 
    world_file_name = 'empty.world' + '.world'
    launch_dir = os.path.join(bringup_dir, 'launch')
    params_dir = os.path.join(bringup_dir, 'params')

    config_common_path = os.path.join(
        get_package_share_directory('zed_wrapper'),
        'config',
        'common.yaml'
    )

    config_camera_path = os.path.join(
            get_package_share_directory('zed_wrapper'),
            'config',
            camera_model + '.yaml')  

    # Create the launch configuration variables
    namespace = LaunchConfiguration('namespace')
    use_sim_time = LaunchConfiguration('use_sim_time') 
    autostart = LaunchConfiguration('autostart')

    # Launch configuration variables specific to simulation
    rviz_config_file = LaunchConfiguration('rviz_config_file')
    use_simulator = LaunchConfiguration('use_simulator')
    use_robot_state_pub = LaunchConfiguration('use_robot_state_pub')
    use_rviz = LaunchConfiguration('use_rviz')
    headless = LaunchConfiguration('headless')
    world = LaunchConfiguration('world')
    gui = LaunchConfiguration('gui')

    remappings = [('/tf', 'tf'),
                  ('/tf_static', 'tf_static'),
                  ('cmd_vel', 'buggy/cmd_vel')]

    # Declare the launch arguments
    declare_use_joint_state_publisher_cmd = DeclareLaunchArgument(
    name='gui',
    default_value='True',
    description='Flag to enable joint_state_publisher_gui')
   
    declare_namespace_cmd = DeclareLaunchArgument(
        'namespace',
        default_value='',
        description='Top-level namespace')

    declare_use_namespace_cmd = DeclareLaunchArgument(
        'use_namespace',
        default_value='false',
        description='Whether to apply a namespace to the navigation stack')

    declare_use_sim_time_cmd = DeclareLaunchArgument(
        'use_sim_time',
        default_value='false',
        description='Use simulation (Gazebo) clock if true')

    declare_autostart_cmd = DeclareLaunchArgument(
        'autostart', default_value='true',
        description='Automatically startup the nav2 stack')

    declare_rviz_config_file_cmd = DeclareLaunchArgument(
        'rviz_config_file',
        default_value=os.path.join(
            bringup_dir, 'rviz', 'buggy_mapping_slam.rviz'),
        description='Full path to the RVIZ config file to use')

    declare_use_simulator_cmd = DeclareLaunchArgument(
        'use_simulator',
        default_value='True',
        description='Whether to start the simulator')

    declare_use_robot_state_pub_cmd = DeclareLaunchArgument(
        'use_robot_state_pub',
        default_value='True',
        description='Whether to start the robot state publisher')

    declare_use_rviz_cmd = DeclareLaunchArgument(
        'use_rviz',
        default_value='True',
        description='Whether to start RVIZ')

    declare_simulator_cmd = DeclareLaunchArgument(
        'headless',
        default_value='False',
        description='Whether to execute gzclient)')
    declare_world_cmd = DeclareLaunchArgument(
        'world',
        default_value=os.path.join(get_package_share_directory('buggy_mobile_robot'),
                                   'worlds/', world_file_name ),
        description='Full path to world model file to load')
    print(os.path.join(get_package_share_directory('buggy_mobile_robot'),
                       'worlds/', world_file_name))
    # Specify the actions
    start_gazebo_server_cmd = ExecuteProcess(
        condition=IfCondition(use_simulator),
        cmd=['gzserver', '-s', 'libgazebo_ros_init.so', world],
        cwd=[launch_dir], output='screen')

    start_gazebo_client_cmd = ExecuteProcess(
        condition=IfCondition(PythonExpression(
            [use_simulator, ' and not ', headless])),
        cmd=['gzclient'],
        cwd=[launch_dir], output='screen')

    urdf = os.path.join(get_package_share_directory('buggy_mobile_robot'),
                        'models/buggy.urdf')

    start_robot_state_publisher_cmd = Node(
        condition=IfCondition(use_robot_state_pub),
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        namespace=namespace,
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}],
        remappings=remappings,
        arguments=[urdf])

    start_joint_state_publisher_cmd = Node(
        condition=UnlessCondition(gui),
        package='joint_state_publisher',
        executable='joint_state_publisher',
        name='joint_state_publisher')
 
  # A GUI to manipulate the joint state values
    start_joint_state_publisher_gui_node = Node(
        condition=IfCondition(gui),
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui')

    rviz_cmd = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(launch_dir, 'rviz.launch.py')),
        condition=IfCondition(use_rviz),
        launch_arguments={'namespace': '',
                          'use_namespace': 'False',
                          'rviz_config': rviz_config_file}.items())
  
    #start_lidarslam_cmd = IncludeLaunchDescription(
    #    PythonLaunchDescriptionSource([lidarslam_launch_file_dir, '/lidarslam.launch.py']),
    #    launch_arguments={'use_sim_time': use_sim_time}.items())

  
    start_velodyne_cmd= IncludeLaunchDescription(
        PythonLaunchDescriptionSource([velodyne_launch_file_dir, '/velodyne-all-nodes-VLP16-launch.py']),
        launch_arguments={'use_sim_time': use_sim_time}.items(),
        )  
   
    # Create the launch description and populate

    start_loc_local_cmd= Node(
            package='robot_localization',
            executable='ekf_node',
            name='ekf_local_filter_node',
            output='screen',
            parameters=[robot_localization_file_path],
            remappings=[('odometry/filtered', 'odometry/local')]
        )

    start_loc_glob_cmd= Node(
            package='robot_localization',
            executable='ekf_node',
            name='ekf_global_filter_node',
            output='screen',
            parameters=[robot_localization_file_path],
            remappings=[('odometry/filtered', 'odometry/global')]
        )
    
    start_odom_cmd = Node(
        package='ackermann_odometry',
        executable='odom_publisher',
        name='odom_publisher')

    zed_wrapper_node = Node(
        package='zed_wrapper',        
        namespace=camera_name,
        executable='zed_wrapper',
        name=node_name,
        output='screen',
        parameters=[
            # YAML files
            config_common_path,  # Common parameters
            config_camera_path,  # Camera related parameters
            # Overriding
            {
                 'general.camera_name': camera_name,
                 'general.camera_model': camera_model,
                 #'general.svo_file': svo_path,
                 'pos_tracking.base_frame': base_frame
            }
        ]
    )

    ld = LaunchDescription()

    # Declare the launch options
    ld.add_action(declare_namespace_cmd)
    ld.add_action(declare_use_namespace_cmd)
    ld.add_action(declare_use_sim_time_cmd)
    ld.add_action(declare_autostart_cmd)
    ld.add_action(declare_use_joint_state_publisher_cmd)

    ld.add_action(declare_rviz_config_file_cmd)
    ld.add_action(declare_use_simulator_cmd)
    ld.add_action(declare_use_robot_state_pub_cmd)
    ld.add_action(declare_use_rviz_cmd)
    ld.add_action(declare_simulator_cmd)
    ld.add_action(declare_world_cmd)

    # Add any conditioned actions
    #ld.add_action(start_gazebo_server_cmd)
    #ld.add_action(start_gazebo_client_cmd)

    # Add the actions to launch all of the navigation nodes
    ld.add_action(start_robot_state_publisher_cmd)
    ld.add_action(rviz_cmd)
    ld.add_action(start_velodyne_cmd)
    ld.add_action(start_joint_state_publisher_gui_node)
    ld.add_action(start_joint_state_publisher_cmd)
    ld.add_action(start_odom_cmd)
    #ld.add_action(zed_wrapper_node)
    #ld.add_action(start_lidarslam_cmd)

    return ld
