// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/CurrentCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_percentage'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/CurrentCMD in the package buggy_msgs.
typedef struct buggy_msgs__msg__CurrentCMD
{
  std_msgs__msg__Float64 current_percentage;
} buggy_msgs__msg__CurrentCMD;

// Struct for a sequence of buggy_msgs__msg__CurrentCMD.
typedef struct buggy_msgs__msg__CurrentCMD__Sequence
{
  buggy_msgs__msg__CurrentCMD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__CurrentCMD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD__STRUCT_H_
