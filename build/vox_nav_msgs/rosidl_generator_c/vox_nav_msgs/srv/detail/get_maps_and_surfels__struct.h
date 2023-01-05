// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vox_nav_msgs:srv/GetMapsAndSurfels.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__SRV__DETAIL__GET_MAPS_AND_SURFELS__STRUCT_H_
#define VOX_NAV_MSGS__SRV__DETAIL__GET_MAPS_AND_SURFELS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetMapsAndSurfels in the package vox_nav_msgs.
typedef struct vox_nav_msgs__srv__GetMapsAndSurfels_Request
{
  uint8_t structure_needs_at_least_one_member;
} vox_nav_msgs__srv__GetMapsAndSurfels_Request;

// Struct for a sequence of vox_nav_msgs__srv__GetMapsAndSurfels_Request.
typedef struct vox_nav_msgs__srv__GetMapsAndSurfels_Request__Sequence
{
  vox_nav_msgs__srv__GetMapsAndSurfels_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vox_nav_msgs__srv__GetMapsAndSurfels_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'original_octomap'
// Member 'elevated_surfel_octomap'
#include "octomap_msgs/msg/detail/octomap__struct.h"
// Member 'elevated_surfel_poses'
#include "geometry_msgs/msg/detail/pose_array__struct.h"
// Member 'traversable_elevated_cloud'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in srv/GetMapsAndSurfels in the package vox_nav_msgs.
typedef struct vox_nav_msgs__srv__GetMapsAndSurfels_Response
{
  octomap_msgs__msg__Octomap original_octomap;
  octomap_msgs__msg__Octomap elevated_surfel_octomap;
  geometry_msgs__msg__PoseArray elevated_surfel_poses;
  sensor_msgs__msg__PointCloud2 traversable_elevated_cloud;
  bool is_valid;
} vox_nav_msgs__srv__GetMapsAndSurfels_Response;

// Struct for a sequence of vox_nav_msgs__srv__GetMapsAndSurfels_Response.
typedef struct vox_nav_msgs__srv__GetMapsAndSurfels_Response__Sequence
{
  vox_nav_msgs__srv__GetMapsAndSurfels_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vox_nav_msgs__srv__GetMapsAndSurfels_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOX_NAV_MSGS__SRV__DETAIL__GET_MAPS_AND_SURFELS__STRUCT_H_
