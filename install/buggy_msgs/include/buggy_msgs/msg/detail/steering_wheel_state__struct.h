// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steering_wheel_angle'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/SteeringWheelState in the package buggy_msgs.
typedef struct buggy_msgs__msg__SteeringWheelState
{
  std_msgs__msg__Float64 steering_wheel_angle;
} buggy_msgs__msg__SteeringWheelState;

// Struct for a sequence of buggy_msgs__msg__SteeringWheelState.
typedef struct buggy_msgs__msg__SteeringWheelState__Sequence
{
  buggy_msgs__msg__SteeringWheelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__SteeringWheelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__STRUCT_H_
