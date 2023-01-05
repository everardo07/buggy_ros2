// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/platoon_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "buggy_msgs/msg/detail/platoon_state__struct.hpp"

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
  const std_msgs::msg::UInt16 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::UInt16 &);
size_t get_serialized_size(
  const std_msgs::msg::UInt16 &,
  size_t current_alignment);
size_t
max_serialized_size_UInt16(
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
  const std_msgs::msg::UInt16 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::UInt16 &);
size_t get_serialized_size(
  const std_msgs::msg::UInt16 &,
  size_t current_alignment);
size_t
max_serialized_size_UInt16(
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
  const buggy_msgs::msg::PlatoonState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.id,
    cdr);
  // Member: counter
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.counter,
    cdr);
  // Member: platoon_acc_x
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.platoon_acc_x,
    cdr);
  // Member: platoon_mapmatching_isvalid
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.platoon_mapmatching_isvalid,
    cdr);
  // Member: platoon_mapmatching_roadindex
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.platoon_mapmatching_roadindex,
    cdr);
  // Member: platoon_mapmatching_s
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.platoon_mapmatching_s,
    cdr);
  // Member: platoon_velocity
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.platoon_velocity,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy_msgs::msg::PlatoonState & ros_message)
{
  // Member: id
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.id);

  // Member: counter
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.counter);

  // Member: platoon_acc_x
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.platoon_acc_x);

  // Member: platoon_mapmatching_isvalid
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.platoon_mapmatching_isvalid);

  // Member: platoon_mapmatching_roadindex
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.platoon_mapmatching_roadindex);

  // Member: platoon_mapmatching_s
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.platoon_mapmatching_s);

  // Member: platoon_velocity
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.platoon_velocity);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
get_serialized_size(
  const buggy_msgs::msg::PlatoonState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.id, current_alignment);
  // Member: counter

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.counter, current_alignment);
  // Member: platoon_acc_x

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.platoon_acc_x, current_alignment);
  // Member: platoon_mapmatching_isvalid

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.platoon_mapmatching_isvalid, current_alignment);
  // Member: platoon_mapmatching_roadindex

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.platoon_mapmatching_roadindex, current_alignment);
  // Member: platoon_mapmatching_s

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.platoon_mapmatching_s, current_alignment);
  // Member: platoon_velocity

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.platoon_velocity, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
max_serialized_size_PlatoonState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt16(
        full_bounded, current_alignment);
    }
  }

  // Member: counter
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt16(
        full_bounded, current_alignment);
    }
  }

  // Member: platoon_acc_x
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: platoon_mapmatching_isvalid
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: platoon_mapmatching_roadindex
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: platoon_mapmatching_s
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: platoon_velocity
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

static bool _PlatoonState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::PlatoonState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlatoonState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<buggy_msgs::msg::PlatoonState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlatoonState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::PlatoonState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlatoonState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PlatoonState(full_bounded, 0);
}

static message_type_support_callbacks_t _PlatoonState__callbacks = {
  "buggy_msgs::msg",
  "PlatoonState",
  _PlatoonState__cdr_serialize,
  _PlatoonState__cdr_deserialize,
  _PlatoonState__get_serialized_size,
  _PlatoonState__max_serialized_size
};

static rosidl_message_type_support_t _PlatoonState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlatoonState__callbacks,
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
get_message_type_support_handle<buggy_msgs::msg::PlatoonState>()
{
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_PlatoonState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy_msgs, msg, PlatoonState)() {
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_PlatoonState__handle;
}

#ifdef __cplusplus
}
#endif
