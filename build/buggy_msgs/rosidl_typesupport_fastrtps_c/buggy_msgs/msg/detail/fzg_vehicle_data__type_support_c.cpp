// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/fzg_vehicle_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/fzg_vehicle_data__struct.h"
#include "buggy_msgs/msg/detail/fzg_vehicle_data__functions.h"
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

#include "std_msgs/msg/detail/float32__functions.h"  // counter, longitudinal_acc, set_curvature, velocity, yawrate

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


using _FzgVehicleData__ros_msg_type = buggy_msgs__msg__FzgVehicleData;

static bool _FzgVehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FzgVehicleData__ros_msg_type * ros_message = static_cast<const _FzgVehicleData__ros_msg_type *>(untyped_ros_message);
  // Field name: counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->counter, cdr))
    {
      return false;
    }
  }

  // Field name: longitudinal_acc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->longitudinal_acc, cdr))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->velocity, cdr))
    {
      return false;
    }
  }

  // Field name: yawrate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->yawrate, cdr))
    {
      return false;
    }
  }

  // Field name: set_curvature
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->set_curvature, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _FzgVehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FzgVehicleData__ros_msg_type * ros_message = static_cast<_FzgVehicleData__ros_msg_type *>(untyped_ros_message);
  // Field name: counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->counter))
    {
      return false;
    }
  }

  // Field name: longitudinal_acc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->longitudinal_acc))
    {
      return false;
    }
  }

  // Field name: velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->velocity))
    {
      return false;
    }
  }

  // Field name: yawrate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->yawrate))
    {
      return false;
    }
  }

  // Field name: set_curvature
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->set_curvature))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__FzgVehicleData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FzgVehicleData__ros_msg_type * ros_message = static_cast<const _FzgVehicleData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name counter

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->counter), current_alignment);
  // field.name longitudinal_acc

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->longitudinal_acc), current_alignment);
  // field.name velocity

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->velocity), current_alignment);
  // field.name yawrate

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->yawrate), current_alignment);
  // field.name set_curvature

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->set_curvature), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _FzgVehicleData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__FzgVehicleData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__FzgVehicleData(
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
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: longitudinal_acc
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: yawrate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: set_curvature
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

static size_t _FzgVehicleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__FzgVehicleData(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FzgVehicleData = {
  "buggy_msgs::msg",
  "FzgVehicleData",
  _FzgVehicleData__cdr_serialize,
  _FzgVehicleData__cdr_deserialize,
  _FzgVehicleData__get_serialized_size,
  _FzgVehicleData__max_serialized_size
};

static rosidl_message_type_support_t _FzgVehicleData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FzgVehicleData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, FzgVehicleData)() {
  return &_FzgVehicleData__type_support;
}

#if defined(__cplusplus)
}
#endif
