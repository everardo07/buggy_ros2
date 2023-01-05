// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/FzgVehicleDataStamped.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA_STAMPED__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA_STAMPED__BUILDER_HPP_

#include "buggy_msgs/msg/detail/fzg_vehicle_data_stamped__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_FzgVehicleDataStamped_fzg_vehicle_data
{
public:
  explicit Init_FzgVehicleDataStamped_fzg_vehicle_data(::buggy_msgs::msg::FzgVehicleDataStamped & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::FzgVehicleDataStamped fzg_vehicle_data(::buggy_msgs::msg::FzgVehicleDataStamped::_fzg_vehicle_data_type arg)
  {
    msg_.fzg_vehicle_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleDataStamped msg_;
};

class Init_FzgVehicleDataStamped_header
{
public:
  Init_FzgVehicleDataStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FzgVehicleDataStamped_fzg_vehicle_data header(::buggy_msgs::msg::FzgVehicleDataStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FzgVehicleDataStamped_fzg_vehicle_data(msg_);
  }

private:
  ::buggy_msgs::msg::FzgVehicleDataStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::FzgVehicleDataStamped>()
{
  return buggy_msgs::msg::builder::Init_FzgVehicleDataStamped_header();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__FZG_VEHICLE_DATA_STAMPED__BUILDER_HPP_
