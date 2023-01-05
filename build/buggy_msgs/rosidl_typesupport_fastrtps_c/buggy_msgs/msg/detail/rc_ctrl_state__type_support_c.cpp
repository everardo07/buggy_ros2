// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/rc_ctrl_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state__functions.h"
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

#include "std_msgs/msg/detail/float32__functions.h"  // rc1_value, rc2_value, rc3_value
#include "std_msgs/msg/detail/u_int8__functions.h"  // control_disabled, joyctrl_enabled, ro2car_enabled

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t get_serialized_size_std_msgs__msg__Float32(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t max_serialized_size_std_msgs__msg__Float32(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t get_serialized_size_std_msgs__msg__UInt8(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t max_serialized_size_std_msgs__msg__UInt8(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8)();


using _RCCtrlState__ros_msg_type = buggy_msgs__msg__RCCtrlState;

static bool _RCCtrlState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RCCtrlState__ros_msg_type * ros_message = static_cast<const _RCCtrlState__ros_msg_type *>(untyped_ros_message);
  // Field name: joyctrl_enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->joyctrl_enabled, cdr))
    {
      return false;
    }
  }

  // Field name: ro2car_enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->ro2car_enabled, cdr))
    {
      return false;
    }
  }

  // Field name: control_disabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->control_disabled, cdr))
    {
      return false;
    }
  }

  // Field name: rc1_value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rc1_value, cdr))
    {
      return false;
    }
  }

  // Field name: rc2_value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rc2_value, cdr))
    {
      return false;
    }
  }

  // Field name: rc3_value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rc3_value, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RCCtrlState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RCCtrlState__ros_msg_type * ros_message = static_cast<_RCCtrlState__ros_msg_type *>(untyped_ros_message);
  // Field name: joyctrl_enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->joyctrl_enabled))
    {
      return false;
    }
  }

  // Field name: ro2car_enabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->ro2car_enabled))
    {
      return false;
    }
  }

  // Field name: control_disabled
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->control_disabled))
    {
      return false;
    }
  }

  // Field name: rc1_value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rc1_value))
    {
      return false;
    }
  }

  // Field name: rc2_value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rc2_value))
    {
      return false;
    }
  }

  // Field name: rc3_value
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rc3_value))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__RCCtrlState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RCCtrlState__ros_msg_type * ros_message = static_cast<const _RCCtrlState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joyctrl_enabled

  current_alignment += get_serialized_size_std_msgs__msg__UInt8(
    &(ros_message->joyctrl_enabled), current_alignment);
  // field.name ro2car_enabled

  current_alignment += get_serialized_size_std_msgs__msg__UInt8(
    &(ros_message->ro2car_enabled), current_alignment);
  // field.name control_disabled

  current_alignment += get_serialized_size_std_msgs__msg__UInt8(
    &(ros_message->control_disabled), current_alignment);
  // field.name rc1_value

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->rc1_value), current_alignment);
  // field.name rc2_value

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->rc2_value), current_alignment);
  // field.name rc3_value

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->rc3_value), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RCCtrlState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__RCCtrlState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__RCCtrlState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: joyctrl_enabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt8(
        full_bounded, current_alignment);
    }
  }
  // member: ro2car_enabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt8(
        full_bounded, current_alignment);
    }
  }
  // member: control_disabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt8(
        full_bounded, current_alignment);
    }
  }
  // member: rc1_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: rc2_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: rc3_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _RCCtrlState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__RCCtrlState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_RCCtrlState = {
  "buggy_msgs::msg",
  "RCCtrlState",
  _RCCtrlState__cdr_serialize,
  _RCCtrlState__cdr_deserialize,
  _RCCtrlState__get_serialized_size,
  _RCCtrlState__max_serialized_size
};

static rosidl_message_type_support_t _RCCtrlState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RCCtrlState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, RCCtrlState)() {
  return &_RCCtrlState__type_support;
}

#if defined(__cplusplus)
}
#endif
