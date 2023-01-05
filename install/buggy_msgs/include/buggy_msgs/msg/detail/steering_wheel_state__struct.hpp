// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'steering_wheel_angle'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__SteeringWheelState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__SteeringWheelState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringWheelState_
{
  using Type = SteeringWheelState_<ContainerAllocator>;

  explicit SteeringWheelState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steering_wheel_angle(_init)
  {
    (void)_init;
  }

  explicit SteeringWheelState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steering_wheel_angle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _steering_wheel_angle_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _steering_wheel_angle_type steering_wheel_angle;

  // setters for named parameter idiom
  Type & set__steering_wheel_angle(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->steering_wheel_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__SteeringWheelState
    std::shared_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__SteeringWheelState
    std::shared_ptr<buggy_msgs::msg::SteeringWheelState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringWheelState_ & other) const
  {
    if (this->steering_wheel_angle != other.steering_wheel_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringWheelState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringWheelState_

// alias to use template instance with default allocator
using SteeringWheelState =
  buggy_msgs::msg::SteeringWheelState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__STRUCT_HPP_
