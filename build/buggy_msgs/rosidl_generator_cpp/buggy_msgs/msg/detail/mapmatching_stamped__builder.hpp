// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/MapmatchingStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__MAPMATCHING_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__MAPMATCHING_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/mapmatching_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_MapmatchingStamped_map_matching
{
public:
  explicit Init_MapmatchingStamped_map_matching(::buggy_msgs::msg::MapmatchingStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::MapmatchingStamped map_matching(::buggy_msgs::msg::MapmatchingStamped::_map_matching_type arg)
  {
    msg_.map_matching = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::MapmatchingStamped msg_;
};

class Init_MapmatchingStamped_header
{
public:
  Init_MapmatchingStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapmatchingStamped_map_matching header(::buggy_msgs::msg::MapmatchingStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MapmatchingStamped_map_matching(msg_);
  }

private:
  ::buggy_msgs::msg::MapmatchingStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::MapmatchingStamped>()
{
  return buggy_msgs::msg::builder::Init_MapmatchingStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__MAPMATCHING_STAMPED__BUILDER_HPP_
