// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vox_nav_msgs:msg/OrientedNavSatFix.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__MSG__DETAIL__ORIENTED_NAV_SAT_FIX__TRAITS_HPP_
#define VOX_NAV_MSGS__MSG__DETAIL__ORIENTED_NAV_SAT_FIX__TRAITS_HPP_

#include "vox_nav_msgs/msg/detail/oriented_nav_sat_fix__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'position'
#include "sensor_msgs/msg/detail/nav_sat_fix__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::msg::OrientedNavSatFix>()
{
  return "vox_nav_msgs::msg::OrientedNavSatFix";
}

template<>
inline const char * name<vox_nav_msgs::msg::OrientedNavSatFix>()
{
  return "vox_nav_msgs/msg/OrientedNavSatFix";
}

template<>
struct has_fixed_size<vox_nav_msgs::msg::OrientedNavSatFix>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::msg::OrientedNavSatFix>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<sensor_msgs::msg::NavSatFix>::value> {};

template<>
struct is_message<vox_nav_msgs::msg::OrientedNavSatFix>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOX_NAV_MSGS__MSG__DETAIL__ORIENTED_NAV_SAT_FIX__TRAITS_HPP_
