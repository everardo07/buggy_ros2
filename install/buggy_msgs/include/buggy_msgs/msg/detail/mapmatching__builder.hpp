// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/Mapmatching.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__BUILDER_HPP_

#include "buggy_msgs/msg/detail/mapmatching__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_Mapmatching_platoon_mapmatching_s
{
public:
  explicit Init_Mapmatching_platoon_mapmatching_s(::buggy_msgs::msg::Mapmatching & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::Mapmatching platoon_mapmatching_s(::buggy_msgs::msg::Mapmatching::_platoon_mapmatching_s_type arg)
  {
    msg_.platoon_mapmatching_s = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

class Init_Mapmatching_mapmatching_roadindex
{
public:
  explicit Init_Mapmatching_mapmatching_roadindex(::buggy_msgs::msg::Mapmatching & msg)
  : msg_(msg)
  {}
  Init_Mapmatching_platoon_mapmatching_s mapmatching_roadindex(::buggy_msgs::msg::Mapmatching::_mapmatching_roadindex_type arg)
  {
    msg_.mapmatching_roadindex = std::move(arg);
    return Init_Mapmatching_platoon_mapmatching_s(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

class Init_Mapmatching_mapmatching_is_valid
{
public:
  explicit Init_Mapmatching_mapmatching_is_valid(::buggy_msgs::msg::Mapmatching & msg)
  : msg_(msg)
  {}
  Init_Mapmatching_mapmatching_roadindex mapmatching_is_valid(::buggy_msgs::msg::Mapmatching::_mapmatching_is_valid_type arg)
  {
    msg_.mapmatching_is_valid = std::move(arg);
    return Init_Mapmatching_mapmatching_roadindex(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

class Init_Mapmatching_mapmatching_checksum
{
public:
  explicit Init_Mapmatching_mapmatching_checksum(::buggy_msgs::msg::Mapmatching & msg)
  : msg_(msg)
  {}
  Init_Mapmatching_mapmatching_is_valid mapmatching_checksum(::buggy_msgs::msg::Mapmatching::_mapmatching_checksum_type arg)
  {
    msg_.mapmatching_checksum = std::move(arg);
    return Init_Mapmatching_mapmatching_is_valid(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

class Init_Mapmatching_is_lead_vehicle
{
public:
  explicit Init_Mapmatching_is_lead_vehicle(::buggy_msgs::msg::Mapmatching & msg)
  : msg_(msg)
  {}
  Init_Mapmatching_mapmatching_checksum is_lead_vehicle(::buggy_msgs::msg::Mapmatching::_is_lead_vehicle_type arg)
  {
    msg_.is_lead_vehicle = std::move(arg);
    return Init_Mapmatching_mapmatching_checksum(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

class Init_Mapmatching_counter
{
public:
  explicit Init_Mapmatching_counter(::buggy_msgs::msg::Mapmatching & msg)
  : msg_(msg)
  {}
  Init_Mapmatching_is_lead_vehicle counter(::buggy_msgs::msg::Mapmatching::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_Mapmatching_is_lead_vehicle(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

class Init_Mapmatching_id
{
public:
  Init_Mapmatching_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mapmatching_counter id(::buggy_msgs::msg::Mapmatching::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Mapmatching_counter(msg_);
  }

private:
  ::buggy_msgs::msg::Mapmatching msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::Mapmatching>()
{
  return buggy_msgs::msg::builder::Init_Mapmatching_id();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__BUILDER_HPP_
