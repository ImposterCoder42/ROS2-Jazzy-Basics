// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from intro_interfaces:action/ToggleLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/action/toggle_led.hpp"


#ifndef INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__TRAITS_HPP_
#define INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "intro_interfaces/action/detail/toggle_led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_Goal & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_Goal>()
{
  return "intro_interfaces::action::ToggleLED_Goal";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_Goal>()
{
  return "intro_interfaces/action/ToggleLED_Goal";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_complete
  {
    out << "is_complete: ";
    rosidl_generator_traits::value_to_yaml(msg.is_complete, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_complete
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_complete: ";
    rosidl_generator_traits::value_to_yaml(msg.is_complete, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_Result & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_Result>()
{
  return "intro_interfaces::action::ToggleLED_Result";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_Result>()
{
  return "intro_interfaces/action/ToggleLED_Result";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: current_duty_cycle
  {
    out << "current_duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_duty_cycle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: current_duty_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_duty_cycle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_Feedback & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_Feedback>()
{
  return "intro_interfaces::action::ToggleLED_Feedback";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_Feedback>()
{
  return "intro_interfaces/action/ToggleLED_Feedback";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "intro_interfaces/action/detail/toggle_led__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_SendGoal_Request & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_SendGoal_Request>()
{
  return "intro_interfaces::action::ToggleLED_SendGoal_Request";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_SendGoal_Request>()
{
  return "intro_interfaces/action/ToggleLED_SendGoal_Request";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<intro_interfaces::action::ToggleLED_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<intro_interfaces::action::ToggleLED_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_SendGoal_Response & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_SendGoal_Response>()
{
  return "intro_interfaces::action::ToggleLED_SendGoal_Response";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_SendGoal_Response>()
{
  return "intro_interfaces/action/ToggleLED_SendGoal_Response";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_SendGoal_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_SendGoal_Event & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_SendGoal_Event>()
{
  return "intro_interfaces::action::ToggleLED_SendGoal_Event";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_SendGoal_Event>()
{
  return "intro_interfaces/action/ToggleLED_SendGoal_Event";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Request>::value && has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_SendGoal>()
{
  return "intro_interfaces::action::ToggleLED_SendGoal";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_SendGoal>()
{
  return "intro_interfaces/action/ToggleLED_SendGoal";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<intro_interfaces::action::ToggleLED_SendGoal_Request>::value &&
    has_fixed_size<intro_interfaces::action::ToggleLED_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Request>::value &&
    has_bounded_size<intro_interfaces::action::ToggleLED_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<intro_interfaces::action::ToggleLED_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<intro_interfaces::action::ToggleLED_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<intro_interfaces::action::ToggleLED_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_GetResult_Request & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_GetResult_Request>()
{
  return "intro_interfaces::action::ToggleLED_GetResult_Request";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_GetResult_Request>()
{
  return "intro_interfaces/action/ToggleLED_GetResult_Request";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "intro_interfaces/action/detail/toggle_led__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_GetResult_Response & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_GetResult_Response>()
{
  return "intro_interfaces::action::ToggleLED_GetResult_Response";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_GetResult_Response>()
{
  return "intro_interfaces/action/ToggleLED_GetResult_Response";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<intro_interfaces::action::ToggleLED_Result>::value> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<intro_interfaces::action::ToggleLED_Result>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_GetResult_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_GetResult_Event & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_GetResult_Event>()
{
  return "intro_interfaces::action::ToggleLED_GetResult_Event";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_GetResult_Event>()
{
  return "intro_interfaces/action/ToggleLED_GetResult_Event";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Request>::value && has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_GetResult>()
{
  return "intro_interfaces::action::ToggleLED_GetResult";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_GetResult>()
{
  return "intro_interfaces/action/ToggleLED_GetResult";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<intro_interfaces::action::ToggleLED_GetResult_Request>::value &&
    has_fixed_size<intro_interfaces::action::ToggleLED_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Request>::value &&
    has_bounded_size<intro_interfaces::action::ToggleLED_GetResult_Response>::value
  >
{
};

template<>
struct is_service<intro_interfaces::action::ToggleLED_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<intro_interfaces::action::ToggleLED_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<intro_interfaces::action::ToggleLED_GetResult_Response>
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
// #include "intro_interfaces/action/detail/toggle_led__traits.hpp"

namespace intro_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ToggleLED_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ToggleLED_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ToggleLED_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::action::ToggleLED_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::action::ToggleLED_FeedbackMessage & msg)
{
  return intro_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::action::ToggleLED_FeedbackMessage>()
{
  return "intro_interfaces::action::ToggleLED_FeedbackMessage";
}

template<>
inline const char * name<intro_interfaces::action::ToggleLED_FeedbackMessage>()
{
  return "intro_interfaces/action/ToggleLED_FeedbackMessage";
}

template<>
struct has_fixed_size<intro_interfaces::action::ToggleLED_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<intro_interfaces::action::ToggleLED_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<intro_interfaces::action::ToggleLED_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<intro_interfaces::action::ToggleLED_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<intro_interfaces::action::ToggleLED_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<intro_interfaces::action::ToggleLED>
  : std::true_type
{
};

template<>
struct is_action_goal<intro_interfaces::action::ToggleLED_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<intro_interfaces::action::ToggleLED_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<intro_interfaces::action::ToggleLED_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__TRAITS_HPP_
