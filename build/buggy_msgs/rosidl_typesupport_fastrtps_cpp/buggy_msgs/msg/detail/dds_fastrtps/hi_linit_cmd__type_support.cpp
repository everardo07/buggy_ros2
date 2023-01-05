// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/hi_linit_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "buggy_msgs/msg/detail/hi_linit_cmd__struct.hpp"

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
  const std_msgs::msg::Int16 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Int16 &);
size_t get_serialized_size(
  const std_msgs::msg::Int16 &,
  size_t current_alignment);
size_t
max_serialized_size_Int16(
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
  const std_msgs::msg::Int16 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Int16 &);
size_t get_serialized_size(
  const std_msgs::msg::Int16 &,
  size_t current_alignment);
size_t
max_serialized_size_Int16(
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
  const std_msgs::msg::Int16 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Int16 &);
size_t get_serialized_size(
  const std_msgs::msg::Int16 &,
  size_t current_alignment);
size_t
max_serialized_size_Int16(
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
  const buggy_msgs::msg::HILinitCMD & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: counter
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.counter,
    cdr);
  // Member: lon_mm
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lon_mm,
    cdr);
  // Member: lon_mm_frac
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lon_mm_frac,
    cdr);
  // Member: lat_mm
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lat_mm,
    cdr);
  // Member: lat_mm_frac
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lat_mm_frac,
    cdr);
  // Member: angle
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.angle,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy_msgs::msg::HILinitCMD & ros_message)
{
  // Member: counter
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.counter);

  // Member: lon_mm
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lon_mm);

  // Member: lon_mm_frac
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lon_mm_frac);

  // Member: lat_mm
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lat_mm);

  // Member: lat_mm_frac
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lat_mm_frac);

  // Member: angle
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.angle);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
get_serialized_size(
  const buggy_msgs::msg::HILinitCMD & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: counter

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.counter, current_alignment);
  // Member: lon_mm

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lon_mm, current_alignment);
  // Member: lon_mm_frac

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lon_mm_frac, current_alignment);
  // Member: lat_mm

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lat_mm, current_alignment);
  // Member: lat_mm_frac

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lat_mm_frac, current_alignment);
  // Member: angle

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.angle, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
max_serialized_size_HILinitCMD(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: counter
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_UInt8(
        full_bounded, current_alignment);
    }
  }

  // Member: lon_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Int16(
        full_bounded, current_alignment);
    }
  }

  // Member: lon_mm_frac
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: lat_mm
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Int16(
        full_bounded, current_alignment);
    }
  }

  // Member: lat_mm_frac
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: angle
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Int16(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _HILinitCMD__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::HILinitCMD *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HILinitCMD__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<buggy_msgs::msg::HILinitCMD *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HILinitCMD__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::HILinitCMD *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HILinitCMD__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_HILinitCMD(full_bounded, 0);
}

static message_type_support_callbacks_t _HILinitCMD__callbacks = {
  "buggy_msgs::msg",
  "HILinitCMD",
  _HILinitCMD__cdr_serialize,
  _HILinitCMD__cdr_deserialize,
  _HILinitCMD__get_serialized_size,
  _HILinitCMD__max_serialized_size
};

static rosidl_message_type_support_t _HILinitCMD__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HILinitCMD__callbacks,
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
get_message_type_support_handle<buggy_msgs::msg::HILinitCMD>()
{
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_HILinitCMD__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy_msgs, msg, HILinitCMD)() {
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_HILinitCMD__handle;
}

#ifdef __cplusplus
}
#endif
