// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/WheelsState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/wheels_state__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/wheels_state__functions.h"
#include "buggy_msgs/msg/detail/wheels_state__struct.h"


// Include directives for member types
// Member `rf_speed`
// Member `lf_speed`
// Member `rr_speed`
// Member `lr_speed`
#include "std_msgs/msg/float64.h"
// Member `rf_speed`
// Member `lf_speed`
// Member `rr_speed`
// Member `lr_speed`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void WheelsState__rosidl_typesupport_introspection_c__WheelsState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__WheelsState__init(message_memory);
}

void WheelsState__rosidl_typesupport_introspection_c__WheelsState_fini_function(void * message_memory)
{
  buggy_msgs__msg__WheelsState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_member_array[4] = {
  {
    "rf_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__WheelsState, rf_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lf_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__WheelsState, lf_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rr_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__WheelsState, rr_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lr_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__WheelsState, lr_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_members = {
  "buggy_msgs__msg",  // message namespace
  "WheelsState",  // message name
  4,  // number of fields
  sizeof(buggy_msgs__msg__WheelsState),
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_member_array,  // message members
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_type_support_handle = {
  0,
  &WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, WheelsState)() {
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_type_support_handle.typesupport_identifier) {
    WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &WheelsState__rosidl_typesupport_introspection_c__WheelsState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
