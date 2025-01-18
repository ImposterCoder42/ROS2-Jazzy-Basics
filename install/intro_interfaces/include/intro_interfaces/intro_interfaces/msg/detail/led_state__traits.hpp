// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/msg/led_state.hpp"


#ifndef INTRO_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_
#define INTRO_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "intro_interfaces/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace intro_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LEDState & msg,
  std::ostream & out)
{
  out << "{";
  // member: new_state_msg
  {
    out << "new_state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.new_state_msg, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LEDState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: new_state_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_state_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.new_state_msg, out);
    out << "\n";
  }

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

inline std::string to_yaml(const LEDState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace intro_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use intro_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const intro_interfaces::msg::LEDState & msg,
  std::ostream & out, size_t indentation = 0)
{
  intro_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use intro_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const intro_interfaces::msg::LEDState & msg)
{
  return intro_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<intro_interfaces::msg::LEDState>()
{
  return "intro_interfaces::msg::LEDState";
}

template<>
inline const char * name<intro_interfaces::msg::LEDState>()
{
  return "intro_interfaces/msg/LEDState";
}

template<>
struct has_fixed_size<intro_interfaces::msg::LEDState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<intro_interfaces::msg::LEDState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<intro_interfaces::msg::LEDState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // INTRO_INTERFACES__MSG__DETAIL__LED_STATE__TRAITS_HPP_
