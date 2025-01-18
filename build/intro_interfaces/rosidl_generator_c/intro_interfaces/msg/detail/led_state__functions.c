// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from intro_interfaces:msg/LEDState.idl
// generated code does not contain a copyright notice
#include "intro_interfaces/msg/detail/led_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `new_state_msg`
#include "rosidl_runtime_c/string_functions.h"

bool
intro_interfaces__msg__LEDState__init(intro_interfaces__msg__LEDState * msg)
{
  if (!msg) {
    return false;
  }
  // new_state_msg
  if (!rosidl_runtime_c__String__init(&msg->new_state_msg)) {
    intro_interfaces__msg__LEDState__fini(msg);
    return false;
  }
  // state
  return true;
}

void
intro_interfaces__msg__LEDState__fini(intro_interfaces__msg__LEDState * msg)
{
  if (!msg) {
    return;
  }
  // new_state_msg
  rosidl_runtime_c__String__fini(&msg->new_state_msg);
  // state
}

bool
intro_interfaces__msg__LEDState__are_equal(const intro_interfaces__msg__LEDState * lhs, const intro_interfaces__msg__LEDState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // new_state_msg
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->new_state_msg), &(rhs->new_state_msg)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
intro_interfaces__msg__LEDState__copy(
  const intro_interfaces__msg__LEDState * input,
  intro_interfaces__msg__LEDState * output)
{
  if (!input || !output) {
    return false;
  }
  // new_state_msg
  if (!rosidl_runtime_c__String__copy(
      &(input->new_state_msg), &(output->new_state_msg)))
  {
    return false;
  }
  // state
  output->state = input->state;
  return true;
}

intro_interfaces__msg__LEDState *
intro_interfaces__msg__LEDState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__msg__LEDState * msg = (intro_interfaces__msg__LEDState *)allocator.allocate(sizeof(intro_interfaces__msg__LEDState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(intro_interfaces__msg__LEDState));
  bool success = intro_interfaces__msg__LEDState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
intro_interfaces__msg__LEDState__destroy(intro_interfaces__msg__LEDState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    intro_interfaces__msg__LEDState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
intro_interfaces__msg__LEDState__Sequence__init(intro_interfaces__msg__LEDState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__msg__LEDState * data = NULL;

  if (size) {
    data = (intro_interfaces__msg__LEDState *)allocator.zero_allocate(size, sizeof(intro_interfaces__msg__LEDState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = intro_interfaces__msg__LEDState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        intro_interfaces__msg__LEDState__fini(&data[i - 1]);
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
intro_interfaces__msg__LEDState__Sequence__fini(intro_interfaces__msg__LEDState__Sequence * array)
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
      intro_interfaces__msg__LEDState__fini(&array->data[i]);
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

intro_interfaces__msg__LEDState__Sequence *
intro_interfaces__msg__LEDState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  intro_interfaces__msg__LEDState__Sequence * array = (intro_interfaces__msg__LEDState__Sequence *)allocator.allocate(sizeof(intro_interfaces__msg__LEDState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = intro_interfaces__msg__LEDState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
intro_interfaces__msg__LEDState__Sequence__destroy(intro_interfaces__msg__LEDState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    intro_interfaces__msg__LEDState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
intro_interfaces__msg__LEDState__Sequence__are_equal(const intro_interfaces__msg__LEDState__Sequence * lhs, const intro_interfaces__msg__LEDState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!intro_interfaces__msg__LEDState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
intro_interfaces__msg__LEDState__Sequence__copy(
  const intro_interfaces__msg__LEDState__Sequence * input,
  intro_interfaces__msg__LEDState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(intro_interfaces__msg__LEDState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    intro_interfaces__msg__LEDState * data =
      (intro_interfaces__msg__LEDState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!intro_interfaces__msg__LEDState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          intro_interfaces__msg__LEDState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!intro_interfaces__msg__LEDState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
