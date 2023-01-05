// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'wheels'
#include "buggy_msgs/msg/detail/wheels_state__struct.h"
// Member 'steering_wheel'
#include "buggy_msgs/msg/detail/steering_wheel_state__struct.h"
// Member 'acceleration'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/VehicleState in the package buggy_msgs.
typedef struct buggy_msgs__msg__VehicleState
{
  buggy_msgs__msg__WheelsState wheels;
  buggy_msgs__msg__SteeringWheelState steering_wheel;
  std_msgs__msg__Float64 acceleration;
} buggy_msgs__msg__VehicleState;

// Struct for a sequence of buggy_msgs__msg__VehicleState.
typedef struct buggy_msgs__msg__VehicleState__Sequence
{
  buggy_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
