// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/msg/led_state.hpp"


#ifndef INTRO_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_
#define INTRO_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intro_interfaces/msg/detail/led_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intro_interfaces
{

namespace msg
{

namespace builder
{

class Init_LEDState_state
{
public:
  explicit Init_LEDState_state(::intro_interfaces::msg::LEDState & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::msg::LEDState state(::intro_interfaces::msg::LEDState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::msg::LEDState msg_;
};

class Init_LEDState_new_state_msg
{
public:
  Init_LEDState_new_state_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDState_state new_state_msg(::intro_interfaces::msg::LEDState::_new_state_msg_type arg)
  {
    msg_.new_state_msg = std::move(arg);
    return Init_LEDState_state(msg_);
  }

private:
  ::intro_interfaces::msg::LEDState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::msg::LEDState>()
{
  return intro_interfaces::msg::builder::Init_LEDState_new_state_msg();
}

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__MSG__DETAIL__LED_STATE__BUILDER_HPP_
