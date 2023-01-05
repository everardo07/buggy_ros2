// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/DriveStateStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "buggy_msgs/msg/detail/drive_state_stamped__struct.hpp"
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

void DriveStateStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) buggy_msgs::msg::DriveStateStamped(_init);
}

void DriveStateStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<buggy_msgs::msg::DriveStateStamped *>(message_memory);
  typed_message->~DriveStateStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DriveStateStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::DriveStateStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "drive_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<buggy_msgs::msg::DriveState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::DriveStateStamped, drive_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DriveStateStamped_message_members = {
  "buggy_msgs::msg",  // message namespace
  "DriveStateStamped",  // message name
  2,  // number of fields
  sizeof(buggy_msgs::msg::DriveStateStamped),
  DriveStateStamped_message_member_array,  // message members
  DriveStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  DriveStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DriveStateStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DriveStateStamped_message_members,
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
get_message_type_support_handle<buggy_msgs::msg::DriveStateStamped>()
{
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::DriveStateStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, buggy_msgs, msg, DriveStateStamped)() {
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::DriveStateStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
