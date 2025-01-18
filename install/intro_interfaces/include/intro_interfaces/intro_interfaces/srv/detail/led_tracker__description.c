// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

#include "intro_interfaces/srv/detail/led_tracker__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_intro_interfaces
const rosidl_type_hash_t *
intro_interfaces__srv__LEDTracker__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xe7, 0xa4, 0xa5, 0x5b, 0x08, 0x99, 0x59, 0x04,
      0x80, 0x40, 0xc5, 0x54, 0x60, 0x03, 0xa6, 0xe4,
      0x0d, 0x10, 0xcd, 0x4f, 0xf5, 0x1b, 0xce, 0x23,
      0xa4, 0x5a, 0x56, 0xb8, 0x87, 0xf5, 0x29, 0x30,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_intro_interfaces
const rosidl_type_hash_t *
intro_interfaces__srv__LEDTracker_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x03, 0x17, 0x83, 0xd7, 0xe5, 0x94, 0x04, 0xfc,
      0x52, 0x18, 0xd1, 0x0e, 0x72, 0x11, 0xe8, 0x75,
      0x9b, 0x66, 0xbf, 0xf2, 0xcc, 0x82, 0x64, 0xf1,
      0x20, 0x5c, 0x57, 0x1a, 0x6b, 0x07, 0xf4, 0x4d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_intro_interfaces
const rosidl_type_hash_t *
intro_interfaces__srv__LEDTracker_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x88, 0x9f, 0x23, 0x76, 0xb5, 0xa0, 0x0e, 0x7c,
      0x8a, 0x1d, 0xf4, 0x89, 0x29, 0xa1, 0x40, 0x1e,
      0x2c, 0x01, 0x19, 0x6a, 0xa4, 0xc1, 0x1c, 0x20,
      0x7f, 0x6a, 0x10, 0xce, 0x4b, 0x99, 0xd8, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_intro_interfaces
const rosidl_type_hash_t *
intro_interfaces__srv__LEDTracker_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x83, 0x6b, 0x38, 0xbc, 0x3c, 0x9d, 0xa7,
      0x6e, 0x14, 0xdf, 0x21, 0xf0, 0xc7, 0x7e, 0xfa,
      0x7b, 0xf4, 0x82, 0xae, 0xb6, 0xed, 0x85, 0x57,
      0xf3, 0x08, 0x61, 0x1a, 0x6b, 0xe7, 0xf8, 0x8a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char intro_interfaces__srv__LEDTracker__TYPE_NAME[] = "intro_interfaces/srv/LEDTracker";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char intro_interfaces__srv__LEDTracker_Event__TYPE_NAME[] = "intro_interfaces/srv/LEDTracker_Event";
static char intro_interfaces__srv__LEDTracker_Request__TYPE_NAME[] = "intro_interfaces/srv/LEDTracker_Request";
static char intro_interfaces__srv__LEDTracker_Response__TYPE_NAME[] = "intro_interfaces/srv/LEDTracker_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char intro_interfaces__srv__LEDTracker__FIELD_NAME__request_message[] = "request_message";
static char intro_interfaces__srv__LEDTracker__FIELD_NAME__response_message[] = "response_message";
static char intro_interfaces__srv__LEDTracker__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field intro_interfaces__srv__LEDTracker__FIELDS[] = {
  {
    {intro_interfaces__srv__LEDTracker__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {intro_interfaces__srv__LEDTracker_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {intro_interfaces__srv__LEDTracker_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {intro_interfaces__srv__LEDTracker_Event__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription intro_interfaces__srv__LEDTracker__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Event__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
intro_interfaces__srv__LEDTracker__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {intro_interfaces__srv__LEDTracker__TYPE_NAME, 31, 31},
      {intro_interfaces__srv__LEDTracker__FIELDS, 3, 3},
    },
    {intro_interfaces__srv__LEDTracker__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = intro_interfaces__srv__LEDTracker_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = intro_interfaces__srv__LEDTracker_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = intro_interfaces__srv__LEDTracker_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char intro_interfaces__srv__LEDTracker_Request__FIELD_NAME__num_of_sys_blinks[] = "num_of_sys_blinks";
static char intro_interfaces__srv__LEDTracker_Request__FIELD_NAME__led_state[] = "led_state";

static rosidl_runtime_c__type_description__Field intro_interfaces__srv__LEDTracker_Request__FIELDS[] = {
  {
    {intro_interfaces__srv__LEDTracker_Request__FIELD_NAME__num_of_sys_blinks, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Request__FIELD_NAME__led_state, 9, 9},
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
intro_interfaces__srv__LEDTracker_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {intro_interfaces__srv__LEDTracker_Request__TYPE_NAME, 39, 39},
      {intro_interfaces__srv__LEDTracker_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char intro_interfaces__srv__LEDTracker_Response__FIELD_NAME__num_of_cycles_completed[] = "num_of_cycles_completed";
static char intro_interfaces__srv__LEDTracker_Response__DEFAULT_VALUE__num_of_cycles_completed[] = "0";
static char intro_interfaces__srv__LEDTracker_Response__FIELD_NAME__is_total_blinks_in_series_of_ten[] = "is_total_blinks_in_series_of_ten";
static char intro_interfaces__srv__LEDTracker_Response__DEFAULT_VALUE__is_total_blinks_in_series_of_ten[] = "False";

static rosidl_runtime_c__type_description__Field intro_interfaces__srv__LEDTracker_Response__FIELDS[] = {
  {
    {intro_interfaces__srv__LEDTracker_Response__FIELD_NAME__num_of_cycles_completed, 23, 23},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {intro_interfaces__srv__LEDTracker_Response__DEFAULT_VALUE__num_of_cycles_completed, 1, 1},
  },
  {
    {intro_interfaces__srv__LEDTracker_Response__FIELD_NAME__is_total_blinks_in_series_of_ten, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {intro_interfaces__srv__LEDTracker_Response__DEFAULT_VALUE__is_total_blinks_in_series_of_ten, 5, 5},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
intro_interfaces__srv__LEDTracker_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {intro_interfaces__srv__LEDTracker_Response__TYPE_NAME, 40, 40},
      {intro_interfaces__srv__LEDTracker_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char intro_interfaces__srv__LEDTracker_Event__FIELD_NAME__info[] = "info";
static char intro_interfaces__srv__LEDTracker_Event__FIELD_NAME__request[] = "request";
static char intro_interfaces__srv__LEDTracker_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field intro_interfaces__srv__LEDTracker_Event__FIELDS[] = {
  {
    {intro_interfaces__srv__LEDTracker_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {intro_interfaces__srv__LEDTracker_Request__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {intro_interfaces__srv__LEDTracker_Response__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription intro_interfaces__srv__LEDTracker_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Request__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
  {
    {intro_interfaces__srv__LEDTracker_Response__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
intro_interfaces__srv__LEDTracker_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {intro_interfaces__srv__LEDTracker_Event__TYPE_NAME, 37, 37},
      {intro_interfaces__srv__LEDTracker_Event__FIELDS, 3, 3},
    },
    {intro_interfaces__srv__LEDTracker_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = intro_interfaces__srv__LEDTracker_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = intro_interfaces__srv__LEDTracker_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num_of_sys_blinks\n"
  "bool led_state\n"
  "---\n"
  "int64 num_of_cycles_completed 0\n"
  "bool is_total_blinks_in_series_of_ten false";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
intro_interfaces__srv__LEDTracker__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {intro_interfaces__srv__LEDTracker__TYPE_NAME, 31, 31},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 118, 118},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
intro_interfaces__srv__LEDTracker_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {intro_interfaces__srv__LEDTracker_Request__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
intro_interfaces__srv__LEDTracker_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {intro_interfaces__srv__LEDTracker_Response__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
intro_interfaces__srv__LEDTracker_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {intro_interfaces__srv__LEDTracker_Event__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
intro_interfaces__srv__LEDTracker__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *intro_interfaces__srv__LEDTracker__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *intro_interfaces__srv__LEDTracker_Event__get_individual_type_description_source(NULL);
    sources[3] = *intro_interfaces__srv__LEDTracker_Request__get_individual_type_description_source(NULL);
    sources[4] = *intro_interfaces__srv__LEDTracker_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
intro_interfaces__srv__LEDTracker_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *intro_interfaces__srv__LEDTracker_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
intro_interfaces__srv__LEDTracker_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *intro_interfaces__srv__LEDTracker_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
intro_interfaces__srv__LEDTracker_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *intro_interfaces__srv__LEDTracker_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *intro_interfaces__srv__LEDTracker_Request__get_individual_type_description_source(NULL);
    sources[3] = *intro_interfaces__srv__LEDTracker_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
