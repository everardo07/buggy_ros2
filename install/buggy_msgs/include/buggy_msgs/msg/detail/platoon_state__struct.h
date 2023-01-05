// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__STRUCT_H_

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
// Member 'platoon_acc_x'
// Member 'platoon_mapmatching_isvalid'
// Member 'platoon_mapmatching_roadindex'
// Member 'platoon_mapmatching_s'
// Member 'platoon_velocity'
#include "std_msgs/msg/detail/float32__struct.h"

// Struct defined in msg/PlatoonState in the package buggy_msgs.
typedef struct buggy_msgs__msg__PlatoonState
{
  std_msgs__msg__UInt16 id;
  std_msgs__msg__UInt16 counter;
  std_msgs__msg__Float32 platoon_acc_x;
  std_msgs__msg__Float32 platoon_mapmatching_isvalid;
  std_msgs__msg__Float32 platoon_mapmatching_roadindex;
  std_msgs__msg__Float32 platoon_mapmatching_s;
  std_msgs__msg__Float32 platoon_velocity;
} buggy_msgs__msg__PlatoonState;

// Struct for a sequence of buggy_msgs__msg__PlatoonState.
typedef struct buggy_msgs__msg__PlatoonState__Sequence
{
  buggy_msgs__msg__PlatoonState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__PlatoonState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__STRUCT_H_
