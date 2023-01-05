// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/DriveStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/drive_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_DriveStateStamped_drive_state
{
public:
  explicit Init_DriveStateStamped_drive_state(::buggy_msgs::msg::DriveStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::DriveStateStamped drive_state(::buggy_msgs::msg::DriveStateStamped::_drive_state_type arg)
  {
    msg_.drive_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::DriveStateStamped msg_;
};

class Init_DriveStateStamped_header
{
public:
  Init_DriveStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DriveStateStamped_drive_state header(::buggy_msgs::msg::DriveStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DriveStateStamped_drive_state(msg_);
  }

private:
  ::buggy_msgs::msg::DriveStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::DriveStateStamped>()
{
  return buggy_msgs::msg::builder::Init_DriveStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__DRIVE_STATE_STAMPED__BUILDER_HPP_
