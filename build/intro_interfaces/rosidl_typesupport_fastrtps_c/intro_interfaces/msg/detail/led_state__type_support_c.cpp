// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice
#include "intro_interfaces/msg/detail/led_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "intro_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "intro_interfaces/msg/detail/led_state__struct.h"
#include "intro_interfaces/msg/detail/led_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // new_state_msg
#include "rosidl_runtime_c/string_functions.h"  // new_state_msg

// forward declare type support functions


using _LEDState__ros_msg_type = intro_interfaces__msg__LEDState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
bool cdr_serialize_intro_interfaces__msg__LEDState(
  const intro_interfaces__msg__LEDState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: new_state_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->new_state_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state
  {
    cdr << (ros_message->state ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
bool cdr_deserialize_intro_interfaces__msg__LEDState(
  eprosima::fastcdr::Cdr & cdr,
  intro_interfaces__msg__LEDState * ros_message)
{
  // Field name: new_state_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->new_state_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->new_state_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->new_state_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'new_state_msg'\n");
      return false;
    }
  }

  // Field name: state
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->state = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t get_serialized_size_intro_interfaces__msg__LEDState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LEDState__ros_msg_type * ros_message = static_cast<const _LEDState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: new_state_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->new_state_msg.size + 1);

  // Field name: state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t max_serialized_size_intro_interfaces__msg__LEDState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: new_state_msg
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = intro_interfaces__msg__LEDState;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
bool cdr_serialize_key_intro_interfaces__msg__LEDState(
  const intro_interfaces__msg__LEDState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: new_state_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->new_state_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: state
  {
    cdr << (ros_message->state ? true : false);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t get_serialized_size_key_intro_interfaces__msg__LEDState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LEDState__ros_msg_type * ros_message = static_cast<const _LEDState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: new_state_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->new_state_msg.size + 1);

  // Field name: state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_intro_interfaces
size_t max_serialized_size_key_intro_interfaces__msg__LEDState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: new_state_msg
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: state
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = intro_interfaces__msg__LEDState;
    is_plain =
      (
      offsetof(DataType, state) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _LEDState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const intro_interfaces__msg__LEDState * ros_message = static_cast<const intro_interfaces__msg__LEDState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_intro_interfaces__msg__LEDState(ros_message, cdr);
}

static bool _LEDState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  intro_interfaces__msg__LEDState * ros_message = static_cast<intro_interfaces__msg__LEDState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_intro_interfaces__msg__LEDState(cdr, ros_message);
}

static uint32_t _LEDState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_intro_interfaces__msg__LEDState(
      untyped_ros_message, 0));
}

static size_t _LEDState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_intro_interfaces__msg__LEDState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LEDState = {
  "intro_interfaces::msg",
  "LEDState",
  _LEDState__cdr_serialize,
  _LEDState__cdr_deserialize,
  _LEDState__get_serialized_size,
  _LEDState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _LEDState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LEDState,
  get_message_typesupport_handle_function,
  &intro_interfaces__msg__LEDState__get_type_hash,
  &intro_interfaces__msg__LEDState__get_type_description,
  &intro_interfaces__msg__LEDState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, msg, LEDState)() {
  return &_LEDState__type_support;
}

#if defined(__cplusplus)
}
#endif
