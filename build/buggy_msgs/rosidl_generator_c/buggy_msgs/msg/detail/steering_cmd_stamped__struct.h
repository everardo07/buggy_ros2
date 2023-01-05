// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from buggy_msgs:msg/SteeringCMDStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_CMD_STAMPED__STRUCT_H_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_CMD_STAMPED__STRUCT_H_

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
// Member 'steering'
#include "buggy_msgs/msg/detail/steering_cmd__struct.h"

// Struct defined in msg/SteeringCMDStamped in the package buggy_msgs.
typedef struct buggy_msgs__msg__SteeringCMDStamped
{
  std_msgs__msg__Header header;
  buggy_msgs__msg__SteeringCMD steering;
} buggy_msgs__msg__SteeringCMDStamped;

// Struct for a sequence of buggy_msgs__msg__SteeringCMDStamped.
typedef struct buggy_msgs__msg__SteeringCMDStamped__Sequence
{
  buggy_msgs__msg__SteeringCMDStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} buggy_msgs__msg__SteeringCMDStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_CMD_STAMPED__STRUCT_H_
