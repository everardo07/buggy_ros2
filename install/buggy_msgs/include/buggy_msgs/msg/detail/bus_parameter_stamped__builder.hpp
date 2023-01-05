// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/BUSParameterStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/bus_parameter_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_BUSParameterStamped_bus_parameter
{
public:
  explicit Init_BUSParameterStamped_bus_parameter(::buggy_msgs::msg::BUSParameterStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::BUSParameterStamped bus_parameter(::buggy_msgs::msg::BUSParameterStamped::_bus_parameter_type arg)
  {
    msg_.bus_parameter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameterStamped msg_;
};

class Init_BUSParameterStamped_header
{
public:
  Init_BUSParameterStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BUSParameterStamped_bus_parameter header(::buggy_msgs::msg::BUSParameterStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BUSParameterStamped_bus_parameter(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameterStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::BUSParameterStamped>()
{
  return buggy_msgs::msg::builder::Init_BUSParameterStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER_STAMPED__BUILDER_HPP_
