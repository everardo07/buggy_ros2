// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__STRUCT_H_

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
#include "std_msgs/msg/detail/u_int8__struct.h"
// Member 'lon_mm'
// Member 'lat_mm'
// Member 'angle'
#include "std_msgs/msg/detail/int16__struct.h"
// Member 'lon_mm_frac'
// Member 'lat_mm_frac'
#include "std_msgs/msg/detail/float32__struct.h"

// Struct defined in msg/HILinitCMD in the package buggy_msgs.
typedef struct buggy_msgs__msg__HILinitCMD
{
  std_msgs__msg__UInt8 counter;
  std_msgs__msg__Int16 lon_mm;
  std_msgs__msg__Float32 lon_mm_frac;
  std_msgs__msg__Int16 lat_mm;
  std_msgs__msg__Float32 lat_mm_frac;
  std_msgs__msg__Int16 angle;
} buggy_msgs__msg__HILinitCMD;

// Struct for a sequence of buggy_msgs__msg__HILinitCMD.
typedef struct buggy_msgs__msg__HILinitCMD__Sequence
{
  buggy_msgs__msg__HILinitCMD * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__HILinitCMD__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__STRUCT_H_
