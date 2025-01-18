// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "intro_interfaces/msg/led_state.h"


#ifndef INTRO_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_H_
#define INTRO_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'new_state_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LEDState in the package intro_interfaces.
typedef struct intro_interfaces__msg__LEDState
{
  rosidl_runtime_c__String new_state_msg;
  bool state;
} intro_interfaces__msg__LEDState;

// Struct for a sequence of intro_interfaces__msg__LEDState.
typedef struct intro_interfaces__msg__LEDState__Sequence
{
  intro_interfaces__msg__LEDState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} intro_interfaces__msg__LEDState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTRO_INTERFACES__MSG__DETAIL__LED_STATE__STRUCT_H_
