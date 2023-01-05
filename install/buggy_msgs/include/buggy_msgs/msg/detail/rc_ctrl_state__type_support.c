// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/rc_ctrl_state__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state__functions.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.h"


// Include directives for member types
// Member `joyctrl_enabled`
// Member `ro2car_enabled`
// Member `control_disabled`
#include "std_msgs/msg/u_int8.h"
// Member `joyctrl_enabled`
// Member `ro2car_enabled`
// Member `control_disabled`
#include "std_msgs/msg/detail/u_int8__rosidl_typesupport_introspection_c.h"
// Member `rc1_value`
// Member `rc2_value`
// Member `rc3_value`
#include "std_msgs/msg/float32.h"
// Member `rc1_value`
// Member `rc2_value`
// Member `rc3_value`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__RCCtrlState__init(message_memory);
}

void RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_fini_function(void * message_memory)
{
  buggy_msgs__msg__RCCtrlState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[6] = {
  {
    "joyctrl_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlState, joyctrl_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ro2car_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlState, ro2car_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_disabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlState, control_disabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rc1_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlState, rc1_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rc2_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlState, rc2_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rc3_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__RCCtrlState, rc3_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_members = {
  "buggy_msgs__msg",  // message namespace
  "RCCtrlState",  // message name
  6,  // number of fields
  sizeof(buggy_msgs__msg__RCCtrlState),
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array,  // message members
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_init_function,  // function to initialize message memory (memory has to be allocated)
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_type_support_handle = {
  0,
  &RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, RCCtrlState)() {
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8)();
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8)();
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt8)();
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_type_support_handle.typesupport_identifier) {
    RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &RCCtrlState__rosidl_typesupport_introspection_c__RCCtrlState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
