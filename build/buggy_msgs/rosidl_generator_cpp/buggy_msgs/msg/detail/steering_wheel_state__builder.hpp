// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/SteeringWheelState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/steering_wheel_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringWheelState_steering_wheel_angle
{
public:
  Init_SteeringWheelState_steering_wheel_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::buggy_msgs::msg::SteeringWheelState steering_wheel_angle(::buggy_msgs::msg::SteeringWheelState::_steering_wheel_angle_type arg)
  {
    msg_.steering_wheel_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringWheelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::SteeringWheelState>()
{
  return buggy_msgs::msg::builder::Init_SteeringWheelState_steering_wheel_angle();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_WHEEL_STATE__BUILDER_HPP_
