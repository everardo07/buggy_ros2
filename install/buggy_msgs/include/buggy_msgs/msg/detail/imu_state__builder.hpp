// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/IMUState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__IMU_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__IMU_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/imu_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_IMUState_imu_ay
{
public:
  explicit Init_IMUState_imu_ay(::buggy_msgs::msg::IMUState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::IMUState imu_ay(::buggy_msgs::msg::IMUState::_imu_ay_type arg)
  {
    msg_.imu_ay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::IMUState msg_;
};

class Init_IMUState_imu_ax
{
public:
  explicit Init_IMUState_imu_ax(::buggy_msgs::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_imu_ay imu_ax(::buggy_msgs::msg::IMUState::_imu_ax_type arg)
  {
    msg_.imu_ax = std::move(arg);
    return Init_IMUState_imu_ay(msg_);
  }

private:
  ::buggy_msgs::msg::IMUState msg_;
};

class Init_IMUState_imu_gz
{
public:
  Init_IMUState_imu_gz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUState_imu_ax imu_gz(::buggy_msgs::msg::IMUState::_imu_gz_type arg)
  {
    msg_.imu_gz = std::move(arg);
    return Init_IMUState_imu_ax(msg_);
  }

private:
  ::buggy_msgs::msg::IMUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::IMUState>()
{
  return buggy_msgs::msg::builder::Init_IMUState_imu_gz();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__IMU_STATE__BUILDER_HPP_
