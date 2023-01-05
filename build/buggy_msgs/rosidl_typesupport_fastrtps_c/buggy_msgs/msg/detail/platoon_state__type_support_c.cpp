// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/platoon_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/platoon_state__struct.h"
#include "buggy_msgs/msg/detail/platoon_state__functions.h"
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

#include "std_msgs/msg/detail/float32__functions.h"  // platoon_acc_x, platoon_mapmatching_isvalid, platoon_mapmatching_roadindex, platoon_mapmatching_s, platoon_velocity
#include "std_msgs/msg/detail/u_int16__functions.h"  // counter, id

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
size_t get_serialized_size_std_msgs__msg__UInt16(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
size_t max_serialized_size_std_msgs__msg__UInt16(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_buggy_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16)();


using _PlatoonState__ros_msg_type = buggy_msgs__msg__PlatoonState;

static bool _PlatoonState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlatoonState__ros_msg_type * ros_message = static_cast<const _PlatoonState__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->id, cdr))
    {
      return false;
    }
  }

  // Field name: counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->counter, cdr))
    {
      return false;
    }
  }

  // Field name: platoon_acc_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->platoon_acc_x, cdr))
    {
      return false;
    }
  }

  // Field name: platoon_mapmatching_isvalid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->platoon_mapmatching_isvalid, cdr))
    {
      return false;
    }
  }

  // Field name: platoon_mapmatching_roadindex
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->platoon_mapmatching_roadindex, cdr))
    {
      return false;
    }
  }

  // Field name: platoon_mapmatching_s
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->platoon_mapmatching_s, cdr))
    {
      return false;
    }
  }

  // Field name: platoon_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->platoon_velocity, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PlatoonState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlatoonState__ros_msg_type * ros_message = static_cast<_PlatoonState__ros_msg_type *>(untyped_ros_message);
  // Field name: id
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->id))
    {
      return false;
    }
  }

  // Field name: counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->counter))
    {
      return false;
    }
  }

  // Field name: platoon_acc_x
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->platoon_acc_x))
    {
      return false;
    }
  }

  // Field name: platoon_mapmatching_isvalid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->platoon_mapmatching_isvalid))
    {
      return false;
    }
  }

  // Field name: platoon_mapmatching_roadindex
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->platoon_mapmatching_roadindex))
    {
      return false;
    }
  }

  // Field name: platoon_mapmatching_s
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->platoon_mapmatching_s))
    {
      return false;
    }
  }

  // Field name: platoon_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->platoon_velocity))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__PlatoonState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlatoonState__ros_msg_type * ros_message = static_cast<const _PlatoonState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name id

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->id), current_alignment);
  // field.name counter

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->counter), current_alignment);
  // field.name platoon_acc_x

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->platoon_acc_x), current_alignment);
  // field.name platoon_mapmatching_isvalid

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->platoon_mapmatching_isvalid), current_alignment);
  // field.name platoon_mapmatching_roadindex

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->platoon_mapmatching_roadindex), current_alignment);
  // field.name platoon_mapmatching_s

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->platoon_mapmatching_s), current_alignment);
  // field.name platoon_velocity

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->platoon_velocity), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PlatoonState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__PlatoonState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__PlatoonState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: counter
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: platoon_acc_x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: platoon_mapmatching_isvalid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: platoon_mapmatching_roadindex
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: platoon_mapmatching_s
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: platoon_velocity
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

static size_t _PlatoonState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__PlatoonState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PlatoonState = {
  "buggy_msgs::msg",
  "PlatoonState",
  _PlatoonState__cdr_serialize,
  _PlatoonState__cdr_deserialize,
  _PlatoonState__get_serialized_size,
  _PlatoonState__max_serialized_size
};

static rosidl_message_type_support_t _PlatoonState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlatoonState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, PlatoonState)() {
  return &_PlatoonState__type_support;
}

#if defined(__cplusplus)
}
#endif
