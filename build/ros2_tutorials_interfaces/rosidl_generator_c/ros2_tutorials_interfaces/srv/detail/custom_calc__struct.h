// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros2_tutorials_interfaces/srv/custom_calc.h"


#ifndef ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__STRUCT_H_
#define ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CustomCalc in the package ros2_tutorials_interfaces.
typedef struct ros2_tutorials_interfaces__srv__CustomCalc_Request
{
  int64_t a;
  int64_t b;
} ros2_tutorials_interfaces__srv__CustomCalc_Request;

// Struct for a sequence of ros2_tutorials_interfaces__srv__CustomCalc_Request.
typedef struct ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence
{
  ros2_tutorials_interfaces__srv__CustomCalc_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/CustomCalc in the package ros2_tutorials_interfaces.
typedef struct ros2_tutorials_interfaces__srv__CustomCalc_Response
{
  int64_t result;
} ros2_tutorials_interfaces__srv__CustomCalc_Response;

// Struct for a sequence of ros2_tutorials_interfaces__srv__CustomCalc_Response.
typedef struct ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence
{
  ros2_tutorials_interfaces__srv__CustomCalc_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  ros2_tutorials_interfaces__srv__CustomCalc_Event__request__MAX_SIZE = 1
};
// response
enum
{
  ros2_tutorials_interfaces__srv__CustomCalc_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/CustomCalc in the package ros2_tutorials_interfaces.
typedef struct ros2_tutorials_interfaces__srv__CustomCalc_Event
{
  service_msgs__msg__ServiceEventInfo info;
  ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence request;
  ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence response;
} ros2_tutorials_interfaces__srv__CustomCalc_Event;

// Struct for a sequence of ros2_tutorials_interfaces__srv__CustomCalc_Event.
typedef struct ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence
{
  ros2_tutorials_interfaces__srv__CustomCalc_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_TUTORIALS_INTERFACES__SRV__DETAIL__CUSTOM_CALC__STRUCT_H_
