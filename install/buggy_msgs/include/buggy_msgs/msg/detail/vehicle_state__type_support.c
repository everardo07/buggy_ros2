// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/vehicle_state__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/vehicle_state__functions.h"
#include "buggy_msgs/msg/detail/vehicle_state__struct.h"


// Include directives for member types
// Member `wheels`
#include "buggy_msgs/msg/wheels_state.h"
// Member `wheels`
#include "buggy_msgs/msg/detail/wheels_state__rosidl_typesupport_introspection_c.h"
// Member `steering_wheel`
#include "buggy_msgs/msg/steering_wheel_state.h"
// Member `steering_wheel`
#include "buggy_msgs/msg/detail/steering_wheel_state__rosidl_typesupport_introspection_c.h"
// Member `acceleration`
#include "std_msgs/msg/float64.h"
// Member `acceleration`
#include "std_msgs/msg/detail/float64__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleState__rosidl_typesupport_introspection_c__VehicleState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__VehicleState__init(message_memory);
}

void VehicleState__rosidl_typesupport_introspection_c__VehicleState_fini_function(void * message_memory)
{
  buggy_msgs__msg__VehicleState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_member_array[3] = {
  {
    "wheels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__VehicleState, wheels),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steering_wheel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__VehicleState, steering_wheel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__VehicleState, acceleration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_members = {
  "buggy_msgs__msg",  // message namespace
  "VehicleState",  // message name
  3,  // number of fields
  sizeof(buggy_msgs__msg__VehicleState),
  VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_member_array,  // message members
  VehicleState__rosidl_typesupport_introspection_c__VehicleState_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleState__rosidl_typesupport_introspection_c__VehicleState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_type_support_handle = {
  0,
  &VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, VehicleState)() {
  VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, WheelsState)();
  VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, SteeringWheelState)();
  VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float64)();
  if (!VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_type_support_handle.typesupport_identifier) {
    VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleState__rosidl_typesupport_introspection_c__VehicleState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
