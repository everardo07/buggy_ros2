// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from buggy_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "buggy_msgs/msg/detail/vehicle_state_stamped__rosidl_typesupport_introspection_c.h"
#include "buggy_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "buggy_msgs/msg/detail/vehicle_state_stamped__functions.h"
#include "buggy_msgs/msg/detail/vehicle_state_stamped__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `vehicle_state`
#include "buggy_msgs/msg/vehicle_state.h"
// Member `vehicle_state`
#include "buggy_msgs/msg/detail/vehicle_state__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  buggy_msgs__msg__VehicleStateStamped__init(message_memory);
}

void VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_fini_function(void * message_memory)
{
  buggy_msgs__msg__VehicleStateStamped__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__VehicleStateStamped, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs__msg__VehicleStateStamped, vehicle_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_members = {
  "buggy_msgs__msg",  // message namespace
  "VehicleStateStamped",  // message name
  2,  // number of fields
  sizeof(buggy_msgs__msg__VehicleStateStamped),
  VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_member_array,  // message members
  VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_type_support_handle = {
  0,
  &VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, VehicleStateStamped)() {
  VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, buggy_msgs, msg, VehicleState)();
  if (!VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_type_support_handle.typesupport_identifier) {
    VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &VehicleStateStamped__rosidl_typesupport_introspection_c__VehicleStateStamped_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
