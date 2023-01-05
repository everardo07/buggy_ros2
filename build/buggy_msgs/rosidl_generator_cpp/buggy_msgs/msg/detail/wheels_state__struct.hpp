// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/WheelsState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'rf_speed'
// Member 'lf_speed'
// Member 'rr_speed'
// Member 'lr_speed'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__WheelsState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__WheelsState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelsState_
{
  using Type = WheelsState_<ContainerAllocator>;

  explicit WheelsState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rf_speed(_init),
    lf_speed(_init),
    rr_speed(_init),
    lr_speed(_init)
  {
    (void)_init;
  }

  explicit WheelsState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rf_speed(_alloc, _init),
    lf_speed(_alloc, _init),
    rr_speed(_alloc, _init),
    lr_speed(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _rf_speed_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _rf_speed_type rf_speed;
  using _lf_speed_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _lf_speed_type lf_speed;
  using _rr_speed_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _rr_speed_type rr_speed;
  using _lr_speed_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _lr_speed_type lr_speed;

  // setters for named parameter idiom
  Type & set__rf_speed(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->rf_speed = _arg;
    return *this;
  }
  Type & set__lf_speed(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->lf_speed = _arg;
    return *this;
  }
  Type & set__rr_speed(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->rr_speed = _arg;
    return *this;
  }
  Type & set__lr_speed(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->lr_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::WheelsState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::WheelsState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::WheelsState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::WheelsState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__WheelsState
    std::shared_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__WheelsState
    std::shared_ptr<buggy_msgs::msg::WheelsState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelsState_ & other) const
  {
    if (this->rf_speed != other.rf_speed) {
      return false;
    }
    if (this->lf_speed != other.lf_speed) {
      return false;
    }
    if (this->rr_speed != other.rr_speed) {
      return false;
    }
    if (this->lr_speed != other.lr_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelsState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelsState_

// alias to use template instance with default allocator
using WheelsState =
  buggy_msgs::msg::WheelsState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__STRUCT_HPP_
