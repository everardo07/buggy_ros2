// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/SteeringCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'steering_angle'
// Member 'steering_angle_velocity'
// Member 'steering_torque'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__SteeringCMD __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__SteeringCMD __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SteeringCMD_
{
  using Type = SteeringCMD_<ContainerAllocator>;

  explicit SteeringCMD_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steering_angle(_init),
    steering_angle_velocity(_init),
    steering_torque(_init)
  {
    (void)_init;
  }

  explicit SteeringCMD_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : steering_angle(_alloc, _init),
    steering_angle_velocity(_alloc, _init),
    steering_torque(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _steering_angle_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _steering_angle_type steering_angle;
  using _steering_angle_velocity_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _steering_angle_velocity_type steering_angle_velocity;
  using _steering_torque_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _steering_torque_type steering_torque;

  // setters for named parameter idiom
  Type & set__steering_angle(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->steering_angle = _arg;
    return *this;
  }
  Type & set__steering_angle_velocity(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->steering_angle_velocity = _arg;
    return *this;
  }
  Type & set__steering_torque(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->steering_torque = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::SteeringCMD_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::SteeringCMD_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::SteeringCMD_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::SteeringCMD_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__SteeringCMD
    std::shared_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__SteeringCMD
    std::shared_ptr<buggy_msgs::msg::SteeringCMD_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SteeringCMD_ & other) const
  {
    if (this->steering_angle != other.steering_angle) {
      return false;
    }
    if (this->steering_angle_velocity != other.steering_angle_velocity) {
      return false;
    }
    if (this->steering_torque != other.steering_torque) {
      return false;
    }
    return true;
  }
  bool operator!=(const SteeringCMD_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SteeringCMD_

// alias to use template instance with default allocator
using SteeringCMD =
  buggy_msgs::msg::SteeringCMD_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_HPP_
