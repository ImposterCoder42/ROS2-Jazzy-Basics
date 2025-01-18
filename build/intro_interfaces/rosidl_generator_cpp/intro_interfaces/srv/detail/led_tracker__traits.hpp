// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/srv/led_tracker.hpp"


#ifndef INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__TRAITS_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "intro_interfaces/srv/detail/led_tracker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace intro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LEDTracker_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_of_sys_blinks
  {
    out << "num_of_sys_blinks: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_sys_blinks, out);
    out << ", ";
  }

  // member: led_state
  {
    out << "led_state: ";
    rosidl_generator_traits::value_to_yaml(msg.led_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDTracker_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_of_sys_blinks
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_sys_blinks: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_sys_blinks, out);
    out << "\n";
  }

  // member: led_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_state: ";
    rosidl_generator_traits::value_to_yaml(msg.led_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDTracker_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::srv::LEDTracker_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::srv::LEDTracker_Request & msg)
{
  return intro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::srv::LEDTracker_Request>()
{
  return "intro_interfaces::srv::LEDTracker_Request";
}

template<>
inline const char * name<intro_interfaces::srv::LEDTracker_Request>()
{
  return "intro_interfaces/srv/LEDTracker_Request";
}

template<>
struct has_fixed_size<intro_interfaces::srv::LEDTracker_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<intro_interfaces::srv::LEDTracker_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<intro_interfaces::srv::LEDTracker_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace intro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LEDTracker_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_of_cycles_completed
  {
    out << "num_of_cycles_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_cycles_completed, out);
    out << ", ";
  }

  // member: is_total_blinks_in_series_of_ten
  {
    out << "is_total_blinks_in_series_of_ten: ";
    rosidl_generator_traits::value_to_yaml(msg.is_total_blinks_in_series_of_ten, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDTracker_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_of_cycles_completed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_of_cycles_completed: ";
    rosidl_generator_traits::value_to_yaml(msg.num_of_cycles_completed, out);
    out << "\n";
  }

  // member: is_total_blinks_in_series_of_ten
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_total_blinks_in_series_of_ten: ";
    rosidl_generator_traits::value_to_yaml(msg.is_total_blinks_in_series_of_ten, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LEDTracker_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::srv::LEDTracker_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::srv::LEDTracker_Response & msg)
{
  return intro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::srv::LEDTracker_Response>()
{
  return "intro_interfaces::srv::LEDTracker_Response";
}

template<>
inline const char * name<intro_interfaces::srv::LEDTracker_Response>()
{
  return "intro_interfaces/srv/LEDTracker_Response";
}

template<>
struct has_fixed_size<intro_interfaces::srv::LEDTracker_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<intro_interfaces::srv::LEDTracker_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<intro_interfaces::srv::LEDTracker_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace intro_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const LEDTracker_Event & msg,
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
  const LEDTracker_Event & msg,
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

inline std::string to_yaml(const LEDTracker_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::srv::LEDTracker_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::srv::LEDTracker_Event & msg)
{
  return intro_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::srv::LEDTracker_Event>()
{
  return "intro_interfaces::srv::LEDTracker_Event";
}

template<>
inline const char * name<intro_interfaces::srv::LEDTracker_Event>()
{
  return "intro_interfaces/srv/LEDTracker_Event";
}

template<>
struct has_fixed_size<intro_interfaces::srv::LEDTracker_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<intro_interfaces::srv::LEDTracker_Event>
  : std::integral_constant<bool, has_bounded_size<intro_interfaces::srv::LEDTracker_Request>::value && has_bounded_size<intro_interfaces::srv::LEDTracker_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<intro_interfaces::srv::LEDTracker_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<intro_interfaces::srv::LEDTracker>()
{
  return "intro_interfaces::srv::LEDTracker";
}

template<>
inline const char * name<intro_interfaces::srv::LEDTracker>()
{
  return "intro_interfaces/srv/LEDTracker";
}

template<>
struct has_fixed_size<intro_interfaces::srv::LEDTracker>
  : std::integral_constant<
    bool,
    has_fixed_size<intro_interfaces::srv::LEDTracker_Request>::value &&
    has_fixed_size<intro_interfaces::srv::LEDTracker_Response>::value
  >
{
};

template<>
struct has_bounded_size<intro_interfaces::srv::LEDTracker>
  : std::integral_constant<
    bool,
    has_bounded_size<intro_interfaces::srv::LEDTracker_Request>::value &&
    has_bounded_size<intro_interfaces::srv::LEDTracker_Response>::value
  >
{
};

template<>
struct is_service<intro_interfaces::srv::LEDTracker>
  : std::true_type
{
};

template<>
struct is_service_request<intro_interfaces::srv::LEDTracker_Request>
  : std::true_type
{
};

template<>
struct is_service_response<intro_interfaces::srv::LEDTracker_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__TRAITS_HPP_
