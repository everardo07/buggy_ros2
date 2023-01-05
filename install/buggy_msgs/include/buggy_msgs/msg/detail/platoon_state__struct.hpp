// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
// Member 'counter'
#include "std_msgs/msg/detail/u_int16__struct.hpp"
// Member 'platoon_acc_x'
// Member 'platoon_mapmatching_isvalid'
// Member 'platoon_mapmatching_roadindex'
// Member 'platoon_mapmatching_s'
// Member 'platoon_velocity'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__PlatoonState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__PlatoonState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlatoonState_
{
  using Type = PlatoonState_<ContainerAllocator>;

  explicit PlatoonState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    counter(_init),
    platoon_acc_x(_init),
    platoon_mapmatching_isvalid(_init),
    platoon_mapmatching_roadindex(_init),
    platoon_mapmatching_s(_init),
    platoon_velocity(_init)
  {
    (void)_init;
  }

  explicit PlatoonState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    counter(_alloc, _init),
    platoon_acc_x(_alloc, _init),
    platoon_mapmatching_isvalid(_alloc, _init),
    platoon_mapmatching_roadindex(_alloc, _init),
    platoon_mapmatching_s(_alloc, _init),
    platoon_velocity(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _id_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _id_type id;
  using _counter_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _counter_type counter;
  using _platoon_acc_x_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _platoon_acc_x_type platoon_acc_x;
  using _platoon_mapmatching_isvalid_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _platoon_mapmatching_isvalid_type platoon_mapmatching_isvalid;
  using _platoon_mapmatching_roadindex_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _platoon_mapmatching_roadindex_type platoon_mapmatching_roadindex;
  using _platoon_mapmatching_s_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _platoon_mapmatching_s_type platoon_mapmatching_s;
  using _platoon_velocity_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _platoon_velocity_type platoon_velocity;

  // setters for named parameter idiom
  Type & set__id(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__counter(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__platoon_acc_x(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->platoon_acc_x = _arg;
    return *this;
  }
  Type & set__platoon_mapmatching_isvalid(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->platoon_mapmatching_isvalid = _arg;
    return *this;
  }
  Type & set__platoon_mapmatching_roadindex(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->platoon_mapmatching_roadindex = _arg;
    return *this;
  }
  Type & set__platoon_mapmatching_s(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->platoon_mapmatching_s = _arg;
    return *this;
  }
  Type & set__platoon_velocity(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->platoon_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::PlatoonState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::PlatoonState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::PlatoonState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::PlatoonState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__PlatoonState
    std::shared_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__PlatoonState
    std::shared_ptr<buggy_msgs::msg::PlatoonState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlatoonState_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->platoon_acc_x != other.platoon_acc_x) {
      return false;
    }
    if (this->platoon_mapmatching_isvalid != other.platoon_mapmatching_isvalid) {
      return false;
    }
    if (this->platoon_mapmatching_roadindex != other.platoon_mapmatching_roadindex) {
      return false;
    }
    if (this->platoon_mapmatching_s != other.platoon_mapmatching_s) {
      return false;
    }
    if (this->platoon_velocity != other.platoon_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlatoonState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlatoonState_

// alias to use template instance with default allocator
using PlatoonState =
  buggy_msgs::msg::PlatoonState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__STRUCT_HPP_
