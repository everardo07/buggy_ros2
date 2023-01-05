// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/CurrentCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD__BUILDER_HPP_

#include "buggy_msgs/msg/detail/current_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_CurrentCMD_current_percentage
{
public:
  Init_CurrentCMD_current_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::buggy_msgs::msg::CurrentCMD current_percentage(::buggy_msgs::msg::CurrentCMD::_current_percentage_type arg)
  {
    msg_.current_percentage = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::CurrentCMD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::CurrentCMD>()
{
  return buggy_msgs::msg::builder::Init_CurrentCMD_current_percentage();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__CURRENT_CMD__BUILDER_HPP_
