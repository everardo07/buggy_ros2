// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/DriveState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/drive_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveState_l_current
{
public:
  explicit Init_DriveState_l_current(::buggy_msgs::msg::DriveState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::DriveState l_current(::buggy_msgs::msg::DriveState::_l_current_type arg)
  {
    msg_.l_current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::DriveState msg_;
};

class Init_DriveState_r_current
{
public:
  Init_DriveState_r_current()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveState_l_current r_current(::buggy_msgs::msg::DriveState::_r_current_type arg)
  {
    msg_.r_current = std::move(arg);
    return Init_DriveState_l_current(msg_);
  }

private:
  ::buggy_msgs::msg::DriveState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::DriveState>()
{
  return buggy_msgs::msg::builder::Init_DriveState_r_current();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE__BUILDER_HPP_
