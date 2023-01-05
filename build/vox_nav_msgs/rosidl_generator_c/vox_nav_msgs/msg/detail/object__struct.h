// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from vox_nav_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
#define VOX_NAV_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'velo_pose'
// Member 'world_pose'
// Member 'cam_pose'
#include "geometry_msgs/msg/detail/point_stamped__struct.h"
// Member 'semantic_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/Object in the package vox_nav_msgs.
typedef struct vox_nav_msgs__msg__Object
{
  int32_t id;
  geometry_msgs__msg__PointStamped velo_pose;
  geometry_msgs__msg__PointStamped world_pose;
  geometry_msgs__msg__PointStamped cam_pose;
  float heading;
  float velocity;
  float width;
  float length;
  float height;
  float orientation;
  float semantic_confidence;
  rosidl_runtime_c__String semantic_name;
  uint32_t semantic_id;
  uint32_t r;
  uint32_t g;
  uint32_t b;
  float a;
  bool is_new_track;
  bool is_dynamic;
} vox_nav_msgs__msg__Object;

// Struct for a sequence of vox_nav_msgs__msg__Object.
typedef struct vox_nav_msgs__msg__Object__Sequence
{
  vox_nav_msgs__msg__Object * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} vox_nav_msgs__msg__Object__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOX_NAV_MSGS__MSG__DETAIL__OBJECT__STRUCT_H_
