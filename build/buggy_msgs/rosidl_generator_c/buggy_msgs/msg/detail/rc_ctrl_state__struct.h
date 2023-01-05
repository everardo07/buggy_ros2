// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joyctrl_enabled'
// Member 'ro2car_enabled'
// Member 'control_disabled'
#include "std_msgs/msg/detail/u_int8__struct.h"
// Member 'rc1_value'
// Member 'rc2_value'
// Member 'rc3_value'
#include "std_msgs/msg/detail/float32__struct.h"

// Struct defined in msg/RCCtrlState in the package buggy_msgs.
typedef struct buggy_msgs__msg__RCCtrlState
{
  std_msgs__msg__UInt8 joyctrl_enabled;
  std_msgs__msg__UInt8 ro2car_enabled;
  std_msgs__msg__UInt8 control_disabled;
  std_msgs__msg__Float32 rc1_value;
  std_msgs__msg__Float32 rc2_value;
  std_msgs__msg__Float32 rc3_value;
} buggy_msgs__msg__RCCtrlState;

// Struct for a sequence of buggy_msgs__msg__RCCtrlState.
typedef struct buggy_msgs__msg__RCCtrlState__Sequence
{
  buggy_msgs__msg__RCCtrlState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__RCCtrlState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__STRUCT_H_
