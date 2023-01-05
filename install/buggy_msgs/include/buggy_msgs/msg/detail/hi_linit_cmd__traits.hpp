// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__TRAITS_HPP_

#include "buggy_msgs/msg/detail/hi_linit_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'counter'
#include "std_msgs/msg/detail/u_int8__traits.hpp"
// Member 'lon_mm'
// Member 'lat_mm'
// Member 'angle'
#include "std_msgs/msg/detail/int16__traits.hpp"
// Member 'lon_mm_frac'
// Member 'lat_mm_frac'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::HILinitCMD>()
{
  return "buggy_msgs::msg::HILinitCMD";
}

template<>
inline const char * name<buggy_msgs::msg::HILinitCMD>()
{
  return "buggy_msgs/msg/HILinitCMD";
}

template<>
struct has_fixed_size<buggy_msgs::msg::HILinitCMD>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value && has_fixed_size<std_msgs::msg::Int16>::value && has_fixed_size<std_msgs::msg::UInt8>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::HILinitCMD>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value && has_bounded_size<std_msgs::msg::Int16>::value && has_bounded_size<std_msgs::msg::UInt8>::value> {};

template<>
struct is_message<buggy_msgs::msg::HILinitCMD>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__TRAITS_HPP_
