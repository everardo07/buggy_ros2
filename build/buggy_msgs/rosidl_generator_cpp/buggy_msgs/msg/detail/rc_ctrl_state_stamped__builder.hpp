// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/RCCtrlStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/rc_ctrl_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_RCCtrlStateStamped_rcctrl_state
{
public:
  explicit Init_RCCtrlStateStamped_rcctrl_state(::buggy_msgs::msg::RCCtrlStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::RCCtrlStateStamped rcctrl_state(::buggy_msgs::msg::RCCtrlStateStamped::_rcctrl_state_type arg)
  {
    msg_.rcctrl_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlStateStamped msg_;
};

class Init_RCCtrlStateStamped_header
{
public:
  Init_RCCtrlStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RCCtrlStateStamped_rcctrl_state header(::buggy_msgs::msg::RCCtrlStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RCCtrlStateStamped_rcctrl_state(msg_);
  }

private:
  ::buggy_msgs::msg::RCCtrlStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::RCCtrlStateStamped>()
{
  return buggy_msgs::msg::builder::Init_RCCtrlStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__RC_CTRL_STATE_STAMPED__BUILDER_HPP_
