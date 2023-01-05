// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/WheelsStateStamped.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "buggy_msgs/msg/detail/wheels_state_stamped__struct.hpp"
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

void WheelsStateStamped_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) buggy_msgs::msg::WheelsStateStamped(_init);
}

void WheelsStateStamped_fini_function(void * message_memory)
{
  auto typed_message = static_cast<buggy_msgs::msg::WheelsStateStamped *>(message_memory);
  typed_message->~WheelsStateStamped();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelsStateStamped_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::WheelsStateStamped, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "wheels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<buggy_msgs::msg::WheelsState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(buggy_msgs::msg::WheelsStateStamped, wheels),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelsStateStamped_message_members = {
  "buggy_msgs::msg",  // message namespace
  "WheelsStateStamped",  // message name
  2,  // number of fields
  sizeof(buggy_msgs::msg::WheelsStateStamped),
  WheelsStateStamped_message_member_array,  // message members
  WheelsStateStamped_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelsStateStamped_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelsStateStamped_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelsStateStamped_message_members,
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
get_message_type_support_handle<buggy_msgs::msg::WheelsStateStamped>()
{
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::WheelsStateStamped_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, buggy_msgs, msg, WheelsStateStamped)() {
  return &::buggy_msgs::msg::rosidl_typesupport_introspection_cpp::WheelsStateStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
