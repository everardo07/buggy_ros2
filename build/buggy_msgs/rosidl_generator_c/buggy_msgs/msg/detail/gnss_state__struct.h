// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/GNSSState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gnss_counter_falling'
// Member 'gnss_counter_rising'
// Member 'gnss_counter_bus'
// Member 'gnss_number_satellites'
// Member 'gnss_quality'
// Member 'gnss_mode'
// Member 'gnss_counter'
#include "std_msgs/msg/detail/u_int16__struct.h"
// Member 'gnss_altitude'
// Member 'gnss_hdop'
// Member 'gnss_pdop'
// Member 'gnss_vdop'
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'gnss_counter_rmc1'
// Member 'gnss_lon_mm'
// Member 'gnss_lon_mm_frac'
// Member 'gnss_counter_rmc2'
// Member 'gnss_lat_mm'
// Member 'gnss_lat_mm_frac'
// Member 'gnss_angle'
// Member 'gnss_angle_valid'
// Member 'gnss_counter_rmc3'
// Member 'gnss_quality_rmc3'
// Member 'gnss_speed'
// Member 'gnss_time'
#include "std_msgs/msg/detail/float64__struct.h"

// Struct defined in msg/GNSSState in the package buggy_msgs.
typedef struct buggy_msgs__msg__GNSSState
{
  std_msgs__msg__UInt16 gnss_counter_falling;
  std_msgs__msg__UInt16 gnss_counter_rising;
  std_msgs__msg__UInt16 gnss_counter_bus;
  std_msgs__msg__Float32 gnss_altitude;
  std_msgs__msg__UInt16 gnss_number_satellites;
  std_msgs__msg__UInt16 gnss_quality;
  std_msgs__msg__Float32 gnss_hdop;
  std_msgs__msg__UInt16 gnss_mode;
  std_msgs__msg__UInt16 gnss_counter;
  std_msgs__msg__Float32 gnss_pdop;
  std_msgs__msg__Float32 gnss_vdop;
  std_msgs__msg__Float64 gnss_counter_rmc1;
  std_msgs__msg__Float64 gnss_lon_mm;
  std_msgs__msg__Float64 gnss_lon_mm_frac;
  std_msgs__msg__Float64 gnss_counter_rmc2;
  std_msgs__msg__Float64 gnss_lat_mm;
  std_msgs__msg__Float64 gnss_lat_mm_frac;
  std_msgs__msg__Float64 gnss_angle;
  std_msgs__msg__Float64 gnss_angle_valid;
  std_msgs__msg__Float64 gnss_counter_rmc3;
  std_msgs__msg__Float64 gnss_quality_rmc3;
  std_msgs__msg__Float64 gnss_speed;
  std_msgs__msg__Float64 gnss_time;
} buggy_msgs__msg__GNSSState;

// Struct for a sequence of buggy_msgs__msg__GNSSState.
typedef struct buggy_msgs__msg__GNSSState__Sequence
{
  buggy_msgs__msg__GNSSState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__GNSSState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__STRUCT_H_
