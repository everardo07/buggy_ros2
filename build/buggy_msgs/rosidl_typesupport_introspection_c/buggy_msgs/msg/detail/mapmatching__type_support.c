// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/Mapmatching.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/mapmatching__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/mapmatching__functions.h"
#include "buggy_msgs/msg/detail/mapmatching__struct.h"


// Include directives for member types
// Member `id`
// Member `counter`
#include "std_msgs/msg/u_int16.h"
// Member `id`
// Member `counter`
#include "std_msgs/msg/detail/u_int16__rosidl_typesupport_introspection_c.h"
// Member `is_lead_vehicle`
#include "std_msgs/msg/u_int8.h"
// Member `is_lead_vehicle`
#include "std_msgs/msg/detail/u_int8__rosidl_typesupport_introspection_c.h"
// Member `mapmatching_checksum`
// Member `mapmatching_is_valid`
// Member `mapmatching_roadindex`
// Member `platoon_mapmatching_s`
#include "std_msgs/msg/float32.h"
// Member `mapmatching_checksum`
// Member `mapmatching_is_valid`
// Member `mapmatching_roadindex`
// Member `platoon_mapmatching_s`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__Mapmatching__init(message_memory);
}

void Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_fini_function(void * message_memory)
{
  buggy_msgs__msg__Mapmatching__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_lead_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, is_lead_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mapmatching_checksum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, mapmatching_checksum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mapmatching_is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, mapmatching_is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mapmatching_roadindex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, mapmatching_roadindex),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "platoon_mapmatching_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__Mapmatching, platoon_mapmatching_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_members = {
  "buggy_msgs__msg",  // message namespace
  "Mapmatching",  // message name
  7,  // number of fields
  sizeof(buggy_msgs__msg__Mapmatching),
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array,  // message members
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_init_function,  // function to initialize message memory (memory has to be allocated)
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_type_support_handle = {
  0,
  &Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, Mapmatching)() {
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt16)();
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt16)();
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8)();
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_type_support_handle.typesupport_identifier) {
    Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Mapmatching__rosidl_typesupport_introspection_c__Mapmatching_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
