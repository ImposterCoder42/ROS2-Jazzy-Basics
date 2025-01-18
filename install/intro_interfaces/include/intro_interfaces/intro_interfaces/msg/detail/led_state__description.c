// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice

#include "intro_interfaces/msg/detail/led_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_intro_interfaces
const rosidl_type_hash_t *
intro_interfaces__msg__LEDState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x30, 0x72, 0x0e, 0x50, 0x22, 0x7d, 0x5e, 0x7c,
      0x62, 0x3a, 0xf1, 0xfc, 0x8f, 0xf7, 0xde, 0x95,
      0xa1, 0x9f, 0xed, 0xc0, 0x7e, 0xf6, 0xfc, 0x7f,
      0x8d, 0x4e, 0xa7, 0x9c, 0xcd, 0x14, 0x7d, 0xbd,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char intro_interfaces__msg__LEDState__TYPE_NAME[] = "intro_interfaces/msg/LEDState";

// Define type names, field names, and default values
static char intro_interfaces__msg__LEDState__FIELD_NAME__new_state_msg[] = "new_state_msg";
static char intro_interfaces__msg__LEDState__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field intro_interfaces__msg__LEDState__FIELDS[] = {
  {
    {intro_interfaces__msg__LEDState__FIELD_NAME__new_state_msg, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__msg__LEDState__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
intro_interfaces__msg__LEDState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {intro_interfaces__msg__LEDState__TYPE_NAME, 29, 29},
      {intro_interfaces__msg__LEDState__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string new_state_msg\n"
  "bool state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
intro_interfaces__msg__LEDState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {intro_interfaces__msg__LEDState__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
intro_interfaces__msg__LEDState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *intro_interfaces__msg__LEDState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
