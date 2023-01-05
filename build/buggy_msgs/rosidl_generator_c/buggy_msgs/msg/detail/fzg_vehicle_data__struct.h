// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'counter'
// Member 'longitudinal_acc'
// Member 'velocity'
// Member 'yawrate'
// Member 'set_curvature'
#include "std_msgs/msg/detail/float32__struct.h"

// Struct defined in msg/FzgVehicleData in the package buggy_msgs.
typedef struct buggy_msgs__msg__FzgVehicleData
{
  std_msgs__msg__Float32 counter;
  std_msgs__msg__Float32 longitudinal_acc;
  std_msgs__msg__Float32 velocity;
  std_msgs__msg__Float32 yawrate;
  std_msgs__msg__Float32 set_curvature;
} buggy_msgs__msg__FzgVehicleData;

// Struct for a sequence of buggy_msgs__msg__FzgVehicleData.
typedef struct buggy_msgs__msg__FzgVehicleData__Sequence
{
  buggy_msgs__msg__FzgVehicleData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__FzgVehicleData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__STRUCT_H_
