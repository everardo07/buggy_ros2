// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'counter'
#include "std_msgs/msg/detail/u_int8__struct.hpp"
// Member 'lon_mm'
// Member 'lat_mm'
// Member 'angle'
#include "std_msgs/msg/detail/int16__struct.hpp"
// Member 'lon_mm_frac'
// Member 'lat_mm_frac'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__HILinitCMD __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__HILinitCMD __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HILinitCMD_
{
  using Type = HILinitCMD_<ContainerAllocator>;

  explicit HILinitCMD_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : counter(_init),
    lon_mm(_init),
    lon_mm_frac(_init),
    lat_mm(_init),
    lat_mm_frac(_init),
    angle(_init)
  {
    (void)_init;
  }

  explicit HILinitCMD_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : counter(_alloc, _init),
    lon_mm(_alloc, _init),
    lon_mm_frac(_alloc, _init),
    lat_mm(_alloc, _init),
    lat_mm_frac(_alloc, _init),
    angle(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _counter_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _counter_type counter;
  using _lon_mm_type =
    std_msgs::msg::Int16_<ContainerAllocator>;
  _lon_mm_type lon_mm;
  using _lon_mm_frac_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _lon_mm_frac_type lon_mm_frac;
  using _lat_mm_type =
    std_msgs::msg::Int16_<ContainerAllocator>;
  _lat_mm_type lat_mm;
  using _lat_mm_frac_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _lat_mm_frac_type lat_mm_frac;
  using _angle_type =
    std_msgs::msg::Int16_<ContainerAllocator>;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__counter(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__lon_mm(
    const std_msgs::msg::Int16_<ContainerAllocator> & _arg)
  {
    this->lon_mm = _arg;
    return *this;
  }
  Type & set__lon_mm_frac(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->lon_mm_frac = _arg;
    return *this;
  }
  Type & set__lat_mm(
    const std_msgs::msg::Int16_<ContainerAllocator> & _arg)
  {
    this->lat_mm = _arg;
    return *this;
  }
  Type & set__lat_mm_frac(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->lat_mm_frac = _arg;
    return *this;
  }
  Type & set__angle(
    const std_msgs::msg::Int16_<ContainerAllocator> & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::HILinitCMD_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::HILinitCMD_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::HILinitCMD_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::HILinitCMD_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__HILinitCMD
    std::shared_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__HILinitCMD
    std::shared_ptr<buggy_msgs::msg::HILinitCMD_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HILinitCMD_ & other) const
  {
    if (this->counter != other.counter) {
      return false;
    }
    if (this->lon_mm != other.lon_mm) {
      return false;
    }
    if (this->lon_mm_frac != other.lon_mm_frac) {
      return false;
    }
    if (this->lat_mm != other.lat_mm) {
      return false;
    }
    if (this->lat_mm_frac != other.lat_mm_frac) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const HILinitCMD_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HILinitCMD_

// alias to use template instance with default allocator
using HILinitCMD =
  buggy_msgs::msg::HILinitCMD_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__STRUCT_HPP_
