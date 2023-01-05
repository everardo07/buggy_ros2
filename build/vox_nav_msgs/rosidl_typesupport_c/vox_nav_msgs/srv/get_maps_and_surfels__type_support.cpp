// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from vox_nav_msgs:srv/GetMapsAndSurfels.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "vox_nav_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace vox_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetMapsAndSurfels_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMapsAndSurfels_Request_type_support_ids_t;

static const _GetMapsAndSurfels_Request_type_support_ids_t _GetMapsAndSurfels_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMapsAndSurfels_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMapsAndSurfels_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMapsAndSurfels_Request_type_support_symbol_names_t _GetMapsAndSurfels_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vox_nav_msgs, srv, GetMapsAndSurfels_Request)),
  }
};

typedef struct _GetMapsAndSurfels_Request_type_support_data_t
{
  void * data[2];
} _GetMapsAndSurfels_Request_type_support_data_t;

static _GetMapsAndSurfels_Request_type_support_data_t _GetMapsAndSurfels_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMapsAndSurfels_Request_message_typesupport_map = {
  2,
  "vox_nav_msgs",
  &_GetMapsAndSurfels_Request_message_typesupport_ids.typesupport_identifier[0],
  &_GetMapsAndSurfels_Request_message_typesupport_symbol_names.symbol_name[0],
  &_GetMapsAndSurfels_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMapsAndSurfels_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMapsAndSurfels_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace vox_nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_vox_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, vox_nav_msgs, srv, GetMapsAndSurfels_Request)() {
  return &::vox_nav_msgs::srv::rosidl_typesupport_c::GetMapsAndSurfels_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "vox_nav_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "vox_nav_msgs/srv/detail/get_maps_and_surfels__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vox_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetMapsAndSurfels_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMapsAndSurfels_Response_type_support_ids_t;

static const _GetMapsAndSurfels_Response_type_support_ids_t _GetMapsAndSurfels_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMapsAndSurfels_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMapsAndSurfels_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMapsAndSurfels_Response_type_support_symbol_names_t _GetMapsAndSurfels_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vox_nav_msgs, srv, GetMapsAndSurfels_Response)),
  }
};

typedef struct _GetMapsAndSurfels_Response_type_support_data_t
{
  void * data[2];
} _GetMapsAndSurfels_Response_type_support_data_t;

static _GetMapsAndSurfels_Response_type_support_data_t _GetMapsAndSurfels_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMapsAndSurfels_Response_message_typesupport_map = {
  2,
  "vox_nav_msgs",
  &_GetMapsAndSurfels_Response_message_typesupport_ids.typesupport_identifier[0],
  &_GetMapsAndSurfels_Response_message_typesupport_symbol_names.symbol_name[0],
  &_GetMapsAndSurfels_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GetMapsAndSurfels_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMapsAndSurfels_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace vox_nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_vox_nav_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, vox_nav_msgs, srv, GetMapsAndSurfels_Response)() {
  return &::vox_nav_msgs::srv::rosidl_typesupport_c::GetMapsAndSurfels_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "vox_nav_msgs/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace vox_nav_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _GetMapsAndSurfels_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GetMapsAndSurfels_type_support_ids_t;

static const _GetMapsAndSurfels_type_support_ids_t _GetMapsAndSurfels_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GetMapsAndSurfels_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GetMapsAndSurfels_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GetMapsAndSurfels_type_support_symbol_names_t _GetMapsAndSurfels_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, vox_nav_msgs, srv, GetMapsAndSurfels)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, vox_nav_msgs, srv, GetMapsAndSurfels)),
  }
};

typedef struct _GetMapsAndSurfels_type_support_data_t
{
  void * data[2];
} _GetMapsAndSurfels_type_support_data_t;

static _GetMapsAndSurfels_type_support_data_t _GetMapsAndSurfels_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GetMapsAndSurfels_service_typesupport_map = {
  2,
  "vox_nav_msgs",
  &_GetMapsAndSurfels_service_typesupport_ids.typesupport_identifier[0],
  &_GetMapsAndSurfels_service_typesupport_symbol_names.symbol_name[0],
  &_GetMapsAndSurfels_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t GetMapsAndSurfels_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GetMapsAndSurfels_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace vox_nav_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_vox_nav_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, vox_nav_msgs, srv, GetMapsAndSurfels)() {
  return &::vox_nav_msgs::srv::rosidl_typesupport_c::GetMapsAndSurfels_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
