// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from vox_nav_msgs:srv/GetMapsAndSurfels.idl
// generated code does not contain a copyright notice
#include "vox_nav_msgs/srv/detail/get_maps_and_surfels__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "vox_nav_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.h"
#include "vox_nav_msgs/srv/detail/get_maps_and_surfels__functions.h"
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


// forward declare type support functions


using _GetMapsAndSurfels_Request__ros_msg_type = vox_nav_msgs__srv__GetMapsAndSurfels_Request;

static bool _GetMapsAndSurfels_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMapsAndSurfels_Request__ros_msg_type * ros_message = static_cast<const _GetMapsAndSurfels_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _GetMapsAndSurfels_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMapsAndSurfels_Request__ros_msg_type * ros_message = static_cast<_GetMapsAndSurfels_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t get_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMapsAndSurfels_Request__ros_msg_type * ros_message = static_cast<const _GetMapsAndSurfels_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetMapsAndSurfels_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t max_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMapsAndSurfels_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMapsAndSurfels_Request = {
  "vox_nav_msgs::srv",
  "GetMapsAndSurfels_Request",
  _GetMapsAndSurfels_Request__cdr_serialize,
  _GetMapsAndSurfels_Request__cdr_deserialize,
  _GetMapsAndSurfels_Request__get_serialized_size,
  _GetMapsAndSurfels_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetMapsAndSurfels_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMapsAndSurfels_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels_Request)() {
  return &_GetMapsAndSurfels_Request__type_support;
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
// #include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.h"
// already included above
// #include "vox_nav_msgs/srv/detail/get_maps_and_surfels__functions.h"
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

#include "geometry_msgs/msg/detail/pose_array__functions.h"  // elevated_surfel_poses
#include "octomap_msgs/msg/detail/octomap__functions.h"  // elevated_surfel_octomap, original_octomap
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // traversable_elevated_cloud

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t get_serialized_size_geometry_msgs__msg__PoseArray(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t max_serialized_size_geometry_msgs__msg__PoseArray(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t get_serialized_size_octomap_msgs__msg__Octomap(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
size_t max_serialized_size_octomap_msgs__msg__Octomap(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_vox_nav_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap)();
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


using _GetMapsAndSurfels_Response__ros_msg_type = vox_nav_msgs__srv__GetMapsAndSurfels_Response;

static bool _GetMapsAndSurfels_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GetMapsAndSurfels_Response__ros_msg_type * ros_message = static_cast<const _GetMapsAndSurfels_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: original_octomap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->original_octomap, cdr))
    {
      return false;
    }
  }

  // Field name: elevated_surfel_octomap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elevated_surfel_octomap, cdr))
    {
      return false;
    }
  }

  // Field name: elevated_surfel_poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->elevated_surfel_poses, cdr))
    {
      return false;
    }
  }

  // Field name: traversable_elevated_cloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->traversable_elevated_cloud, cdr))
    {
      return false;
    }
  }

  // Field name: is_valid
  {
    cdr << (ros_message->is_valid ? true : false);
  }

  return true;
}

static bool _GetMapsAndSurfels_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GetMapsAndSurfels_Response__ros_msg_type * ros_message = static_cast<_GetMapsAndSurfels_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: original_octomap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->original_octomap))
    {
      return false;
    }
  }

  // Field name: elevated_surfel_octomap
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, octomap_msgs, msg, Octomap
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elevated_surfel_octomap))
    {
      return false;
    }
  }

  // Field name: elevated_surfel_poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, PoseArray
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->elevated_surfel_poses))
    {
      return false;
    }
  }

  // Field name: traversable_elevated_cloud
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->traversable_elevated_cloud))
    {
      return false;
    }
  }

  // Field name: is_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_valid = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t get_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GetMapsAndSurfels_Response__ros_msg_type * ros_message = static_cast<const _GetMapsAndSurfels_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name original_octomap

  current_alignment += get_serialized_size_octomap_msgs__msg__Octomap(
    &(ros_message->original_octomap), current_alignment);
  // field.name elevated_surfel_octomap

  current_alignment += get_serialized_size_octomap_msgs__msg__Octomap(
    &(ros_message->elevated_surfel_octomap), current_alignment);
  // field.name elevated_surfel_poses

  current_alignment += get_serialized_size_geometry_msgs__msg__PoseArray(
    &(ros_message->elevated_surfel_poses), current_alignment);
  // field.name traversable_elevated_cloud

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->traversable_elevated_cloud), current_alignment);
  // field.name is_valid
  {
    size_t item_size = sizeof(ros_message->is_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GetMapsAndSurfels_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_vox_nav_msgs
size_t max_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: original_octomap
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_octomap_msgs__msg__Octomap(
        full_bounded, current_alignment);
    }
  }
  // member: elevated_surfel_octomap
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_octomap_msgs__msg__Octomap(
        full_bounded, current_alignment);
    }
  }
  // member: elevated_surfel_poses
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__PoseArray(
        full_bounded, current_alignment);
    }
  }
  // member: traversable_elevated_cloud
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        full_bounded, current_alignment);
    }
  }
  // member: is_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _GetMapsAndSurfels_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_vox_nav_msgs__srv__GetMapsAndSurfels_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_GetMapsAndSurfels_Response = {
  "vox_nav_msgs::srv",
  "GetMapsAndSurfels_Response",
  _GetMapsAndSurfels_Response__cdr_serialize,
  _GetMapsAndSurfels_Response__cdr_deserialize,
  _GetMapsAndSurfels_Response__get_serialized_size,
  _GetMapsAndSurfels_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetMapsAndSurfels_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GetMapsAndSurfels_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels_Response)() {
  return &_GetMapsAndSurfels_Response__type_support;
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
#include "vox_nav_msgs/srv/get_maps_and_surfels.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t GetMapsAndSurfels__callbacks = {
  "vox_nav_msgs::srv",
  "GetMapsAndSurfels",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels_Response)(),
};

static rosidl_service_type_support_t GetMapsAndSurfels__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &GetMapsAndSurfels__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels)() {
  return &GetMapsAndSurfels__handle;
}

#if defined(__cplusplus)
}
#endif
