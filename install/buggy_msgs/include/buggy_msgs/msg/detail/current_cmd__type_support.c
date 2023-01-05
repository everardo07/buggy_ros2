// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/CurrentCMD.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/current_cmd__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/current_cmd__functions.h"
#include "buggy_msgs/msg/detail/current_cmd__struct.h"


// Include directives for member types
// Member `current_percentage`
#include "std_msgs/msg/float64.h"
// Member `current_percentage`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__CurrentCMD__init(message_memory);
}

void CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_fini_function(void * message_memory)
{
  buggy_msgs__msg__CurrentCMD__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_member_array[1] = {
  {
    "current_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__CurrentCMD, current_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_members = {
  "buggy_msgs__msg",  // message namespace
  "CurrentCMD",  // message name
  1,  // number of fields
  sizeof(buggy_msgs__msg__CurrentCMD),
  CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_member_array,  // message members
  CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_init_function,  // function to initialize message memory (memory has to be allocated)
  CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_type_support_handle = {
  0,
  &CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, CurrentCMD)() {
  CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_type_support_handle.typesupport_identifier) {
    CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CurrentCMD__rosidl_typesupport_introspection_c__CurrentCMD_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
