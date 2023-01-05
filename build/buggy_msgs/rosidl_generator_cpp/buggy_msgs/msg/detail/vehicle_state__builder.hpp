// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/vehicle_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleState_acceleration
{
public:
  explicit Init_VehicleState_acceleration(::buggy_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::VehicleState acceleration(::buggy_msgs::msg::VehicleState::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_steering_wheel
{
public:
  explicit Init_VehicleState_steering_wheel(::buggy_msgs::msg::VehicleState & msg)
  : msg_(msg)
  {}
  Init_VehicleState_acceleration steering_wheel(::buggy_msgs::msg::VehicleState::_steering_wheel_type arg)
  {
    msg_.steering_wheel = std::move(arg);
    return Init_VehicleState_acceleration(msg_);
  }

private:
  ::buggy_msgs::msg::VehicleState msg_;
};

class Init_VehicleState_wheels
{
public:
  Init_VehicleState_wheels()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleState_steering_wheel wheels(::buggy_msgs::msg::VehicleState::_wheels_type arg)
  {
    msg_.wheels = std::move(arg);
    return Init_VehicleState_steering_wheel(msg_);
  }

private:
  ::buggy_msgs::msg::VehicleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::VehicleState>()
{
  return buggy_msgs::msg::builder::Init_VehicleState_wheels();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__VEHICLE_STATE__BUILDER_HPP_
