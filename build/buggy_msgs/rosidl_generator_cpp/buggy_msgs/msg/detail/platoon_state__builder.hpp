// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/PlatoonState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/platoon_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_PlatoonState_platoon_velocity
{
public:
  explicit Init_PlatoonState_platoon_velocity(::buggy_msgs::msg::PlatoonState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::PlatoonState platoon_velocity(::buggy_msgs::msg::PlatoonState::_platoon_velocity_type arg)
  {
    msg_.platoon_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

class Init_PlatoonState_platoon_mapmatching_s
{
public:
  explicit Init_PlatoonState_platoon_mapmatching_s(::buggy_msgs::msg::PlatoonState & msg)
  : msg_(msg)
  {}
  Init_PlatoonState_platoon_velocity platoon_mapmatching_s(::buggy_msgs::msg::PlatoonState::_platoon_mapmatching_s_type arg)
  {
    msg_.platoon_mapmatching_s = std::move(arg);
    return Init_PlatoonState_platoon_velocity(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

class Init_PlatoonState_platoon_mapmatching_roadindex
{
public:
  explicit Init_PlatoonState_platoon_mapmatching_roadindex(::buggy_msgs::msg::PlatoonState & msg)
  : msg_(msg)
  {}
  Init_PlatoonState_platoon_mapmatching_s platoon_mapmatching_roadindex(::buggy_msgs::msg::PlatoonState::_platoon_mapmatching_roadindex_type arg)
  {
    msg_.platoon_mapmatching_roadindex = std::move(arg);
    return Init_PlatoonState_platoon_mapmatching_s(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

class Init_PlatoonState_platoon_mapmatching_isvalid
{
public:
  explicit Init_PlatoonState_platoon_mapmatching_isvalid(::buggy_msgs::msg::PlatoonState & msg)
  : msg_(msg)
  {}
  Init_PlatoonState_platoon_mapmatching_roadindex platoon_mapmatching_isvalid(::buggy_msgs::msg::PlatoonState::_platoon_mapmatching_isvalid_type arg)
  {
    msg_.platoon_mapmatching_isvalid = std::move(arg);
    return Init_PlatoonState_platoon_mapmatching_roadindex(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

class Init_PlatoonState_platoon_acc_x
{
public:
  explicit Init_PlatoonState_platoon_acc_x(::buggy_msgs::msg::PlatoonState & msg)
  : msg_(msg)
  {}
  Init_PlatoonState_platoon_mapmatching_isvalid platoon_acc_x(::buggy_msgs::msg::PlatoonState::_platoon_acc_x_type arg)
  {
    msg_.platoon_acc_x = std::move(arg);
    return Init_PlatoonState_platoon_mapmatching_isvalid(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

class Init_PlatoonState_counter
{
public:
  explicit Init_PlatoonState_counter(::buggy_msgs::msg::PlatoonState & msg)
  : msg_(msg)
  {}
  Init_PlatoonState_platoon_acc_x counter(::buggy_msgs::msg::PlatoonState::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_PlatoonState_platoon_acc_x(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

class Init_PlatoonState_id
{
public:
  Init_PlatoonState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlatoonState_counter id(::buggy_msgs::msg::PlatoonState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PlatoonState_counter(msg_);
  }

private:
  ::buggy_msgs::msg::PlatoonState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::PlatoonState>()
{
  return buggy_msgs::msg::builder::Init_PlatoonState_id();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__PLATOON_STATE__BUILDER_HPP_
