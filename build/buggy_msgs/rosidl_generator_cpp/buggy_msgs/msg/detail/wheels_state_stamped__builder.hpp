// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/WheelsStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/wheels_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelsStateStamped_wheels
{
public:
  explicit Init_WheelsStateStamped_wheels(::buggy_msgs::msg::WheelsStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::WheelsStateStamped wheels(::buggy_msgs::msg::WheelsStateStamped::_wheels_type arg)
  {
    msg_.wheels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::WheelsStateStamped msg_;
};

class Init_WheelsStateStamped_header
{
public:
  Init_WheelsStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelsStateStamped_wheels header(::buggy_msgs::msg::WheelsStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelsStateStamped_wheels(msg_);
  }

private:
  ::buggy_msgs::msg::WheelsStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::WheelsStateStamped>()
{
  return buggy_msgs::msg::builder::Init_WheelsStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__WHEELS_STATE_STAMPED__BUILDER_HPP_
