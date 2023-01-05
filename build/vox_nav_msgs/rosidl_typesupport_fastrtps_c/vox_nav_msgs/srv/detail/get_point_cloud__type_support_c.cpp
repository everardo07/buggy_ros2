// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vox_nav_msgs:srv/GetPointCloud.idl
// generated code does not contain a copyright notice
#include "vox_nav_msgs/srv/detail/get_point_cloud__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vox_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vox_nav_msgs/srv/detail/get_point_cloud__struct.h"
#include "vox_nav_msgs/srv/detail/get_point_cloud__functions.h"
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

#include "geometry_msgs/msg/detail/point__functions.h"  // bounding_box_lengths, bounding_box_origin
#include "rosidl_runtime_c/string.h"  // filename
#include "rosidl_runtime_c/string_functions.h"  // filename

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();


using _GetPointCloud_Request__ros_msg_type = vox_nav_msgs__srv__GetPointCloud_Request;

static bool _GetPointCloud_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetPointCloud_Request__ros_msg_type * ros_message = static_cast<const _GetPointCloud_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bounding_box_origin
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bounding_box_origin, cdr))
    {
      return false;
    }
  }

  // Field name: bounding_box_lengths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bounding_box_lengths, cdr))
    {
      return false;
    }
  }

  // Field name: leaf_size
  {
    cdr << ros_message->leaf_size;
  }

  // Field name: publish_pointcloud
  {
    cdr << (ros_message->publish_pointcloud ? true : false);
  }

  // Field name: filename
  {
    const rosidl_runtime_c__String * str = &ros_message->filename;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _GetPointCloud_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetPointCloud_Request__ros_msg_type * ros_message = static_cast<_GetPointCloud_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: bounding_box_origin
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bounding_box_origin))
    {
      return false;
    }
  }

  // Field name: bounding_box_lengths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bounding_box_lengths))
    {
      return false;
    }
  }

  // Field name: leaf_size
  {
    cdr >> ros_message->leaf_size;
  }

  // Field name: publish_pointcloud
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->publish_pointcloud = tmp ? true : false;
  }

  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_runtime_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t get_serialized_size_vox_nav_msgs__srv__GetPointCloud_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPointCloud_Request__ros_msg_type * ros_message = static_cast<const _GetPointCloud_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name bounding_box_origin

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->bounding_box_origin), current_alignment);
  // field.name bounding_box_lengths

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->bounding_box_lengths), current_alignment);
  // field.name leaf_size
  {
    size_t item_size = sizeof(ros_message->leaf_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name publish_pointcloud
  {
    size_t item_size = sizeof(ros_message->publish_pointcloud);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _GetPointCloud_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vox_nav_msgs__srv__GetPointCloud_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t max_serialized_size_vox_nav_msgs__srv__GetPointCloud_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: bounding_box_origin
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: bounding_box_lengths
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Point(
        full_bounded, current_alignment);
    }
  }
  // member: leaf_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: publish_pointcloud
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _GetPointCloud_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vox_nav_msgs__srv__GetPointCloud_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetPointCloud_Request = {
  "vox_nav_msgs::srv",
  "GetPointCloud_Request",
  _GetPointCloud_Request__cdr_serialize,
  _GetPointCloud_Request__cdr_deserialize,
  _GetPointCloud_Request__get_serialized_size,
  _GetPointCloud_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetPointCloud_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPointCloud_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetPointCloud_Request)() {
  return &_GetPointCloud_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "vox_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "vox_nav_msgs/srv/detail/get_point_cloud__struct.h"
// already included above
// #include "vox_nav_msgs/srv/detail/get_point_cloud__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // cloud

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();


using _GetPointCloud_Response__ros_msg_type = vox_nav_msgs__srv__GetPointCloud_Response;

static bool _GetPointCloud_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetPointCloud_Response__ros_msg_type * ros_message = static_cast<const _GetPointCloud_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cloud, cdr))
    {
      return false;
    }
  }

  // Field name: origin_latitude
  {
    cdr << ros_message->origin_latitude;
  }

  // Field name: origin_longitude
  {
    cdr << ros_message->origin_longitude;
  }

  // Field name: origin_altitude
  {
    cdr << ros_message->origin_altitude;
  }

  return true;
}

static bool _GetPointCloud_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetPointCloud_Response__ros_msg_type * ros_message = static_cast<_GetPointCloud_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: cloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cloud))
    {
      return false;
    }
  }

  // Field name: origin_latitude
  {
    cdr >> ros_message->origin_latitude;
  }

  // Field name: origin_longitude
  {
    cdr >> ros_message->origin_longitude;
  }

  // Field name: origin_altitude
  {
    cdr >> ros_message->origin_altitude;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t get_serialized_size_vox_nav_msgs__srv__GetPointCloud_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetPointCloud_Response__ros_msg_type * ros_message = static_cast<const _GetPointCloud_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cloud

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->cloud), current_alignment);
  // field.name origin_latitude
  {
    size_t item_size = sizeof(ros_message->origin_latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_longitude
  {
    size_t item_size = sizeof(ros_message->origin_longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin_altitude
  {
    size_t item_size = sizeof(ros_message->origin_altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetPointCloud_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vox_nav_msgs__srv__GetPointCloud_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t max_serialized_size_vox_nav_msgs__srv__GetPointCloud_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cloud
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
  }
  // member: origin_latitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: origin_longitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: origin_altitude
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _GetPointCloud_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vox_nav_msgs__srv__GetPointCloud_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetPointCloud_Response = {
  "vox_nav_msgs::srv",
  "GetPointCloud_Response",
  _GetPointCloud_Response__cdr_serialize,
  _GetPointCloud_Response__cdr_deserialize,
  _GetPointCloud_Response__get_serialized_size,
  _GetPointCloud_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetPointCloud_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetPointCloud_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetPointCloud_Response)() {
  return &_GetPointCloud_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "vox_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vox_nav_msgs/srv/get_point_cloud.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetPointCloud__callbacks = {
  "vox_nav_msgs::srv",
  "GetPointCloud",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetPointCloud_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetPointCloud_Response)(),
};

static rosidl_service_type_support_t GetPointCloud__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetPointCloud__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetPointCloud)() {
  return &GetPointCloud__handle;
}

#if defined(__cplusplus)
}
#endif
