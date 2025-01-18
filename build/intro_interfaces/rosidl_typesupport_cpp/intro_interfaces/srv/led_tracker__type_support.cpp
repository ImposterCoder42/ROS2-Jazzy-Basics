// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "intro_interfaces/srv/detail/led_tracker__functions.h"
#include "intro_interfaces/srv/detail/led_tracker__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDTracker_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_Request_type_support_ids_t;

static const _LEDTracker_Request_type_support_ids_t _LEDTracker_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, intro_interfaces, srv, LEDTracker_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, intro_interfaces, srv, LEDTracker_Request)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Request__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Request__get_type_description,
  &intro_interfaces__srv__LEDTracker_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Request>()
{
  return &::intro_interfaces::srv::rosidl_typesupport_cpp::LEDTracker_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, intro_interfaces, srv, LEDTracker_Request)() {
  return get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDTracker_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_Response_type_support_ids_t;

static const _LEDTracker_Response_type_support_ids_t _LEDTracker_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, intro_interfaces, srv, LEDTracker_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, intro_interfaces, srv, LEDTracker_Response)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Response__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Response__get_type_description,
  &intro_interfaces__srv__LEDTracker_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Response>()
{
  return &::intro_interfaces::srv::rosidl_typesupport_cpp::LEDTracker_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, intro_interfaces, srv, LEDTracker_Response)() {
  return get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDTracker_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_Event_type_support_ids_t;

static const _LEDTracker_Event_type_support_ids_t _LEDTracker_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, intro_interfaces, srv, LEDTracker_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, intro_interfaces, srv, LEDTracker_Event)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &intro_interfaces__srv__LEDTracker_Event__get_type_hash,
  &intro_interfaces__srv__LEDTracker_Event__get_type_description,
  &intro_interfaces__srv__LEDTracker_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Event>()
{
  return &::intro_interfaces::srv::rosidl_typesupport_cpp::LEDTracker_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, intro_interfaces, srv, LEDTracker_Event)() {
  return get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "intro_interfaces/srv/detail/led_tracker__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _LEDTracker_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _LEDTracker_type_support_ids_t;

static const _LEDTracker_type_support_ids_t _LEDTracker_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
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
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, intro_interfaces, srv, LEDTracker)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, intro_interfaces, srv, LEDTracker)),
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
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_LEDTracker_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<intro_interfaces::srv::LEDTracker_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<intro_interfaces::srv::LEDTracker>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<intro_interfaces::srv::LEDTracker>,
  &intro_interfaces__srv__LEDTracker__get_type_hash,
  &intro_interfaces__srv__LEDTracker__get_type_description,
  &intro_interfaces__srv__LEDTracker__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace intro_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<intro_interfaces::srv::LEDTracker>()
{
  return &::intro_interfaces::srv::rosidl_typesupport_cpp::LEDTracker_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, intro_interfaces, srv, LEDTracker)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<intro_interfaces::srv::LEDTracker>();
}

#ifdef __cplusplus
}
#endif
