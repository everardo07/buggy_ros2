// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__TRAITS_HPP_

#include "buggy_msgs/msg/detail/platoon_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'id'
// Member 'counter'
#include "std_msgs/msg/detail/u_int16__traits.hpp"
// Member 'platoon_acc_x'
// Member 'platoon_mapmatching_isvalid'
// Member 'platoon_mapmatching_roadindex'
// Member 'platoon_mapmatching_s'
// Member 'platoon_velocity'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::PlatoonState>()
{
  return "buggy_msgs::msg::PlatoonState";
}

template<>
inline const char * name<buggy_msgs::msg::PlatoonState>()
{
  return "buggy_msgs/msg/PlatoonState";
}

template<>
struct has_fixed_size<buggy_msgs::msg::PlatoonState>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value && has_fixed_size<std_msgs::msg::UInt16>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::PlatoonState>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value && has_bounded_size<std_msgs::msg::UInt16>::value> {};

template<>
struct is_message<buggy_msgs::msg::PlatoonState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__TRAITS_HPP_
