// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vox_nav_msgs:action/ComputePathToPose.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__TRAITS_HPP_
#define VOX_NAV_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__TRAITS_HPP_

#include "vox_nav_msgs/action/detail/compute_path_to_pose__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_Goal>()
{
  return "vox_nav_msgs::action::ComputePathToPose_Goal";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_Goal>()
{
  return "vox_nav_msgs/action/ComputePathToPose_Goal";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"
// Member 'planning_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_Result>()
{
  return "vox_nav_msgs::action::ComputePathToPose_Result";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_Result>()
{
  return "vox_nav_msgs/action/ComputePathToPose_Result";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<nav_msgs::msg::Path>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<nav_msgs::msg::Path>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_Feedback>()
{
  return "vox_nav_msgs::action::ComputePathToPose_Feedback";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_Feedback>()
{
  return "vox_nav_msgs/action/ComputePathToPose_Feedback";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "vox_nav_msgs/action/detail/compute_path_to_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>()
{
  return "vox_nav_msgs::action::ComputePathToPose_SendGoal_Request";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>()
{
  return "vox_nav_msgs/action/ComputePathToPose_SendGoal_Request";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<vox_nav_msgs::action::ComputePathToPose_Goal>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<vox_nav_msgs::action::ComputePathToPose_Goal>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>()
{
  return "vox_nav_msgs::action::ComputePathToPose_SendGoal_Response";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>()
{
  return "vox_nav_msgs/action/ComputePathToPose_SendGoal_Response";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_SendGoal>()
{
  return "vox_nav_msgs::action::ComputePathToPose_SendGoal";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_SendGoal>()
{
  return "vox_nav_msgs/action/ComputePathToPose_SendGoal";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>::value &&
    has_fixed_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>::value &&
    has_bounded_size<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<vox_nav_msgs::action::ComputePathToPose_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<vox_nav_msgs::action::ComputePathToPose_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vox_nav_msgs::action::ComputePathToPose_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>()
{
  return "vox_nav_msgs::action::ComputePathToPose_GetResult_Request";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>()
{
  return "vox_nav_msgs/action/ComputePathToPose_GetResult_Request";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "vox_nav_msgs/action/detail/compute_path_to_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>()
{
  return "vox_nav_msgs::action::ComputePathToPose_GetResult_Response";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>()
{
  return "vox_nav_msgs/action/ComputePathToPose_GetResult_Response";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<vox_nav_msgs::action::ComputePathToPose_Result>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<vox_nav_msgs::action::ComputePathToPose_Result>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_GetResult>()
{
  return "vox_nav_msgs::action::ComputePathToPose_GetResult";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_GetResult>()
{
  return "vox_nav_msgs/action/ComputePathToPose_GetResult";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>::value &&
    has_fixed_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>::value &&
    has_bounded_size<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>::value
  >
{
};

template<>
struct is_service<vox_nav_msgs::action::ComputePathToPose_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<vox_nav_msgs::action::ComputePathToPose_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vox_nav_msgs::action::ComputePathToPose_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "vox_nav_msgs/action/detail/compute_path_to_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::ComputePathToPose_FeedbackMessage>()
{
  return "vox_nav_msgs::action::ComputePathToPose_FeedbackMessage";
}

template<>
inline const char * name<vox_nav_msgs::action::ComputePathToPose_FeedbackMessage>()
{
  return "vox_nav_msgs/action/ComputePathToPose_FeedbackMessage";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::ComputePathToPose_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<vox_nav_msgs::action::ComputePathToPose_Feedback>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::ComputePathToPose_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<vox_nav_msgs::action::ComputePathToPose_Feedback>::value> {};

template<>
struct is_message<vox_nav_msgs::action::ComputePathToPose_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<vox_nav_msgs::action::ComputePathToPose>
  : std::true_type
{
};

template<>
struct is_action_goal<vox_nav_msgs::action::ComputePathToPose_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<vox_nav_msgs::action::ComputePathToPose_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<vox_nav_msgs::action::ComputePathToPose_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // VOX_NAV_MSGS__ACTION__DETAIL__COMPUTE_PATH_TO_POSE__TRAITS_HPP_
