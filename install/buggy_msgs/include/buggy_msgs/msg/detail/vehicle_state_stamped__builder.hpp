// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/VehicleStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/vehicle_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStateStamped_vehicle_state
{
public:
  explicit Init_VehicleStateStamped_vehicle_state(::buggy_msgs::msg::VehicleStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::VehicleStateStamped vehicle_state(::buggy_msgs::msg::VehicleStateStamped::_vehicle_state_type arg)
  {
    msg_.vehicle_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::VehicleStateStamped msg_;
};

class Init_VehicleStateStamped_header
{
public:
  Init_VehicleStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStateStamped_vehicle_state header(::buggy_msgs::msg::VehicleStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VehicleStateStamped_vehicle_state(msg_);
  }

private:
  ::buggy_msgs::msg::VehicleStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::VehicleStateStamped>()
{
  return buggy_msgs::msg::builder::Init_VehicleStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE_STAMPED__BUILDER_HPP_
