// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vox_nav_msgs:srv/GetOctomap.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__SRV__DETAIL__GET_OCTOMAP__STRUCT_H_
#define VOX_NAV_MSGS__SRV__DETAIL__GET_OCTOMAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'bounding_box_origin'
// Member 'bounding_box_lengths'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'filename'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/GetOctomap in the package vox_nav_msgs.
typedef struct vox_nav_msgs__srv__GetOctomap_Request
{
  geometry_msgs__msg__Point bounding_box_origin;
  geometry_msgs__msg__Point bounding_box_lengths;
  double leaf_size;
  bool publish_octomap;
  rosidl_runtime_c__String filename;
} vox_nav_msgs__srv__GetOctomap_Request;

// Struct for a sequence of vox_nav_msgs__srv__GetOctomap_Request.
typedef struct vox_nav_msgs__srv__GetOctomap_Request__Sequence
{
  vox_nav_msgs__srv__GetOctomap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vox_nav_msgs__srv__GetOctomap_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'map'
#include "octomap_msgs/msg/detail/octomap__struct.h"

// Struct defined in srv/GetOctomap in the package vox_nav_msgs.
typedef struct vox_nav_msgs__srv__GetOctomap_Response
{
  octomap_msgs__msg__Octomap map;
  double origin_latitude;
  double origin_longitude;
  double origin_altitude;
} vox_nav_msgs__srv__GetOctomap_Response;

// Struct for a sequence of vox_nav_msgs__srv__GetOctomap_Response.
typedef struct vox_nav_msgs__srv__GetOctomap_Response__Sequence
{
  vox_nav_msgs__srv__GetOctomap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vox_nav_msgs__srv__GetOctomap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOX_NAV_MSGS__SRV__DETAIL__GET_OCTOMAP__STRUCT_H_
