// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/GNSSState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'gnss_counter_falling'
// Member 'gnss_counter_rising'
// Member 'gnss_counter_bus'
// Member 'gnss_number_satellites'
// Member 'gnss_quality'
// Member 'gnss_mode'
// Member 'gnss_counter'
#include "std_msgs/msg/detail/u_int16__struct.hpp"
// Member 'gnss_altitude'
// Member 'gnss_hdop'
// Member 'gnss_pdop'
// Member 'gnss_vdop'
#include "std_msgs/msg/detail/float32__struct.hpp"
// Member 'gnss_counter_rmc1'
// Member 'gnss_lon_mm'
// Member 'gnss_lon_mm_frac'
// Member 'gnss_counter_rmc2'
// Member 'gnss_lat_mm'
// Member 'gnss_lat_mm_frac'
// Member 'gnss_angle'
// Member 'gnss_angle_valid'
// Member 'gnss_counter_rmc3'
// Member 'gnss_quality_rmc3'
// Member 'gnss_speed'
// Member 'gnss_time'
#include "std_msgs/msg/detail/float64__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__GNSSState __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__GNSSState __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSState_
{
  using Type = GNSSState_<ContainerAllocator>;

  explicit GNSSState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gnss_counter_falling(_init),
    gnss_counter_rising(_init),
    gnss_counter_bus(_init),
    gnss_altitude(_init),
    gnss_number_satellites(_init),
    gnss_quality(_init),
    gnss_hdop(_init),
    gnss_mode(_init),
    gnss_counter(_init),
    gnss_pdop(_init),
    gnss_vdop(_init),
    gnss_counter_rmc1(_init),
    gnss_lon_mm(_init),
    gnss_lon_mm_frac(_init),
    gnss_counter_rmc2(_init),
    gnss_lat_mm(_init),
    gnss_lat_mm_frac(_init),
    gnss_angle(_init),
    gnss_angle_valid(_init),
    gnss_counter_rmc3(_init),
    gnss_quality_rmc3(_init),
    gnss_speed(_init),
    gnss_time(_init)
  {
    (void)_init;
  }

  explicit GNSSState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gnss_counter_falling(_alloc, _init),
    gnss_counter_rising(_alloc, _init),
    gnss_counter_bus(_alloc, _init),
    gnss_altitude(_alloc, _init),
    gnss_number_satellites(_alloc, _init),
    gnss_quality(_alloc, _init),
    gnss_hdop(_alloc, _init),
    gnss_mode(_alloc, _init),
    gnss_counter(_alloc, _init),
    gnss_pdop(_alloc, _init),
    gnss_vdop(_alloc, _init),
    gnss_counter_rmc1(_alloc, _init),
    gnss_lon_mm(_alloc, _init),
    gnss_lon_mm_frac(_alloc, _init),
    gnss_counter_rmc2(_alloc, _init),
    gnss_lat_mm(_alloc, _init),
    gnss_lat_mm_frac(_alloc, _init),
    gnss_angle(_alloc, _init),
    gnss_angle_valid(_alloc, _init),
    gnss_counter_rmc3(_alloc, _init),
    gnss_quality_rmc3(_alloc, _init),
    gnss_speed(_alloc, _init),
    gnss_time(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _gnss_counter_falling_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_counter_falling_type gnss_counter_falling;
  using _gnss_counter_rising_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_counter_rising_type gnss_counter_rising;
  using _gnss_counter_bus_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_counter_bus_type gnss_counter_bus;
  using _gnss_altitude_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _gnss_altitude_type gnss_altitude;
  using _gnss_number_satellites_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_number_satellites_type gnss_number_satellites;
  using _gnss_quality_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_quality_type gnss_quality;
  using _gnss_hdop_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _gnss_hdop_type gnss_hdop;
  using _gnss_mode_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_mode_type gnss_mode;
  using _gnss_counter_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _gnss_counter_type gnss_counter;
  using _gnss_pdop_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _gnss_pdop_type gnss_pdop;
  using _gnss_vdop_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _gnss_vdop_type gnss_vdop;
  using _gnss_counter_rmc1_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_counter_rmc1_type gnss_counter_rmc1;
  using _gnss_lon_mm_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_lon_mm_type gnss_lon_mm;
  using _gnss_lon_mm_frac_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_lon_mm_frac_type gnss_lon_mm_frac;
  using _gnss_counter_rmc2_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_counter_rmc2_type gnss_counter_rmc2;
  using _gnss_lat_mm_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_lat_mm_type gnss_lat_mm;
  using _gnss_lat_mm_frac_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_lat_mm_frac_type gnss_lat_mm_frac;
  using _gnss_angle_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_angle_type gnss_angle;
  using _gnss_angle_valid_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_angle_valid_type gnss_angle_valid;
  using _gnss_counter_rmc3_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_counter_rmc3_type gnss_counter_rmc3;
  using _gnss_quality_rmc3_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_quality_rmc3_type gnss_quality_rmc3;
  using _gnss_speed_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_speed_type gnss_speed;
  using _gnss_time_type =
    std_msgs::msg::Float64_<ContainerAllocator>;
  _gnss_time_type gnss_time;

  // setters for named parameter idiom
  Type & set__gnss_counter_falling(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_counter_falling = _arg;
    return *this;
  }
  Type & set__gnss_counter_rising(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_counter_rising = _arg;
    return *this;
  }
  Type & set__gnss_counter_bus(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_counter_bus = _arg;
    return *this;
  }
  Type & set__gnss_altitude(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->gnss_altitude = _arg;
    return *this;
  }
  Type & set__gnss_number_satellites(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_number_satellites = _arg;
    return *this;
  }
  Type & set__gnss_quality(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_quality = _arg;
    return *this;
  }
  Type & set__gnss_hdop(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->gnss_hdop = _arg;
    return *this;
  }
  Type & set__gnss_mode(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_mode = _arg;
    return *this;
  }
  Type & set__gnss_counter(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->gnss_counter = _arg;
    return *this;
  }
  Type & set__gnss_pdop(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->gnss_pdop = _arg;
    return *this;
  }
  Type & set__gnss_vdop(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->gnss_vdop = _arg;
    return *this;
  }
  Type & set__gnss_counter_rmc1(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_counter_rmc1 = _arg;
    return *this;
  }
  Type & set__gnss_lon_mm(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_lon_mm = _arg;
    return *this;
  }
  Type & set__gnss_lon_mm_frac(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_lon_mm_frac = _arg;
    return *this;
  }
  Type & set__gnss_counter_rmc2(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_counter_rmc2 = _arg;
    return *this;
  }
  Type & set__gnss_lat_mm(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_lat_mm = _arg;
    return *this;
  }
  Type & set__gnss_lat_mm_frac(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_lat_mm_frac = _arg;
    return *this;
  }
  Type & set__gnss_angle(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_angle = _arg;
    return *this;
  }
  Type & set__gnss_angle_valid(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_angle_valid = _arg;
    return *this;
  }
  Type & set__gnss_counter_rmc3(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_counter_rmc3 = _arg;
    return *this;
  }
  Type & set__gnss_quality_rmc3(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_quality_rmc3 = _arg;
    return *this;
  }
  Type & set__gnss_speed(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_speed = _arg;
    return *this;
  }
  Type & set__gnss_time(
    const std_msgs::msg::Float64_<ContainerAllocator> & _arg)
  {
    this->gnss_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::GNSSState_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::GNSSState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::GNSSState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::GNSSState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__GNSSState
    std::shared_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__GNSSState
    std::shared_ptr<buggy_msgs::msg::GNSSState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSState_ & other) const
  {
    if (this->gnss_counter_falling != other.gnss_counter_falling) {
      return false;
    }
    if (this->gnss_counter_rising != other.gnss_counter_rising) {
      return false;
    }
    if (this->gnss_counter_bus != other.gnss_counter_bus) {
      return false;
    }
    if (this->gnss_altitude != other.gnss_altitude) {
      return false;
    }
    if (this->gnss_number_satellites != other.gnss_number_satellites) {
      return false;
    }
    if (this->gnss_quality != other.gnss_quality) {
      return false;
    }
    if (this->gnss_hdop != other.gnss_hdop) {
      return false;
    }
    if (this->gnss_mode != other.gnss_mode) {
      return false;
    }
    if (this->gnss_counter != other.gnss_counter) {
      return false;
    }
    if (this->gnss_pdop != other.gnss_pdop) {
      return false;
    }
    if (this->gnss_vdop != other.gnss_vdop) {
      return false;
    }
    if (this->gnss_counter_rmc1 != other.gnss_counter_rmc1) {
      return false;
    }
    if (this->gnss_lon_mm != other.gnss_lon_mm) {
      return false;
    }
    if (this->gnss_lon_mm_frac != other.gnss_lon_mm_frac) {
      return false;
    }
    if (this->gnss_counter_rmc2 != other.gnss_counter_rmc2) {
      return false;
    }
    if (this->gnss_lat_mm != other.gnss_lat_mm) {
      return false;
    }
    if (this->gnss_lat_mm_frac != other.gnss_lat_mm_frac) {
      return false;
    }
    if (this->gnss_angle != other.gnss_angle) {
      return false;
    }
    if (this->gnss_angle_valid != other.gnss_angle_valid) {
      return false;
    }
    if (this->gnss_counter_rmc3 != other.gnss_counter_rmc3) {
      return false;
    }
    if (this->gnss_quality_rmc3 != other.gnss_quality_rmc3) {
      return false;
    }
    if (this->gnss_speed != other.gnss_speed) {
      return false;
    }
    if (this->gnss_time != other.gnss_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSState_

// alias to use template instance with default allocator
using GNSSState =
  buggy_msgs::msg::GNSSState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__STRUCT_HPP_
