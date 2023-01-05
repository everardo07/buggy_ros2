// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vox_nav_msgs:srv/GetMapsAndSurfels.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__SRV__DETAIL__GET_MAPS_AND_SURFELS__TRAITS_HPP_
#define VOX_NAV_MSGS__SRV__DETAIL__GET_MAPS_AND_SURFELS__TRAITS_HPP_

#include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::srv::GetMapsAndSurfels_Request>()
{
  return "vox_nav_msgs::srv::GetMapsAndSurfels_Request";
}

template<>
inline const char * name<vox_nav_msgs::srv::GetMapsAndSurfels_Request>()
{
  return "vox_nav_msgs/srv/GetMapsAndSurfels_Request";
}

template<>
struct has_fixed_size<vox_nav_msgs::srv::GetMapsAndSurfels_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vox_nav_msgs::srv::GetMapsAndSurfels_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vox_nav_msgs::srv::GetMapsAndSurfels_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'original_octomap'
// Member 'elevated_surfel_octomap'
#include "octomap_msgs/msg/detail/octomap__traits.hpp"
// Member 'elevated_surfel_poses'
#include "geometry_msgs/msg/detail/pose_array__traits.hpp"
// Member 'traversable_elevated_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::srv::GetMapsAndSurfels_Response>()
{
  return "vox_nav_msgs::srv::GetMapsAndSurfels_Response";
}

template<>
inline const char * name<vox_nav_msgs::srv::GetMapsAndSurfels_Response>()
{
  return "vox_nav_msgs/srv/GetMapsAndSurfels_Response";
}

template<>
struct has_fixed_size<vox_nav_msgs::srv::GetMapsAndSurfels_Response>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseArray>::value && has_fixed_size<octomap_msgs::msg::Octomap>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::srv::GetMapsAndSurfels_Response>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseArray>::value && has_bounded_size<octomap_msgs::msg::Octomap>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<vox_nav_msgs::srv::GetMapsAndSurfels_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::srv::GetMapsAndSurfels>()
{
  return "vox_nav_msgs::srv::GetMapsAndSurfels";
}

template<>
inline const char * name<vox_nav_msgs::srv::GetMapsAndSurfels>()
{
  return "vox_nav_msgs/srv/GetMapsAndSurfels";
}

template<>
struct has_fixed_size<vox_nav_msgs::srv::GetMapsAndSurfels>
  : std::integral_constant<
    bool,
    has_fixed_size<vox_nav_msgs::srv::GetMapsAndSurfels_Request>::value &&
    has_fixed_size<vox_nav_msgs::srv::GetMapsAndSurfels_Response>::value
  >
{
};

template<>
struct has_bounded_size<vox_nav_msgs::srv::GetMapsAndSurfels>
  : std::integral_constant<
    bool,
    has_bounded_size<vox_nav_msgs::srv::GetMapsAndSurfels_Request>::value &&
    has_bounded_size<vox_nav_msgs::srv::GetMapsAndSurfels_Response>::value
  >
{
};

template<>
struct is_service<vox_nav_msgs::srv::GetMapsAndSurfels>
  : std::true_type
{
};

template<>
struct is_service_request<vox_nav_msgs::srv::GetMapsAndSurfels_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vox_nav_msgs::srv::GetMapsAndSurfels_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VOX_NAV_MSGS__SRV__DETAIL__GET_MAPS_AND_SURFELS__TRAITS_HPP_
