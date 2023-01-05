// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/HILinitCMDStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/hi_linit_cmd_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_HILinitCMDStamped_hilinit
{
public:
  explicit Init_HILinitCMDStamped_hilinit(::buggy_msgs::msg::HILinitCMDStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::HILinitCMDStamped hilinit(::buggy_msgs::msg::HILinitCMDStamped::_hilinit_type arg)
  {
    msg_.hilinit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMDStamped msg_;
};

class Init_HILinitCMDStamped_header
{
public:
  Init_HILinitCMDStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HILinitCMDStamped_hilinit header(::buggy_msgs::msg::HILinitCMDStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HILinitCMDStamped_hilinit(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMDStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::HILinitCMDStamped>()
{
  return buggy_msgs::msg::builder::Init_HILinitCMDStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD_STAMPED__BUILDER_HPP_
