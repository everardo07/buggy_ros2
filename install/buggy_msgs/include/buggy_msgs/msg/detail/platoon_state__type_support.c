// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/platoon_state__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/platoon_state__functions.h"
#include "buggy_msgs/msg/detail/platoon_state__struct.h"


// Include directives for member types
// Member `id`
// Member `counter`
#include "std_msgs/msg/u_int16.h"
// Member `id`
// Member `counter`
#include "std_msgs/msg/detail/u_int16__rosidl_typesupport_introspection_c.h"
// Member `platoon_acc_x`
// Member `platoon_mapmatching_isvalid`
// Member `platoon_mapmatching_roadindex`
// Member `platoon_mapmatching_s`
// Member `platoon_velocity`
#include "std_msgs/msg/float32.h"
// Member `platoon_acc_x`
// Member `platoon_mapmatching_isvalid`
// Member `platoon_mapmatching_roadindex`
// Member `platoon_mapmatching_s`
// Member `platoon_velocity`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__PlatoonState__init(message_memory);
}

void PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_fini_function(void * message_memory)
{
  buggy_msgs__msg__PlatoonState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__PlatoonState, id),  // bytes offset in struct
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
    offsetof(buggy_msgs__msg__PlatoonState, counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "platoon_acc_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__PlatoonState, platoon_acc_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "platoon_mapmatching_isvalid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__PlatoonState, platoon_mapmatching_isvalid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "platoon_mapmatching_roadindex",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__PlatoonState, platoon_mapmatching_roadindex),  // bytes offset in struct
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
    offsetof(buggy_msgs__msg__PlatoonState, platoon_mapmatching_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "platoon_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__PlatoonState, platoon_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_members = {
  "buggy_msgs__msg",  // message namespace
  "PlatoonState",  // message name
  7,  // number of fields
  sizeof(buggy_msgs__msg__PlatoonState),
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array,  // message members
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_init_function,  // function to initialize message memory (memory has to be allocated)
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_type_support_handle = {
  0,
  &PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, PlatoonState)() {
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt16)();
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, UInt16)();
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  if (!PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_type_support_handle.typesupport_identifier) {
    PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PlatoonState__rosidl_typesupport_introspection_c__PlatoonState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
