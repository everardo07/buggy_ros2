// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/HILinitCMD.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__BUILDER_HPP_

#include "buggy_msgs/msg/detail/hi_linit_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_HILinitCMD_angle
{
public:
  explicit Init_HILinitCMD_angle(::buggy_msgs::msg::HILinitCMD & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::HILinitCMD angle(::buggy_msgs::msg::HILinitCMD::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMD msg_;
};

class Init_HILinitCMD_lat_mm_frac
{
public:
  explicit Init_HILinitCMD_lat_mm_frac(::buggy_msgs::msg::HILinitCMD & msg)
  : msg_(msg)
  {}
  Init_HILinitCMD_angle lat_mm_frac(::buggy_msgs::msg::HILinitCMD::_lat_mm_frac_type arg)
  {
    msg_.lat_mm_frac = std::move(arg);
    return Init_HILinitCMD_angle(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMD msg_;
};

class Init_HILinitCMD_lat_mm
{
public:
  explicit Init_HILinitCMD_lat_mm(::buggy_msgs::msg::HILinitCMD & msg)
  : msg_(msg)
  {}
  Init_HILinitCMD_lat_mm_frac lat_mm(::buggy_msgs::msg::HILinitCMD::_lat_mm_type arg)
  {
    msg_.lat_mm = std::move(arg);
    return Init_HILinitCMD_lat_mm_frac(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMD msg_;
};

class Init_HILinitCMD_lon_mm_frac
{
public:
  explicit Init_HILinitCMD_lon_mm_frac(::buggy_msgs::msg::HILinitCMD & msg)
  : msg_(msg)
  {}
  Init_HILinitCMD_lat_mm lon_mm_frac(::buggy_msgs::msg::HILinitCMD::_lon_mm_frac_type arg)
  {
    msg_.lon_mm_frac = std::move(arg);
    return Init_HILinitCMD_lat_mm(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMD msg_;
};

class Init_HILinitCMD_lon_mm
{
public:
  explicit Init_HILinitCMD_lon_mm(::buggy_msgs::msg::HILinitCMD & msg)
  : msg_(msg)
  {}
  Init_HILinitCMD_lon_mm_frac lon_mm(::buggy_msgs::msg::HILinitCMD::_lon_mm_type arg)
  {
    msg_.lon_mm = std::move(arg);
    return Init_HILinitCMD_lon_mm_frac(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMD msg_;
};

class Init_HILinitCMD_counter
{
public:
  Init_HILinitCMD_counter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HILinitCMD_lon_mm counter(::buggy_msgs::msg::HILinitCMD::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_HILinitCMD_lon_mm(msg_);
  }

private:
  ::buggy_msgs::msg::HILinitCMD msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::HILinitCMD>()
{
  return buggy_msgs::msg::builder::Init_HILinitCMD_counter();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__HI_LINIT_CMD__BUILDER_HPP_
