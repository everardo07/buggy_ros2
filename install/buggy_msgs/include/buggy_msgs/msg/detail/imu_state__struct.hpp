// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/IMUState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__IMU_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__IMU_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'imu_gz'
// Member 'imu_ax'
// Member 'imu_ay'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__IMUState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__IMUState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUState_
{
  using Type = IMUState_<ContainerAllocator>;

  explicit IMUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_gz(_init),
    imu_ax(_init),
    imu_ay(_init)
  {
    (void)_init;
  }

  explicit IMUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : imu_gz(_alloc, _init),
    imu_ax(_alloc, _init),
    imu_ay(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _imu_gz_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _imu_gz_type imu_gz;
  using _imu_ax_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _imu_ax_type imu_ax;
  using _imu_ay_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _imu_ay_type imu_ay;

  // setters for named parameter idiom
  Type & set__imu_gz(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->imu_gz = _arg;
    return *this;
  }
  Type & set__imu_ax(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->imu_ax = _arg;
    return *this;
  }
  Type & set__imu_ay(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->imu_ay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::IMUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::IMUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::IMUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::IMUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__IMUState
    std::shared_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__IMUState
    std::shared_ptr<buggy_msgs::msg::IMUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUState_ & other) const
  {
    if (this->imu_gz != other.imu_gz) {
      return false;
    }
    if (this->imu_ax != other.imu_ax) {
      return false;
    }
    if (this->imu_ay != other.imu_ay) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUState_

// alias to use template instance with default allocator
using IMUState =
  buggy_msgs::msg::IMUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__IMU_STATE__STRUCT_HPP_
