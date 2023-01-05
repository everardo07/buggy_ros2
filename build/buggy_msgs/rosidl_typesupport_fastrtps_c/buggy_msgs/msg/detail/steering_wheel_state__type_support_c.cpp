// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/steering_wheel_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/steering_wheel_state__struct.h"
#include "buggy_msgs/msg/detail/steering_wheel_state__functions.h"
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

#include "std_msgs/msg/detail/float64__functions.h"  // steering_wheel_angle

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


using _SteeringWheelState__ros_msg_type = buggy_msgs__msg__SteeringWheelState;

static bool _SteeringWheelState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SteeringWheelState__ros_msg_type * ros_message = static_cast<const _SteeringWheelState__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_wheel_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->steering_wheel_angle, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _SteeringWheelState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SteeringWheelState__ros_msg_type * ros_message = static_cast<_SteeringWheelState__ros_msg_type *>(untyped_ros_message);
  // Field name: steering_wheel_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->steering_wheel_angle))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__SteeringWheelState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SteeringWheelState__ros_msg_type * ros_message = static_cast<const _SteeringWheelState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name steering_wheel_angle

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->steering_wheel_angle), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _SteeringWheelState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__SteeringWheelState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__SteeringWheelState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: steering_wheel_angle
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

static size_t _SteeringWheelState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__SteeringWheelState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SteeringWheelState = {
  "buggy_msgs::msg",
  "SteeringWheelState",
  _SteeringWheelState__cdr_serialize,
  _SteeringWheelState__cdr_deserialize,
  _SteeringWheelState__get_serialized_size,
  _SteeringWheelState__max_serialized_size
};

static rosidl_message_type_support_t _SteeringWheelState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SteeringWheelState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, SteeringWheelState)() {
  return &_SteeringWheelState__type_support;
}

#if defined(__cplusplus)
}
#endif
