// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/RCCtrlStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'rcctrl_state'
#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__RCCtrlStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__RCCtrlStateStamped __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RCCtrlStateStamped_
{
  using Type = RCCtrlStateStamped_<ContainerAllocator>;

  explicit RCCtrlStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    rcctrl_state(_init)
  {
    (void)_init;
  }

  explicit RCCtrlStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rcctrl_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _rcctrl_state_type =
    buggy_msgs::msg::RCCtrlState_<ContainerAllocator>;
  _rcctrl_state_type rcctrl_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__rcctrl_state(
    const buggy_msgs::msg::RCCtrlState_<ContainerAllocator> & _arg)
  {
    this->rcctrl_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__RCCtrlStateStamped
    std::shared_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__RCCtrlStateStamped
    std::shared_ptr<buggy_msgs::msg::RCCtrlStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RCCtrlStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->rcctrl_state != other.rcctrl_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const RCCtrlStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RCCtrlStateStamped_

// alias to use template instance with default allocator
using RCCtrlStateStamped =
  buggy_msgs::msg::RCCtrlStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__STRUCT_HPP_
