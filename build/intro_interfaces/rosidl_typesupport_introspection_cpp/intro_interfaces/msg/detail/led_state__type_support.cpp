// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "intro_interfaces/msg/detail/led_state__functions.h"
#include "intro_interfaces/msg/detail/led_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace intro_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LEDState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) intro_interfaces::msg::LEDState(_init);
}

void LEDState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<intro_interfaces::msg::LEDState *>(message_memory);
  typed_message->~LEDState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LEDState_message_member_array[2] = {
  {
    "new_state_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces::msg::LEDState, new_state_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces::msg::LEDState, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LEDState_message_members = {
  "intro_interfaces::msg",  // message namespace
  "LEDState",  // message name
  2,  // number of fields
  sizeof(intro_interfaces::msg::LEDState),
  false,  // has_any_key_member_
  LEDState_message_member_array,  // message members
  LEDState_init_function,  // function to initialize message memory (memory has to be allocated)
  LEDState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LEDState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LEDState_message_members,
  get_message_typesupport_handle_function,
  &intro_interfaces__msg__LEDState__get_type_hash,
  &intro_interfaces__msg__LEDState__get_type_description,
  &intro_interfaces__msg__LEDState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace intro_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<intro_interfaces::msg::LEDState>()
{
  return &::intro_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, intro_interfaces, msg, LEDState)() {
  return &::intro_interfaces::msg::rosidl_typesupport_introspection_cpp::LEDState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
