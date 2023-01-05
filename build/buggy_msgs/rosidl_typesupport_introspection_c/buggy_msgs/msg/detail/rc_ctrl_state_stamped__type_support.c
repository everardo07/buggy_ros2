// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/RCCtrlStateStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/rc_ctrl_state_stamped__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state_stamped__functions.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `rcctrl_state`
#include "buggy_msgs/msg/rc_ctrl_state.h"
// Member `rcctrl_state`
#include "buggy_msgs/msg/detail/rc_ctrl_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__RCCtrlStateStamped__init(message_memory);
}

void RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_fini_function(void * message_memory)
{
  buggy_msgs__msg__RCCtrlStateStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlStateStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rcctrl_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlStateStamped, rcctrl_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_members = {
  "buggy_msgs__msg",  // message namespace
  "RCCtrlStateStamped",  // message name
  2,  // number of fields
  sizeof(buggy_msgs__msg__RCCtrlStateStamped),
  RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_member_array,  // message members
  RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_type_support_handle = {
  0,
  &RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, RCCtrlStateStamped)() {
  RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, RCCtrlState)();
  if (!RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_type_support_handle.typesupport_identifier) {
    RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RCCtrlStateStamped__rosidl_typesupport_introspection_c__RCCtrlStateStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
