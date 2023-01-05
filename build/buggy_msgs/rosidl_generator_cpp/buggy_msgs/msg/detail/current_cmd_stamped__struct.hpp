// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/CurrentCMDStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__STRUCT_HPP_

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
// Member 'current'
#include "buggy_msgs/msg/detail/current_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__CurrentCMDStamped __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__CurrentCMDStamped __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CurrentCMDStamped_
{
  using Type = CurrentCMDStamped_<ContainerAllocator>;

  explicit CurrentCMDStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current(_init)
  {
    (void)_init;
  }

  explicit CurrentCMDStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_type =
    buggy_msgs::msg::CurrentCMD_<ContainerAllocator>;
  _current_type current;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current(
    const buggy_msgs::msg::CurrentCMD_<ContainerAllocator> & _arg)
  {
    this->current = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__CurrentCMDStamped
    std::shared_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__CurrentCMDStamped
    std::shared_ptr<buggy_msgs::msg::CurrentCMDStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CurrentCMDStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    return true;
  }
  bool operator!=(const CurrentCMDStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CurrentCMDStamped_

// alias to use template instance with default allocator
using CurrentCMDStamped =
  buggy_msgs::msg::CurrentCMDStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__STRUCT_HPP_
