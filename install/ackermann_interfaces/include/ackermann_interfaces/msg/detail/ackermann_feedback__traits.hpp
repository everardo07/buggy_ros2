// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ackermann_interfaces:msg/AckermannFeedback.idl
// generated code does not contain a copyright notice

#ifndef ACKERMANN_INTERFACES__MSG__DETAIL__ACKERMANN_FEEDBACK__TRAITS_HPP_
#define ACKERMANN_INTERFACES__MSG__DETAIL__ACKERMANN_FEEDBACK__TRAITS_HPP_

#include "ackermann_interfaces/msg/detail/ackermann_feedback__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ackermann_interfaces::msg::AckermannFeedback>()
{
  return "ackermann_interfaces::msg::AckermannFeedback";
}

template<>
inline const char * name<ackermann_interfaces::msg::AckermannFeedback>()
{
  return "ackermann_interfaces/msg/AckermannFeedback";
}

template<>
struct has_fixed_size<ackermann_interfaces::msg::AckermannFeedback>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ackermann_interfaces::msg::AckermannFeedback>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ackermann_interfaces::msg::AckermannFeedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ACKERMANN_INTERFACES__MSG__DETAIL__ACKERMANN_FEEDBACK__TRAITS_HPP_
