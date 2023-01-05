// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/DriveState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'r_current'
// Member 'l_current'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__DriveState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__DriveState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveState_
{
  using Type = DriveState_<ContainerAllocator>;

  explicit DriveState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : r_current(_init),
    l_current(_init)
  {
    (void)_init;
  }

  explicit DriveState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : r_current(_alloc, _init),
    l_current(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _r_current_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _r_current_type r_current;
  using _l_current_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _l_current_type l_current;

  // setters for named parameter idiom
  Type & set__r_current(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->r_current = _arg;
    return *this;
  }
  Type & set__l_current(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->l_current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::DriveState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::DriveState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::DriveState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::DriveState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__DriveState
    std::shared_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__DriveState
    std::shared_ptr<buggy_msgs::msg::DriveState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveState_ & other) const
  {
    if (this->r_current != other.r_current) {
      return false;
    }
    if (this->l_current != other.l_current) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveState_

// alias to use template instance with default allocator
using DriveState =
  buggy_msgs::msg::DriveState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__STRUCT_HPP_
