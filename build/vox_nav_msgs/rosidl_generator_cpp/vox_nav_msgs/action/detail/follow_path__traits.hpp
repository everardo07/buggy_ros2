// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vox_nav_msgs:action/FollowPath.idl
// generated code does not contain a copyright notice

#ifndef VOX_NAV_MSGS__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_
#define VOX_NAV_MSGS__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_

#include "vox_nav_msgs/action/detail/follow_path__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'path'
#include "nav_msgs/msg/detail/path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_Goal>()
{
  return "vox_nav_msgs::action::FollowPath_Goal";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_Goal>()
{
  return "vox_nav_msgs/action/FollowPath_Goal";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'total_time'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_Result>()
{
  return "vox_nav_msgs::action::FollowPath_Result";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_Result>()
{
  return "vox_nav_msgs/action/FollowPath_Result";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_Result>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_Result>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'elapsed_time'
// already included above
// #include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_Feedback>()
{
  return "vox_nav_msgs::action::FollowPath_Feedback";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_Feedback>()
{
  return "vox_nav_msgs/action/FollowPath_Feedback";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_Feedback>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_Feedback>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "vox_nav_msgs/action/detail/follow_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_SendGoal_Request>()
{
  return "vox_nav_msgs::action::FollowPath_SendGoal_Request";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_SendGoal_Request>()
{
  return "vox_nav_msgs/action/FollowPath_SendGoal_Request";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<vox_nav_msgs::action::FollowPath_Goal>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<vox_nav_msgs::action::FollowPath_Goal>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_SendGoal_Response>()
{
  return "vox_nav_msgs::action::FollowPath_SendGoal_Response";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_SendGoal_Response>()
{
  return "vox_nav_msgs/action/FollowPath_SendGoal_Response";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_SendGoal>()
{
  return "vox_nav_msgs::action::FollowPath_SendGoal";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_SendGoal>()
{
  return "vox_nav_msgs/action/FollowPath_SendGoal";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<vox_nav_msgs::action::FollowPath_SendGoal_Request>::value &&
    has_fixed_size<vox_nav_msgs::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<vox_nav_msgs::action::FollowPath_SendGoal_Request>::value &&
    has_bounded_size<vox_nav_msgs::action::FollowPath_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<vox_nav_msgs::action::FollowPath_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<vox_nav_msgs::action::FollowPath_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vox_nav_msgs::action::FollowPath_SendGoal_Response>
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
inline const char * data_type<vox_nav_msgs::action::FollowPath_GetResult_Request>()
{
  return "vox_nav_msgs::action::FollowPath_GetResult_Request";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_GetResult_Request>()
{
  return "vox_nav_msgs/action/FollowPath_GetResult_Request";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "vox_nav_msgs/action/detail/follow_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_GetResult_Response>()
{
  return "vox_nav_msgs::action::FollowPath_GetResult_Response";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_GetResult_Response>()
{
  return "vox_nav_msgs/action/FollowPath_GetResult_Response";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<vox_nav_msgs::action::FollowPath_Result>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<vox_nav_msgs::action::FollowPath_Result>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_GetResult>()
{
  return "vox_nav_msgs::action::FollowPath_GetResult";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_GetResult>()
{
  return "vox_nav_msgs/action/FollowPath_GetResult";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<vox_nav_msgs::action::FollowPath_GetResult_Request>::value &&
    has_fixed_size<vox_nav_msgs::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<vox_nav_msgs::action::FollowPath_GetResult_Request>::value &&
    has_bounded_size<vox_nav_msgs::action::FollowPath_GetResult_Response>::value
  >
{
};

template<>
struct is_service<vox_nav_msgs::action::FollowPath_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<vox_nav_msgs::action::FollowPath_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<vox_nav_msgs::action::FollowPath_GetResult_Response>
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
// #include "vox_nav_msgs/action/detail/follow_path__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<vox_nav_msgs::action::FollowPath_FeedbackMessage>()
{
  return "vox_nav_msgs::action::FollowPath_FeedbackMessage";
}

template<>
inline const char * name<vox_nav_msgs::action::FollowPath_FeedbackMessage>()
{
  return "vox_nav_msgs/action/FollowPath_FeedbackMessage";
}

template<>
struct has_fixed_size<vox_nav_msgs::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value && has_fixed_size<vox_nav_msgs::action::FollowPath_Feedback>::value> {};

template<>
struct has_bounded_size<vox_nav_msgs::action::FollowPath_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value && has_bounded_size<vox_nav_msgs::action::FollowPath_Feedback>::value> {};

template<>
struct is_message<vox_nav_msgs::action::FollowPath_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<vox_nav_msgs::action::FollowPath>
  : std::true_type
{
};

template<>
struct is_action_goal<vox_nav_msgs::action::FollowPath_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<vox_nav_msgs::action::FollowPath_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<vox_nav_msgs::action::FollowPath_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // VOX_NAV_MSGS__ACTION__DETAIL__FOLLOW_PATH__TRAITS_HPP_
