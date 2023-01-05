// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/SteeringWheelStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE_STAMPED__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'steering_wheel_state'
#include "buggy_msgs/msg/detail/steering_wheel_state__struct.h"

// Struct defined in msg/SteeringWheelStateStamped in the package buggy_msgs.
typedef struct buggy_msgs__msg__SteeringWheelStateStamped
{
  std_msgs__msg__Header header;
  buggy_msgs__msg__SteeringWheelState steering_wheel_state;
} buggy_msgs__msg__SteeringWheelStateStamped;

// Struct for a sequence of buggy_msgs__msg__SteeringWheelStateStamped.
typedef struct buggy_msgs__msg__SteeringWheelStateStamped__Sequence
{
  buggy_msgs__msg__SteeringWheelStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__SteeringWheelStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE_STAMPED__STRUCT_H_
