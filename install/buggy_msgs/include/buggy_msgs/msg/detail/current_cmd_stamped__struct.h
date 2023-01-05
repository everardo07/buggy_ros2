// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/CurrentCMDStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__STRUCT_H_

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
// Member 'current'
#include "buggy_msgs/msg/detail/current_cmd__struct.h"

// Struct defined in msg/CurrentCMDStamped in the package buggy_msgs.
typedef struct buggy_msgs__msg__CurrentCMDStamped
{
  std_msgs__msg__Header header;
  buggy_msgs__msg__CurrentCMD current;
} buggy_msgs__msg__CurrentCMDStamped;

// Struct for a sequence of buggy_msgs__msg__CurrentCMDStamped.
typedef struct buggy_msgs__msg__CurrentCMDStamped__Sequence
{
  buggy_msgs__msg__CurrentCMDStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__CurrentCMDStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__STRUCT_H_
