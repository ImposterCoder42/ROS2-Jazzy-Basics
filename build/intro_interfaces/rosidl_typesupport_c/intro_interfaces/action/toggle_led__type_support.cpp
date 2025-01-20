// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from intro_interfaces:action/ToggleLED.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "intro_interfaces/action/detail/toggle_led__struct.h"
#include "intro_interfaces/action/detail/toggle_led__type_support.h"
#include "intro_interfaces/action/detail/toggle_led__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace intro_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_Goal_type_support_ids_t;

static const _ToggleLED_Goal_type_support_ids_t _ToggleLED_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_Goal_type_support_symbol_names_t _ToggleLED_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_Goal)),
  }
};

typedef struct _ToggleLED_Goal_type_support_data_t
{
  void * data[2];
} _ToggleLED_Goal_type_support_data_t;

static _ToggleLED_Goal_type_support_data_t _ToggleLED_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_Goal_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_Goal__get_type_hash,
  &intro_interfaces__action__ToggleLED_Goal__get_type_description,
  &intro_interfaces__action__ToggleLED_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_Goal)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_Result_type_support_ids_t;

static const _ToggleLED_Result_type_support_ids_t _ToggleLED_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_Result_type_support_symbol_names_t _ToggleLED_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_Result)),
  }
};

typedef struct _ToggleLED_Result_type_support_data_t
{
  void * data[2];
} _ToggleLED_Result_type_support_data_t;

static _ToggleLED_Result_type_support_data_t _ToggleLED_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_Result_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_Result__get_type_hash,
  &intro_interfaces__action__ToggleLED_Result__get_type_description,
  &intro_interfaces__action__ToggleLED_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_Result)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_Feedback_type_support_ids_t;

static const _ToggleLED_Feedback_type_support_ids_t _ToggleLED_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_Feedback_type_support_symbol_names_t _ToggleLED_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_Feedback)),
  }
};

typedef struct _ToggleLED_Feedback_type_support_data_t
{
  void * data[2];
} _ToggleLED_Feedback_type_support_data_t;

static _ToggleLED_Feedback_type_support_data_t _ToggleLED_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_Feedback_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_Feedback__get_type_hash,
  &intro_interfaces__action__ToggleLED_Feedback__get_type_description,
  &intro_interfaces__action__ToggleLED_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_Feedback)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_SendGoal_Request_type_support_ids_t;

static const _ToggleLED_SendGoal_Request_type_support_ids_t _ToggleLED_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_SendGoal_Request_type_support_symbol_names_t _ToggleLED_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_SendGoal_Request)),
  }
};

typedef struct _ToggleLED_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ToggleLED_SendGoal_Request_type_support_data_t;

static _ToggleLED_SendGoal_Request_type_support_data_t _ToggleLED_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_SendGoal_Request_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_SendGoal_Request__get_type_hash,
  &intro_interfaces__action__ToggleLED_SendGoal_Request__get_type_description,
  &intro_interfaces__action__ToggleLED_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_SendGoal_Request)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_SendGoal_Response_type_support_ids_t;

static const _ToggleLED_SendGoal_Response_type_support_ids_t _ToggleLED_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_SendGoal_Response_type_support_symbol_names_t _ToggleLED_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_SendGoal_Response)),
  }
};

typedef struct _ToggleLED_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ToggleLED_SendGoal_Response_type_support_data_t;

static _ToggleLED_SendGoal_Response_type_support_data_t _ToggleLED_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_SendGoal_Response_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_SendGoal_Response__get_type_hash,
  &intro_interfaces__action__ToggleLED_SendGoal_Response__get_type_description,
  &intro_interfaces__action__ToggleLED_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_SendGoal_Response)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_SendGoal_Event_type_support_ids_t;

static const _ToggleLED_SendGoal_Event_type_support_ids_t _ToggleLED_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_SendGoal_Event_type_support_symbol_names_t _ToggleLED_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_SendGoal_Event)),
  }
};

typedef struct _ToggleLED_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ToggleLED_SendGoal_Event_type_support_data_t;

static _ToggleLED_SendGoal_Event_type_support_data_t _ToggleLED_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_SendGoal_Event_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_SendGoal_Event__get_type_hash,
  &intro_interfaces__action__ToggleLED_SendGoal_Event__get_type_description,
  &intro_interfaces__action__ToggleLED_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_SendGoal_Event)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
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

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ToggleLED_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_SendGoal_type_support_ids_t;

static const _ToggleLED_SendGoal_type_support_ids_t _ToggleLED_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_SendGoal_type_support_symbol_names_t _ToggleLED_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_SendGoal)),
  }
};

typedef struct _ToggleLED_SendGoal_type_support_data_t
{
  void * data[2];
} _ToggleLED_SendGoal_type_support_data_t;

static _ToggleLED_SendGoal_type_support_data_t _ToggleLED_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_SendGoal_service_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ToggleLED_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ToggleLED_SendGoal_Request_message_type_support_handle,
  &ToggleLED_SendGoal_Response_message_type_support_handle,
  &ToggleLED_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    action,
    ToggleLED_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    action,
    ToggleLED_SendGoal
  ),
  &intro_interfaces__action__ToggleLED_SendGoal__get_type_hash,
  &intro_interfaces__action__ToggleLED_SendGoal__get_type_description,
  &intro_interfaces__action__ToggleLED_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_SendGoal)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_GetResult_Request_type_support_ids_t;

static const _ToggleLED_GetResult_Request_type_support_ids_t _ToggleLED_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_GetResult_Request_type_support_symbol_names_t _ToggleLED_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_GetResult_Request)),
  }
};

typedef struct _ToggleLED_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ToggleLED_GetResult_Request_type_support_data_t;

static _ToggleLED_GetResult_Request_type_support_data_t _ToggleLED_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_GetResult_Request_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_GetResult_Request__get_type_hash,
  &intro_interfaces__action__ToggleLED_GetResult_Request__get_type_description,
  &intro_interfaces__action__ToggleLED_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_GetResult_Request)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_GetResult_Response_type_support_ids_t;

static const _ToggleLED_GetResult_Response_type_support_ids_t _ToggleLED_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_GetResult_Response_type_support_symbol_names_t _ToggleLED_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_GetResult_Response)),
  }
};

typedef struct _ToggleLED_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ToggleLED_GetResult_Response_type_support_data_t;

static _ToggleLED_GetResult_Response_type_support_data_t _ToggleLED_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_GetResult_Response_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_GetResult_Response__get_type_hash,
  &intro_interfaces__action__ToggleLED_GetResult_Response__get_type_description,
  &intro_interfaces__action__ToggleLED_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_GetResult_Response)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_GetResult_Event_type_support_ids_t;

static const _ToggleLED_GetResult_Event_type_support_ids_t _ToggleLED_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_GetResult_Event_type_support_symbol_names_t _ToggleLED_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_GetResult_Event)),
  }
};

typedef struct _ToggleLED_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ToggleLED_GetResult_Event_type_support_data_t;

static _ToggleLED_GetResult_Event_type_support_data_t _ToggleLED_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_GetResult_Event_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_GetResult_Event__get_type_hash,
  &intro_interfaces__action__ToggleLED_GetResult_Event__get_type_description,
  &intro_interfaces__action__ToggleLED_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_GetResult_Event)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace intro_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ToggleLED_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_GetResult_type_support_ids_t;

static const _ToggleLED_GetResult_type_support_ids_t _ToggleLED_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_GetResult_type_support_symbol_names_t _ToggleLED_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_GetResult)),
  }
};

typedef struct _ToggleLED_GetResult_type_support_data_t
{
  void * data[2];
} _ToggleLED_GetResult_type_support_data_t;

static _ToggleLED_GetResult_type_support_data_t _ToggleLED_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_GetResult_service_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ToggleLED_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ToggleLED_GetResult_Request_message_type_support_handle,
  &ToggleLED_GetResult_Response_message_type_support_handle,
  &ToggleLED_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    action,
    ToggleLED_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    intro_interfaces,
    action,
    ToggleLED_GetResult
  ),
  &intro_interfaces__action__ToggleLED_GetResult__get_type_hash,
  &intro_interfaces__action__ToggleLED_GetResult__get_type_description,
  &intro_interfaces__action__ToggleLED_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_GetResult)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__struct.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__functions.h"
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

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ToggleLED_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ToggleLED_FeedbackMessage_type_support_ids_t;

static const _ToggleLED_FeedbackMessage_type_support_ids_t _ToggleLED_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ToggleLED_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ToggleLED_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ToggleLED_FeedbackMessage_type_support_symbol_names_t _ToggleLED_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, intro_interfaces, action, ToggleLED_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, intro_interfaces, action, ToggleLED_FeedbackMessage)),
  }
};

typedef struct _ToggleLED_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ToggleLED_FeedbackMessage_type_support_data_t;

static _ToggleLED_FeedbackMessage_type_support_data_t _ToggleLED_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ToggleLED_FeedbackMessage_message_typesupport_map = {
  2,
  "intro_interfaces",
  &_ToggleLED_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ToggleLED_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ToggleLED_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ToggleLED_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ToggleLED_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &intro_interfaces__action__ToggleLED_FeedbackMessage__get_type_hash,
  &intro_interfaces__action__ToggleLED_FeedbackMessage__get_type_description,
  &intro_interfaces__action__ToggleLED_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace intro_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, intro_interfaces, action, ToggleLED_FeedbackMessage)() {
  return &::intro_interfaces::action::rosidl_typesupport_c::ToggleLED_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "intro_interfaces/action/toggle_led.h"
// already included above
// #include "intro_interfaces/action/detail/toggle_led__type_support.h"

static rosidl_action_type_support_t _intro_interfaces__action__ToggleLED__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &intro_interfaces__action__ToggleLED__get_type_hash,
  &intro_interfaces__action__ToggleLED__get_type_description,
  &intro_interfaces__action__ToggleLED__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, intro_interfaces, action, ToggleLED)()
{
  // Thread-safe by always writing the same values to the static struct
  _intro_interfaces__action__ToggleLED__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, intro_interfaces, action, ToggleLED_SendGoal)();
  _intro_interfaces__action__ToggleLED__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, intro_interfaces, action, ToggleLED_GetResult)();
  _intro_interfaces__action__ToggleLED__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _intro_interfaces__action__ToggleLED__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, intro_interfaces, action, ToggleLED_FeedbackMessage)();
  _intro_interfaces__action__ToggleLED__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_intro_interfaces__action__ToggleLED__typesupport_c;
}

#ifdef __cplusplus
}
#endif
