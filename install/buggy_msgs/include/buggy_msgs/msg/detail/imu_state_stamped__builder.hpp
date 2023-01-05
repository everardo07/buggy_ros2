// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/IMUStateStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__IMU_STATE_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__IMU_STATE_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/imu_state_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_IMUStateStamped_imu_state
{
public:
  explicit Init_IMUStateStamped_imu_state(::buggy_msgs::msg::IMUStateStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::IMUStateStamped imu_state(::buggy_msgs::msg::IMUStateStamped::_imu_state_type arg)
  {
    msg_.imu_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::IMUStateStamped msg_;
};

class Init_IMUStateStamped_header
{
public:
  Init_IMUStateStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUStateStamped_imu_state header(::buggy_msgs::msg::IMUStateStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IMUStateStamped_imu_state(msg_);
  }

private:
  ::buggy_msgs::msg::IMUStateStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::IMUStateStamped>()
{
  return buggy_msgs::msg::builder::Init_IMUStateStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__IMU_STATE_STAMPED__BUILDER_HPP_
