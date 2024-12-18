// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
// generated code does not contain a copyright notice
#include "uline_patrol_msgs/action/detail/uline_patrol_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `command`
#include "rosidl_runtime_c/string_functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__init(uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // command
  if (!rosidl_runtime_c__String__init(&msg->command)) {
    uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(msg);
    return false;
  }
  // initial_dis
  // velocity
  // duration
  // obstacle_stop_time
  // apriltag_stop_distance
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg)
{
  if (!msg) {
    return;
  }
  // command
  rosidl_runtime_c__String__fini(&msg->command);
  // initial_dis
  // velocity
  // duration
  // obstacle_stop_time
  // apriltag_stop_distance
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Goal * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Goal * rhs)
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
  // obstacle_stop_time
  if (lhs->obstacle_stop_time != rhs->obstacle_stop_time) {
    return false;
  }
  // apriltag_stop_distance
  if (lhs->apriltag_stop_distance != rhs->apriltag_stop_distance) {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Goal * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Goal * output)
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
  // obstacle_stop_time
  output->obstacle_stop_time = input->obstacle_stop_time;
  // apriltag_stop_distance
  output->apriltag_stop_distance = input->apriltag_stop_distance;
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_Goal *
uline_patrol_msgs__action__UlinePatrolCommand_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg = (uline_patrol_msgs__action__UlinePatrolCommand_Goal *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Goal));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Goal * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_Goal *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_Goal * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__init(uline_patrol_msgs__action__UlinePatrolCommand_Result * msg)
{
  if (!msg) {
    return false;
  }
  // ret_code
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(uline_patrol_msgs__action__UlinePatrolCommand_Result * msg)
{
  if (!msg) {
    return;
  }
  // ret_code
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Result * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ret_code
  if (lhs->ret_code != rhs->ret_code) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Result * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // ret_code
  output->ret_code = input->ret_code;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_Result *
uline_patrol_msgs__action__UlinePatrolCommand_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Result * msg = (uline_patrol_msgs__action__UlinePatrolCommand_Result *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Result));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Result__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Result * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_Result *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_Result * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `state`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init(uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // elapsed_time
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // elapsed_time
  // state
  rosidl_runtime_c__String__fini(&msg->state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Feedback * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Feedback * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_Feedback *
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg = (uline_patrol_msgs__action__UlinePatrolCommand_Feedback *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Feedback));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_Feedback *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_Feedback * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Goal__init(&msg->goal)) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  uline_patrol_msgs__action__UlinePatrolCommand_Goal__fini(&msg->goal);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg = (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg = (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg = (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Result__init(&msg->result)) {
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  uline_patrol_msgs__action__UlinePatrolCommand_Result__fini(&msg->result);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg = (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "uline_patrol_msgs/action/detail/uline_patrol_command__functions.h"

bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Feedback__init(&msg->feedback)) {
    uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  uline_patrol_msgs__action__UlinePatrolCommand_Feedback__fini(&msg->feedback);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * input,
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!uline_patrol_msgs__action__UlinePatrolCommand_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage *
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg = (uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage));
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__destroy(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__init(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * data = NULL;

  if (size) {
    data = (uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage *)allocator.zero_allocate(size, sizeof(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(&data[i - 1]);
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
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__fini(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array)
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
      uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(&array->data[i]);
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

uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence *
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array = (uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence *)allocator.allocate(sizeof(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__destroy(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__are_equal(const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * lhs, const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence__copy(
  const uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * input,
  uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage * data =
      (uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!uline_patrol_msgs__action__UlinePatrolCommand_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
