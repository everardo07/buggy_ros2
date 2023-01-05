// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__TRAITS_HPP_

#include "buggy_msgs/msg/detail/fzg_vehicle_data__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'counter'
// Member 'longitudinal_acc'
// Member 'velocity'
// Member 'yawrate'
// Member 'set_curvature'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::FzgVehicleData>()
{
  return "buggy_msgs::msg::FzgVehicleData";
}

template<>
inline const char * name<buggy_msgs::msg::FzgVehicleData>()
{
  return "buggy_msgs/msg/FzgVehicleData";
}

template<>
struct has_fixed_size<buggy_msgs::msg::FzgVehicleData>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::FzgVehicleData>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value> {};

template<>
struct is_message<buggy_msgs::msg::FzgVehicleData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__TRAITS_HPP_
