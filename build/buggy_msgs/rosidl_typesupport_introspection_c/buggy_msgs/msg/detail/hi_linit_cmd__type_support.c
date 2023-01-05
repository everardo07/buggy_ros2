// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/hi_linit_cmd__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd__functions.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd__struct.h"


// Include directives for member types
// Member `counter`
#include "std_msgs/msg/u_int8.h"
// Member `counter`
#include "std_msgs/msg/detail/u_int8__rosidl_typesupport_introspection_c.h"
// Member `lon_mm`
// Member `lat_mm`
// Member `angle`
#include "std_msgs/msg/int16.h"
// Member `lon_mm`
// Member `lat_mm`
// Member `angle`
#include "std_msgs/msg/detail/int16__rosidl_typesupport_introspection_c.h"
// Member `lon_mm_frac`
// Member `lat_mm_frac`
#include "std_msgs/msg/float32.h"
// Member `lon_mm_frac`
// Member `lat_mm_frac`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__HILinitCMD__init(message_memory);
}

void HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_fini_function(void * message_memory)
{
  buggy_msgs__msg__HILinitCMD__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[6] = {
  {
    "counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMD, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMD, lon_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon_mm_frac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMD, lon_mm_frac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMD, lat_mm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat_mm_frac",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMD, lat_mm_frac),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMD, angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_members = {
  "buggy_msgs__msg",  // message namespace
  "HILinitCMD",  // message name
  6,  // number of fields
  sizeof(buggy_msgs__msg__HILinitCMD),
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array,  // message members
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_init_function,  // function to initialize message memory (memory has to be allocated)
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_type_support_handle = {
  0,
  &HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, HILinitCMD)() {
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8)();
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int16)();
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int16)();
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int16)();
  if (!HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_type_support_handle.typesupport_identifier) {
    HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HILinitCMD__rosidl_typesupport_introspection_c__HILinitCMD_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
