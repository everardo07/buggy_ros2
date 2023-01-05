// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vox_nav_msgs:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
#define VOX_NAV_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_

#include "vox_nav_msgs/msg/detail/object__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace vox_nav_msgs
{

namespace msg
{

namespace builder
{

class Init_Object_is_dynamic
{
public:
  explicit Init_Object_is_dynamic(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  ::vox_nav_msgs::msg::Object is_dynamic(::vox_nav_msgs::msg::Object::_is_dynamic_type arg)
  {
    msg_.is_dynamic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_is_new_track
{
public:
  explicit Init_Object_is_new_track(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_is_dynamic is_new_track(::vox_nav_msgs::msg::Object::_is_new_track_type arg)
  {
    msg_.is_new_track = std::move(arg);
    return Init_Object_is_dynamic(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_a
{
public:
  explicit Init_Object_a(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_is_new_track a(::vox_nav_msgs::msg::Object::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_Object_is_new_track(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_b
{
public:
  explicit Init_Object_b(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_a b(::vox_nav_msgs::msg::Object::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_Object_a(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_g
{
public:
  explicit Init_Object_g(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_b g(::vox_nav_msgs::msg::Object::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_Object_b(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_r
{
public:
  explicit Init_Object_r(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_g r(::vox_nav_msgs::msg::Object::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_Object_g(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_semantic_id
{
public:
  explicit Init_Object_semantic_id(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_r semantic_id(::vox_nav_msgs::msg::Object::_semantic_id_type arg)
  {
    msg_.semantic_id = std::move(arg);
    return Init_Object_r(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_semantic_name
{
public:
  explicit Init_Object_semantic_name(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_semantic_id semantic_name(::vox_nav_msgs::msg::Object::_semantic_name_type arg)
  {
    msg_.semantic_name = std::move(arg);
    return Init_Object_semantic_id(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_semantic_confidence
{
public:
  explicit Init_Object_semantic_confidence(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_semantic_name semantic_confidence(::vox_nav_msgs::msg::Object::_semantic_confidence_type arg)
  {
    msg_.semantic_confidence = std::move(arg);
    return Init_Object_semantic_name(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_orientation
{
public:
  explicit Init_Object_orientation(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_semantic_confidence orientation(::vox_nav_msgs::msg::Object::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return Init_Object_semantic_confidence(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_height
{
public:
  explicit Init_Object_height(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_orientation height(::vox_nav_msgs::msg::Object::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Object_orientation(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_length
{
public:
  explicit Init_Object_length(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_height length(::vox_nav_msgs::msg::Object::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_Object_height(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_width
{
public:
  explicit Init_Object_width(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_length width(::vox_nav_msgs::msg::Object::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Object_length(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_velocity
{
public:
  explicit Init_Object_velocity(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_width velocity(::vox_nav_msgs::msg::Object::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_Object_width(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_heading
{
public:
  explicit Init_Object_heading(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_velocity heading(::vox_nav_msgs::msg::Object::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_Object_velocity(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_cam_pose
{
public:
  explicit Init_Object_cam_pose(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_heading cam_pose(::vox_nav_msgs::msg::Object::_cam_pose_type arg)
  {
    msg_.cam_pose = std::move(arg);
    return Init_Object_heading(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_world_pose
{
public:
  explicit Init_Object_world_pose(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_cam_pose world_pose(::vox_nav_msgs::msg::Object::_world_pose_type arg)
  {
    msg_.world_pose = std::move(arg);
    return Init_Object_cam_pose(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_velo_pose
{
public:
  explicit Init_Object_velo_pose(::vox_nav_msgs::msg::Object & msg)
  : msg_(msg)
  {}
  Init_Object_world_pose velo_pose(::vox_nav_msgs::msg::Object::_velo_pose_type arg)
  {
    msg_.velo_pose = std::move(arg);
    return Init_Object_world_pose(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

class Init_Object_id
{
public:
  Init_Object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Object_velo_pose id(::vox_nav_msgs::msg::Object::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Object_velo_pose(msg_);
  }

private:
  ::vox_nav_msgs::msg::Object msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::vox_nav_msgs::msg::Object>()
{
  return vox_nav_msgs::msg::builder::Init_Object_id();
}

}  // namespace vox_nav_msgs

#endif  // VOX_NAV_MSGS__MSG__DETAIL__OBJECT__BUILDER_HPP_
