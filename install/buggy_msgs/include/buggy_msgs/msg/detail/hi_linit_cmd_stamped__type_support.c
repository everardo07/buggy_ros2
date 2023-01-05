// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/HILinitCMDStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/hi_linit_cmd_stamped__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd_stamped__functions.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `hilinit`
#include "buggy_msgs/msg/hi_linit_cmd.h"
// Member `hilinit`
#include "buggy_msgs/msg/detail/hi_linit_cmd__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__HILinitCMDStamped__init(message_memory);
}

void HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_fini_function(void * message_memory)
{
  buggy_msgs__msg__HILinitCMDStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMDStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hilinit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__HILinitCMDStamped, hilinit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_members = {
  "buggy_msgs__msg",  // message namespace
  "HILinitCMDStamped",  // message name
  2,  // number of fields
  sizeof(buggy_msgs__msg__HILinitCMDStamped),
  HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_member_array,  // message members
  HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_type_support_handle = {
  0,
  &HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, HILinitCMDStamped)() {
  HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, HILinitCMD)();
  if (!HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_type_support_handle.typesupport_identifier) {
    HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &HILinitCMDStamped__rosidl_typesupport_introspection_c__HILinitCMDStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
