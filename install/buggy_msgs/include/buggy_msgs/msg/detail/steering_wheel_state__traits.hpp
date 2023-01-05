// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__TRAITS_HPP_

#include "buggy_msgs/msg/detail/steering_wheel_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'steering_wheel_angle'
#include "std_msgs/msg/detail/float64__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::SteeringWheelState>()
{
  return "buggy_msgs::msg::SteeringWheelState";
}

template<>
inline const char * name<buggy_msgs::msg::SteeringWheelState>()
{
  return "buggy_msgs/msg/SteeringWheelState";
}

template<>
struct has_fixed_size<buggy_msgs::msg::SteeringWheelState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float64>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::SteeringWheelState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float64>::value> {};

template<>
struct is_message<buggy_msgs::msg::SteeringWheelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__TRAITS_HPP_
