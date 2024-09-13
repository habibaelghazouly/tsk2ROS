// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from weather_interfaces:srv/DataCheck.idl
// generated code does not contain a copyright notice
#include "weather_interfaces/srv/detail/data_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
weather_interfaces__srv__DataCheck_Request__init(weather_interfaces__srv__DataCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // temperature
  // pressure
  // humidity
  return true;
}

void
weather_interfaces__srv__DataCheck_Request__fini(weather_interfaces__srv__DataCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // temperature
  // pressure
  // humidity
}

bool
weather_interfaces__srv__DataCheck_Request__are_equal(const weather_interfaces__srv__DataCheck_Request * lhs, const weather_interfaces__srv__DataCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // humidity
  if (lhs->humidity != rhs->humidity) {
    return false;
  }
  return true;
}

bool
weather_interfaces__srv__DataCheck_Request__copy(
  const weather_interfaces__srv__DataCheck_Request * input,
  weather_interfaces__srv__DataCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // humidity
  output->humidity = input->humidity;
  return true;
}

weather_interfaces__srv__DataCheck_Request *
weather_interfaces__srv__DataCheck_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Request * msg = (weather_interfaces__srv__DataCheck_Request *)allocator.allocate(sizeof(weather_interfaces__srv__DataCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(weather_interfaces__srv__DataCheck_Request));
  bool success = weather_interfaces__srv__DataCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
weather_interfaces__srv__DataCheck_Request__destroy(weather_interfaces__srv__DataCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    weather_interfaces__srv__DataCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
weather_interfaces__srv__DataCheck_Request__Sequence__init(weather_interfaces__srv__DataCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Request * data = NULL;

  if (size) {
    data = (weather_interfaces__srv__DataCheck_Request *)allocator.zero_allocate(size, sizeof(weather_interfaces__srv__DataCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = weather_interfaces__srv__DataCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        weather_interfaces__srv__DataCheck_Request__fini(&data[i - 1]);
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
weather_interfaces__srv__DataCheck_Request__Sequence__fini(weather_interfaces__srv__DataCheck_Request__Sequence * array)
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
      weather_interfaces__srv__DataCheck_Request__fini(&array->data[i]);
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

weather_interfaces__srv__DataCheck_Request__Sequence *
weather_interfaces__srv__DataCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Request__Sequence * array = (weather_interfaces__srv__DataCheck_Request__Sequence *)allocator.allocate(sizeof(weather_interfaces__srv__DataCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = weather_interfaces__srv__DataCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
weather_interfaces__srv__DataCheck_Request__Sequence__destroy(weather_interfaces__srv__DataCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    weather_interfaces__srv__DataCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
weather_interfaces__srv__DataCheck_Request__Sequence__are_equal(const weather_interfaces__srv__DataCheck_Request__Sequence * lhs, const weather_interfaces__srv__DataCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!weather_interfaces__srv__DataCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
weather_interfaces__srv__DataCheck_Request__Sequence__copy(
  const weather_interfaces__srv__DataCheck_Request__Sequence * input,
  weather_interfaces__srv__DataCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(weather_interfaces__srv__DataCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    weather_interfaces__srv__DataCheck_Request * data =
      (weather_interfaces__srv__DataCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!weather_interfaces__srv__DataCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          weather_interfaces__srv__DataCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!weather_interfaces__srv__DataCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
weather_interfaces__srv__DataCheck_Response__init(weather_interfaces__srv__DataCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // temp
  // press
  // humid
  return true;
}

void
weather_interfaces__srv__DataCheck_Response__fini(weather_interfaces__srv__DataCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // temp
  // press
  // humid
}

bool
weather_interfaces__srv__DataCheck_Response__are_equal(const weather_interfaces__srv__DataCheck_Response * lhs, const weather_interfaces__srv__DataCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // temp
  if (lhs->temp != rhs->temp) {
    return false;
  }
  // press
  if (lhs->press != rhs->press) {
    return false;
  }
  // humid
  if (lhs->humid != rhs->humid) {
    return false;
  }
  return true;
}

bool
weather_interfaces__srv__DataCheck_Response__copy(
  const weather_interfaces__srv__DataCheck_Response * input,
  weather_interfaces__srv__DataCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // temp
  output->temp = input->temp;
  // press
  output->press = input->press;
  // humid
  output->humid = input->humid;
  return true;
}

weather_interfaces__srv__DataCheck_Response *
weather_interfaces__srv__DataCheck_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Response * msg = (weather_interfaces__srv__DataCheck_Response *)allocator.allocate(sizeof(weather_interfaces__srv__DataCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(weather_interfaces__srv__DataCheck_Response));
  bool success = weather_interfaces__srv__DataCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
weather_interfaces__srv__DataCheck_Response__destroy(weather_interfaces__srv__DataCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    weather_interfaces__srv__DataCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
weather_interfaces__srv__DataCheck_Response__Sequence__init(weather_interfaces__srv__DataCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Response * data = NULL;

  if (size) {
    data = (weather_interfaces__srv__DataCheck_Response *)allocator.zero_allocate(size, sizeof(weather_interfaces__srv__DataCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = weather_interfaces__srv__DataCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        weather_interfaces__srv__DataCheck_Response__fini(&data[i - 1]);
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
weather_interfaces__srv__DataCheck_Response__Sequence__fini(weather_interfaces__srv__DataCheck_Response__Sequence * array)
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
      weather_interfaces__srv__DataCheck_Response__fini(&array->data[i]);
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

weather_interfaces__srv__DataCheck_Response__Sequence *
weather_interfaces__srv__DataCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Response__Sequence * array = (weather_interfaces__srv__DataCheck_Response__Sequence *)allocator.allocate(sizeof(weather_interfaces__srv__DataCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = weather_interfaces__srv__DataCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
weather_interfaces__srv__DataCheck_Response__Sequence__destroy(weather_interfaces__srv__DataCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    weather_interfaces__srv__DataCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
weather_interfaces__srv__DataCheck_Response__Sequence__are_equal(const weather_interfaces__srv__DataCheck_Response__Sequence * lhs, const weather_interfaces__srv__DataCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!weather_interfaces__srv__DataCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
weather_interfaces__srv__DataCheck_Response__Sequence__copy(
  const weather_interfaces__srv__DataCheck_Response__Sequence * input,
  weather_interfaces__srv__DataCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(weather_interfaces__srv__DataCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    weather_interfaces__srv__DataCheck_Response * data =
      (weather_interfaces__srv__DataCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!weather_interfaces__srv__DataCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          weather_interfaces__srv__DataCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!weather_interfaces__srv__DataCheck_Response__copy(
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
// #include "weather_interfaces/srv/detail/data_check__functions.h"

bool
weather_interfaces__srv__DataCheck_Event__init(weather_interfaces__srv__DataCheck_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    weather_interfaces__srv__DataCheck_Event__fini(msg);
    return false;
  }
  // request
  if (!weather_interfaces__srv__DataCheck_Request__Sequence__init(&msg->request, 0)) {
    weather_interfaces__srv__DataCheck_Event__fini(msg);
    return false;
  }
  // response
  if (!weather_interfaces__srv__DataCheck_Response__Sequence__init(&msg->response, 0)) {
    weather_interfaces__srv__DataCheck_Event__fini(msg);
    return false;
  }
  return true;
}

void
weather_interfaces__srv__DataCheck_Event__fini(weather_interfaces__srv__DataCheck_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  weather_interfaces__srv__DataCheck_Request__Sequence__fini(&msg->request);
  // response
  weather_interfaces__srv__DataCheck_Response__Sequence__fini(&msg->response);
}

bool
weather_interfaces__srv__DataCheck_Event__are_equal(const weather_interfaces__srv__DataCheck_Event * lhs, const weather_interfaces__srv__DataCheck_Event * rhs)
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
  if (!weather_interfaces__srv__DataCheck_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!weather_interfaces__srv__DataCheck_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
weather_interfaces__srv__DataCheck_Event__copy(
  const weather_interfaces__srv__DataCheck_Event * input,
  weather_interfaces__srv__DataCheck_Event * output)
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
  if (!weather_interfaces__srv__DataCheck_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!weather_interfaces__srv__DataCheck_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

weather_interfaces__srv__DataCheck_Event *
weather_interfaces__srv__DataCheck_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Event * msg = (weather_interfaces__srv__DataCheck_Event *)allocator.allocate(sizeof(weather_interfaces__srv__DataCheck_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(weather_interfaces__srv__DataCheck_Event));
  bool success = weather_interfaces__srv__DataCheck_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
weather_interfaces__srv__DataCheck_Event__destroy(weather_interfaces__srv__DataCheck_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    weather_interfaces__srv__DataCheck_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
weather_interfaces__srv__DataCheck_Event__Sequence__init(weather_interfaces__srv__DataCheck_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Event * data = NULL;

  if (size) {
    data = (weather_interfaces__srv__DataCheck_Event *)allocator.zero_allocate(size, sizeof(weather_interfaces__srv__DataCheck_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = weather_interfaces__srv__DataCheck_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        weather_interfaces__srv__DataCheck_Event__fini(&data[i - 1]);
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
weather_interfaces__srv__DataCheck_Event__Sequence__fini(weather_interfaces__srv__DataCheck_Event__Sequence * array)
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
      weather_interfaces__srv__DataCheck_Event__fini(&array->data[i]);
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

weather_interfaces__srv__DataCheck_Event__Sequence *
weather_interfaces__srv__DataCheck_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  weather_interfaces__srv__DataCheck_Event__Sequence * array = (weather_interfaces__srv__DataCheck_Event__Sequence *)allocator.allocate(sizeof(weather_interfaces__srv__DataCheck_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = weather_interfaces__srv__DataCheck_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
weather_interfaces__srv__DataCheck_Event__Sequence__destroy(weather_interfaces__srv__DataCheck_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    weather_interfaces__srv__DataCheck_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
weather_interfaces__srv__DataCheck_Event__Sequence__are_equal(const weather_interfaces__srv__DataCheck_Event__Sequence * lhs, const weather_interfaces__srv__DataCheck_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!weather_interfaces__srv__DataCheck_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
weather_interfaces__srv__DataCheck_Event__Sequence__copy(
  const weather_interfaces__srv__DataCheck_Event__Sequence * input,
  weather_interfaces__srv__DataCheck_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(weather_interfaces__srv__DataCheck_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    weather_interfaces__srv__DataCheck_Event * data =
      (weather_interfaces__srv__DataCheck_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!weather_interfaces__srv__DataCheck_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          weather_interfaces__srv__DataCheck_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!weather_interfaces__srv__DataCheck_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
