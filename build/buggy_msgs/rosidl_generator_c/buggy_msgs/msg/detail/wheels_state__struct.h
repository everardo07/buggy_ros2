// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/WheelsState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'rf_speed'
// Member 'lf_speed'
// Member 'rr_speed'
// Member 'lr_speed'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/WheelsState in the package buggy_msgs.
typedef struct buggy_msgs__msg__WheelsState
{
  std_msgs__msg__Float64 rf_speed;
  std_msgs__msg__Float64 lf_speed;
  std_msgs__msg__Float64 rr_speed;
  std_msgs__msg__Float64 lr_speed;
} buggy_msgs__msg__WheelsState;

// Struct for a sequence of buggy_msgs__msg__WheelsState.
typedef struct buggy_msgs__msg__WheelsState__Sequence
{
  buggy_msgs__msg__WheelsState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__WheelsState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__STRUCT_H_
