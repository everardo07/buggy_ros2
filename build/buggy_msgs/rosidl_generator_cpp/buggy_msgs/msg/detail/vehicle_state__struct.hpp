// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'wheels'
#include "buggy_msgs/msg/detail/wheels_state__struct.hpp"
// Member 'steering_wheel'
#include "buggy_msgs/msg/detail/steering_wheel_state__struct.hpp"
// Member 'acceleration'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__VehicleState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__VehicleState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleState_
{
  using Type = VehicleState_<ContainerAllocator>;

  explicit VehicleState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wheels(_init),
    steering_wheel(_init),
    acceleration(_init)
  {
    (void)_init;
  }

  explicit VehicleState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : wheels(_alloc, _init),
    steering_wheel(_alloc, _init),
    acceleration(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _wheels_type =
    buggy_msgs::msg::WheelsState_<ContainerAllocator>;
  _wheels_type wheels;
  using _steering_wheel_type =
    buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>;
  _steering_wheel_type steering_wheel;
  using _acceleration_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _acceleration_type acceleration;

  // setters for named parameter idiom
  Type & set__wheels(
    const buggy_msgs::msg::WheelsState_<ContainerAllocator> & _arg)
  {
    this->wheels = _arg;
    return *this;
  }
  Type & set__steering_wheel(
    const buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> & _arg)
  {
    this->steering_wheel = _arg;
    return *this;
  }
  Type & set__acceleration(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::VehicleState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::VehicleState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::VehicleState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::VehicleState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__VehicleState
    std::shared_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__VehicleState
    std::shared_ptr<buggy_msgs::msg::VehicleState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleState_ & other) const
  {
    if (this->wheels != other.wheels) {
      return false;
    }
    if (this->steering_wheel != other.steering_wheel) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleState_

// alias to use template instance with default allocator
using VehicleState =
  buggy_msgs::msg::VehicleState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_HPP_
