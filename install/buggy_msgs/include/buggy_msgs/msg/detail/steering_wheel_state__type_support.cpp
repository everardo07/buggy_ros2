// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "buggy_msgs/msg/detail/steering_wheel_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace buggy_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SteeringWheelState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) buggy_msgs::msg::SteeringWheelState(_init);
}

void SteeringWheelState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<buggy_msgs::msg::SteeringWheelState *>(message_memory);
  typed_message->~SteeringWheelState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SteeringWheelState_message_member_array[1] = {
  {
    "steering_wheel_angle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::SteeringWheelState, steering_wheel_angle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SteeringWheelState_message_members = {
  "buggy_msgs::msg",  // message namespace
  "SteeringWheelState",  // message name
  1,  // number of fields
  sizeof(buggy_msgs::msg::SteeringWheelState),
  SteeringWheelState_message_member_array,  // message members
  SteeringWheelState_init_function,  // function to initialize message memory (memory has to be allocated)
  SteeringWheelState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SteeringWheelState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SteeringWheelState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace buggy_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<buggy_msgs::msg::SteeringWheelState>()
{
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::SteeringWheelState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, buggy_msgs, msg, SteeringWheelState)() {
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::SteeringWheelState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
