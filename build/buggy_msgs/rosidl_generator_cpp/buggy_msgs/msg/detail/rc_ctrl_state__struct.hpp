// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'joyctrl_enabled'
// Member 'ro2car_enabled'
// Member 'control_disabled'
#include "std_msgs/msg/detail/u_int8__struct.hpp"
// Member 'rc1_value'
// Member 'rc2_value'
// Member 'rc3_value'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__RCCtrlState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__RCCtrlState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RCCtrlState_
{
  using Type = RCCtrlState_<ContainerAllocator>;

  explicit RCCtrlState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joyctrl_enabled(_init),
    ro2car_enabled(_init),
    control_disabled(_init),
    rc1_value(_init),
    rc2_value(_init),
    rc3_value(_init)
  {
    (void)_init;
  }

  explicit RCCtrlState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joyctrl_enabled(_alloc, _init),
    ro2car_enabled(_alloc, _init),
    control_disabled(_alloc, _init),
    rc1_value(_alloc, _init),
    rc2_value(_alloc, _init),
    rc3_value(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _joyctrl_enabled_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _joyctrl_enabled_type joyctrl_enabled;
  using _ro2car_enabled_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _ro2car_enabled_type ro2car_enabled;
  using _control_disabled_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _control_disabled_type control_disabled;
  using _rc1_value_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _rc1_value_type rc1_value;
  using _rc2_value_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _rc2_value_type rc2_value;
  using _rc3_value_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _rc3_value_type rc3_value;

  // setters for named parameter idiom
  Type & set__joyctrl_enabled(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->joyctrl_enabled = _arg;
    return *this;
  }
  Type & set__ro2car_enabled(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->ro2car_enabled = _arg;
    return *this;
  }
  Type & set__control_disabled(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->control_disabled = _arg;
    return *this;
  }
  Type & set__rc1_value(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->rc1_value = _arg;
    return *this;
  }
  Type & set__rc2_value(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->rc2_value = _arg;
    return *this;
  }
  Type & set__rc3_value(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->rc3_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::RCCtrlState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::RCCtrlState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::RCCtrlState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::RCCtrlState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__RCCtrlState
    std::shared_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__RCCtrlState
    std::shared_ptr<buggy_msgs::msg::RCCtrlState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RCCtrlState_ & other) const
  {
    if (this->joyctrl_enabled != other.joyctrl_enabled) {
      return false;
    }
    if (this->ro2car_enabled != other.ro2car_enabled) {
      return false;
    }
    if (this->control_disabled != other.control_disabled) {
      return false;
    }
    if (this->rc1_value != other.rc1_value) {
      return false;
    }
    if (this->rc2_value != other.rc2_value) {
      return false;
    }
    if (this->rc3_value != other.rc3_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const RCCtrlState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RCCtrlState_

// alias to use template instance with default allocator
using RCCtrlState =
  buggy_msgs::msg::RCCtrlState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__STRUCT_HPP_
