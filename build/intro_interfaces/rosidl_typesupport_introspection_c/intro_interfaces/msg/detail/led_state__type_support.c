// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "intro_interfaces/msg/detail/led_state__rosidl_typesupport_introspection_c.h"
#include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "intro_interfaces/msg/detail/led_state__functions.h"
#include "intro_interfaces/msg/detail/led_state__struct.h"


// Include directives for member types
// Member `new_state_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  intro_interfaces__msg__LEDState__init(message_memory);
}

void intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_fini_function(void * message_memory)
{
  intro_interfaces__msg__LEDState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_member_array[2] = {
  {
    "new_state_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__msg__LEDState, new_state_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__msg__LEDState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_members = {
  "intro_interfaces__msg",  // message namespace
  "LEDState",  // message name
  2,  // number of fields
  sizeof(intro_interfaces__msg__LEDState),
  false,  // has_any_key_member_
  intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_member_array,  // message members
  intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_init_function,  // function to initialize message memory (memory has to be allocated)
  intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_type_support_handle = {
  0,
  &intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_members,
  get_message_typesupport_handle_function,
  &intro_interfaces__msg__LEDState__get_type_hash,
  &intro_interfaces__msg__LEDState__get_type_description,
  &intro_interfaces__msg__LEDState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, msg, LEDState)() {
  if (!intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_type_support_handle.typesupport_identifier) {
    intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &intro_interfaces__msg__LEDState__rosidl_typesupport_introspection_c__LEDState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
