// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/RCCtrlState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_RCCtrlState_rc3_value
{
public:
  explicit Init_RCCtrlState_rc3_value(::buggy_msgs::msg::RCCtrlState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::RCCtrlState rc3_value(::buggy_msgs::msg::RCCtrlState::_rc3_value_type arg)
  {
    msg_.rc3_value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlState msg_;
};

class Init_RCCtrlState_rc2_value
{
public:
  explicit Init_RCCtrlState_rc2_value(::buggy_msgs::msg::RCCtrlState & msg)
  : msg_(msg)
  {}
  Init_RCCtrlState_rc3_value rc2_value(::buggy_msgs::msg::RCCtrlState::_rc2_value_type arg)
  {
    msg_.rc2_value = std::move(arg);
    return Init_RCCtrlState_rc3_value(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlState msg_;
};

class Init_RCCtrlState_rc1_value
{
public:
  explicit Init_RCCtrlState_rc1_value(::buggy_msgs::msg::RCCtrlState & msg)
  : msg_(msg)
  {}
  Init_RCCtrlState_rc2_value rc1_value(::buggy_msgs::msg::RCCtrlState::_rc1_value_type arg)
  {
    msg_.rc1_value = std::move(arg);
    return Init_RCCtrlState_rc2_value(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlState msg_;
};

class Init_RCCtrlState_control_disabled
{
public:
  explicit Init_RCCtrlState_control_disabled(::buggy_msgs::msg::RCCtrlState & msg)
  : msg_(msg)
  {}
  Init_RCCtrlState_rc1_value control_disabled(::buggy_msgs::msg::RCCtrlState::_control_disabled_type arg)
  {
    msg_.control_disabled = std::move(arg);
    return Init_RCCtrlState_rc1_value(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlState msg_;
};

class Init_RCCtrlState_ro2car_enabled
{
public:
  explicit Init_RCCtrlState_ro2car_enabled(::buggy_msgs::msg::RCCtrlState & msg)
  : msg_(msg)
  {}
  Init_RCCtrlState_control_disabled ro2car_enabled(::buggy_msgs::msg::RCCtrlState::_ro2car_enabled_type arg)
  {
    msg_.ro2car_enabled = std::move(arg);
    return Init_RCCtrlState_control_disabled(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlState msg_;
};

class Init_RCCtrlState_joyctrl_enabled
{
public:
  Init_RCCtrlState_joyctrl_enabled()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RCCtrlState_ro2car_enabled joyctrl_enabled(::buggy_msgs::msg::RCCtrlState::_joyctrl_enabled_type arg)
  {
    msg_.joyctrl_enabled = std::move(arg);
    return Init_RCCtrlState_ro2car_enabled(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::RCCtrlState>()
{
  return buggy_msgs::msg::builder::Init_RCCtrlState_joyctrl_enabled();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE__BUILDER_HPP_
