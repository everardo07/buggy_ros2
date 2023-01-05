// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__BUILDER_HPP_

#include "buggy_msgs/msg/detail/fzg_vehicle_data__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_FzgVehicleData_set_curvature
{
public:
  explicit Init_FzgVehicleData_set_curvature(::buggy_msgs::msg::FzgVehicleData & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::FzgVehicleData set_curvature(::buggy_msgs::msg::FzgVehicleData::_set_curvature_type arg)
  {
    msg_.set_curvature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleData msg_;
};

class Init_FzgVehicleData_yawrate
{
public:
  explicit Init_FzgVehicleData_yawrate(::buggy_msgs::msg::FzgVehicleData & msg)
  : msg_(msg)
  {}
  Init_FzgVehicleData_set_curvature yawrate(::buggy_msgs::msg::FzgVehicleData::_yawrate_type arg)
  {
    msg_.yawrate = std::move(arg);
    return Init_FzgVehicleData_set_curvature(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleData msg_;
};

class Init_FzgVehicleData_velocity
{
public:
  explicit Init_FzgVehicleData_velocity(::buggy_msgs::msg::FzgVehicleData & msg)
  : msg_(msg)
  {}
  Init_FzgVehicleData_yawrate velocity(::buggy_msgs::msg::FzgVehicleData::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_FzgVehicleData_yawrate(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleData msg_;
};

class Init_FzgVehicleData_longitudinal_acc
{
public:
  explicit Init_FzgVehicleData_longitudinal_acc(::buggy_msgs::msg::FzgVehicleData & msg)
  : msg_(msg)
  {}
  Init_FzgVehicleData_velocity longitudinal_acc(::buggy_msgs::msg::FzgVehicleData::_longitudinal_acc_type arg)
  {
    msg_.longitudinal_acc = std::move(arg);
    return Init_FzgVehicleData_velocity(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleData msg_;
};

class Init_FzgVehicleData_counter
{
public:
  Init_FzgVehicleData_counter()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FzgVehicleData_longitudinal_acc counter(::buggy_msgs::msg::FzgVehicleData::_counter_type arg)
  {
    msg_.counter = std::move(arg);
    return Init_FzgVehicleData_longitudinal_acc(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::FzgVehicleData>()
{
  return buggy_msgs::msg::builder::Init_FzgVehicleData_counter();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA__BUILDER_HPP_
