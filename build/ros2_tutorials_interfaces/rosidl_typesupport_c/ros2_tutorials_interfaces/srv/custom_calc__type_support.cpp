// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "ros2_tutorials_interfaces/srv/detail/custom_calc__struct.h"
#include "ros2_tutorials_interfaces/srv/detail/custom_calc__type_support.h"
#include "ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CustomCalc_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomCalc_Request_type_support_ids_t;

static const _CustomCalc_Request_type_support_ids_t _CustomCalc_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CustomCalc_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomCalc_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomCalc_Request_type_support_symbol_names_t _CustomCalc_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_tutorials_interfaces, srv, CustomCalc_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_tutorials_interfaces, srv, CustomCalc_Request)),
  }
};

typedef struct _CustomCalc_Request_type_support_data_t
{
  void * data[2];
} _CustomCalc_Request_type_support_data_t;

static _CustomCalc_Request_type_support_data_t _CustomCalc_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomCalc_Request_message_typesupport_map = {
  2,
  "ros2_tutorials_interfaces",
  &_CustomCalc_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CustomCalc_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CustomCalc_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CustomCalc_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomCalc_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_hash,
  &ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_description,
  &ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_tutorials_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_tutorials_interfaces, srv, CustomCalc_Request)() {
  return &::ros2_tutorials_interfaces::srv::rosidl_typesupport_c::CustomCalc_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__struct.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__type_support.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"
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

namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CustomCalc_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomCalc_Response_type_support_ids_t;

static const _CustomCalc_Response_type_support_ids_t _CustomCalc_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CustomCalc_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomCalc_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomCalc_Response_type_support_symbol_names_t _CustomCalc_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_tutorials_interfaces, srv, CustomCalc_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_tutorials_interfaces, srv, CustomCalc_Response)),
  }
};

typedef struct _CustomCalc_Response_type_support_data_t
{
  void * data[2];
} _CustomCalc_Response_type_support_data_t;

static _CustomCalc_Response_type_support_data_t _CustomCalc_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomCalc_Response_message_typesupport_map = {
  2,
  "ros2_tutorials_interfaces",
  &_CustomCalc_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CustomCalc_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CustomCalc_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CustomCalc_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomCalc_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_hash,
  &ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_description,
  &ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_tutorials_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_tutorials_interfaces, srv, CustomCalc_Response)() {
  return &::ros2_tutorials_interfaces::srv::rosidl_typesupport_c::CustomCalc_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__struct.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__type_support.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"
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

namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _CustomCalc_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomCalc_Event_type_support_ids_t;

static const _CustomCalc_Event_type_support_ids_t _CustomCalc_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CustomCalc_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomCalc_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomCalc_Event_type_support_symbol_names_t _CustomCalc_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_tutorials_interfaces, srv, CustomCalc_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_tutorials_interfaces, srv, CustomCalc_Event)),
  }
};

typedef struct _CustomCalc_Event_type_support_data_t
{
  void * data[2];
} _CustomCalc_Event_type_support_data_t;

static _CustomCalc_Event_type_support_data_t _CustomCalc_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomCalc_Event_message_typesupport_map = {
  2,
  "ros2_tutorials_interfaces",
  &_CustomCalc_Event_message_typesupport_ids.typesupport_identifier[0],
  &_CustomCalc_Event_message_typesupport_symbol_names.symbol_name[0],
  &_CustomCalc_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CustomCalc_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomCalc_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_hash,
  &ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_description,
  &ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_tutorials_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, ros2_tutorials_interfaces, srv, CustomCalc_Event)() {
  return &::ros2_tutorials_interfaces::srv::rosidl_typesupport_c::CustomCalc_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace ros2_tutorials_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _CustomCalc_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CustomCalc_type_support_ids_t;

static const _CustomCalc_type_support_ids_t _CustomCalc_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _CustomCalc_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CustomCalc_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CustomCalc_type_support_symbol_names_t _CustomCalc_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2_tutorials_interfaces, srv, CustomCalc)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2_tutorials_interfaces, srv, CustomCalc)),
  }
};

typedef struct _CustomCalc_type_support_data_t
{
  void * data[2];
} _CustomCalc_type_support_data_t;

static _CustomCalc_type_support_data_t _CustomCalc_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CustomCalc_service_typesupport_map = {
  2,
  "ros2_tutorials_interfaces",
  &_CustomCalc_service_typesupport_ids.typesupport_identifier[0],
  &_CustomCalc_service_typesupport_symbol_names.symbol_name[0],
  &_CustomCalc_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CustomCalc_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CustomCalc_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &CustomCalc_Request_message_type_support_handle,
  &CustomCalc_Response_message_type_support_handle,
  &CustomCalc_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros2_tutorials_interfaces,
    srv,
    CustomCalc
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    ros2_tutorials_interfaces,
    srv,
    CustomCalc
  ),
  &ros2_tutorials_interfaces__srv__CustomCalc__get_type_hash,
  &ros2_tutorials_interfaces__srv__CustomCalc__get_type_description,
  &ros2_tutorials_interfaces__srv__CustomCalc__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace ros2_tutorials_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, ros2_tutorials_interfaces, srv, CustomCalc)() {
  return &::ros2_tutorials_interfaces::srv::rosidl_typesupport_c::CustomCalc_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
