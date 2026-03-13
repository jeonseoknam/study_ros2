// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from my_msgs:msg/BboxMsg.idl
// generated code does not contain a copyright notice
#include "my_msgs/msg/detail/bbox_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
my_msgs__msg__BboxMsg__init(my_msgs__msg__BboxMsg * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // cls
  // conf
  // minx
  // miny
  // maxx
  // maxy
  return true;
}

void
my_msgs__msg__BboxMsg__fini(my_msgs__msg__BboxMsg * msg)
{
  if (!msg) {
    return;
  }
  // index
  // cls
  // conf
  // minx
  // miny
  // maxx
  // maxy
}

bool
my_msgs__msg__BboxMsg__are_equal(const my_msgs__msg__BboxMsg * lhs, const my_msgs__msg__BboxMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // cls
  if (lhs->cls != rhs->cls) {
    return false;
  }
  // conf
  if (lhs->conf != rhs->conf) {
    return false;
  }
  // minx
  if (lhs->minx != rhs->minx) {
    return false;
  }
  // miny
  if (lhs->miny != rhs->miny) {
    return false;
  }
  // maxx
  if (lhs->maxx != rhs->maxx) {
    return false;
  }
  // maxy
  if (lhs->maxy != rhs->maxy) {
    return false;
  }
  return true;
}

bool
my_msgs__msg__BboxMsg__copy(
  const my_msgs__msg__BboxMsg * input,
  my_msgs__msg__BboxMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // cls
  output->cls = input->cls;
  // conf
  output->conf = input->conf;
  // minx
  output->minx = input->minx;
  // miny
  output->miny = input->miny;
  // maxx
  output->maxx = input->maxx;
  // maxy
  output->maxy = input->maxy;
  return true;
}

my_msgs__msg__BboxMsg *
my_msgs__msg__BboxMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msgs__msg__BboxMsg * msg = (my_msgs__msg__BboxMsg *)allocator.allocate(sizeof(my_msgs__msg__BboxMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(my_msgs__msg__BboxMsg));
  bool success = my_msgs__msg__BboxMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
my_msgs__msg__BboxMsg__destroy(my_msgs__msg__BboxMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    my_msgs__msg__BboxMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
my_msgs__msg__BboxMsg__Sequence__init(my_msgs__msg__BboxMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msgs__msg__BboxMsg * data = NULL;

  if (size) {
    data = (my_msgs__msg__BboxMsg *)allocator.zero_allocate(size, sizeof(my_msgs__msg__BboxMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = my_msgs__msg__BboxMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        my_msgs__msg__BboxMsg__fini(&data[i - 1]);
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
my_msgs__msg__BboxMsg__Sequence__fini(my_msgs__msg__BboxMsg__Sequence * array)
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
      my_msgs__msg__BboxMsg__fini(&array->data[i]);
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

my_msgs__msg__BboxMsg__Sequence *
my_msgs__msg__BboxMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  my_msgs__msg__BboxMsg__Sequence * array = (my_msgs__msg__BboxMsg__Sequence *)allocator.allocate(sizeof(my_msgs__msg__BboxMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = my_msgs__msg__BboxMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
my_msgs__msg__BboxMsg__Sequence__destroy(my_msgs__msg__BboxMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    my_msgs__msg__BboxMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
my_msgs__msg__BboxMsg__Sequence__are_equal(const my_msgs__msg__BboxMsg__Sequence * lhs, const my_msgs__msg__BboxMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!my_msgs__msg__BboxMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
my_msgs__msg__BboxMsg__Sequence__copy(
  const my_msgs__msg__BboxMsg__Sequence * input,
  my_msgs__msg__BboxMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(my_msgs__msg__BboxMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    my_msgs__msg__BboxMsg * data =
      (my_msgs__msg__BboxMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!my_msgs__msg__BboxMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          my_msgs__msg__BboxMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!my_msgs__msg__BboxMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
