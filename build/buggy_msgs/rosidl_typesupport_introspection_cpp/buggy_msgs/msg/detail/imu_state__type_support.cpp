// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/IMUState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "buggy_msgs/msg/detail/imu_state__struct.hpp"
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

void IMUState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) buggy_msgs::msg::IMUState(_init);
}

void IMUState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<buggy_msgs::msg::IMUState *>(message_memory);
  typed_message->~IMUState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IMUState_message_member_array[3] = {
  {
    "imu_gz",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::IMUState, imu_gz),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_ax",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::IMUState, imu_ax),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_ay",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Float64>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::IMUState, imu_ay),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IMUState_message_members = {
  "buggy_msgs::msg",  // message namespace
  "IMUState",  // message name
  3,  // number of fields
  sizeof(buggy_msgs::msg::IMUState),
  IMUState_message_member_array,  // message members
  IMUState_init_function,  // function to initialize message memory (memory has to be allocated)
  IMUState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IMUState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IMUState_message_members,
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
get_message_type_support_handle<buggy_msgs::msg::IMUState>()
{
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::IMUState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, buggy_msgs, msg, IMUState)() {
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::IMUState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
