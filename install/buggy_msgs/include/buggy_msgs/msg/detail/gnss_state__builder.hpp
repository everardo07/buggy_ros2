// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/GNSSState.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__BUILDER_HPP_

#include "buggy_msgs/msg/detail/gnss_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_GNSSState_gnss_time
{
public:
  explicit Init_GNSSState_gnss_time(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::GNSSState gnss_time(::buggy_msgs::msg::GNSSState::_gnss_time_type arg)
  {
    msg_.gnss_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_speed
{
public:
  explicit Init_GNSSState_gnss_speed(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_time gnss_speed(::buggy_msgs::msg::GNSSState::_gnss_speed_type arg)
  {
    msg_.gnss_speed = std::move(arg);
    return Init_GNSSState_gnss_time(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_quality_rmc3
{
public:
  explicit Init_GNSSState_gnss_quality_rmc3(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_speed gnss_quality_rmc3(::buggy_msgs::msg::GNSSState::_gnss_quality_rmc3_type arg)
  {
    msg_.gnss_quality_rmc3 = std::move(arg);
    return Init_GNSSState_gnss_speed(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter_rmc3
{
public:
  explicit Init_GNSSState_gnss_counter_rmc3(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_quality_rmc3 gnss_counter_rmc3(::buggy_msgs::msg::GNSSState::_gnss_counter_rmc3_type arg)
  {
    msg_.gnss_counter_rmc3 = std::move(arg);
    return Init_GNSSState_gnss_quality_rmc3(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_angle_valid
{
public:
  explicit Init_GNSSState_gnss_angle_valid(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_counter_rmc3 gnss_angle_valid(::buggy_msgs::msg::GNSSState::_gnss_angle_valid_type arg)
  {
    msg_.gnss_angle_valid = std::move(arg);
    return Init_GNSSState_gnss_counter_rmc3(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_angle
{
public:
  explicit Init_GNSSState_gnss_angle(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_angle_valid gnss_angle(::buggy_msgs::msg::GNSSState::_gnss_angle_type arg)
  {
    msg_.gnss_angle = std::move(arg);
    return Init_GNSSState_gnss_angle_valid(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_lat_mm_frac
{
public:
  explicit Init_GNSSState_gnss_lat_mm_frac(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_angle gnss_lat_mm_frac(::buggy_msgs::msg::GNSSState::_gnss_lat_mm_frac_type arg)
  {
    msg_.gnss_lat_mm_frac = std::move(arg);
    return Init_GNSSState_gnss_angle(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_lat_mm
{
public:
  explicit Init_GNSSState_gnss_lat_mm(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_lat_mm_frac gnss_lat_mm(::buggy_msgs::msg::GNSSState::_gnss_lat_mm_type arg)
  {
    msg_.gnss_lat_mm = std::move(arg);
    return Init_GNSSState_gnss_lat_mm_frac(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter_rmc2
{
public:
  explicit Init_GNSSState_gnss_counter_rmc2(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_lat_mm gnss_counter_rmc2(::buggy_msgs::msg::GNSSState::_gnss_counter_rmc2_type arg)
  {
    msg_.gnss_counter_rmc2 = std::move(arg);
    return Init_GNSSState_gnss_lat_mm(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_lon_mm_frac
{
public:
  explicit Init_GNSSState_gnss_lon_mm_frac(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_counter_rmc2 gnss_lon_mm_frac(::buggy_msgs::msg::GNSSState::_gnss_lon_mm_frac_type arg)
  {
    msg_.gnss_lon_mm_frac = std::move(arg);
    return Init_GNSSState_gnss_counter_rmc2(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_lon_mm
{
public:
  explicit Init_GNSSState_gnss_lon_mm(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_lon_mm_frac gnss_lon_mm(::buggy_msgs::msg::GNSSState::_gnss_lon_mm_type arg)
  {
    msg_.gnss_lon_mm = std::move(arg);
    return Init_GNSSState_gnss_lon_mm_frac(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter_rmc1
{
public:
  explicit Init_GNSSState_gnss_counter_rmc1(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_lon_mm gnss_counter_rmc1(::buggy_msgs::msg::GNSSState::_gnss_counter_rmc1_type arg)
  {
    msg_.gnss_counter_rmc1 = std::move(arg);
    return Init_GNSSState_gnss_lon_mm(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_vdop
{
public:
  explicit Init_GNSSState_gnss_vdop(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_counter_rmc1 gnss_vdop(::buggy_msgs::msg::GNSSState::_gnss_vdop_type arg)
  {
    msg_.gnss_vdop = std::move(arg);
    return Init_GNSSState_gnss_counter_rmc1(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_pdop
{
public:
  explicit Init_GNSSState_gnss_pdop(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_vdop gnss_pdop(::buggy_msgs::msg::GNSSState::_gnss_pdop_type arg)
  {
    msg_.gnss_pdop = std::move(arg);
    return Init_GNSSState_gnss_vdop(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter
{
public:
  explicit Init_GNSSState_gnss_counter(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_pdop gnss_counter(::buggy_msgs::msg::GNSSState::_gnss_counter_type arg)
  {
    msg_.gnss_counter = std::move(arg);
    return Init_GNSSState_gnss_pdop(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_mode
{
public:
  explicit Init_GNSSState_gnss_mode(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_counter gnss_mode(::buggy_msgs::msg::GNSSState::_gnss_mode_type arg)
  {
    msg_.gnss_mode = std::move(arg);
    return Init_GNSSState_gnss_counter(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_hdop
{
public:
  explicit Init_GNSSState_gnss_hdop(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_mode gnss_hdop(::buggy_msgs::msg::GNSSState::_gnss_hdop_type arg)
  {
    msg_.gnss_hdop = std::move(arg);
    return Init_GNSSState_gnss_mode(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_quality
{
public:
  explicit Init_GNSSState_gnss_quality(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_hdop gnss_quality(::buggy_msgs::msg::GNSSState::_gnss_quality_type arg)
  {
    msg_.gnss_quality = std::move(arg);
    return Init_GNSSState_gnss_hdop(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_number_satellites
{
public:
  explicit Init_GNSSState_gnss_number_satellites(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_quality gnss_number_satellites(::buggy_msgs::msg::GNSSState::_gnss_number_satellites_type arg)
  {
    msg_.gnss_number_satellites = std::move(arg);
    return Init_GNSSState_gnss_quality(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_altitude
{
public:
  explicit Init_GNSSState_gnss_altitude(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_number_satellites gnss_altitude(::buggy_msgs::msg::GNSSState::_gnss_altitude_type arg)
  {
    msg_.gnss_altitude = std::move(arg);
    return Init_GNSSState_gnss_number_satellites(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter_bus
{
public:
  explicit Init_GNSSState_gnss_counter_bus(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_altitude gnss_counter_bus(::buggy_msgs::msg::GNSSState::_gnss_counter_bus_type arg)
  {
    msg_.gnss_counter_bus = std::move(arg);
    return Init_GNSSState_gnss_altitude(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter_rising
{
public:
  explicit Init_GNSSState_gnss_counter_rising(::buggy_msgs::msg::GNSSState & msg)
  : msg_(msg)
  {}
  Init_GNSSState_gnss_counter_bus gnss_counter_rising(::buggy_msgs::msg::GNSSState::_gnss_counter_rising_type arg)
  {
    msg_.gnss_counter_rising = std::move(arg);
    return Init_GNSSState_gnss_counter_bus(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

class Init_GNSSState_gnss_counter_falling
{
public:
  Init_GNSSState_gnss_counter_falling()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GNSSState_gnss_counter_rising gnss_counter_falling(::buggy_msgs::msg::GNSSState::_gnss_counter_falling_type arg)
  {
    msg_.gnss_counter_falling = std::move(arg);
    return Init_GNSSState_gnss_counter_rising(msg_);
  }

private:
  ::buggy_msgs::msg::GNSSState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::GNSSState>()
{
  return buggy_msgs::msg::builder::Init_GNSSState_gnss_counter_falling();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__GNSS_STATE__BUILDER_HPP_
