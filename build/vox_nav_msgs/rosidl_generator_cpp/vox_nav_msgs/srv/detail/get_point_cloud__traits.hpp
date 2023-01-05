// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vox_nav_msgs:srv/GetPointCloud.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__SRV__DETAIL__GET_POINT_CLOUD__TRAITS_HPP_
#define VOX_NAV_MSGS__SRV__DETAIL__GET_POINT_CLOUD__TRAITS_HPP_

#include "vox_nav_msgs/srv/detail/get_point_cloud__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'bounding_box_origin'
// Member 'bounding_box_lengths'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::srv::GetPointCloud_Request>()
{
  return "vox_nav_msgs::srv::GetPointCloud_Request";
}

template<>
inline const char * name<vox_nav_msgs::srv::GetPointCloud_Request>()
{
  return "vox_nav_msgs/srv/GetPointCloud_Request";
}

template<>
struct has_fixed_size<vox_nav_msgs::srv::GetPointCloud_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vox_nav_msgs::srv::GetPointCloud_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vox_nav_msgs::srv::GetPointCloud_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::srv::GetPointCloud_Response>()
{
  return "vox_nav_msgs::srv::GetPointCloud_Response";
}

template<>
inline const char * name<vox_nav_msgs::srv::GetPointCloud_Response>()
{
  return "vox_nav_msgs/srv/GetPointCloud_Response";
}

template<>
struct has_fixed_size<vox_nav_msgs::srv::GetPointCloud_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::srv::GetPointCloud_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<vox_nav_msgs::srv::GetPointCloud_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::srv::GetPointCloud>()
{
  return "vox_nav_msgs::srv::GetPointCloud";
}

template<>
inline const char * name<vox_nav_msgs::srv::GetPointCloud>()
{
  return "vox_nav_msgs/srv/GetPointCloud";
}

template<>
struct has_fixed_size<vox_nav_msgs::srv::GetPointCloud>
  : std::integral_constant<
    bool,
    has_fixed_size<vox_nav_msgs::srv::GetPointCloud_Request>::value &&
    has_fixed_size<vox_nav_msgs::srv::GetPointCloud_Response>::value
  >
{
};

template<>
struct has_bounded_size<vox_nav_msgs::srv::GetPointCloud>
  : std::integral_constant<
    bool,
    has_bounded_size<vox_nav_msgs::srv::GetPointCloud_Request>::value &&
    has_bounded_size<vox_nav_msgs::srv::GetPointCloud_Response>::value
  >
{
};

template<>
struct is_service<vox_nav_msgs::srv::GetPointCloud>
  : std::true_type
{
};

template<>
struct is_service_request<vox_nav_msgs::srv::GetPointCloud_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vox_nav_msgs::srv::GetPointCloud_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VOX_NAV_MSGS__SRV__DETAIL__GET_POINT_CLOUD__TRAITS_HPP_
