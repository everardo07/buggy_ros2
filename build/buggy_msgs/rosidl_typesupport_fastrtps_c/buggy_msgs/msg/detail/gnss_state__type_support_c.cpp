// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from buggy_msgs:msg/GNSSState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/gnss_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "buggy_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "buggy_msgs/msg/detail/gnss_state__struct.h"
#include "buggy_msgs/msg/detail/gnss_state__functions.h"
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

#include "std_msgs/msg/detail/float32__functions.h"  // gnss_altitude, gnss_hdop, gnss_pdop, gnss_vdop
#include "std_msgs/msg/detail/float64__functions.h"  // gnss_angle, gnss_angle_valid, gnss_counter_rmc1, gnss_counter_rmc2, gnss_counter_rmc3, gnss_lat_mm, gnss_lat_mm_frac, gnss_lon_mm, gnss_lon_mm_frac, gnss_quality_rmc3, gnss_speed, gnss_time
#include "std_msgs/msg/detail/u_int16__functions.h"  // gnss_counter, gnss_counter_bus, gnss_counter_falling, gnss_counter_rising, gnss_mode, gnss_number_satellites, gnss_quality

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


using _GNSSState__ros_msg_type = buggy_msgs__msg__GNSSState;

static bool _GNSSState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GNSSState__ros_msg_type * ros_message = static_cast<const _GNSSState__ros_msg_type *>(untyped_ros_message);
  // Field name: gnss_counter_falling
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter_falling, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rising
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter_rising, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_counter_bus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter_bus, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_altitude
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_altitude, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_number_satellites
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_number_satellites, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_quality
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_quality, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_hdop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_hdop, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_mode, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_pdop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_pdop, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_vdop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_vdop, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rmc1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter_rmc1, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_lon_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_lon_mm, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_lon_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_lon_mm_frac, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rmc2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter_rmc2, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_lat_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_lat_mm, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_lat_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_lat_mm_frac, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_angle, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_angle_valid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_angle_valid, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rmc3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_counter_rmc3, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_quality_rmc3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_quality_rmc3, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_speed, cdr))
    {
      return false;
    }
  }

  // Field name: gnss_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gnss_time, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _GNSSState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GNSSState__ros_msg_type * ros_message = static_cast<_GNSSState__ros_msg_type *>(untyped_ros_message);
  // Field name: gnss_counter_falling
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter_falling))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rising
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter_rising))
    {
      return false;
    }
  }

  // Field name: gnss_counter_bus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter_bus))
    {
      return false;
    }
  }

  // Field name: gnss_altitude
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_altitude))
    {
      return false;
    }
  }

  // Field name: gnss_number_satellites
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_number_satellites))
    {
      return false;
    }
  }

  // Field name: gnss_quality
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_quality))
    {
      return false;
    }
  }

  // Field name: gnss_hdop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_hdop))
    {
      return false;
    }
  }

  // Field name: gnss_mode
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_mode))
    {
      return false;
    }
  }

  // Field name: gnss_counter
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, UInt16
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter))
    {
      return false;
    }
  }

  // Field name: gnss_pdop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_pdop))
    {
      return false;
    }
  }

  // Field name: gnss_vdop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float32
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_vdop))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rmc1
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter_rmc1))
    {
      return false;
    }
  }

  // Field name: gnss_lon_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_lon_mm))
    {
      return false;
    }
  }

  // Field name: gnss_lon_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_lon_mm_frac))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rmc2
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter_rmc2))
    {
      return false;
    }
  }

  // Field name: gnss_lat_mm
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_lat_mm))
    {
      return false;
    }
  }

  // Field name: gnss_lat_mm_frac
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_lat_mm_frac))
    {
      return false;
    }
  }

  // Field name: gnss_angle
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_angle))
    {
      return false;
    }
  }

  // Field name: gnss_angle_valid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_angle_valid))
    {
      return false;
    }
  }

  // Field name: gnss_counter_rmc3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_counter_rmc3))
    {
      return false;
    }
  }

  // Field name: gnss_quality_rmc3
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_quality_rmc3))
    {
      return false;
    }
  }

  // Field name: gnss_speed
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_speed))
    {
      return false;
    }
  }

  // Field name: gnss_time
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Float64
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gnss_time))
    {
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t get_serialized_size_buggy_msgs__msg__GNSSState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GNSSState__ros_msg_type * ros_message = static_cast<const _GNSSState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gnss_counter_falling

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_counter_falling), current_alignment);
  // field.name gnss_counter_rising

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_counter_rising), current_alignment);
  // field.name gnss_counter_bus

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_counter_bus), current_alignment);
  // field.name gnss_altitude

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->gnss_altitude), current_alignment);
  // field.name gnss_number_satellites

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_number_satellites), current_alignment);
  // field.name gnss_quality

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_quality), current_alignment);
  // field.name gnss_hdop

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->gnss_hdop), current_alignment);
  // field.name gnss_mode

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_mode), current_alignment);
  // field.name gnss_counter

  current_alignment += get_serialized_size_std_msgs__msg__UInt16(
    &(ros_message->gnss_counter), current_alignment);
  // field.name gnss_pdop

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->gnss_pdop), current_alignment);
  // field.name gnss_vdop

  current_alignment += get_serialized_size_std_msgs__msg__Float32(
    &(ros_message->gnss_vdop), current_alignment);
  // field.name gnss_counter_rmc1

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_counter_rmc1), current_alignment);
  // field.name gnss_lon_mm

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_lon_mm), current_alignment);
  // field.name gnss_lon_mm_frac

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_lon_mm_frac), current_alignment);
  // field.name gnss_counter_rmc2

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_counter_rmc2), current_alignment);
  // field.name gnss_lat_mm

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_lat_mm), current_alignment);
  // field.name gnss_lat_mm_frac

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_lat_mm_frac), current_alignment);
  // field.name gnss_angle

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_angle), current_alignment);
  // field.name gnss_angle_valid

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_angle_valid), current_alignment);
  // field.name gnss_counter_rmc3

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_counter_rmc3), current_alignment);
  // field.name gnss_quality_rmc3

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_quality_rmc3), current_alignment);
  // field.name gnss_speed

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_speed), current_alignment);
  // field.name gnss_time

  current_alignment += get_serialized_size_std_msgs__msg__Float64(
    &(ros_message->gnss_time), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _GNSSState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_buggy_msgs__msg__GNSSState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_buggy_msgs
size_t max_serialized_size_buggy_msgs__msg__GNSSState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: gnss_counter_falling
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_counter_rising
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_counter_bus
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_altitude
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_number_satellites
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_quality
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_hdop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_mode
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_counter
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__UInt16(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_pdop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_vdop
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float32(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_counter_rmc1
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_lon_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_lon_mm_frac
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_counter_rmc2
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_lat_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_lat_mm_frac
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_angle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_angle_valid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_counter_rmc3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_quality_rmc3
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_speed
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_std_msgs__msg__Float64(
        full_bounded, current_alignment);
    }
  }
  // member: gnss_time
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

static size_t _GNSSState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_buggy_msgs__msg__GNSSState(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GNSSState = {
  "buggy_msgs::msg",
  "GNSSState",
  _GNSSState__cdr_serialize,
  _GNSSState__cdr_deserialize,
  _GNSSState__get_serialized_size,
  _GNSSState__max_serialized_size
};

static rosidl_message_type_support_t _GNSSState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GNSSState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, buggy_msgs, msg, GNSSState)() {
  return &_GNSSState__type_support;
}

#if defined(__cplusplus)
}
#endif
