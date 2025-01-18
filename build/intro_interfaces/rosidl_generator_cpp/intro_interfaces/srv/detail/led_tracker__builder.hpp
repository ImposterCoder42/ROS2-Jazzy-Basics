// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/srv/led_tracker.hpp"


#ifndef INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__BUILDER_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intro_interfaces/srv/detail/led_tracker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_LEDTracker_Request_led_state
{
public:
  explicit Init_LEDTracker_Request_led_state(::intro_interfaces::srv::LEDTracker_Request & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::srv::LEDTracker_Request led_state(::intro_interfaces::srv::LEDTracker_Request::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Request msg_;
};

class Init_LEDTracker_Request_num_of_sys_blinks
{
public:
  Init_LEDTracker_Request_num_of_sys_blinks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDTracker_Request_led_state num_of_sys_blinks(::intro_interfaces::srv::LEDTracker_Request::_num_of_sys_blinks_type arg)
  {
    msg_.num_of_sys_blinks = std::move(arg);
    return Init_LEDTracker_Request_led_state(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::LEDTracker_Request>()
{
  return intro_interfaces::srv::builder::Init_LEDTracker_Request_num_of_sys_blinks();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_LEDTracker_Response_is_total_blinks_in_series_of_ten
{
public:
  explicit Init_LEDTracker_Response_is_total_blinks_in_series_of_ten(::intro_interfaces::srv::LEDTracker_Response & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::srv::LEDTracker_Response is_total_blinks_in_series_of_ten(::intro_interfaces::srv::LEDTracker_Response::_is_total_blinks_in_series_of_ten_type arg)
  {
    msg_.is_total_blinks_in_series_of_ten = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Response msg_;
};

class Init_LEDTracker_Response_num_of_cycles_completed
{
public:
  Init_LEDTracker_Response_num_of_cycles_completed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDTracker_Response_is_total_blinks_in_series_of_ten num_of_cycles_completed(::intro_interfaces::srv::LEDTracker_Response::_num_of_cycles_completed_type arg)
  {
    msg_.num_of_cycles_completed = std::move(arg);
    return Init_LEDTracker_Response_is_total_blinks_in_series_of_ten(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::LEDTracker_Response>()
{
  return intro_interfaces::srv::builder::Init_LEDTracker_Response_num_of_cycles_completed();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_LEDTracker_Event_response
{
public:
  explicit Init_LEDTracker_Event_response(::intro_interfaces::srv::LEDTracker_Event & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::srv::LEDTracker_Event response(::intro_interfaces::srv::LEDTracker_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Event msg_;
};

class Init_LEDTracker_Event_request
{
public:
  explicit Init_LEDTracker_Event_request(::intro_interfaces::srv::LEDTracker_Event & msg)
  : msg_(msg)
  {}
  Init_LEDTracker_Event_response request(::intro_interfaces::srv::LEDTracker_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_LEDTracker_Event_response(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Event msg_;
};

class Init_LEDTracker_Event_info
{
public:
  Init_LEDTracker_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LEDTracker_Event_request info(::intro_interfaces::srv::LEDTracker_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_LEDTracker_Event_request(msg_);
  }

private:
  ::intro_interfaces::srv::LEDTracker_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::LEDTracker_Event>()
{
  return intro_interfaces::srv::builder::Init_LEDTracker_Event_info();
}

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__SRV__DETAIL__LED_TRACKER__BUILDER_HPP_
