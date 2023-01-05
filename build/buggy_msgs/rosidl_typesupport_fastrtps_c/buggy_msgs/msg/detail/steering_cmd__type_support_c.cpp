// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/SteeringCMD.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/steering_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/steering_cmd__struct.h"
#include "buggy_msgs/msg/detail/steering_cmd__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "std_msgs/msg/detail/float64__functions.h"  // steering_angle, steering_angle_velocity, steering_torque

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t get_serialized_size_std_msgs__msg__Float64(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t max_serialized_size_std_msgs__msg__Float64(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64)();


using _SteeringCMD__ros_msg_type = buggy_msgs__msg__SteeringCMD;

static bool _SteeringCMD__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SteeringCMD__ros_msg_type * ros_message = static_cast<const _SteeringCMD__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering_angle, cdr))
    {
      return false;
    }
  }

  // Field name: steering_angle_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering_angle_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: steering_torque
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering_torque, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SteeringCMD__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SteeringCMD__ros_msg_type * ros_message = static_cast<_SteeringCMD__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering_angle))
    {
      return false;
    }
  }

  // Field name: steering_angle_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering_angle_velocity))
    {
      return false;
    }
  }

  // Field name: steering_torque
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering_torque))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__SteeringCMD(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SteeringCMD__ros_msg_type * ros_message = static_cast<const _SteeringCMD__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name steering_angle

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->steering_angle), current_alignment);
  // field.name steering_angle_velocity

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->steering_angle_velocity), current_alignment);
  // field.name steering_torque

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->steering_torque), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SteeringCMD__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__SteeringCMD(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__SteeringCMD(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: steering_angle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: steering_angle_velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: steering_torque
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _SteeringCMD__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__SteeringCMD(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SteeringCMD = {
  "buggy_msgs::msg",
  "SteeringCMD",
  _SteeringCMD__cdr_serialize,
  _SteeringCMD__cdr_deserialize,
  _SteeringCMD__get_serialized_size,
  _SteeringCMD__max_serialized_size
};

static rosidl_message_type_support_t _SteeringCMD__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SteeringCMD,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, SteeringCMD)() {
  return &_SteeringCMD__type_support;
}

#if defined(__cplusplus)
}
#endif
