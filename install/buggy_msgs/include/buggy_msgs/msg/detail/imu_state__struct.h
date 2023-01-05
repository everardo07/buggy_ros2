// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/IMUState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__IMU_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__IMU_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'imu_gz'
// Member 'imu_ax'
// Member 'imu_ay'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/IMUState in the package buggy_msgs.
typedef struct buggy_msgs__msg__IMUState
{
  std_msgs__msg__Float64 imu_gz;
  std_msgs__msg__Float64 imu_ax;
  std_msgs__msg__Float64 imu_ay;
} buggy_msgs__msg__IMUState;

// Struct for a sequence of buggy_msgs__msg__IMUState.
typedef struct buggy_msgs__msg__IMUState__Sequence
{
  buggy_msgs__msg__IMUState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__IMUState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__IMU_STATE__STRUCT_H_
