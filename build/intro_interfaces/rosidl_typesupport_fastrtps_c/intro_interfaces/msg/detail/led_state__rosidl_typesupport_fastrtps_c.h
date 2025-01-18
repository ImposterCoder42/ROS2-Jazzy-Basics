// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice
#ifndef INTRO_INTERFACES__MSG__DETAIL__LED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define INTRO_INTERFACES__MSG__DETAIL__LED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "intro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "intro_interfaces/msg/detail/led_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
bool cdr_serialize_intro_interfaces__msg__LEDState(
  const intro_interfaces__msg__LEDState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
bool cdr_deserialize_intro_interfaces__msg__LEDState(
  eprosima::fastcdr::Cdr &,
  intro_interfaces__msg__LEDState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t get_serialized_size_intro_interfaces__msg__LEDState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t max_serialized_size_intro_interfaces__msg__LEDState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
bool cdr_serialize_key_intro_interfaces__msg__LEDState(
  const intro_interfaces__msg__LEDState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t get_serialized_size_key_intro_interfaces__msg__LEDState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t max_serialized_size_key_intro_interfaces__msg__LEDState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, msg, LEDState)();

#ifdef __cplusplus
}
#endif

#endif  // INTRO_INTERFACES__MSG__DETAIL__LED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
