// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2_tutorials_interfaces:srv/CustomCalc.idl
// generated code does not contain a copyright notice
#include "ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ros2_tutorials_interfaces__srv__CustomCalc_Request__init(ros2_tutorials_interfaces__srv__CustomCalc_Request * msg)
{
  if (!msg) {
    return false;
  }
  // a
  // b
  return true;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(ros2_tutorials_interfaces__srv__CustomCalc_Request * msg)
{
  if (!msg) {
    return;
  }
  // a
  // b
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Request__are_equal(const ros2_tutorials_interfaces__srv__CustomCalc_Request * lhs, const ros2_tutorials_interfaces__srv__CustomCalc_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // b
  if (lhs->b != rhs->b) {
    return false;
  }
  return true;
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Request__copy(
  const ros2_tutorials_interfaces__srv__CustomCalc_Request * input,
  ros2_tutorials_interfaces__srv__CustomCalc_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // a
  output->a = input->a;
  // b
  output->b = input->b;
  return true;
}

ros2_tutorials_interfaces__srv__CustomCalc_Request *
ros2_tutorials_interfaces__srv__CustomCalc_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Request * msg = (ros2_tutorials_interfaces__srv__CustomCalc_Request *)allocator.allocate(sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Request));
  bool success = ros2_tutorials_interfaces__srv__CustomCalc_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Request__destroy(ros2_tutorials_interfaces__srv__CustomCalc_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__init(ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Request * data = NULL;

  if (size) {
    data = (ros2_tutorials_interfaces__srv__CustomCalc_Request *)allocator.zero_allocate(size, sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_tutorials_interfaces__srv__CustomCalc_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__fini(ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array = (ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence *)allocator.allocate(sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__destroy(ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__are_equal(const ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * lhs, const ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_tutorials_interfaces__srv__CustomCalc_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__copy(
  const ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * input,
  ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_tutorials_interfaces__srv__CustomCalc_Request * data =
      (ros2_tutorials_interfaces__srv__CustomCalc_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_tutorials_interfaces__srv__CustomCalc_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_tutorials_interfaces__srv__CustomCalc_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_tutorials_interfaces__srv__CustomCalc_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ros2_tutorials_interfaces__srv__CustomCalc_Response__init(ros2_tutorials_interfaces__srv__CustomCalc_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(ros2_tutorials_interfaces__srv__CustomCalc_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Response__are_equal(const ros2_tutorials_interfaces__srv__CustomCalc_Response * lhs, const ros2_tutorials_interfaces__srv__CustomCalc_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Response__copy(
  const ros2_tutorials_interfaces__srv__CustomCalc_Response * input,
  ros2_tutorials_interfaces__srv__CustomCalc_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

ros2_tutorials_interfaces__srv__CustomCalc_Response *
ros2_tutorials_interfaces__srv__CustomCalc_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Response * msg = (ros2_tutorials_interfaces__srv__CustomCalc_Response *)allocator.allocate(sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Response));
  bool success = ros2_tutorials_interfaces__srv__CustomCalc_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Response__destroy(ros2_tutorials_interfaces__srv__CustomCalc_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__init(ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Response * data = NULL;

  if (size) {
    data = (ros2_tutorials_interfaces__srv__CustomCalc_Response *)allocator.zero_allocate(size, sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_tutorials_interfaces__srv__CustomCalc_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__fini(ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array = (ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence *)allocator.allocate(sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__destroy(ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__are_equal(const ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * lhs, const ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_tutorials_interfaces__srv__CustomCalc_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__copy(
  const ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * input,
  ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_tutorials_interfaces__srv__CustomCalc_Response * data =
      (ros2_tutorials_interfaces__srv__CustomCalc_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_tutorials_interfaces__srv__CustomCalc_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_tutorials_interfaces__srv__CustomCalc_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_tutorials_interfaces__srv__CustomCalc_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "ros2_tutorials_interfaces/srv/detail/custom_calc__functions.h"

bool
ros2_tutorials_interfaces__srv__CustomCalc_Event__init(ros2_tutorials_interfaces__srv__CustomCalc_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
    return false;
  }
  // request
  if (!ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__init(&msg->request, 0)) {
    ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
    return false;
  }
  // response
  if (!ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__init(&msg->response, 0)) {
    ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
    return false;
  }
  return true;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(ros2_tutorials_interfaces__srv__CustomCalc_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__fini(&msg->request);
  // response
  ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__fini(&msg->response);
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Event__are_equal(const ros2_tutorials_interfaces__srv__CustomCalc_Event * lhs, const ros2_tutorials_interfaces__srv__CustomCalc_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Event__copy(
  const ros2_tutorials_interfaces__srv__CustomCalc_Event * input,
  ros2_tutorials_interfaces__srv__CustomCalc_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!ros2_tutorials_interfaces__srv__CustomCalc_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!ros2_tutorials_interfaces__srv__CustomCalc_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

ros2_tutorials_interfaces__srv__CustomCalc_Event *
ros2_tutorials_interfaces__srv__CustomCalc_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Event * msg = (ros2_tutorials_interfaces__srv__CustomCalc_Event *)allocator.allocate(sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Event));
  bool success = ros2_tutorials_interfaces__srv__CustomCalc_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Event__destroy(ros2_tutorials_interfaces__srv__CustomCalc_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__init(ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Event * data = NULL;

  if (size) {
    data = (ros2_tutorials_interfaces__srv__CustomCalc_Event *)allocator.zero_allocate(size, sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2_tutorials_interfaces__srv__CustomCalc_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__fini(ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence *
ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array = (ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence *)allocator.allocate(sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__destroy(ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__are_equal(const ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * lhs, const ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2_tutorials_interfaces__srv__CustomCalc_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence__copy(
  const ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * input,
  ros2_tutorials_interfaces__srv__CustomCalc_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2_tutorials_interfaces__srv__CustomCalc_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2_tutorials_interfaces__srv__CustomCalc_Event * data =
      (ros2_tutorials_interfaces__srv__CustomCalc_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2_tutorials_interfaces__srv__CustomCalc_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2_tutorials_interfaces__srv__CustomCalc_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2_tutorials_interfaces__srv__CustomCalc_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
