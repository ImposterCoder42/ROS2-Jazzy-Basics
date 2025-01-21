// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from intro_interfaces:srv/SlowLEDToggle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "intro_interfaces/srv/detail/slow_led_toggle__struct.h"
#include "intro_interfaces/srv/detail/slow_led_toggle__type_support.h"
#include "intro_interfaces/srv/detail/slow_led_toggle__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SlowLEDToggle_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SlowLEDToggle_Request_type_support_ids_t;

static const _SlowLEDToggle_Request_type_support_ids_t _SlowLEDToggle_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SlowLEDToggle_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SlowLEDToggle_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SlowLEDToggle_Request_type_support_symbol_names_t _SlowLEDToggle_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, SlowLEDToggle_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, SlowLEDToggle_Request)),
  }
};

typedef struct _SlowLEDToggle_Request_type_support_data_t
{
  void * data[2];
} _SlowLEDToggle_Request_type_support_data_t;

static _SlowLEDToggle_Request_type_support_data_t _SlowLEDToggle_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SlowLEDToggle_Request_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_SlowLEDToggle_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SlowLEDToggle_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SlowLEDToggle_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SlowLEDToggle_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SlowLEDToggle_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__srv__SlowLEDToggle_Request__get_type_hash,
  &intro_interfaces__srv__SlowLEDToggle_Request__get_type_description,
  &intro_interfaces__srv__SlowLEDToggle_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, SlowLEDToggle_Request)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::SlowLEDToggle_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__struct.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__type_support.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SlowLEDToggle_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SlowLEDToggle_Response_type_support_ids_t;

static const _SlowLEDToggle_Response_type_support_ids_t _SlowLEDToggle_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SlowLEDToggle_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SlowLEDToggle_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SlowLEDToggle_Response_type_support_symbol_names_t _SlowLEDToggle_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, SlowLEDToggle_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, SlowLEDToggle_Response)),
  }
};

typedef struct _SlowLEDToggle_Response_type_support_data_t
{
  void * data[2];
} _SlowLEDToggle_Response_type_support_data_t;

static _SlowLEDToggle_Response_type_support_data_t _SlowLEDToggle_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SlowLEDToggle_Response_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_SlowLEDToggle_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SlowLEDToggle_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SlowLEDToggle_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SlowLEDToggle_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SlowLEDToggle_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__srv__SlowLEDToggle_Response__get_type_hash,
  &intro_interfaces__srv__SlowLEDToggle_Response__get_type_description,
  &intro_interfaces__srv__SlowLEDToggle_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, SlowLEDToggle_Response)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::SlowLEDToggle_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__struct.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__type_support.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SlowLEDToggle_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SlowLEDToggle_Event_type_support_ids_t;

static const _SlowLEDToggle_Event_type_support_ids_t _SlowLEDToggle_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SlowLEDToggle_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SlowLEDToggle_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SlowLEDToggle_Event_type_support_symbol_names_t _SlowLEDToggle_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, SlowLEDToggle_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, SlowLEDToggle_Event)),
  }
};

typedef struct _SlowLEDToggle_Event_type_support_data_t
{
  void * data[2];
} _SlowLEDToggle_Event_type_support_data_t;

static _SlowLEDToggle_Event_type_support_data_t _SlowLEDToggle_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SlowLEDToggle_Event_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_SlowLEDToggle_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SlowLEDToggle_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SlowLEDToggle_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SlowLEDToggle_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SlowLEDToggle_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__srv__SlowLEDToggle_Event__get_type_hash,
  &intro_interfaces__srv__SlowLEDToggle_Event__get_type_description,
  &intro_interfaces__srv__SlowLEDToggle_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, SlowLEDToggle_Event)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::SlowLEDToggle_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/slow_led_toggle__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SlowLEDToggle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SlowLEDToggle_type_support_ids_t;

static const _SlowLEDToggle_type_support_ids_t _SlowLEDToggle_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SlowLEDToggle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SlowLEDToggle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SlowLEDToggle_type_support_symbol_names_t _SlowLEDToggle_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, SlowLEDToggle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, SlowLEDToggle)),
  }
};

typedef struct _SlowLEDToggle_type_support_data_t
{
  void * data[2];
} _SlowLEDToggle_type_support_data_t;

static _SlowLEDToggle_type_support_data_t _SlowLEDToggle_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SlowLEDToggle_service_typesupport_map = {
  2,
  "intro_interfaces",
  &_SlowLEDToggle_service_typesupport_ids.typesupport_identifier[0],
  &_SlowLEDToggle_service_typesupport_symbol_names.symbol_name[0],
  &_SlowLEDToggle_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SlowLEDToggle_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SlowLEDToggle_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SlowLEDToggle_Request_message_type_support_handle,
  &SlowLEDToggle_Response_message_type_support_handle,
  &SlowLEDToggle_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    srv,
    SlowLEDToggle
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    srv,
    SlowLEDToggle
  ),
  &intro_interfaces__srv__SlowLEDToggle__get_type_hash,
  &intro_interfaces__srv__SlowLEDToggle__get_type_description,
  &intro_interfaces__srv__SlowLEDToggle__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, SlowLEDToggle)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::SlowLEDToggle_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
