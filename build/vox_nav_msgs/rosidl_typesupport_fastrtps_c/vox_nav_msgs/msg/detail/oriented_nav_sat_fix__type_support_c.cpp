// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vox_nav_msgs:msg/OrientedNavSatFix.idl
// generated code does not contain a copyright notice
#include "vox_nav_msgs/msg/detail/oriented_nav_sat_fix__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vox_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vox_nav_msgs/msg/detail/oriented_nav_sat_fix__struct.h"
#include "vox_nav_msgs/msg/detail/oriented_nav_sat_fix__functions.h"
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

#include "geometry_msgs/msg/detail/quaternion__functions.h"  // orientation
#include "sensor_msgs/msg/detail/nav_sat_fix__functions.h"  // position

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__Quaternion(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__Quaternion(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t get_serialized_size_sensor_msgs__msg__NavSatFix(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t max_serialized_size_sensor_msgs__msg__NavSatFix(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix)();


using _OrientedNavSatFix__ros_msg_type = vox_nav_msgs__msg__OrientedNavSatFix;

static bool _OrientedNavSatFix__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OrientedNavSatFix__ros_msg_type * ros_message = static_cast<const _OrientedNavSatFix__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->position, cdr))
    {
      return false;
    }
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->orientation, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _OrientedNavSatFix__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OrientedNavSatFix__ros_msg_type * ros_message = static_cast<_OrientedNavSatFix__ros_msg_type *>(untyped_ros_message);
  // Field name: position
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, NavSatFix
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->position))
    {
      return false;
    }
  }

  // Field name: orientation
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Quaternion
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->orientation))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t get_serialized_size_vox_nav_msgs__msg__OrientedNavSatFix(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OrientedNavSatFix__ros_msg_type * ros_message = static_cast<const _OrientedNavSatFix__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name position

  current_alignment += get_serialized_size_sensor_msgs__msg__NavSatFix(
    &(ros_message->position), current_alignment);
  // field.name orientation

  current_alignment += get_serialized_size_geometry_msgs__msg__Quaternion(
    &(ros_message->orientation), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _OrientedNavSatFix__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vox_nav_msgs__msg__OrientedNavSatFix(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t max_serialized_size_vox_nav_msgs__msg__OrientedNavSatFix(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: position
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__NavSatFix(
        full_bounded, current_alignment);
    }
  }
  // member: orientation
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Quaternion(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _OrientedNavSatFix__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vox_nav_msgs__msg__OrientedNavSatFix(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_OrientedNavSatFix = {
  "vox_nav_msgs::msg",
  "OrientedNavSatFix",
  _OrientedNavSatFix__cdr_serialize,
  _OrientedNavSatFix__cdr_deserialize,
  _OrientedNavSatFix__get_serialized_size,
  _OrientedNavSatFix__max_serialized_size
};

static rosidl_message_type_support_t _OrientedNavSatFix__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OrientedNavSatFix,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, msg, OrientedNavSatFix)() {
  return &_OrientedNavSatFix__type_support;
}

#if defined(__cplusplus)
}
#endif
