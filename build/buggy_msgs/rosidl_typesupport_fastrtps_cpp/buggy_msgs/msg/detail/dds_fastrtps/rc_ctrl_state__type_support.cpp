// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/rc_ctrl_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::UInt8 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::UInt8 &);
size_t get_serialized_size(
  const std_msgs::msg::UInt8 &,
  size_t current_alignment);
size_t
max_serialized_size_UInt8(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::UInt8 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::UInt8 &);
size_t get_serialized_size(
  const std_msgs::msg::UInt8 &,
  size_t current_alignment);
size_t
max_serialized_size_UInt8(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::UInt8 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::UInt8 &);
size_t get_serialized_size(
  const std_msgs::msg::UInt8 &,
  size_t current_alignment);
size_t
max_serialized_size_UInt8(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Float32 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float32 &);
size_t get_serialized_size(
  const std_msgs::msg::Float32 &,
  size_t current_alignment);
size_t
max_serialized_size_Float32(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Float32 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float32 &);
size_t get_serialized_size(
  const std_msgs::msg::Float32 &,
  size_t current_alignment);
size_t
max_serialized_size_Float32(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Float32 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float32 &);
size_t get_serialized_size(
  const std_msgs::msg::Float32 &,
  size_t current_alignment);
size_t
max_serialized_size_Float32(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace buggy_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_serialize(
  const buggy_msgs::msg::RCCtrlState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joyctrl_enabled
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.joyctrl_enabled,
    cdr);
  // Member: ro2car_enabled
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ro2car_enabled,
    cdr);
  // Member: control_disabled
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.control_disabled,
    cdr);
  // Member: rc1_value
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rc1_value,
    cdr);
  // Member: rc2_value
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rc2_value,
    cdr);
  // Member: rc3_value
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rc3_value,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy_msgs::msg::RCCtrlState & ros_message)
{
  // Member: joyctrl_enabled
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.joyctrl_enabled);

  // Member: ro2car_enabled
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ro2car_enabled);

  // Member: control_disabled
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.control_disabled);

  // Member: rc1_value
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rc1_value);

  // Member: rc2_value
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rc2_value);

  // Member: rc3_value
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rc3_value);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
get_serialized_size(
  const buggy_msgs::msg::RCCtrlState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joyctrl_enabled

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.joyctrl_enabled, current_alignment);
  // Member: ro2car_enabled

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ro2car_enabled, current_alignment);
  // Member: control_disabled

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.control_disabled, current_alignment);
  // Member: rc1_value

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rc1_value, current_alignment);
  // Member: rc2_value

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rc2_value, current_alignment);
  // Member: rc3_value

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rc3_value, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
max_serialized_size_RCCtrlState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: joyctrl_enabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt8(
        full_bounded, current_alignment);
    }
  }

  // Member: ro2car_enabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt8(
        full_bounded, current_alignment);
    }
  }

  // Member: control_disabled
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt8(
        full_bounded, current_alignment);
    }
  }

  // Member: rc1_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: rc2_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: rc3_value
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RCCtrlState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::RCCtrlState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RCCtrlState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<buggy_msgs::msg::RCCtrlState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RCCtrlState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::RCCtrlState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RCCtrlState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RCCtrlState(full_bounded, 0);
}

static message_type_support_callbacks_t _RCCtrlState__callbacks = {
  "buggy_msgs::msg",
  "RCCtrlState",
  _RCCtrlState__cdr_serialize,
  _RCCtrlState__cdr_deserialize,
  _RCCtrlState__get_serialized_size,
  _RCCtrlState__max_serialized_size
};

static rosidl_message_type_support_t _RCCtrlState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RCCtrlState__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace buggy_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_buggy_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<buggy_msgs::msg::RCCtrlState>()
{
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_RCCtrlState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy_msgs, msg, RCCtrlState)() {
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_RCCtrlState__handle;
}

#ifdef __cplusplus
}
#endif
