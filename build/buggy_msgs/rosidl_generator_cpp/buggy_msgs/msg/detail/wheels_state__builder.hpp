// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/WheelsState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/wheels_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelsState_lr_speed
{
public:
  explicit Init_WheelsState_lr_speed(::buggy_msgs::msg::WheelsState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::WheelsState lr_speed(::buggy_msgs::msg::WheelsState::_lr_speed_type arg)
  {
    msg_.lr_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::WheelsState msg_;
};

class Init_WheelsState_rr_speed
{
public:
  explicit Init_WheelsState_rr_speed(::buggy_msgs::msg::WheelsState & msg)
  : msg_(msg)
  {}
  Init_WheelsState_lr_speed rr_speed(::buggy_msgs::msg::WheelsState::_rr_speed_type arg)
  {
    msg_.rr_speed = std::move(arg);
    return Init_WheelsState_lr_speed(msg_);
  }

private:
  ::buggy_msgs::msg::WheelsState msg_;
};

class Init_WheelsState_lf_speed
{
public:
  explicit Init_WheelsState_lf_speed(::buggy_msgs::msg::WheelsState & msg)
  : msg_(msg)
  {}
  Init_WheelsState_rr_speed lf_speed(::buggy_msgs::msg::WheelsState::_lf_speed_type arg)
  {
    msg_.lf_speed = std::move(arg);
    return Init_WheelsState_rr_speed(msg_);
  }

private:
  ::buggy_msgs::msg::WheelsState msg_;
};

class Init_WheelsState_rf_speed
{
public:
  Init_WheelsState_rf_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelsState_lf_speed rf_speed(::buggy_msgs::msg::WheelsState::_rf_speed_type arg)
  {
    msg_.rf_speed = std::move(arg);
    return Init_WheelsState_lf_speed(msg_);
  }

private:
  ::buggy_msgs::msg::WheelsState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::WheelsState>()
{
  return buggy_msgs::msg::builder::Init_WheelsState_rf_speed();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE__BUILDER_HPP_
