// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from intro_interfaces:action/ToggleLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/action/toggle_led.h"


#ifndef INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__STRUCT_H_
#define INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_Goal
{
  bool state;
} intro_interfaces__action__ToggleLED_Goal;

// Struct for a sequence of intro_interfaces__action__ToggleLED_Goal.
typedef struct intro_interfaces__action__ToggleLED_Goal__Sequence
{
  intro_interfaces__action__ToggleLED_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_Goal__Sequence;

// Constants defined in the message

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_Result
{
  bool is_complete;
} intro_interfaces__action__ToggleLED_Result;

// Struct for a sequence of intro_interfaces__action__ToggleLED_Result.
typedef struct intro_interfaces__action__ToggleLED_Result__Sequence
{
  intro_interfaces__action__ToggleLED_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_Feedback
{
  int64_t current_duty_cycle;
} intro_interfaces__action__ToggleLED_Feedback;

// Struct for a sequence of intro_interfaces__action__ToggleLED_Feedback.
typedef struct intro_interfaces__action__ToggleLED_Feedback__Sequence
{
  intro_interfaces__action__ToggleLED_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "intro_interfaces/action/detail/toggle_led__struct.h"

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  intro_interfaces__action__ToggleLED_Goal goal;
} intro_interfaces__action__ToggleLED_SendGoal_Request;

// Struct for a sequence of intro_interfaces__action__ToggleLED_SendGoal_Request.
typedef struct intro_interfaces__action__ToggleLED_SendGoal_Request__Sequence
{
  intro_interfaces__action__ToggleLED_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} intro_interfaces__action__ToggleLED_SendGoal_Response;

// Struct for a sequence of intro_interfaces__action__ToggleLED_SendGoal_Response.
typedef struct intro_interfaces__action__ToggleLED_SendGoal_Response__Sequence
{
  intro_interfaces__action__ToggleLED_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  intro_interfaces__action__ToggleLED_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  intro_interfaces__action__ToggleLED_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  intro_interfaces__action__ToggleLED_SendGoal_Request__Sequence request;
  intro_interfaces__action__ToggleLED_SendGoal_Response__Sequence response;
} intro_interfaces__action__ToggleLED_SendGoal_Event;

// Struct for a sequence of intro_interfaces__action__ToggleLED_SendGoal_Event.
typedef struct intro_interfaces__action__ToggleLED_SendGoal_Event__Sequence
{
  intro_interfaces__action__ToggleLED_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} intro_interfaces__action__ToggleLED_GetResult_Request;

// Struct for a sequence of intro_interfaces__action__ToggleLED_GetResult_Request.
typedef struct intro_interfaces__action__ToggleLED_GetResult_Request__Sequence
{
  intro_interfaces__action__ToggleLED_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_GetResult_Response
{
  int8_t status;
  intro_interfaces__action__ToggleLED_Result result;
} intro_interfaces__action__ToggleLED_GetResult_Response;

// Struct for a sequence of intro_interfaces__action__ToggleLED_GetResult_Response.
typedef struct intro_interfaces__action__ToggleLED_GetResult_Response__Sequence
{
  intro_interfaces__action__ToggleLED_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  intro_interfaces__action__ToggleLED_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  intro_interfaces__action__ToggleLED_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  intro_interfaces__action__ToggleLED_GetResult_Request__Sequence request;
  intro_interfaces__action__ToggleLED_GetResult_Response__Sequence response;
} intro_interfaces__action__ToggleLED_GetResult_Event;

// Struct for a sequence of intro_interfaces__action__ToggleLED_GetResult_Event.
typedef struct intro_interfaces__action__ToggleLED_GetResult_Event__Sequence
{
  intro_interfaces__action__ToggleLED_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"

/// Struct defined in action/ToggleLED in the package intro_interfaces.
typedef struct intro_interfaces__action__ToggleLED_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  intro_interfaces__action__ToggleLED_Feedback feedback;
} intro_interfaces__action__ToggleLED_FeedbackMessage;

// Struct for a sequence of intro_interfaces__action__ToggleLED_FeedbackMessage.
typedef struct intro_interfaces__action__ToggleLED_FeedbackMessage__Sequence
{
  intro_interfaces__action__ToggleLED_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__action__ToggleLED_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTRO_INTERFACES__ACTION__DETAIL__TOGGLE_LED__STRUCT_H_
