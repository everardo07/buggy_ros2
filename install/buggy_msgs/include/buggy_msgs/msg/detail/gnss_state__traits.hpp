// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/GNSSState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__TRAITS_HPP_

#include "buggy_msgs/msg/detail/gnss_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'gnss_counter_falling'
// Member 'gnss_counter_rising'
// Member 'gnss_counter_bus'
// Member 'gnss_number_satellites'
// Member 'gnss_quality'
// Member 'gnss_mode'
// Member 'gnss_counter'
#include "std_msgs/msg/detail/u_int16__traits.hpp"
// Member 'gnss_altitude'
// Member 'gnss_hdop'
// Member 'gnss_pdop'
// Member 'gnss_vdop'
#include "std_msgs/msg/detail/float32__traits.hpp"
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
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::GNSSState>()
{
  return "buggy_msgs::msg::GNSSState";
}

template<>
inline const char * name<buggy_msgs::msg::GNSSState>()
{
  return "buggy_msgs/msg/GNSSState";
}

template<>
struct has_fixed_size<buggy_msgs::msg::GNSSState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value && has_fixed_size<std_msgs::msg::Float64>::value && has_fixed_size<std_msgs::msg::UInt16>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::GNSSState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value && has_bounded_size<std_msgs::msg::Float64>::value && has_bounded_size<std_msgs::msg::UInt16>::value> {};

template<>
struct is_message<buggy_msgs::msg::GNSSState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__TRAITS_HPP_
