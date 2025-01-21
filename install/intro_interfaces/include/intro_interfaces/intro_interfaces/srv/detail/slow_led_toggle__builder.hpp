// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intro_interfaces:srv/SlowLEDToggle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/srv/slow_led_toggle.hpp"


#ifndef INTRO_INTERFACES__SRV__DETAIL__SLOW_LED_TOGGLE__BUILDER_HPP_
#define INTRO_INTERFACES__SRV__DETAIL__SLOW_LED_TOGGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intro_interfaces/srv/detail/slow_led_toggle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_SlowLEDToggle_Request_req
{
public:
  Init_SlowLEDToggle_Request_req()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::srv::SlowLEDToggle_Request req(::intro_interfaces::srv::SlowLEDToggle_Request::_req_type arg)
  {
    msg_.req = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::SlowLEDToggle_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::SlowLEDToggle_Request>()
{
  return intro_interfaces::srv::builder::Init_SlowLEDToggle_Request_req();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_SlowLEDToggle_Response_res
{
public:
  Init_SlowLEDToggle_Response_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::srv::SlowLEDToggle_Response res(::intro_interfaces::srv::SlowLEDToggle_Response::_res_type arg)
  {
    msg_.res = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::SlowLEDToggle_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::SlowLEDToggle_Response>()
{
  return intro_interfaces::srv::builder::Init_SlowLEDToggle_Response_res();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace srv
{

namespace builder
{

class Init_SlowLEDToggle_Event_response
{
public:
  explicit Init_SlowLEDToggle_Event_response(::intro_interfaces::srv::SlowLEDToggle_Event & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::srv::SlowLEDToggle_Event response(::intro_interfaces::srv::SlowLEDToggle_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::srv::SlowLEDToggle_Event msg_;
};

class Init_SlowLEDToggle_Event_request
{
public:
  explicit Init_SlowLEDToggle_Event_request(::intro_interfaces::srv::SlowLEDToggle_Event & msg)
  : msg_(msg)
  {}
  Init_SlowLEDToggle_Event_response request(::intro_interfaces::srv::SlowLEDToggle_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SlowLEDToggle_Event_response(msg_);
  }

private:
  ::intro_interfaces::srv::SlowLEDToggle_Event msg_;
};

class Init_SlowLEDToggle_Event_info
{
public:
  Init_SlowLEDToggle_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlowLEDToggle_Event_request info(::intro_interfaces::srv::SlowLEDToggle_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SlowLEDToggle_Event_request(msg_);
  }

private:
  ::intro_interfaces::srv::SlowLEDToggle_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::srv::SlowLEDToggle_Event>()
{
  return intro_interfaces::srv::builder::Init_SlowLEDToggle_Event_info();
}

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__SRV__DETAIL__SLOW_LED_TOGGLE__BUILDER_HPP_
