// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/Mapmatching.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'counter'
#include "std_msgs/msg/detail/u_int16__struct.h"
// Member 'is_lead_vehicle'
#include "std_msgs/msg/detail/u_int8__struct.h"
// Member 'mapmatching_checksum'
// Member 'mapmatching_is_valid'
// Member 'mapmatching_roadindex'
// Member 'platoon_mapmatching_s'
#include "std_msgs/msg/detail/float32__struct.h"

// Struct defined in msg/Mapmatching in the package buggy_msgs.
typedef struct buggy_msgs__msg__Mapmatching
{
  std_msgs__msg__UInt16 id;
  std_msgs__msg__UInt16 counter;
  std_msgs__msg__UInt8 is_lead_vehicle;
  std_msgs__msg__Float32 mapmatching_checksum;
  std_msgs__msg__Float32 mapmatching_is_valid;
  std_msgs__msg__Float32 mapmatching_roadindex;
  std_msgs__msg__Float32 platoon_mapmatching_s;
} buggy_msgs__msg__Mapmatching;

// Struct for a sequence of buggy_msgs__msg__Mapmatching.
typedef struct buggy_msgs__msg__Mapmatching__Sequence
{
  buggy_msgs__msg__Mapmatching * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__Mapmatching__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__STRUCT_H_
