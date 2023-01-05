// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/RCCtrlStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__STRUCT_H_

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
// Member 'rcctrl_state'
#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.h"

// Struct defined in msg/RCCtrlStateStamped in the package buggy_msgs.
typedef struct buggy_msgs__msg__RCCtrlStateStamped
{
  std_msgs__msg__Header header;
  buggy_msgs__msg__RCCtrlState rcctrl_state;
} buggy_msgs__msg__RCCtrlStateStamped;

// Struct for a sequence of buggy_msgs__msg__RCCtrlStateStamped.
typedef struct buggy_msgs__msg__RCCtrlStateStamped__Sequence
{
  buggy_msgs__msg__RCCtrlStateStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__RCCtrlStateStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__STRUCT_H_
