// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "intro_interfaces/srv/detail/led_tracker__struct.h"
#include "intro_interfaces/srv/detail/led_tracker__type_support.h"
#include "intro_interfaces/srv/detail/led_tracker__functions.h"
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

typedef struct _LEDTracker_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_Request_type_support_ids_t;

static const _LEDTracker_Request_type_support_ids_t _LEDTracker_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDTracker_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDTracker_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDTracker_Request_type_support_symbol_names_t _LEDTracker_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, LEDTracker_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Request)),
  }
};

typedef struct _LEDTracker_Request_type_support_data_t
{
  void * data[2];
} _LEDTracker_Request_type_support_data_t;

static _LEDTracker_Request_type_support_data_t _LEDTracker_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDTracker_Request_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_LEDTracker_Request_message_typesupport_ids.typesupport_identifier[0],
  &_LEDTracker_Request_message_typesupport_symbol_names.symbol_name[0],
  &_LEDTracker_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LEDTracker_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Request__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Request__get_type_description,
  &intro_interfaces__srv__LEDTracker_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, LEDTracker_Request)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::LEDTracker_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__type_support.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"
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

typedef struct _LEDTracker_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_Response_type_support_ids_t;

static const _LEDTracker_Response_type_support_ids_t _LEDTracker_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDTracker_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDTracker_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDTracker_Response_type_support_symbol_names_t _LEDTracker_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, LEDTracker_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Response)),
  }
};

typedef struct _LEDTracker_Response_type_support_data_t
{
  void * data[2];
} _LEDTracker_Response_type_support_data_t;

static _LEDTracker_Response_type_support_data_t _LEDTracker_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDTracker_Response_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_LEDTracker_Response_message_typesupport_ids.typesupport_identifier[0],
  &_LEDTracker_Response_message_typesupport_symbol_names.symbol_name[0],
  &_LEDTracker_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LEDTracker_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Response__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Response__get_type_description,
  &intro_interfaces__srv__LEDTracker_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, LEDTracker_Response)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::LEDTracker_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__type_support.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"
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

typedef struct _LEDTracker_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_Event_type_support_ids_t;

static const _LEDTracker_Event_type_support_ids_t _LEDTracker_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDTracker_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDTracker_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDTracker_Event_type_support_symbol_names_t _LEDTracker_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, LEDTracker_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker_Event)),
  }
};

typedef struct _LEDTracker_Event_type_support_data_t
{
  void * data[2];
} _LEDTracker_Event_type_support_data_t;

static _LEDTracker_Event_type_support_data_t _LEDTracker_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDTracker_Event_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_LEDTracker_Event_message_typesupport_ids.typesupport_identifier[0],
  &_LEDTracker_Event_message_typesupport_symbol_names.symbol_name[0],
  &_LEDTracker_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t LEDTracker_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Event__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Event__get_type_description,
  &intro_interfaces__srv__LEDTracker_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, LEDTracker_Event)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::LEDTracker_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__type_support.h"
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
typedef struct _LEDTracker_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_type_support_ids_t;

static const _LEDTracker_type_support_ids_t _LEDTracker_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _LEDTracker_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _LEDTracker_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _LEDTracker_type_support_symbol_names_t _LEDTracker_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, srv, LEDTracker)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, srv, LEDTracker)),
  }
};

typedef struct _LEDTracker_type_support_data_t
{
  void * data[2];
} _LEDTracker_type_support_data_t;

static _LEDTracker_type_support_data_t _LEDTracker_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _LEDTracker_service_typesupport_map = {
  2,
  "intro_interfaces",
  &_LEDTracker_service_typesupport_ids.typesupport_identifier[0],
  &_LEDTracker_service_typesupport_symbol_names.symbol_name[0],
  &_LEDTracker_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t LEDTracker_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &LEDTracker_Request_message_type_support_handle,
  &LEDTracker_Response_message_type_support_handle,
  &LEDTracker_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, srv, LEDTracker)() {
  return &::intro_interfaces::srv::rosidl_typesupport_c::LEDTracker_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
