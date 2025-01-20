// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from intro_interfaces:action/ToggleLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/action/toggle_led.hpp"


#ifndef INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__BUILDER_HPP_
#define INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "intro_interfaces/action/detail/toggle_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_Goal_state
{
public:
  Init_ToggleLED_Goal_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::action::ToggleLED_Goal state(::intro_interfaces::action::ToggleLED_Goal::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_Goal>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_Goal_state();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_Result_is_complete
{
public:
  Init_ToggleLED_Result_is_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::action::ToggleLED_Result is_complete(::intro_interfaces::action::ToggleLED_Result::_is_complete_type arg)
  {
    msg_.is_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_Result>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_Result_is_complete();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_Feedback_current_duty_cycle
{
public:
  Init_ToggleLED_Feedback_current_duty_cycle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::action::ToggleLED_Feedback current_duty_cycle(::intro_interfaces::action::ToggleLED_Feedback::_current_duty_cycle_type arg)
  {
    msg_.current_duty_cycle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_Feedback>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_Feedback_current_duty_cycle();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_SendGoal_Request_goal
{
public:
  explicit Init_ToggleLED_SendGoal_Request_goal(::intro_interfaces::action::ToggleLED_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::action::ToggleLED_SendGoal_Request goal(::intro_interfaces::action::ToggleLED_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Request msg_;
};

class Init_ToggleLED_SendGoal_Request_goal_id
{
public:
  Init_ToggleLED_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleLED_SendGoal_Request_goal goal_id(::intro_interfaces::action::ToggleLED_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ToggleLED_SendGoal_Request_goal(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_SendGoal_Request>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_SendGoal_Request_goal_id();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_SendGoal_Response_stamp
{
public:
  explicit Init_ToggleLED_SendGoal_Response_stamp(::intro_interfaces::action::ToggleLED_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::action::ToggleLED_SendGoal_Response stamp(::intro_interfaces::action::ToggleLED_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Response msg_;
};

class Init_ToggleLED_SendGoal_Response_accepted
{
public:
  Init_ToggleLED_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleLED_SendGoal_Response_stamp accepted(::intro_interfaces::action::ToggleLED_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ToggleLED_SendGoal_Response_stamp(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_SendGoal_Response>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_SendGoal_Response_accepted();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_SendGoal_Event_response
{
public:
  explicit Init_ToggleLED_SendGoal_Event_response(::intro_interfaces::action::ToggleLED_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::action::ToggleLED_SendGoal_Event response(::intro_interfaces::action::ToggleLED_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Event msg_;
};

class Init_ToggleLED_SendGoal_Event_request
{
public:
  explicit Init_ToggleLED_SendGoal_Event_request(::intro_interfaces::action::ToggleLED_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ToggleLED_SendGoal_Event_response request(::intro_interfaces::action::ToggleLED_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ToggleLED_SendGoal_Event_response(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Event msg_;
};

class Init_ToggleLED_SendGoal_Event_info
{
public:
  Init_ToggleLED_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleLED_SendGoal_Event_request info(::intro_interfaces::action::ToggleLED_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ToggleLED_SendGoal_Event_request(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_SendGoal_Event>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_SendGoal_Event_info();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_GetResult_Request_goal_id
{
public:
  Init_ToggleLED_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::intro_interfaces::action::ToggleLED_GetResult_Request goal_id(::intro_interfaces::action::ToggleLED_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_GetResult_Request>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_GetResult_Request_goal_id();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_GetResult_Response_result
{
public:
  explicit Init_ToggleLED_GetResult_Response_result(::intro_interfaces::action::ToggleLED_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::action::ToggleLED_GetResult_Response result(::intro_interfaces::action::ToggleLED_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_GetResult_Response msg_;
};

class Init_ToggleLED_GetResult_Response_status
{
public:
  Init_ToggleLED_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleLED_GetResult_Response_result status(::intro_interfaces::action::ToggleLED_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ToggleLED_GetResult_Response_result(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_GetResult_Response>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_GetResult_Response_status();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_GetResult_Event_response
{
public:
  explicit Init_ToggleLED_GetResult_Event_response(::intro_interfaces::action::ToggleLED_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::action::ToggleLED_GetResult_Event response(::intro_interfaces::action::ToggleLED_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_GetResult_Event msg_;
};

class Init_ToggleLED_GetResult_Event_request
{
public:
  explicit Init_ToggleLED_GetResult_Event_request(::intro_interfaces::action::ToggleLED_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ToggleLED_GetResult_Event_response request(::intro_interfaces::action::ToggleLED_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ToggleLED_GetResult_Event_response(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_GetResult_Event msg_;
};

class Init_ToggleLED_GetResult_Event_info
{
public:
  Init_ToggleLED_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleLED_GetResult_Event_request info(::intro_interfaces::action::ToggleLED_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ToggleLED_GetResult_Event_request(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_GetResult_Event>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_GetResult_Event_info();
}

}  // namespace intro_interfaces


namespace intro_interfaces
{

namespace action
{

namespace builder
{

class Init_ToggleLED_FeedbackMessage_feedback
{
public:
  explicit Init_ToggleLED_FeedbackMessage_feedback(::intro_interfaces::action::ToggleLED_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::intro_interfaces::action::ToggleLED_FeedbackMessage feedback(::intro_interfaces::action::ToggleLED_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_FeedbackMessage msg_;
};

class Init_ToggleLED_FeedbackMessage_goal_id
{
public:
  Init_ToggleLED_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ToggleLED_FeedbackMessage_feedback goal_id(::intro_interfaces::action::ToggleLED_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ToggleLED_FeedbackMessage_feedback(msg_);
  }

private:
  ::intro_interfaces::action::ToggleLED_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::intro_interfaces::action::ToggleLED_FeedbackMessage>()
{
  return intro_interfaces::action::builder::Init_ToggleLED_FeedbackMessage_goal_id();
}

}  // namespace intro_interfaces

#endif  // INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__BUILDER_HPP_
