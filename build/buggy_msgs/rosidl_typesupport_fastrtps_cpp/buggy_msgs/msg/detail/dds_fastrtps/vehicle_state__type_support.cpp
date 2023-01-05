// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from buggy_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "buggy_msgs/msg/detail/vehicle_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "buggy_msgs/msg/detail/vehicle_state__struct.hpp"

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
namespace buggy_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const buggy_msgs::msg::WheelsState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  buggy_msgs::msg::WheelsState &);
size_t get_serialized_size(
  const buggy_msgs::msg::WheelsState &,
  size_t current_alignment);
size_t
max_serialized_size_WheelsState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace buggy_msgs

namespace buggy_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const buggy_msgs::msg::SteeringWheelState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  buggy_msgs::msg::SteeringWheelState &);
size_t get_serialized_size(
  const buggy_msgs::msg::SteeringWheelState &,
  size_t current_alignment);
size_t
max_serialized_size_SteeringWheelState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace buggy_msgs

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
  const buggy_msgs::msg::VehicleState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wheels
  buggy_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wheels,
    cdr);
  // Member: steering_wheel
  buggy_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.steering_wheel,
    cdr);
  // Member: acceleration
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.acceleration,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  buggy_msgs::msg::VehicleState & ros_message)
{
  // Member: wheels
  buggy_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wheels);

  // Member: steering_wheel
  buggy_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.steering_wheel);

  // Member: acceleration
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.acceleration);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
get_serialized_size(
  const buggy_msgs::msg::VehicleState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wheels

  current_alignment +=
    buggy_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wheels, current_alignment);
  // Member: steering_wheel

  current_alignment +=
    buggy_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.steering_wheel, current_alignment);
  // Member: acceleration

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.acceleration, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_buggy_msgs
max_serialized_size_VehicleState(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: wheels
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        buggy_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WheelsState(
        full_bounded, current_alignment);
    }
  }

  // Member: steering_wheel
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        buggy_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SteeringWheelState(
        full_bounded, current_alignment);
    }
  }

  // Member: acceleration
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

static bool _VehicleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<buggy_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const buggy_msgs::msg::VehicleState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleState__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_VehicleState(full_bounded, 0);
}

static message_type_support_callbacks_t _VehicleState__callbacks = {
  "buggy_msgs::msg",
  "VehicleState",
  _VehicleState__cdr_serialize,
  _VehicleState__cdr_deserialize,
  _VehicleState__get_serialized_size,
  _VehicleState__max_serialized_size
};

static rosidl_message_type_support_t _VehicleState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleState__callbacks,
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
get_message_type_support_handle<buggy_msgs::msg::VehicleState>()
{
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_VehicleState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, buggy_msgs, msg, VehicleState)() {
  return &buggy_msgs::msg::typesupport_fastrtps_cpp::_VehicleState__handle;
}

#ifdef __cplusplus
}
#endif
