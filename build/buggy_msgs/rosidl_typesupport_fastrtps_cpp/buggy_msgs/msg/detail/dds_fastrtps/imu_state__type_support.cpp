// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/IMUState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/imu_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "buggy_msgs/msg/detail/imu_state__struct.hpp"

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
  const std_msgs::msg::Float64 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float64 &);
size_t get_serialized_size(
  const std_msgs::msg::Float64 &,
  size_t current_alignment);
size_t
max_serialized_size_Float64(
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
  const std_msgs::msg::Float64 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float64 &);
size_t get_serialized_size(
  const std_msgs::msg::Float64 &,
  size_t current_alignment);
size_t
max_serialized_size_Float64(
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
  const std_msgs::msg::Float64 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Float64 &);
size_t get_serialized_size(
  const std_msgs::msg::Float64 &,
  size_t current_alignment);
size_t
max_serialized_size_Float64(
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
  const buggy_msgs::msg::IMUState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: imu_gz
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu_gz,
    cdr);
  // Member: imu_ax
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu_ax,
    cdr);
  // Member: imu_ay
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.imu_ay,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy_msgs::msg::IMUState & ros_message)
{
  // Member: imu_gz
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu_gz);

  // Member: imu_ax
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu_ax);

  // Member: imu_ay
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.imu_ay);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
get_serialized_size(
  const buggy_msgs::msg::IMUState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: imu_gz

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu_gz, current_alignment);
  // Member: imu_ax

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu_ax, current_alignment);
  // Member: imu_ay

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.imu_ay, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
max_serialized_size_IMUState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: imu_gz
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float64(
        full_bounded, current_alignment);
    }
  }

  // Member: imu_ax
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float64(
        full_bounded, current_alignment);
    }
  }

  // Member: imu_ay
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float64(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _IMUState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::IMUState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IMUState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<buggy_msgs::msg::IMUState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IMUState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::IMUState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IMUState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_IMUState(full_bounded, 0);
}

static message_type_support_callbacks_t _IMUState__callbacks = {
  "buggy_msgs::msg",
  "IMUState",
  _IMUState__cdr_serialize,
  _IMUState__cdr_deserialize,
  _IMUState__get_serialized_size,
  _IMUState__max_serialized_size
};

static rosidl_message_type_support_t _IMUState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IMUState__callbacks,
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
get_message_type_support_handle<buggy_msgs::msg::IMUState>()
{
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_IMUState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy_msgs, msg, IMUState)() {
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_IMUState__handle;
}

#ifdef __cplusplus
}
#endif
