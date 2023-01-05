// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/SteeringCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steering_angle'
// Member 'steering_angle_velocity'
// Member 'steering_torque'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/SteeringCMD in the package buggy_msgs.
typedef struct buggy_msgs__msg__SteeringCMD
{
  std_msgs__msg__Float64 steering_angle;
  std_msgs__msg__Float64 steering_angle_velocity;
  std_msgs__msg__Float64 steering_torque;
} buggy_msgs__msg__SteeringCMD;

// Struct for a sequence of buggy_msgs__msg__SteeringCMD.
typedef struct buggy_msgs__msg__SteeringCMD__Sequence
{
  buggy_msgs__msg__SteeringCMD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__SteeringCMD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__STRUCT_H_
