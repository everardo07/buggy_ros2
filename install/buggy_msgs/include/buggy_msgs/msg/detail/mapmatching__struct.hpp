// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from buggy_msgs:msg/Mapmatching.idl
// generated code does not contain a copyright notice

#ifndef BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__STRUCT_HPP_
#define BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
// Member 'counter'
#include "std_msgs/msg/detail/u_int16__struct.hpp"
// Member 'is_lead_vehicle'
#include "std_msgs/msg/detail/u_int8__struct.hpp"
// Member 'mapmatching_checksum'
// Member 'mapmatching_is_valid'
// Member 'mapmatching_roadindex'
// Member 'platoon_mapmatching_s'
#include "std_msgs/msg/detail/float32__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__buggy_msgs__msg__Mapmatching __attribute__((deprecated))
#else
# define DEPRECATED__buggy_msgs__msg__Mapmatching __declspec(deprecated)
#endif

namespace buggy_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mapmatching_
{
  using Type = Mapmatching_<ContainerAllocator>;

  explicit Mapmatching_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    counter(_init),
    is_lead_vehicle(_init),
    mapmatching_checksum(_init),
    mapmatching_is_valid(_init),
    mapmatching_roadindex(_init),
    platoon_mapmatching_s(_init)
  {
    (void)_init;
  }

  explicit Mapmatching_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    counter(_alloc, _init),
    is_lead_vehicle(_alloc, _init),
    mapmatching_checksum(_alloc, _init),
    mapmatching_is_valid(_alloc, _init),
    mapmatching_roadindex(_alloc, _init),
    platoon_mapmatching_s(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _id_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _id_type id;
  using _counter_type =
    std_msgs::msg::UInt16_<ContainerAllocator>;
  _counter_type counter;
  using _is_lead_vehicle_type =
    std_msgs::msg::UInt8_<ContainerAllocator>;
  _is_lead_vehicle_type is_lead_vehicle;
  using _mapmatching_checksum_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _mapmatching_checksum_type mapmatching_checksum;
  using _mapmatching_is_valid_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _mapmatching_is_valid_type mapmatching_is_valid;
  using _mapmatching_roadindex_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _mapmatching_roadindex_type mapmatching_roadindex;
  using _platoon_mapmatching_s_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _platoon_mapmatching_s_type platoon_mapmatching_s;

  // setters for named parameter idiom
  Type & set__id(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__counter(
    const std_msgs::msg::UInt16_<ContainerAllocator> & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__is_lead_vehicle(
    const std_msgs::msg::UInt8_<ContainerAllocator> & _arg)
  {
    this->is_lead_vehicle = _arg;
    return *this;
  }
  Type & set__mapmatching_checksum(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->mapmatching_checksum = _arg;
    return *this;
  }
  Type & set__mapmatching_is_valid(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->mapmatching_is_valid = _arg;
    return *this;
  }
  Type & set__mapmatching_roadindex(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->mapmatching_roadindex = _arg;
    return *this;
  }
  Type & set__platoon_mapmatching_s(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->platoon_mapmatching_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    buggy_msgs::msg::Mapmatching_<ContainerAllocator> *;
  using ConstRawPtr =
    const buggy_msgs::msg::Mapmatching_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::Mapmatching_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      buggy_msgs::msg::Mapmatching_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__buggy_msgs__msg__Mapmatching
    std::shared_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__buggy_msgs__msg__Mapmatching
    std::shared_ptr<buggy_msgs::msg::Mapmatching_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mapmatching_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->is_lead_vehicle != other.is_lead_vehicle) {
      return false;
    }
    if (this->mapmatching_checksum != other.mapmatching_checksum) {
      return false;
    }
    if (this->mapmatching_is_valid != other.mapmatching_is_valid) {
      return false;
    }
    if (this->mapmatching_roadindex != other.mapmatching_roadindex) {
      return false;
    }
    if (this->platoon_mapmatching_s != other.platoon_mapmatching_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mapmatching_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mapmatching_

// alias to use template instance with default allocator
using Mapmatching =
  buggy_msgs::msg::Mapmatching_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace buggy_msgs

#endif  // BUGGY_MSGS__MSG__DETAIL__MAPMATCHING__STRUCT_HPP_
