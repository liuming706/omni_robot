// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uline_patrol_msgs:srv/UlinePatrolCommand.idl
// generated code does not contain a copyright notice
#include "uline_patrol_msgs/srv/detail/uline_patrol_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__init(uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(msg);
    return false;
  }
  // initial_dis
  // velocity
  // duration
  return true;
}

void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // initial_dis
  // velocity
  // duration
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Request * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  // initial_dis
  if (lhs->initial_dis != rhs->initial_dis) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Request * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  // initial_dis
  output->initial_dis = input->initial_dis;
  // velocity
  output->velocity = input->velocity;
  // duration
  output->duration = input->duration;
  return true;
}

uline_patrol_msgs__srv__UlinePatrolCommand_Request *
uline_patrol_msgs__srv__UlinePatrolCommand_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg = (uline_patrol_msgs__srv__UlinePatrolCommand_Request *)allocator.allocate(sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Request));
  bool success = uline_patrol_msgs__srv__UlinePatrolCommand_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__init(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__srv__UlinePatrolCommand_Request * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__srv__UlinePatrolCommand_Request *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__srv__UlinePatrolCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(&data[i - 1]);
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
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array)
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
      uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(&array->data[i]);
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

uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence *
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array = (uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__srv__UlinePatrolCommand_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__srv__UlinePatrolCommand_Request * data =
      (uline_patrol_msgs__srv__UlinePatrolCommand_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__srv__UlinePatrolCommand_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__srv__UlinePatrolCommand_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__srv__UlinePatrolCommand_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__init(uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Response * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Response * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__srv__UlinePatrolCommand_Response *
uline_patrol_msgs__srv__UlinePatrolCommand_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg = (uline_patrol_msgs__srv__UlinePatrolCommand_Response *)allocator.allocate(sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Response));
  bool success = uline_patrol_msgs__srv__UlinePatrolCommand_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__init(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__srv__UlinePatrolCommand_Response * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__srv__UlinePatrolCommand_Response *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__srv__UlinePatrolCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(&data[i - 1]);
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
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__fini(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array)
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
      uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(&array->data[i]);
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

uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence *
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array = (uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__destroy(uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__are_equal(const uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * lhs, const uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__srv__UlinePatrolCommand_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence__copy(
  const uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * input,
  uline_patrol_msgs__srv__UlinePatrolCommand_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__srv__UlinePatrolCommand_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__srv__UlinePatrolCommand_Response * data =
      (uline_patrol_msgs__srv__UlinePatrolCommand_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__srv__UlinePatrolCommand_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__srv__UlinePatrolCommand_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__srv__UlinePatrolCommand_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
