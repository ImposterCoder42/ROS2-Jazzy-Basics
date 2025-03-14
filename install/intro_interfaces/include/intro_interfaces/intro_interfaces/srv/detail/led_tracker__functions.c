// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from intro_interfaces:srv/LEDTracker.idl
// generated code does not contain a copyright notice
#include "intro_interfaces/srv/detail/led_tracker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
intro_interfaces__srv__LEDTracker_Request__init(intro_interfaces__srv__LEDTracker_Request * msg)
{
  if (!msg) {
    return false;
  }
  // num_of_sys_blinks
  // led_state
  return true;
}

void
intro_interfaces__srv__LEDTracker_Request__fini(intro_interfaces__srv__LEDTracker_Request * msg)
{
  if (!msg) {
    return;
  }
  // num_of_sys_blinks
  // led_state
}

bool
intro_interfaces__srv__LEDTracker_Request__are_equal(const intro_interfaces__srv__LEDTracker_Request * lhs, const intro_interfaces__srv__LEDTracker_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_of_sys_blinks
  if (lhs->num_of_sys_blinks != rhs->num_of_sys_blinks) {
    return false;
  }
  // led_state
  if (lhs->led_state != rhs->led_state) {
    return false;
  }
  return true;
}

bool
intro_interfaces__srv__LEDTracker_Request__copy(
  const intro_interfaces__srv__LEDTracker_Request * input,
  intro_interfaces__srv__LEDTracker_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // num_of_sys_blinks
  output->num_of_sys_blinks = input->num_of_sys_blinks;
  // led_state
  output->led_state = input->led_state;
  return true;
}

intro_interfaces__srv__LEDTracker_Request *
intro_interfaces__srv__LEDTracker_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Request * msg = (intro_interfaces__srv__LEDTracker_Request *)allocator.allocate(sizeof(intro_interfaces__srv__LEDTracker_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(intro_interfaces__srv__LEDTracker_Request));
  bool success = intro_interfaces__srv__LEDTracker_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
intro_interfaces__srv__LEDTracker_Request__destroy(intro_interfaces__srv__LEDTracker_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    intro_interfaces__srv__LEDTracker_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
intro_interfaces__srv__LEDTracker_Request__Sequence__init(intro_interfaces__srv__LEDTracker_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Request * data = NULL;

  if (size) {
    data = (intro_interfaces__srv__LEDTracker_Request *)allocator.zero_allocate(size, sizeof(intro_interfaces__srv__LEDTracker_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = intro_interfaces__srv__LEDTracker_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        intro_interfaces__srv__LEDTracker_Request__fini(&data[i - 1]);
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
intro_interfaces__srv__LEDTracker_Request__Sequence__fini(intro_interfaces__srv__LEDTracker_Request__Sequence * array)
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
      intro_interfaces__srv__LEDTracker_Request__fini(&array->data[i]);
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

intro_interfaces__srv__LEDTracker_Request__Sequence *
intro_interfaces__srv__LEDTracker_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Request__Sequence * array = (intro_interfaces__srv__LEDTracker_Request__Sequence *)allocator.allocate(sizeof(intro_interfaces__srv__LEDTracker_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = intro_interfaces__srv__LEDTracker_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
intro_interfaces__srv__LEDTracker_Request__Sequence__destroy(intro_interfaces__srv__LEDTracker_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    intro_interfaces__srv__LEDTracker_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
intro_interfaces__srv__LEDTracker_Request__Sequence__are_equal(const intro_interfaces__srv__LEDTracker_Request__Sequence * lhs, const intro_interfaces__srv__LEDTracker_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!intro_interfaces__srv__LEDTracker_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
intro_interfaces__srv__LEDTracker_Request__Sequence__copy(
  const intro_interfaces__srv__LEDTracker_Request__Sequence * input,
  intro_interfaces__srv__LEDTracker_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(intro_interfaces__srv__LEDTracker_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    intro_interfaces__srv__LEDTracker_Request * data =
      (intro_interfaces__srv__LEDTracker_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!intro_interfaces__srv__LEDTracker_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          intro_interfaces__srv__LEDTracker_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!intro_interfaces__srv__LEDTracker_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
intro_interfaces__srv__LEDTracker_Response__init(intro_interfaces__srv__LEDTracker_Response * msg)
{
  if (!msg) {
    return false;
  }
  // num_of_cycles_completed
  msg->num_of_cycles_completed = 0ll;
  // is_total_blinks_in_series_of_ten
  msg->is_total_blinks_in_series_of_ten = false;
  return true;
}

void
intro_interfaces__srv__LEDTracker_Response__fini(intro_interfaces__srv__LEDTracker_Response * msg)
{
  if (!msg) {
    return;
  }
  // num_of_cycles_completed
  // is_total_blinks_in_series_of_ten
}

bool
intro_interfaces__srv__LEDTracker_Response__are_equal(const intro_interfaces__srv__LEDTracker_Response * lhs, const intro_interfaces__srv__LEDTracker_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_of_cycles_completed
  if (lhs->num_of_cycles_completed != rhs->num_of_cycles_completed) {
    return false;
  }
  // is_total_blinks_in_series_of_ten
  if (lhs->is_total_blinks_in_series_of_ten != rhs->is_total_blinks_in_series_of_ten) {
    return false;
  }
  return true;
}

bool
intro_interfaces__srv__LEDTracker_Response__copy(
  const intro_interfaces__srv__LEDTracker_Response * input,
  intro_interfaces__srv__LEDTracker_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // num_of_cycles_completed
  output->num_of_cycles_completed = input->num_of_cycles_completed;
  // is_total_blinks_in_series_of_ten
  output->is_total_blinks_in_series_of_ten = input->is_total_blinks_in_series_of_ten;
  return true;
}

intro_interfaces__srv__LEDTracker_Response *
intro_interfaces__srv__LEDTracker_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Response * msg = (intro_interfaces__srv__LEDTracker_Response *)allocator.allocate(sizeof(intro_interfaces__srv__LEDTracker_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(intro_interfaces__srv__LEDTracker_Response));
  bool success = intro_interfaces__srv__LEDTracker_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
intro_interfaces__srv__LEDTracker_Response__destroy(intro_interfaces__srv__LEDTracker_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    intro_interfaces__srv__LEDTracker_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
intro_interfaces__srv__LEDTracker_Response__Sequence__init(intro_interfaces__srv__LEDTracker_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Response * data = NULL;

  if (size) {
    data = (intro_interfaces__srv__LEDTracker_Response *)allocator.zero_allocate(size, sizeof(intro_interfaces__srv__LEDTracker_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = intro_interfaces__srv__LEDTracker_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        intro_interfaces__srv__LEDTracker_Response__fini(&data[i - 1]);
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
intro_interfaces__srv__LEDTracker_Response__Sequence__fini(intro_interfaces__srv__LEDTracker_Response__Sequence * array)
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
      intro_interfaces__srv__LEDTracker_Response__fini(&array->data[i]);
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

intro_interfaces__srv__LEDTracker_Response__Sequence *
intro_interfaces__srv__LEDTracker_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Response__Sequence * array = (intro_interfaces__srv__LEDTracker_Response__Sequence *)allocator.allocate(sizeof(intro_interfaces__srv__LEDTracker_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = intro_interfaces__srv__LEDTracker_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
intro_interfaces__srv__LEDTracker_Response__Sequence__destroy(intro_interfaces__srv__LEDTracker_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    intro_interfaces__srv__LEDTracker_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
intro_interfaces__srv__LEDTracker_Response__Sequence__are_equal(const intro_interfaces__srv__LEDTracker_Response__Sequence * lhs, const intro_interfaces__srv__LEDTracker_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!intro_interfaces__srv__LEDTracker_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
intro_interfaces__srv__LEDTracker_Response__Sequence__copy(
  const intro_interfaces__srv__LEDTracker_Response__Sequence * input,
  intro_interfaces__srv__LEDTracker_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(intro_interfaces__srv__LEDTracker_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    intro_interfaces__srv__LEDTracker_Response * data =
      (intro_interfaces__srv__LEDTracker_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!intro_interfaces__srv__LEDTracker_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          intro_interfaces__srv__LEDTracker_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!intro_interfaces__srv__LEDTracker_Response__copy(
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
// #include "intro_interfaces/srv/detail/led_tracker__functions.h"

bool
intro_interfaces__srv__LEDTracker_Event__init(intro_interfaces__srv__LEDTracker_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    intro_interfaces__srv__LEDTracker_Event__fini(msg);
    return false;
  }
  // request
  if (!intro_interfaces__srv__LEDTracker_Request__Sequence__init(&msg->request, 0)) {
    intro_interfaces__srv__LEDTracker_Event__fini(msg);
    return false;
  }
  // response
  if (!intro_interfaces__srv__LEDTracker_Response__Sequence__init(&msg->response, 0)) {
    intro_interfaces__srv__LEDTracker_Event__fini(msg);
    return false;
  }
  return true;
}

void
intro_interfaces__srv__LEDTracker_Event__fini(intro_interfaces__srv__LEDTracker_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  intro_interfaces__srv__LEDTracker_Request__Sequence__fini(&msg->request);
  // response
  intro_interfaces__srv__LEDTracker_Response__Sequence__fini(&msg->response);
}

bool
intro_interfaces__srv__LEDTracker_Event__are_equal(const intro_interfaces__srv__LEDTracker_Event * lhs, const intro_interfaces__srv__LEDTracker_Event * rhs)
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
  if (!intro_interfaces__srv__LEDTracker_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!intro_interfaces__srv__LEDTracker_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
intro_interfaces__srv__LEDTracker_Event__copy(
  const intro_interfaces__srv__LEDTracker_Event * input,
  intro_interfaces__srv__LEDTracker_Event * output)
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
  if (!intro_interfaces__srv__LEDTracker_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!intro_interfaces__srv__LEDTracker_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

intro_interfaces__srv__LEDTracker_Event *
intro_interfaces__srv__LEDTracker_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Event * msg = (intro_interfaces__srv__LEDTracker_Event *)allocator.allocate(sizeof(intro_interfaces__srv__LEDTracker_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(intro_interfaces__srv__LEDTracker_Event));
  bool success = intro_interfaces__srv__LEDTracker_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
intro_interfaces__srv__LEDTracker_Event__destroy(intro_interfaces__srv__LEDTracker_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    intro_interfaces__srv__LEDTracker_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
intro_interfaces__srv__LEDTracker_Event__Sequence__init(intro_interfaces__srv__LEDTracker_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Event * data = NULL;

  if (size) {
    data = (intro_interfaces__srv__LEDTracker_Event *)allocator.zero_allocate(size, sizeof(intro_interfaces__srv__LEDTracker_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = intro_interfaces__srv__LEDTracker_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        intro_interfaces__srv__LEDTracker_Event__fini(&data[i - 1]);
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
intro_interfaces__srv__LEDTracker_Event__Sequence__fini(intro_interfaces__srv__LEDTracker_Event__Sequence * array)
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
      intro_interfaces__srv__LEDTracker_Event__fini(&array->data[i]);
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

intro_interfaces__srv__LEDTracker_Event__Sequence *
intro_interfaces__srv__LEDTracker_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__srv__LEDTracker_Event__Sequence * array = (intro_interfaces__srv__LEDTracker_Event__Sequence *)allocator.allocate(sizeof(intro_interfaces__srv__LEDTracker_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = intro_interfaces__srv__LEDTracker_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
intro_interfaces__srv__LEDTracker_Event__Sequence__destroy(intro_interfaces__srv__LEDTracker_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    intro_interfaces__srv__LEDTracker_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
intro_interfaces__srv__LEDTracker_Event__Sequence__are_equal(const intro_interfaces__srv__LEDTracker_Event__Sequence * lhs, const intro_interfaces__srv__LEDTracker_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!intro_interfaces__srv__LEDTracker_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
intro_interfaces__srv__LEDTracker_Event__Sequence__copy(
  const intro_interfaces__srv__LEDTracker_Event__Sequence * input,
  intro_interfaces__srv__LEDTracker_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(intro_interfaces__srv__LEDTracker_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    intro_interfaces__srv__LEDTracker_Event * data =
      (intro_interfaces__srv__LEDTracker_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!intro_interfaces__srv__LEDTracker_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          intro_interfaces__srv__LEDTracker_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!intro_interfaces__srv__LEDTracker_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
