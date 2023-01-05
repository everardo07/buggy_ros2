// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/bus_parameter__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/bus_parameter__struct.h"
#include "buggy_msgs/msg/detail/bus_parameter__functions.h"
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

#include "std_msgs/msg/detail/float32__functions.h"  // params1_param_drehzahlgrenze, params1_param_nav_gnssdelay, params1_param_nav_triggermsg, params1_param_obeyspeedlimit, params1_param_rv_a_demand, params1_param_simplenav_reset, params1_param_stromgrenze, params1_param_track_a_max, params1_v2vid, params1_wheelcircumference_mm, params2_param_acc_activationdist, params2_param_acc_distance, params2_param_acc_gain, params2_param_acc_inverseacc, params2_param_acc_timegap, params2_param_menuparam1, params2_param_menuparam2, params2_param_menuparam3, params2_param_menuparam4

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


using _BUSParameter__ros_msg_type = buggy_msgs__msg__BUSParameter;

static bool _BUSParameter__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BUSParameter__ros_msg_type * ros_message = static_cast<const _BUSParameter__ros_msg_type *>(untyped_ros_message);
  // Field name: params1_wheelcircumference_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_wheelcircumference_mm, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_simplenav_reset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_simplenav_reset, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_obeyspeedlimit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_obeyspeedlimit, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_rv_a_demand
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_rv_a_demand, cdr))
    {
      return false;
    }
  }

  // Field name: params1_v2vid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_v2vid, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_track_a_max
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_track_a_max, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_nav_triggermsg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_nav_triggermsg, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_nav_gnssdelay
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_nav_gnssdelay, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_stromgrenze
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_stromgrenze, cdr))
    {
      return false;
    }
  }

  // Field name: params1_param_drehzahlgrenze
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params1_param_drehzahlgrenze, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_inverseacc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_acc_inverseacc, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_timegap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_acc_timegap, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_gain
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_acc_gain, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_distance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_acc_distance, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_activationdist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_acc_activationdist, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_menuparam4, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_menuparam3, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_menuparam2, cdr))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->params2_param_menuparam1, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _BUSParameter__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BUSParameter__ros_msg_type * ros_message = static_cast<_BUSParameter__ros_msg_type *>(untyped_ros_message);
  // Field name: params1_wheelcircumference_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_wheelcircumference_mm))
    {
      return false;
    }
  }

  // Field name: params1_param_simplenav_reset
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_simplenav_reset))
    {
      return false;
    }
  }

  // Field name: params1_param_obeyspeedlimit
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_obeyspeedlimit))
    {
      return false;
    }
  }

  // Field name: params1_param_rv_a_demand
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_rv_a_demand))
    {
      return false;
    }
  }

  // Field name: params1_v2vid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_v2vid))
    {
      return false;
    }
  }

  // Field name: params1_param_track_a_max
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_track_a_max))
    {
      return false;
    }
  }

  // Field name: params1_param_nav_triggermsg
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_nav_triggermsg))
    {
      return false;
    }
  }

  // Field name: params1_param_nav_gnssdelay
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_nav_gnssdelay))
    {
      return false;
    }
  }

  // Field name: params1_param_stromgrenze
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_stromgrenze))
    {
      return false;
    }
  }

  // Field name: params1_param_drehzahlgrenze
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params1_param_drehzahlgrenze))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_inverseacc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_acc_inverseacc))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_timegap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_acc_timegap))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_gain
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_acc_gain))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_distance
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_acc_distance))
    {
      return false;
    }
  }

  // Field name: params2_param_acc_activationdist
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_acc_activationdist))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam4
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_menuparam4))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_menuparam3))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_menuparam2))
    {
      return false;
    }
  }

  // Field name: params2_param_menuparam1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->params2_param_menuparam1))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__BUSParameter(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BUSParameter__ros_msg_type * ros_message = static_cast<const _BUSParameter__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name params1_wheelcircumference_mm

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_wheelcircumference_mm), current_alignment);
  // field.name params1_param_simplenav_reset

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_simplenav_reset), current_alignment);
  // field.name params1_param_obeyspeedlimit

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_obeyspeedlimit), current_alignment);
  // field.name params1_param_rv_a_demand

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_rv_a_demand), current_alignment);
  // field.name params1_v2vid

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_v2vid), current_alignment);
  // field.name params1_param_track_a_max

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_track_a_max), current_alignment);
  // field.name params1_param_nav_triggermsg

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_nav_triggermsg), current_alignment);
  // field.name params1_param_nav_gnssdelay

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_nav_gnssdelay), current_alignment);
  // field.name params1_param_stromgrenze

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_stromgrenze), current_alignment);
  // field.name params1_param_drehzahlgrenze

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params1_param_drehzahlgrenze), current_alignment);
  // field.name params2_param_acc_inverseacc

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_acc_inverseacc), current_alignment);
  // field.name params2_param_acc_timegap

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_acc_timegap), current_alignment);
  // field.name params2_param_acc_gain

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_acc_gain), current_alignment);
  // field.name params2_param_acc_distance

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_acc_distance), current_alignment);
  // field.name params2_param_acc_activationdist

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_acc_activationdist), current_alignment);
  // field.name params2_param_menuparam4

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_menuparam4), current_alignment);
  // field.name params2_param_menuparam3

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_menuparam3), current_alignment);
  // field.name params2_param_menuparam2

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_menuparam2), current_alignment);
  // field.name params2_param_menuparam1

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->params2_param_menuparam1), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _BUSParameter__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__BUSParameter(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__BUSParameter(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: params1_wheelcircumference_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_simplenav_reset
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_obeyspeedlimit
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_rv_a_demand
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_v2vid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_track_a_max
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_nav_triggermsg
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_nav_gnssdelay
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_stromgrenze
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params1_param_drehzahlgrenze
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_acc_inverseacc
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_acc_timegap
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_acc_gain
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_acc_distance
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_acc_activationdist
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_menuparam4
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_menuparam3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_menuparam2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: params2_param_menuparam1
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

static size_t _BUSParameter__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__BUSParameter(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_BUSParameter = {
  "buggy_msgs::msg",
  "BUSParameter",
  _BUSParameter__cdr_serialize,
  _BUSParameter__cdr_deserialize,
  _BUSParameter__get_serialized_size,
  _BUSParameter__max_serialized_size
};

static rosidl_message_type_support_t _BUSParameter__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BUSParameter,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, BUSParameter)() {
  return &_BUSParameter__type_support;
}

#if defined(__cplusplus)
}
#endif
