// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice

#include "ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_ros2_tutorials_interfaces
const rosidl_type_hash_t *
ros2_tutorials_interfaces__srv__CustomCalc__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0x46, 0xb0, 0x6b, 0x2a, 0x5a, 0x23, 0x43,
      0x99, 0x3f, 0x0c, 0x68, 0x1d, 0x63, 0xf2, 0x57,
      0x5d, 0xe4, 0x12, 0xe2, 0xc3, 0x1f, 0xbf, 0xe3,
      0x66, 0xca, 0xc6, 0x72, 0x17, 0xca, 0x2e, 0xb2,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2_tutorials_interfaces
const rosidl_type_hash_t *
ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa4, 0x79, 0x76, 0x45, 0x4b, 0x42, 0x06, 0x13,
      0xb1, 0x7c, 0xd5, 0x75, 0x14, 0x15, 0x5c, 0x72,
      0x9d, 0x0e, 0x2e, 0xd6, 0x69, 0xe1, 0xa4, 0x81,
      0xac, 0x2f, 0xec, 0x57, 0x43, 0x6d, 0xb1, 0x49,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2_tutorials_interfaces
const rosidl_type_hash_t *
ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7a, 0x9a, 0x82, 0x28, 0x24, 0x0e, 0xc1, 0x20,
      0x7d, 0x2b, 0x12, 0x9a, 0x59, 0xff, 0x6a, 0x77,
      0xbd, 0xe0, 0x97, 0x00, 0x40, 0xa0, 0x23, 0xf4,
      0x17, 0x48, 0x2e, 0x00, 0x6f, 0x13, 0x7f, 0xb6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_ros2_tutorials_interfaces
const rosidl_type_hash_t *
ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0x1a, 0xed, 0xf6, 0x3d, 0x03, 0x4d, 0x7c,
      0xa9, 0xfe, 0xe0, 0xbf, 0x0a, 0x75, 0x1a, 0x06,
      0xe8, 0xb0, 0x1f, 0x38, 0xa1, 0x21, 0xb9, 0xee,
      0xee, 0x8a, 0x18, 0x31, 0xb2, 0x25, 0xb7, 0xd3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

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

static char ros2_tutorials_interfaces__srv__CustomCalc__TYPE_NAME[] = "ros2_tutorials_interfaces/srv/CustomCalc";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char ros2_tutorials_interfaces__srv__CustomCalc_Event__TYPE_NAME[] = "ros2_tutorials_interfaces/srv/CustomCalc_Event";
static char ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME[] = "ros2_tutorials_interfaces/srv/CustomCalc_Request";
static char ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME[] = "ros2_tutorials_interfaces/srv/CustomCalc_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char ros2_tutorials_interfaces__srv__CustomCalc__FIELD_NAME__request_message[] = "request_message";
static char ros2_tutorials_interfaces__srv__CustomCalc__FIELD_NAME__response_message[] = "response_message";
static char ros2_tutorials_interfaces__srv__CustomCalc__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field ros2_tutorials_interfaces__srv__CustomCalc__FIELDS[] = {
  {
    {ros2_tutorials_interfaces__srv__CustomCalc__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {ros2_tutorials_interfaces__srv__CustomCalc_Event__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2_tutorials_interfaces__srv__CustomCalc__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Event__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_tutorials_interfaces__srv__CustomCalc__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_tutorials_interfaces__srv__CustomCalc__TYPE_NAME, 40, 40},
      {ros2_tutorials_interfaces__srv__CustomCalc__FIELDS, 3, 3},
    },
    {ros2_tutorials_interfaces__srv__CustomCalc__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2_tutorials_interfaces__srv__CustomCalc_Request__FIELD_NAME__a[] = "a";
static char ros2_tutorials_interfaces__srv__CustomCalc_Request__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field ros2_tutorials_interfaces__srv__CustomCalc_Request__FIELDS[] = {
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Request__FIELD_NAME__a, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Request__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME, 48, 48},
      {ros2_tutorials_interfaces__srv__CustomCalc_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2_tutorials_interfaces__srv__CustomCalc_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field ros2_tutorials_interfaces__srv__CustomCalc_Response__FIELDS[] = {
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Response__FIELD_NAME__result, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME, 49, 49},
      {ros2_tutorials_interfaces__srv__CustomCalc_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELD_NAME__info[] = "info";
static char ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELD_NAME__request[] = "request";
static char ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELDS[] = {
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME, 48, 48},
    },
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription ros2_tutorials_interfaces__srv__CustomCalc_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME, 48, 48},
    {NULL, 0, 0},
  },
  {
    {ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {ros2_tutorials_interfaces__srv__CustomCalc_Event__TYPE_NAME, 46, 46},
      {ros2_tutorials_interfaces__srv__CustomCalc_Event__FIELDS, 3, 3},
    },
    {ros2_tutorials_interfaces__srv__CustomCalc_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 a\n"
  "int64 b\n"
  "---\n"
  "int64 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
ros2_tutorials_interfaces__srv__CustomCalc__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_tutorials_interfaces__srv__CustomCalc__TYPE_NAME, 40, 40},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2_tutorials_interfaces__srv__CustomCalc_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_tutorials_interfaces__srv__CustomCalc_Request__TYPE_NAME, 48, 48},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2_tutorials_interfaces__srv__CustomCalc_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_tutorials_interfaces__srv__CustomCalc_Response__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
ros2_tutorials_interfaces__srv__CustomCalc_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {ros2_tutorials_interfaces__srv__CustomCalc_Event__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_tutorials_interfaces__srv__CustomCalc__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros2_tutorials_interfaces__srv__CustomCalc_Event__get_individual_type_description_source(NULL);
    sources[3] = *ros2_tutorials_interfaces__srv__CustomCalc_Request__get_individual_type_description_source(NULL);
    sources[4] = *ros2_tutorials_interfaces__srv__CustomCalc_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_tutorials_interfaces__srv__CustomCalc_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_tutorials_interfaces__srv__CustomCalc_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *ros2_tutorials_interfaces__srv__CustomCalc_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *ros2_tutorials_interfaces__srv__CustomCalc_Request__get_individual_type_description_source(NULL);
    sources[3] = *ros2_tutorials_interfaces__srv__CustomCalc_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
