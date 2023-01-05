// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/PlatoonStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE_STAMPED__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE_STAMPED__STRUCT_HPP_

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
// Member 'platoon_state'
#include "buggy_msgs/msg/detail/platoon_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__PlatoonStateStamped __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__PlatoonStateStamped __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlatoonStateStamped_
{
  using Type = PlatoonStateStamped_<ContainerAllocator>;

  explicit PlatoonStateStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    platoon_state(_init)
  {
    (void)_init;
  }

  explicit PlatoonStateStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    platoon_state(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _platoon_state_type =
    buggy_msgs::msg::PlatoonState_<ContainerAllocator>;
  _platoon_state_type platoon_state;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__platoon_state(
    const buggy_msgs::msg::PlatoonState_<ContainerAllocator> & _arg)
  {
    this->platoon_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__PlatoonStateStamped
    std::shared_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__PlatoonStateStamped
    std::shared_ptr<buggy_msgs::msg::PlatoonStateStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatoonStateStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->platoon_state != other.platoon_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatoonStateStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatoonStateStamped_

// alias to use template instance with default allocator
using PlatoonStateStamped =
  buggy_msgs::msg::PlatoonStateStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE_STAMPED__STRUCT_HPP_
