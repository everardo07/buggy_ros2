// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__BUILDER_HPP_
#define BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__BUILDER_HPP_

#include "buggy_msgs/msg/detail/bus_parameter__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace buggy_msgs
{

namespace msg
{

namespace builder
{

class Init_BUSParameter_params2_param_menuparam1
{
public:
  explicit Init_BUSParameter_params2_param_menuparam1(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  ::buggy_msgs::msg::BUSParameter params2_param_menuparam1(::buggy_msgs::msg::BUSParameter::_params2_param_menuparam1_type arg)
  {
    msg_.params2_param_menuparam1 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_menuparam2
{
public:
  explicit Init_BUSParameter_params2_param_menuparam2(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_menuparam1 params2_param_menuparam2(::buggy_msgs::msg::BUSParameter::_params2_param_menuparam2_type arg)
  {
    msg_.params2_param_menuparam2 = std::move(arg);
    return Init_BUSParameter_params2_param_menuparam1(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_menuparam3
{
public:
  explicit Init_BUSParameter_params2_param_menuparam3(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_menuparam2 params2_param_menuparam3(::buggy_msgs::msg::BUSParameter::_params2_param_menuparam3_type arg)
  {
    msg_.params2_param_menuparam3 = std::move(arg);
    return Init_BUSParameter_params2_param_menuparam2(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_menuparam4
{
public:
  explicit Init_BUSParameter_params2_param_menuparam4(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_menuparam3 params2_param_menuparam4(::buggy_msgs::msg::BUSParameter::_params2_param_menuparam4_type arg)
  {
    msg_.params2_param_menuparam4 = std::move(arg);
    return Init_BUSParameter_params2_param_menuparam3(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_acc_activationdist
{
public:
  explicit Init_BUSParameter_params2_param_acc_activationdist(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_menuparam4 params2_param_acc_activationdist(::buggy_msgs::msg::BUSParameter::_params2_param_acc_activationdist_type arg)
  {
    msg_.params2_param_acc_activationdist = std::move(arg);
    return Init_BUSParameter_params2_param_menuparam4(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_acc_distance
{
public:
  explicit Init_BUSParameter_params2_param_acc_distance(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_acc_activationdist params2_param_acc_distance(::buggy_msgs::msg::BUSParameter::_params2_param_acc_distance_type arg)
  {
    msg_.params2_param_acc_distance = std::move(arg);
    return Init_BUSParameter_params2_param_acc_activationdist(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_acc_gain
{
public:
  explicit Init_BUSParameter_params2_param_acc_gain(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_acc_distance params2_param_acc_gain(::buggy_msgs::msg::BUSParameter::_params2_param_acc_gain_type arg)
  {
    msg_.params2_param_acc_gain = std::move(arg);
    return Init_BUSParameter_params2_param_acc_distance(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_acc_timegap
{
public:
  explicit Init_BUSParameter_params2_param_acc_timegap(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_acc_gain params2_param_acc_timegap(::buggy_msgs::msg::BUSParameter::_params2_param_acc_timegap_type arg)
  {
    msg_.params2_param_acc_timegap = std::move(arg);
    return Init_BUSParameter_params2_param_acc_gain(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params2_param_acc_inverseacc
{
public:
  explicit Init_BUSParameter_params2_param_acc_inverseacc(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_acc_timegap params2_param_acc_inverseacc(::buggy_msgs::msg::BUSParameter::_params2_param_acc_inverseacc_type arg)
  {
    msg_.params2_param_acc_inverseacc = std::move(arg);
    return Init_BUSParameter_params2_param_acc_timegap(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_drehzahlgrenze
{
public:
  explicit Init_BUSParameter_params1_param_drehzahlgrenze(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params2_param_acc_inverseacc params1_param_drehzahlgrenze(::buggy_msgs::msg::BUSParameter::_params1_param_drehzahlgrenze_type arg)
  {
    msg_.params1_param_drehzahlgrenze = std::move(arg);
    return Init_BUSParameter_params2_param_acc_inverseacc(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_stromgrenze
{
public:
  explicit Init_BUSParameter_params1_param_stromgrenze(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_drehzahlgrenze params1_param_stromgrenze(::buggy_msgs::msg::BUSParameter::_params1_param_stromgrenze_type arg)
  {
    msg_.params1_param_stromgrenze = std::move(arg);
    return Init_BUSParameter_params1_param_drehzahlgrenze(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_nav_gnssdelay
{
public:
  explicit Init_BUSParameter_params1_param_nav_gnssdelay(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_stromgrenze params1_param_nav_gnssdelay(::buggy_msgs::msg::BUSParameter::_params1_param_nav_gnssdelay_type arg)
  {
    msg_.params1_param_nav_gnssdelay = std::move(arg);
    return Init_BUSParameter_params1_param_stromgrenze(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_nav_triggermsg
{
public:
  explicit Init_BUSParameter_params1_param_nav_triggermsg(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_nav_gnssdelay params1_param_nav_triggermsg(::buggy_msgs::msg::BUSParameter::_params1_param_nav_triggermsg_type arg)
  {
    msg_.params1_param_nav_triggermsg = std::move(arg);
    return Init_BUSParameter_params1_param_nav_gnssdelay(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_track_a_max
{
public:
  explicit Init_BUSParameter_params1_param_track_a_max(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_nav_triggermsg params1_param_track_a_max(::buggy_msgs::msg::BUSParameter::_params1_param_track_a_max_type arg)
  {
    msg_.params1_param_track_a_max = std::move(arg);
    return Init_BUSParameter_params1_param_nav_triggermsg(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_v2vid
{
public:
  explicit Init_BUSParameter_params1_v2vid(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_track_a_max params1_v2vid(::buggy_msgs::msg::BUSParameter::_params1_v2vid_type arg)
  {
    msg_.params1_v2vid = std::move(arg);
    return Init_BUSParameter_params1_param_track_a_max(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_rv_a_demand
{
public:
  explicit Init_BUSParameter_params1_param_rv_a_demand(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_v2vid params1_param_rv_a_demand(::buggy_msgs::msg::BUSParameter::_params1_param_rv_a_demand_type arg)
  {
    msg_.params1_param_rv_a_demand = std::move(arg);
    return Init_BUSParameter_params1_v2vid(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_obeyspeedlimit
{
public:
  explicit Init_BUSParameter_params1_param_obeyspeedlimit(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_rv_a_demand params1_param_obeyspeedlimit(::buggy_msgs::msg::BUSParameter::_params1_param_obeyspeedlimit_type arg)
  {
    msg_.params1_param_obeyspeedlimit = std::move(arg);
    return Init_BUSParameter_params1_param_rv_a_demand(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_param_simplenav_reset
{
public:
  explicit Init_BUSParameter_params1_param_simplenav_reset(::buggy_msgs::msg::BUSParameter & msg)
  : msg_(msg)
  {}
  Init_BUSParameter_params1_param_obeyspeedlimit params1_param_simplenav_reset(::buggy_msgs::msg::BUSParameter::_params1_param_simplenav_reset_type arg)
  {
    msg_.params1_param_simplenav_reset = std::move(arg);
    return Init_BUSParameter_params1_param_obeyspeedlimit(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

class Init_BUSParameter_params1_wheelcircumference_mm
{
public:
  Init_BUSParameter_params1_wheelcircumference_mm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BUSParameter_params1_param_simplenav_reset params1_wheelcircumference_mm(::buggy_msgs::msg::BUSParameter::_params1_wheelcircumference_mm_type arg)
  {
    msg_.params1_wheelcircumference_mm = std::move(arg);
    return Init_BUSParameter_params1_param_simplenav_reset(msg_);
  }

private:
  ::buggy_msgs::msg::BUSParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::buggy_msgs::msg::BUSParameter>()
{
  return buggy_msgs::msg::builder::Init_BUSParameter_params1_wheelcircumference_mm();
}

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__BUILDER_HPP_
