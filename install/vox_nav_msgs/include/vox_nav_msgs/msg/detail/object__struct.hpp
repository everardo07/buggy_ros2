// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from vox_nav_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define VOX_NAV_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'velo_pose'
// Member 'world_pose'
// Member 'cam_pose'
#include "geometry_msgs/msg/detail/point_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__vox_nav_msgs__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__vox_nav_msgs__msg__Object __declspec(deprecated)
#endif

namespace vox_nav_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velo_pose(_init),
    world_pose(_init),
    cam_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->heading = 0.0f;
      this->velocity = 0.0f;
      this->width = 0.0f;
      this->length = 0.0f;
      this->height = 0.0f;
      this->orientation = 0.0f;
      this->semantic_confidence = 0.0f;
      this->semantic_name = "";
      this->semantic_id = 0ul;
      this->r = 0ul;
      this->g = 0ul;
      this->b = 0ul;
      this->a = 0.0f;
      this->is_new_track = false;
      this->is_dynamic = false;
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : velo_pose(_alloc, _init),
    world_pose(_alloc, _init),
    cam_pose(_alloc, _init),
    semantic_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->heading = 0.0f;
      this->velocity = 0.0f;
      this->width = 0.0f;
      this->length = 0.0f;
      this->height = 0.0f;
      this->orientation = 0.0f;
      this->semantic_confidence = 0.0f;
      this->semantic_name = "";
      this->semantic_id = 0ul;
      this->r = 0ul;
      this->g = 0ul;
      this->b = 0ul;
      this->a = 0.0f;
      this->is_new_track = false;
      this->is_dynamic = false;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _velo_pose_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _velo_pose_type velo_pose;
  using _world_pose_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _world_pose_type world_pose;
  using _cam_pose_type =
    geometry_msgs::msg::PointStamped_<ContainerAllocator>;
  _cam_pose_type cam_pose;
  using _heading_type =
    float;
  _heading_type heading;
  using _velocity_type =
    float;
  _velocity_type velocity;
  using _width_type =
    float;
  _width_type width;
  using _length_type =
    float;
  _length_type length;
  using _height_type =
    float;
  _height_type height;
  using _orientation_type =
    float;
  _orientation_type orientation;
  using _semantic_confidence_type =
    float;
  _semantic_confidence_type semantic_confidence;
  using _semantic_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _semantic_name_type semantic_name;
  using _semantic_id_type =
    uint32_t;
  _semantic_id_type semantic_id;
  using _r_type =
    uint32_t;
  _r_type r;
  using _g_type =
    uint32_t;
  _g_type g;
  using _b_type =
    uint32_t;
  _b_type b;
  using _a_type =
    float;
  _a_type a;
  using _is_new_track_type =
    bool;
  _is_new_track_type is_new_track;
  using _is_dynamic_type =
    bool;
  _is_dynamic_type is_dynamic;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__velo_pose(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->velo_pose = _arg;
    return *this;
  }
  Type & set__world_pose(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->world_pose = _arg;
    return *this;
  }
  Type & set__cam_pose(
    const geometry_msgs::msg::PointStamped_<ContainerAllocator> & _arg)
  {
    this->cam_pose = _arg;
    return *this;
  }
  Type & set__heading(
    const float & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__velocity(
    const float & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__orientation(
    const float & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__semantic_confidence(
    const float & _arg)
  {
    this->semantic_confidence = _arg;
    return *this;
  }
  Type & set__semantic_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->semantic_name = _arg;
    return *this;
  }
  Type & set__semantic_id(
    const uint32_t & _arg)
  {
    this->semantic_id = _arg;
    return *this;
  }
  Type & set__r(
    const uint32_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const uint32_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const uint32_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__is_new_track(
    const bool & _arg)
  {
    this->is_new_track = _arg;
    return *this;
  }
  Type & set__is_dynamic(
    const bool & _arg)
  {
    this->is_dynamic = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    vox_nav_msgs::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const vox_nav_msgs::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      vox_nav_msgs::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      vox_nav_msgs::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__vox_nav_msgs__msg__Object
    std::shared_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__vox_nav_msgs__msg__Object
    std::shared_ptr<vox_nav_msgs::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->velo_pose != other.velo_pose) {
      return false;
    }
    if (this->world_pose != other.world_pose) {
      return false;
    }
    if (this->cam_pose != other.cam_pose) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->semantic_confidence != other.semantic_confidence) {
      return false;
    }
    if (this->semantic_name != other.semantic_name) {
      return false;
    }
    if (this->semantic_id != other.semantic_id) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->is_new_track != other.is_new_track) {
      return false;
    }
    if (this->is_dynamic != other.is_dynamic) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  vox_nav_msgs::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace vox_nav_msgs

#endif  // VOX_NAV_MSGS__MSG__DETAIL__OBJECT__STRUCT_HPP_
