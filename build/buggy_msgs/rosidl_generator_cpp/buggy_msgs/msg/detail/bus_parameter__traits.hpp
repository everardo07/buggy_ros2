// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__TRAITS_HPP_
#define BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__TRAITS_HPP_

#include "buggy_msgs/msg/detail/bus_parameter__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'params1_wheelcircumference_mm'
// Member 'params1_param_simplenav_reset'
// Member 'params1_param_obeyspeedlimit'
// Member 'params1_param_rv_a_demand'
// Member 'params1_v2vid'
// Member 'params1_param_track_a_max'
// Member 'params1_param_nav_triggermsg'
// Member 'params1_param_nav_gnssdelay'
// Member 'params1_param_stromgrenze'
// Member 'params1_param_drehzahlgrenze'
// Member 'params2_param_acc_inverseacc'
// Member 'params2_param_acc_timegap'
// Member 'params2_param_acc_gain'
// Member 'params2_param_acc_distance'
// Member 'params2_param_acc_activationdist'
// Member 'params2_param_menuparam4'
// Member 'params2_param_menuparam3'
// Member 'params2_param_menuparam2'
// Member 'params2_param_menuparam1'
#include "std_msgs/msg/detail/float32__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<buggy_msgs::msg::BUSParameter>()
{
  return "buggy_msgs::msg::BUSParameter";
}

template<>
inline const char * name<buggy_msgs::msg::BUSParameter>()
{
  return "buggy_msgs/msg/BUSParameter";
}

template<>
struct has_fixed_size<buggy_msgs::msg::BUSParameter>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value> {};

template<>
struct has_bounded_size<buggy_msgs::msg::BUSParameter>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value> {};

template<>
struct is_message<buggy_msgs::msg::BUSParameter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__TRAITS_HPP_
