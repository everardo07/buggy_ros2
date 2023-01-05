// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'counter'
// Member 'longitudinal_acc'
// Member 'velocity'
// Member 'yawrate'
// Member 'set_curvature'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__FzgVehicleData __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__FzgVehicleData __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FzgVehicleData_
{
  using Type = FzgVehicleData_<ContainerAllocator>;

  explicit FzgVehicleData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : counter(_init),
    longitudinal_acc(_init),
    velocity(_init),
    yawrate(_init),
    set_curvature(_init)
  {
    (void)_init;
  }

  explicit FzgVehicleData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : counter(_alloc, _init),
    longitudinal_acc(_alloc, _init),
    velocity(_alloc, _init),
    yawrate(_alloc, _init),
    set_curvature(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _counter_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _counter_type counter;
  using _longitudinal_acc_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _longitudinal_acc_type longitudinal_acc;
  using _velocity_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _velocity_type velocity;
  using _yawrate_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _yawrate_type yawrate;
  using _set_curvature_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _set_curvature_type set_curvature;

  // setters for named parameter idiom
  Type & set__counter(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__longitudinal_acc(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->longitudinal_acc = _arg;
    return *this;
  }
  Type & set__velocity(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__yawrate(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->yawrate = _arg;
    return *this;
  }
  Type & set__set_curvature(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->set_curvature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::FzgVehicleData_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::FzgVehicleData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::FzgVehicleData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::FzgVehicleData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__FzgVehicleData
    std::shared_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__FzgVehicleData
    std::shared_ptr<buggy_msgs::msg::FzgVehicleData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FzgVehicleData_ & other) const
  {
    if (this->counter != other.counter) {
      return false;
    }
    if (this->longitudinal_acc != other.longitudinal_acc) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->yawrate != other.yawrate) {
      return false;
    }
    if (this->set_curvature != other.set_curvature) {
      return false;
    }
    return true;
  }
  bool operator!=(const FzgVehicleData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FzgVehicleData_

// alias to use template instance with default allocator
using FzgVehicleData =
  buggy_msgs::msg::FzgVehicleData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__STRUCT_HPP_
