// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/hi_linit_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd__struct.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd__functions.h"
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

#include "std_msgs/msg/detail/float32__functions.h"  // lat_mm_frac, lon_mm_frac
#include "std_msgs/msg/detail/int16__functions.h"  // angle, lat_mm, lon_mm
#include "std_msgs/msg/detail/u_int8__functions.h"  // counter

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
size_t get_serialized_size_std_msgs__msg__Int16(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t max_serialized_size_std_msgs__msg__Int16(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16)();
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


using _HILinitCMD__ros_msg_type = buggy_msgs__msg__HILinitCMD;

static bool _HILinitCMD__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _HILinitCMD__ros_msg_type * ros_message = static_cast<const _HILinitCMD__ros_msg_type *>(untyped_ros_message);
  // Field name: counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->counter, cdr))
    {
      return false;
    }
  }

  // Field name: lon_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lon_mm, cdr))
    {
      return false;
    }
  }

  // Field name: lon_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lon_mm_frac, cdr))
    {
      return false;
    }
  }

  // Field name: lat_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lat_mm, cdr))
    {
      return false;
    }
  }

  // Field name: lat_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lat_mm_frac, cdr))
    {
      return false;
    }
  }

  // Field name: angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->angle, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _HILinitCMD__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _HILinitCMD__ros_msg_type * ros_message = static_cast<_HILinitCMD__ros_msg_type *>(untyped_ros_message);
  // Field name: counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt8
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->counter))
    {
      return false;
    }
  }

  // Field name: lon_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lon_mm))
    {
      return false;
    }
  }

  // Field name: lon_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lon_mm_frac))
    {
      return false;
    }
  }

  // Field name: lat_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lat_mm))
    {
      return false;
    }
  }

  // Field name: lat_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lat_mm_frac))
    {
      return false;
    }
  }

  // Field name: angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Int16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->angle))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__HILinitCMD(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HILinitCMD__ros_msg_type * ros_message = static_cast<const _HILinitCMD__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name counter

  current_alignment += get_serialized_size_std_msgs__msg__UInt8(
    &(ros_message->counter), current_alignment);
  // field.name lon_mm

  current_alignment += get_serialized_size_std_msgs__msg__Int16(
    &(ros_message->lon_mm), current_alignment);
  // field.name lon_mm_frac

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->lon_mm_frac), current_alignment);
  // field.name lat_mm

  current_alignment += get_serialized_size_std_msgs__msg__Int16(
    &(ros_message->lat_mm), current_alignment);
  // field.name lat_mm_frac

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->lat_mm_frac), current_alignment);
  // field.name angle

  current_alignment += get_serialized_size_std_msgs__msg__Int16(
    &(ros_message->angle), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _HILinitCMD__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__HILinitCMD(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__HILinitCMD(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: counter
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt8(
        full_bounded, current_alignment);
    }
  }
  // member: lon_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int16(
        full_bounded, current_alignment);
    }
  }
  // member: lon_mm_frac
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: lat_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int16(
        full_bounded, current_alignment);
    }
  }
  // member: lat_mm_frac
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: angle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Int16(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _HILinitCMD__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__HILinitCMD(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_HILinitCMD = {
  "buggy_msgs::msg",
  "HILinitCMD",
  _HILinitCMD__cdr_serialize,
  _HILinitCMD__cdr_deserialize,
  _HILinitCMD__get_serialized_size,
  _HILinitCMD__max_serialized_size
};

static rosidl_message_type_support_t _HILinitCMD__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HILinitCMD,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, HILinitCMD)() {
  return &_HILinitCMD__type_support;
}

#if defined(__cplusplus)
}
#endif
