// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/DriveStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE_STAMPED__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE_STAMPED__TRAITS_HPP_

#include "buggy_msgs/msg/detail/drive_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'drive_state'
#include "buggy_msgs/msg/detail/drive_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::DriveStateStamped>()
{
  return "buggy_msgs::msg::DriveStateStamped";
}

template<>
inline const char * name<buggy_msgs::msg::DriveStateStamped>()
{
  return "buggy_msgs/msg/DriveStateStamped";
}

template<>
struct has_fixed_size<buggy_msgs::msg::DriveStateStamped>
  : std::integral_constant<bool, has_fixed_size<buggy_msgs::msg::DriveState>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::DriveStateStamped>
  : std::integral_constant<bool, has_bounded_size<buggy_msgs::msg::DriveState>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<buggy_msgs::msg::DriveStateStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE_STAMPED__TRAITS_HPP_
