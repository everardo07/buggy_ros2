// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/WheelsState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__TRAITS_HPP_

#include "buggy_msgs/msg/detail/wheels_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'rf_speed'
// Member 'lf_speed'
// Member 'rr_speed'
// Member 'lr_speed'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::WheelsState>()
{
  return "buggy_msgs::msg::WheelsState";
}

template<>
inline const char * name<buggy_msgs::msg::WheelsState>()
{
  return "buggy_msgs/msg/WheelsState";
}

template<>
struct has_fixed_size<buggy_msgs::msg::WheelsState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::WheelsState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<buggy_msgs::msg::WheelsState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__TRAITS_HPP_
