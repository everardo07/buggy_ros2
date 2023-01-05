// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/SteeringWheelStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/steering_wheel_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringWheelStateStamped_steering_wheel_state
{
public:
  explicit Init_SteeringWheelStateStamped_steering_wheel_state(::buggy_msgs::msg::SteeringWheelStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::SteeringWheelStateStamped steering_wheel_state(::buggy_msgs::msg::SteeringWheelStateStamped::_steering_wheel_state_type arg)
  {
    msg_.steering_wheel_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringWheelStateStamped msg_;
};

class Init_SteeringWheelStateStamped_header
{
public:
  Init_SteeringWheelStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringWheelStateStamped_steering_wheel_state header(::buggy_msgs::msg::SteeringWheelStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringWheelStateStamped_steering_wheel_state(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringWheelStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::SteeringWheelStateStamped>()
{
  return buggy_msgs::msg::builder::Init_SteeringWheelStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE_STAMPED__BUILDER_HPP_
