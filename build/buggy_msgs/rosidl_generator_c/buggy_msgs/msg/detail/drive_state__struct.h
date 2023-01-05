// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/DriveState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'r_current'
// Member 'l_current'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/DriveState in the package buggy_msgs.
typedef struct buggy_msgs__msg__DriveState
{
  std_msgs__msg__Float64 r_current;
  std_msgs__msg__Float64 l_current;
} buggy_msgs__msg__DriveState;

// Struct for a sequence of buggy_msgs__msg__DriveState.
typedef struct buggy_msgs__msg__DriveState__Sequence
{
  buggy_msgs__msg__DriveState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__DriveState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__STRUCT_H_
