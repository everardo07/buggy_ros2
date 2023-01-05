// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'params1_wheelcircumference_mm'
// Member 'params1_param_simplenav_reset'
// Member 'params1_param_obeyspeedlimit'
// Member 'params1_param_rv_a_demand'
// Member 'params1_v2vid'
// Member 'params1_param_track_a_max'
// Member 'params1_param_nav_triggermsg'
// Member 'params1_param_nav_gnssdelay'
// Member 'params1_param_stromgrenze'
// Member 'params1_param_drehzahlgrenze'
// Member 'params2_param_acc_inverseacc'
// Member 'params2_param_acc_timegap'
// Member 'params2_param_acc_gain'
// Member 'params2_param_acc_distance'
// Member 'params2_param_acc_activationdist'
// Member 'params2_param_menuparam4'
// Member 'params2_param_menuparam3'
// Member 'params2_param_menuparam2'
// Member 'params2_param_menuparam1'
#include "std_msgs/msg/detail/float32__struct.h"

// Struct defined in msg/BUSParameter in the package buggy_msgs.
typedef struct buggy_msgs__msg__BUSParameter
{
  std_msgs__msg__Float32 params1_wheelcircumference_mm;
  std_msgs__msg__Float32 params1_param_simplenav_reset;
  std_msgs__msg__Float32 params1_param_obeyspeedlimit;
  std_msgs__msg__Float32 params1_param_rv_a_demand;
  std_msgs__msg__Float32 params1_v2vid;
  std_msgs__msg__Float32 params1_param_track_a_max;
  std_msgs__msg__Float32 params1_param_nav_triggermsg;
  std_msgs__msg__Float32 params1_param_nav_gnssdelay;
  std_msgs__msg__Float32 params1_param_stromgrenze;
  std_msgs__msg__Float32 params1_param_drehzahlgrenze;
  std_msgs__msg__Float32 params2_param_acc_inverseacc;
  std_msgs__msg__Float32 params2_param_acc_timegap;
  std_msgs__msg__Float32 params2_param_acc_gain;
  std_msgs__msg__Float32 params2_param_acc_distance;
  std_msgs__msg__Float32 params2_param_acc_activationdist;
  std_msgs__msg__Float32 params2_param_menuparam4;
  std_msgs__msg__Float32 params2_param_menuparam3;
  std_msgs__msg__Float32 params2_param_menuparam2;
  std_msgs__msg__Float32 params2_param_menuparam1;
} buggy_msgs__msg__BUSParameter;

// Struct for a sequence of buggy_msgs__msg__BUSParameter.
typedef struct buggy_msgs__msg__BUSParameter__Sequence
{
  buggy_msgs__msg__BUSParameter * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__BUSParameter__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__STRUCT_H_
