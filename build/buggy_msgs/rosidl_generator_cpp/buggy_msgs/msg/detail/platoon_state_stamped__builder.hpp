// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/PlatoonStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/platoon_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_PlatoonStateStamped_platoon_state
{
public:
  explicit Init_PlatoonStateStamped_platoon_state(::buggy_msgs::msg::PlatoonStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::PlatoonStateStamped platoon_state(::buggy_msgs::msg::PlatoonStateStamped::_platoon_state_type arg)
  {
    msg_.platoon_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonStateStamped msg_;
};

class Init_PlatoonStateStamped_header
{
public:
  Init_PlatoonStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlatoonStateStamped_platoon_state header(::buggy_msgs::msg::PlatoonStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PlatoonStateStamped_platoon_state(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::PlatoonStateStamped>()
{
  return buggy_msgs::msg::builder::Init_PlatoonStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE_STAMPED__BUILDER_HPP_
