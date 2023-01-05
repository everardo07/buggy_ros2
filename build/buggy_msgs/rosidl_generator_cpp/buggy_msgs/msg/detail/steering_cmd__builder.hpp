// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/SteeringCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_

#include "buggy_msgs/msg/detail/steering_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringCMD_steering_torque
{
public:
  explicit Init_SteeringCMD_steering_torque(::buggy_msgs::msg::SteeringCMD & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::SteeringCMD steering_torque(::buggy_msgs::msg::SteeringCMD::_steering_torque_type arg)
  {
    msg_.steering_torque = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringCMD msg_;
};

class Init_SteeringCMD_steering_angle_velocity
{
public:
  explicit Init_SteeringCMD_steering_angle_velocity(::buggy_msgs::msg::SteeringCMD & msg)
  : msg_(msg)
  {}
  Init_SteeringCMD_steering_torque steering_angle_velocity(::buggy_msgs::msg::SteeringCMD::_steering_angle_velocity_type arg)
  {
    msg_.steering_angle_velocity = std::move(arg);
    return Init_SteeringCMD_steering_torque(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringCMD msg_;
};

class Init_SteeringCMD_steering_angle
{
public:
  Init_SteeringCMD_steering_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringCMD_steering_angle_velocity steering_angle(::buggy_msgs::msg::SteeringCMD::_steering_angle_type arg)
  {
    msg_.steering_angle = std::move(arg);
    return Init_SteeringCMD_steering_angle_velocity(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringCMD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::SteeringCMD>()
{
  return buggy_msgs::msg::builder::Init_SteeringCMD_steering_angle();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_CMD__BUILDER_HPP_
