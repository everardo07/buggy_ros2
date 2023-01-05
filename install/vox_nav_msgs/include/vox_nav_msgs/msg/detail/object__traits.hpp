// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vox_nav_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
#define VOX_NAV_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_

#include "vox_nav_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'velo_pose'
// Member 'world_pose'
// Member 'cam_pose'
#include "geometry_msgs/msg/detail/point_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::msg::Object>()
{
  return "vox_nav_msgs::msg::Object";
}

template<>
inline const char * name<vox_nav_msgs::msg::Object>()
{
  return "vox_nav_msgs/msg/Object";
}

template<>
struct has_fixed_size<vox_nav_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vox_nav_msgs::msg::Object>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vox_nav_msgs::msg::Object>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VOX_NAV_MSGS__MSG__DETAIL__OBJECT__TRAITS_HPP_
