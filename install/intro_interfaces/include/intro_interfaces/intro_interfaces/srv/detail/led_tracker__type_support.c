// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "intro_interfaces/srv/detail/led_tracker__rosidl_typesupport_introspection_c.h"
#include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "intro_interfaces/srv/detail/led_tracker__functions.h"
#include "intro_interfaces/srv/detail/led_tracker__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  intro_interfaces__srv__LEDTracker_Request__init(message_memory);
}

void intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_fini_function(void * message_memory)
{
  intro_interfaces__srv__LEDTracker_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_member_array[2] = {
  {
    "num_of_sys_blinks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Request, num_of_sys_blinks),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "led_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Request, led_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_members = {
  "intro_interfaces__srv",  // message namespace
  "LEDTracker_Request",  // message name
  2,  // number of fields
  sizeof(intro_interfaces__srv__LEDTracker_Request),
  false,  // has_any_key_member_
  intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_member_array,  // message members
  intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_type_support_handle = {
  0,
  &intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_members,
  get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Request__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Request__get_type_description,
  &intro_interfaces__srv__LEDTracker_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Request)() {
  if (!intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  intro_interfaces__srv__LEDTracker_Response__init(message_memory);
}

void intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_fini_function(void * message_memory)
{
  intro_interfaces__srv__LEDTracker_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_member_array[2] = {
  {
    "num_of_cycles_completed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Response, num_of_cycles_completed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_total_blinks_in_series_of_ten",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Response, is_total_blinks_in_series_of_ten),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_members = {
  "intro_interfaces__srv",  // message namespace
  "LEDTracker_Response",  // message name
  2,  // number of fields
  sizeof(intro_interfaces__srv__LEDTracker_Response),
  false,  // has_any_key_member_
  intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_member_array,  // message members
  intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle = {
  0,
  &intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_members,
  get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Response__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Response__get_type_description,
  &intro_interfaces__srv__LEDTracker_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Response)() {
  if (!intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "intro_interfaces/srv/led_tracker.h"
// Member `request`
// Member `response`
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  intro_interfaces__srv__LEDTracker_Event__init(message_memory);
}

void intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_fini_function(void * message_memory)
{
  intro_interfaces__srv__LEDTracker_Event__fini(message_memory);
}

size_t intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__size_function__LEDTracker_Event__request(
  const void * untyped_member)
{
  const intro_interfaces__srv__LEDTracker_Request__Sequence * member =
    (const intro_interfaces__srv__LEDTracker_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_const_function__LEDTracker_Event__request(
  const void * untyped_member, size_t index)
{
  const intro_interfaces__srv__LEDTracker_Request__Sequence * member =
    (const intro_interfaces__srv__LEDTracker_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_function__LEDTracker_Event__request(
  void * untyped_member, size_t index)
{
  intro_interfaces__srv__LEDTracker_Request__Sequence * member =
    (intro_interfaces__srv__LEDTracker_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__fetch_function__LEDTracker_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const intro_interfaces__srv__LEDTracker_Request * item =
    ((const intro_interfaces__srv__LEDTracker_Request *)
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_const_function__LEDTracker_Event__request(untyped_member, index));
  intro_interfaces__srv__LEDTracker_Request * value =
    (intro_interfaces__srv__LEDTracker_Request *)(untyped_value);
  *value = *item;
}

void intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__assign_function__LEDTracker_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  intro_interfaces__srv__LEDTracker_Request * item =
    ((intro_interfaces__srv__LEDTracker_Request *)
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_function__LEDTracker_Event__request(untyped_member, index));
  const intro_interfaces__srv__LEDTracker_Request * value =
    (const intro_interfaces__srv__LEDTracker_Request *)(untyped_value);
  *item = *value;
}

bool intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__resize_function__LEDTracker_Event__request(
  void * untyped_member, size_t size)
{
  intro_interfaces__srv__LEDTracker_Request__Sequence * member =
    (intro_interfaces__srv__LEDTracker_Request__Sequence *)(untyped_member);
  intro_interfaces__srv__LEDTracker_Request__Sequence__fini(member);
  return intro_interfaces__srv__LEDTracker_Request__Sequence__init(member, size);
}

size_t intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__size_function__LEDTracker_Event__response(
  const void * untyped_member)
{
  const intro_interfaces__srv__LEDTracker_Response__Sequence * member =
    (const intro_interfaces__srv__LEDTracker_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_const_function__LEDTracker_Event__response(
  const void * untyped_member, size_t index)
{
  const intro_interfaces__srv__LEDTracker_Response__Sequence * member =
    (const intro_interfaces__srv__LEDTracker_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_function__LEDTracker_Event__response(
  void * untyped_member, size_t index)
{
  intro_interfaces__srv__LEDTracker_Response__Sequence * member =
    (intro_interfaces__srv__LEDTracker_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__fetch_function__LEDTracker_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const intro_interfaces__srv__LEDTracker_Response * item =
    ((const intro_interfaces__srv__LEDTracker_Response *)
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_const_function__LEDTracker_Event__response(untyped_member, index));
  intro_interfaces__srv__LEDTracker_Response * value =
    (intro_interfaces__srv__LEDTracker_Response *)(untyped_value);
  *value = *item;
}

void intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__assign_function__LEDTracker_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  intro_interfaces__srv__LEDTracker_Response * item =
    ((intro_interfaces__srv__LEDTracker_Response *)
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_function__LEDTracker_Event__response(untyped_member, index));
  const intro_interfaces__srv__LEDTracker_Response * value =
    (const intro_interfaces__srv__LEDTracker_Response *)(untyped_value);
  *item = *value;
}

bool intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__resize_function__LEDTracker_Event__response(
  void * untyped_member, size_t size)
{
  intro_interfaces__srv__LEDTracker_Response__Sequence * member =
    (intro_interfaces__srv__LEDTracker_Response__Sequence *)(untyped_member);
  intro_interfaces__srv__LEDTracker_Response__Sequence__fini(member);
  return intro_interfaces__srv__LEDTracker_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Event, request),  // bytes offset in struct
    NULL,  // default value
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__size_function__LEDTracker_Event__request,  // size() function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_const_function__LEDTracker_Event__request,  // get_const(index) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_function__LEDTracker_Event__request,  // get(index) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__fetch_function__LEDTracker_Event__request,  // fetch(index, &value) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__assign_function__LEDTracker_Event__request,  // assign(index, value) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__resize_function__LEDTracker_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(intro_interfaces__srv__LEDTracker_Event, response),  // bytes offset in struct
    NULL,  // default value
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__size_function__LEDTracker_Event__response,  // size() function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_const_function__LEDTracker_Event__response,  // get_const(index) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__get_function__LEDTracker_Event__response,  // get(index) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__fetch_function__LEDTracker_Event__response,  // fetch(index, &value) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__assign_function__LEDTracker_Event__response,  // assign(index, value) function pointer
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__resize_function__LEDTracker_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_members = {
  "intro_interfaces__srv",  // message namespace
  "LEDTracker_Event",  // message name
  3,  // number of fields
  sizeof(intro_interfaces__srv__LEDTracker_Event),
  false,  // has_any_key_member_
  intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_member_array,  // message members
  intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_type_support_handle = {
  0,
  &intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_members,
  get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Event__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Event__get_type_description,
  &intro_interfaces__srv__LEDTracker_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Event)() {
  intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Request)();
  intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Response)();
  if (!intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "intro_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_members = {
  "intro_interfaces__srv",  // service namespace
  "LEDTracker",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_Request_message_type_support_handle,
  NULL,  // response message
  // intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle
  NULL  // event_message
  // intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle
};


static rosidl_service_type_support_t intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_type_support_handle = {
  0,
  &intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_members,
  get_service_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Request__rosidl_typesupport_introspection_c__LEDTracker_Request_message_type_support_handle,
  &intro_interfaces__srv__LEDTracker_Response__rosidl_typesupport_introspection_c__LEDTracker_Response_message_type_support_handle,
  &intro_interfaces__srv__LEDTracker_Event__rosidl_typesupport_introspection_c__LEDTracker_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    srv,
    LEDTracker
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    srv,
    LEDTracker
  ),
  &intro_interfaces__srv__LEDTracker__get_type_hash,
  &intro_interfaces__srv__LEDTracker__get_type_description,
  &intro_interfaces__srv__LEDTracker__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_intro_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker)(void) {
  if (!intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_type_support_handle.typesupport_identifier) {
    intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Event)()->data;
  }

  return &intro_interfaces__srv__detail__led_tracker__rosidl_typesupport_introspection_c__LEDTracker_service_type_support_handle;
}
