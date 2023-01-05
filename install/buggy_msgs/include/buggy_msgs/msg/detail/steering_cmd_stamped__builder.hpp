// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/SteeringCMDStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__STEERING_CMD_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__STEERING_CMD_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/steering_cmd_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_SteeringCMDStamped_steering
{
public:
  explicit Init_SteeringCMDStamped_steering(::buggy_msgs::msg::SteeringCMDStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::SteeringCMDStamped steering(::buggy_msgs::msg::SteeringCMDStamped::_steering_type arg)
  {
    msg_.steering = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringCMDStamped msg_;
};

class Init_SteeringCMDStamped_header
{
public:
  Init_SteeringCMDStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SteeringCMDStamped_steering header(::buggy_msgs::msg::SteeringCMDStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SteeringCMDStamped_steering(msg_);
  }

private:
  ::buggy_msgs::msg::SteeringCMDStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::SteeringCMDStamped>()
{
  return buggy_msgs::msg::builder::Init_SteeringCMDStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__STEERING_CMD_STAMPED__BUILDER_HPP_
