// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/GNSSStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__GNSS_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__GNSS_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/gnss_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSStateStamped_gnss_state
{
public:
  explicit Init_GNSSStateStamped_gnss_state(::buggy_msgs::msg::GNSSStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::GNSSStateStamped gnss_state(::buggy_msgs::msg::GNSSStateStamped::_gnss_state_type arg)
  {
    msg_.gnss_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSStateStamped msg_;
};

class Init_GNSSStateStamped_header
{
public:
  Init_GNSSStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GNSSStateStamped_gnss_state header(::buggy_msgs::msg::GNSSStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GNSSStateStamped_gnss_state(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::GNSSStateStamped>()
{
  return buggy_msgs::msg::builder::Init_GNSSStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__GNSS_STATE_STAMPED__BUILDER_HPP_
