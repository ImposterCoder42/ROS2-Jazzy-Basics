// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from intro_interfaces:srv/SlowLEDToggle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/srv/slow_led_toggle.h"


#ifndef INTRO_INTERFACES__SRV__DETAIL__SLOW_LED_TOGGLE__STRUCT_H_
#define INTRO_INTERFACES__SRV__DETAIL__SLOW_LED_TOGGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SlowLEDToggle in the package intro_interfaces.
typedef struct intro_interfaces__srv__SlowLEDToggle_Request
{
  bool req;
} intro_interfaces__srv__SlowLEDToggle_Request;

// Struct for a sequence of intro_interfaces__srv__SlowLEDToggle_Request.
typedef struct intro_interfaces__srv__SlowLEDToggle_Request__Sequence
{
  intro_interfaces__srv__SlowLEDToggle_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__srv__SlowLEDToggle_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SlowLEDToggle in the package intro_interfaces.
typedef struct intro_interfaces__srv__SlowLEDToggle_Response
{
  bool res;
} intro_interfaces__srv__SlowLEDToggle_Response;

// Struct for a sequence of intro_interfaces__srv__SlowLEDToggle_Response.
typedef struct intro_interfaces__srv__SlowLEDToggle_Response__Sequence
{
  intro_interfaces__srv__SlowLEDToggle_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__srv__SlowLEDToggle_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  intro_interfaces__srv__SlowLEDToggle_Event__request__MAX_SIZE = 1
};
// response
enum
{
  intro_interfaces__srv__SlowLEDToggle_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SlowLEDToggle in the package intro_interfaces.
typedef struct intro_interfaces__srv__SlowLEDToggle_Event
{
  service_msgs__msg__ServiceEventInfo info;
  intro_interfaces__srv__SlowLEDToggle_Request__Sequence request;
  intro_interfaces__srv__SlowLEDToggle_Response__Sequence response;
} intro_interfaces__srv__SlowLEDToggle_Event;

// Struct for a sequence of intro_interfaces__srv__SlowLEDToggle_Event.
typedef struct intro_interfaces__srv__SlowLEDToggle_Event__Sequence
{
  intro_interfaces__srv__SlowLEDToggle_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__srv__SlowLEDToggle_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTRO_INTERFACES__SRV__DETAIL__SLOW_LED_TOGGLE__STRUCT_H_
