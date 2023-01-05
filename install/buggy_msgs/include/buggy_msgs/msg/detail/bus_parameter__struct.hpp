// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/BUSParameter.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'params1_wheelcircumference_mm'
// Member 'params1_param_simplenav_reset'
// Member 'params1_param_obeyspeedlimit'
// Member 'params1_param_rv_a_demand'
// Member 'params1_v2vid'
// Member 'params1_param_track_a_max'
// Member 'params1_param_nav_triggermsg'
// Member 'params1_param_nav_gnssdelay'
// Member 'params1_param_stromgrenze'
// Member 'params1_param_drehzahlgrenze'
// Member 'params2_param_acc_inverseacc'
// Member 'params2_param_acc_timegap'
// Member 'params2_param_acc_gain'
// Member 'params2_param_acc_distance'
// Member 'params2_param_acc_activationdist'
// Member 'params2_param_menuparam4'
// Member 'params2_param_menuparam3'
// Member 'params2_param_menuparam2'
// Member 'params2_param_menuparam1'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__BUSParameter __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__BUSParameter __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BUSParameter_
{
  using Type = BUSParameter_<ContainerAllocator>;

  explicit BUSParameter_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params1_wheelcircumference_mm(_init),
    params1_param_simplenav_reset(_init),
    params1_param_obeyspeedlimit(_init),
    params1_param_rv_a_demand(_init),
    params1_v2vid(_init),
    params1_param_track_a_max(_init),
    params1_param_nav_triggermsg(_init),
    params1_param_nav_gnssdelay(_init),
    params1_param_stromgrenze(_init),
    params1_param_drehzahlgrenze(_init),
    params2_param_acc_inverseacc(_init),
    params2_param_acc_timegap(_init),
    params2_param_acc_gain(_init),
    params2_param_acc_distance(_init),
    params2_param_acc_activationdist(_init),
    params2_param_menuparam4(_init),
    params2_param_menuparam3(_init),
    params2_param_menuparam2(_init),
    params2_param_menuparam1(_init)
  {
    (void)_init;
  }

  explicit BUSParameter_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : params1_wheelcircumference_mm(_alloc, _init),
    params1_param_simplenav_reset(_alloc, _init),
    params1_param_obeyspeedlimit(_alloc, _init),
    params1_param_rv_a_demand(_alloc, _init),
    params1_v2vid(_alloc, _init),
    params1_param_track_a_max(_alloc, _init),
    params1_param_nav_triggermsg(_alloc, _init),
    params1_param_nav_gnssdelay(_alloc, _init),
    params1_param_stromgrenze(_alloc, _init),
    params1_param_drehzahlgrenze(_alloc, _init),
    params2_param_acc_inverseacc(_alloc, _init),
    params2_param_acc_timegap(_alloc, _init),
    params2_param_acc_gain(_alloc, _init),
    params2_param_acc_distance(_alloc, _init),
    params2_param_acc_activationdist(_alloc, _init),
    params2_param_menuparam4(_alloc, _init),
    params2_param_menuparam3(_alloc, _init),
    params2_param_menuparam2(_alloc, _init),
    params2_param_menuparam1(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _params1_wheelcircumference_mm_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_wheelcircumference_mm_type params1_wheelcircumference_mm;
  using _params1_param_simplenav_reset_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_simplenav_reset_type params1_param_simplenav_reset;
  using _params1_param_obeyspeedlimit_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_obeyspeedlimit_type params1_param_obeyspeedlimit;
  using _params1_param_rv_a_demand_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_rv_a_demand_type params1_param_rv_a_demand;
  using _params1_v2vid_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_v2vid_type params1_v2vid;
  using _params1_param_track_a_max_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_track_a_max_type params1_param_track_a_max;
  using _params1_param_nav_triggermsg_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_nav_triggermsg_type params1_param_nav_triggermsg;
  using _params1_param_nav_gnssdelay_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_nav_gnssdelay_type params1_param_nav_gnssdelay;
  using _params1_param_stromgrenze_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_stromgrenze_type params1_param_stromgrenze;
  using _params1_param_drehzahlgrenze_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params1_param_drehzahlgrenze_type params1_param_drehzahlgrenze;
  using _params2_param_acc_inverseacc_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_acc_inverseacc_type params2_param_acc_inverseacc;
  using _params2_param_acc_timegap_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_acc_timegap_type params2_param_acc_timegap;
  using _params2_param_acc_gain_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_acc_gain_type params2_param_acc_gain;
  using _params2_param_acc_distance_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_acc_distance_type params2_param_acc_distance;
  using _params2_param_acc_activationdist_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_acc_activationdist_type params2_param_acc_activationdist;
  using _params2_param_menuparam4_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_menuparam4_type params2_param_menuparam4;
  using _params2_param_menuparam3_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_menuparam3_type params2_param_menuparam3;
  using _params2_param_menuparam2_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_menuparam2_type params2_param_menuparam2;
  using _params2_param_menuparam1_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _params2_param_menuparam1_type params2_param_menuparam1;

  // setters for named parameter idiom
  Type & set__params1_wheelcircumference_mm(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_wheelcircumference_mm = _arg;
    return *this;
  }
  Type & set__params1_param_simplenav_reset(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_simplenav_reset = _arg;
    return *this;
  }
  Type & set__params1_param_obeyspeedlimit(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_obeyspeedlimit = _arg;
    return *this;
  }
  Type & set__params1_param_rv_a_demand(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_rv_a_demand = _arg;
    return *this;
  }
  Type & set__params1_v2vid(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_v2vid = _arg;
    return *this;
  }
  Type & set__params1_param_track_a_max(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_track_a_max = _arg;
    return *this;
  }
  Type & set__params1_param_nav_triggermsg(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_nav_triggermsg = _arg;
    return *this;
  }
  Type & set__params1_param_nav_gnssdelay(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_nav_gnssdelay = _arg;
    return *this;
  }
  Type & set__params1_param_stromgrenze(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_stromgrenze = _arg;
    return *this;
  }
  Type & set__params1_param_drehzahlgrenze(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params1_param_drehzahlgrenze = _arg;
    return *this;
  }
  Type & set__params2_param_acc_inverseacc(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_acc_inverseacc = _arg;
    return *this;
  }
  Type & set__params2_param_acc_timegap(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_acc_timegap = _arg;
    return *this;
  }
  Type & set__params2_param_acc_gain(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_acc_gain = _arg;
    return *this;
  }
  Type & set__params2_param_acc_distance(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_acc_distance = _arg;
    return *this;
  }
  Type & set__params2_param_acc_activationdist(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_acc_activationdist = _arg;
    return *this;
  }
  Type & set__params2_param_menuparam4(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_menuparam4 = _arg;
    return *this;
  }
  Type & set__params2_param_menuparam3(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_menuparam3 = _arg;
    return *this;
  }
  Type & set__params2_param_menuparam2(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_menuparam2 = _arg;
    return *this;
  }
  Type & set__params2_param_menuparam1(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->params2_param_menuparam1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::BUSParameter_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::BUSParameter_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::BUSParameter_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::BUSParameter_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__BUSParameter
    std::shared_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__BUSParameter
    std::shared_ptr<buggy_msgs::msg::BUSParameter_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BUSParameter_ & other) const
  {
    if (this->params1_wheelcircumference_mm != other.params1_wheelcircumference_mm) {
      return false;
    }
    if (this->params1_param_simplenav_reset != other.params1_param_simplenav_reset) {
      return false;
    }
    if (this->params1_param_obeyspeedlimit != other.params1_param_obeyspeedlimit) {
      return false;
    }
    if (this->params1_param_rv_a_demand != other.params1_param_rv_a_demand) {
      return false;
    }
    if (this->params1_v2vid != other.params1_v2vid) {
      return false;
    }
    if (this->params1_param_track_a_max != other.params1_param_track_a_max) {
      return false;
    }
    if (this->params1_param_nav_triggermsg != other.params1_param_nav_triggermsg) {
      return false;
    }
    if (this->params1_param_nav_gnssdelay != other.params1_param_nav_gnssdelay) {
      return false;
    }
    if (this->params1_param_stromgrenze != other.params1_param_stromgrenze) {
      return false;
    }
    if (this->params1_param_drehzahlgrenze != other.params1_param_drehzahlgrenze) {
      return false;
    }
    if (this->params2_param_acc_inverseacc != other.params2_param_acc_inverseacc) {
      return false;
    }
    if (this->params2_param_acc_timegap != other.params2_param_acc_timegap) {
      return false;
    }
    if (this->params2_param_acc_gain != other.params2_param_acc_gain) {
      return false;
    }
    if (this->params2_param_acc_distance != other.params2_param_acc_distance) {
      return false;
    }
    if (this->params2_param_acc_activationdist != other.params2_param_acc_activationdist) {
      return false;
    }
    if (this->params2_param_menuparam4 != other.params2_param_menuparam4) {
      return false;
    }
    if (this->params2_param_menuparam3 != other.params2_param_menuparam3) {
      return false;
    }
    if (this->params2_param_menuparam2 != other.params2_param_menuparam2) {
      return false;
    }
    if (this->params2_param_menuparam1 != other.params2_param_menuparam1) {
      return false;
    }
    return true;
  }
  bool operator!=(const BUSParameter_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BUSParameter_

// alias to use template instance with default allocator
using BUSParameter =
  buggy_msgs::msg::BUSParameter_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__BUS_PARAMETER__STRUCT_HPP_
