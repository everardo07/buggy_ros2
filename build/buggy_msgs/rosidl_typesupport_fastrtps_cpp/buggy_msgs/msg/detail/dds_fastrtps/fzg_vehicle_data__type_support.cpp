// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/fzg_vehicle_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "buggy_msgs/msg/detail/fzg_vehicle_data__struct.hpp"

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
  const buggy_msgs::msg::FzgVehicleData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: counter
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.counter,
    cdr);
  // Member: longitudinal_acc
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.longitudinal_acc,
    cdr);
  // Member: velocity
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.velocity,
    cdr);
  // Member: yawrate
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.yawrate,
    cdr);
  // Member: set_curvature
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.set_curvature,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy_msgs::msg::FzgVehicleData & ros_message)
{
  // Member: counter
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.counter);

  // Member: longitudinal_acc
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.longitudinal_acc);

  // Member: velocity
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.velocity);

  // Member: yawrate
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.yawrate);

  // Member: set_curvature
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.set_curvature);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
get_serialized_size(
  const buggy_msgs::msg::FzgVehicleData & ros_message,
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
  // Member: longitudinal_acc

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.longitudinal_acc, current_alignment);
  // Member: velocity

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.velocity, current_alignment);
  // Member: yawrate

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.yawrate, current_alignment);
  // Member: set_curvature

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.set_curvature, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
max_serialized_size_FzgVehicleData(
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
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: longitudinal_acc
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: velocity
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: yawrate
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Float32(
        full_bounded, current_alignment);
    }
  }

  // Member: set_curvature
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

static bool _FzgVehicleData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::FzgVehicleData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FzgVehicleData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<buggy_msgs::msg::FzgVehicleData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FzgVehicleData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::FzgVehicleData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FzgVehicleData__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FzgVehicleData(full_bounded, 0);
}

static message_type_support_callbacks_t _FzgVehicleData__callbacks = {
  "buggy_msgs::msg",
  "FzgVehicleData",
  _FzgVehicleData__cdr_serialize,
  _FzgVehicleData__cdr_deserialize,
  _FzgVehicleData__get_serialized_size,
  _FzgVehicleData__max_serialized_size
};

static rosidl_message_type_support_t _FzgVehicleData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FzgVehicleData__callbacks,
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
get_message_type_support_handle<buggy_msgs::msg::FzgVehicleData>()
{
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_FzgVehicleData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy_msgs, msg, FzgVehicleData)() {
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_FzgVehicleData__handle;
}

#ifdef __cplusplus
}
#endif
