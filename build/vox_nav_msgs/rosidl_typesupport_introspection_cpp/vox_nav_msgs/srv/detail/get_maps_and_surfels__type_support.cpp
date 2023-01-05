// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from vox_nav_msgs:srv/GetMapsAndSurfels.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vox_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetMapsAndSurfels_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vox_nav_msgs::srv::GetMapsAndSurfels_Request(_init);
}

void GetMapsAndSurfels_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vox_nav_msgs::srv::GetMapsAndSurfels_Request *>(message_memory);
  typed_message->~GetMapsAndSurfels_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetMapsAndSurfels_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vox_nav_msgs::srv::GetMapsAndSurfels_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetMapsAndSurfels_Request_message_members = {
  "vox_nav_msgs::srv",  // message namespace
  "GetMapsAndSurfels_Request",  // message name
  1,  // number of fields
  sizeof(vox_nav_msgs::srv::GetMapsAndSurfels_Request),
  GetMapsAndSurfels_Request_message_member_array,  // message members
  GetMapsAndSurfels_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMapsAndSurfels_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetMapsAndSurfels_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMapsAndSurfels_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vox_nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vox_nav_msgs::srv::GetMapsAndSurfels_Request>()
{
  return &::vox_nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetMapsAndSurfels_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vox_nav_msgs, srv, GetMapsAndSurfels_Request)() {
  return &::vox_nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetMapsAndSurfels_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace vox_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetMapsAndSurfels_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) vox_nav_msgs::srv::GetMapsAndSurfels_Response(_init);
}

void GetMapsAndSurfels_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<vox_nav_msgs::srv::GetMapsAndSurfels_Response *>(message_memory);
  typed_message->~GetMapsAndSurfels_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetMapsAndSurfels_Response_message_member_array[5] = {
  {
    "original_octomap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<octomap_msgs::msg::Octomap>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vox_nav_msgs::srv::GetMapsAndSurfels_Response, original_octomap),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elevated_surfel_octomap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<octomap_msgs::msg::Octomap>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vox_nav_msgs::srv::GetMapsAndSurfels_Response, elevated_surfel_octomap),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elevated_surfel_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::PoseArray>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vox_nav_msgs::srv::GetMapsAndSurfels_Response, elevated_surfel_poses),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traversable_elevated_cloud",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<sensor_msgs::msg::PointCloud2>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vox_nav_msgs::srv::GetMapsAndSurfels_Response, traversable_elevated_cloud),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(vox_nav_msgs::srv::GetMapsAndSurfels_Response, is_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetMapsAndSurfels_Response_message_members = {
  "vox_nav_msgs::srv",  // message namespace
  "GetMapsAndSurfels_Response",  // message name
  5,  // number of fields
  sizeof(vox_nav_msgs::srv::GetMapsAndSurfels_Response),
  GetMapsAndSurfels_Response_message_member_array,  // message members
  GetMapsAndSurfels_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetMapsAndSurfels_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetMapsAndSurfels_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMapsAndSurfels_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vox_nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<vox_nav_msgs::srv::GetMapsAndSurfels_Response>()
{
  return &::vox_nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetMapsAndSurfels_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vox_nav_msgs, srv, GetMapsAndSurfels_Response)() {
  return &::vox_nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetMapsAndSurfels_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace vox_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetMapsAndSurfels_service_members = {
  "vox_nav_msgs::srv",  // service namespace
  "GetMapsAndSurfels",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<vox_nav_msgs::srv::GetMapsAndSurfels>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetMapsAndSurfels_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetMapsAndSurfels_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace vox_nav_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<vox_nav_msgs::srv::GetMapsAndSurfels>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::vox_nav_msgs::srv::rosidl_typesupport_introspection_cpp::GetMapsAndSurfels_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vox_nav_msgs::srv::GetMapsAndSurfels_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::vox_nav_msgs::srv::GetMapsAndSurfels_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, vox_nav_msgs, srv, GetMapsAndSurfels)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<vox_nav_msgs::srv::GetMapsAndSurfels>();
}

#ifdef __cplusplus
}
#endif
