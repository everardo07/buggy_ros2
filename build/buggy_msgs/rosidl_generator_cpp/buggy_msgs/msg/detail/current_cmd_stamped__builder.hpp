// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/CurrentCMDStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/current_cmd_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_CurrentCMDStamped_current
{
public:
  explicit Init_CurrentCMDStamped_current(::buggy_msgs::msg::CurrentCMDStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::CurrentCMDStamped current(::buggy_msgs::msg::CurrentCMDStamped::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::CurrentCMDStamped msg_;
};

class Init_CurrentCMDStamped_header
{
public:
  Init_CurrentCMDStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CurrentCMDStamped_current header(::buggy_msgs::msg::CurrentCMDStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CurrentCMDStamped_current(msg_);
  }

private:
  ::buggy_msgs::msg::CurrentCMDStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::CurrentCMDStamped>()
{
  return buggy_msgs::msg::builder::Init_CurrentCMDStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD_STAMPED__BUILDER_HPP_
