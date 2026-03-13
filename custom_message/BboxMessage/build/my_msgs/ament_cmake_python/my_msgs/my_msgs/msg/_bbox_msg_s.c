// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from my_msgs:msg/BboxMsg.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "my_msgs/msg/detail/bbox_msg__struct.h"
#include "my_msgs/msg/detail/bbox_msg__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool my_msgs__msg__bbox_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("my_msgs.msg._bbox_msg.BboxMsg", full_classname_dest, 29) == 0);
  }
  my_msgs__msg__BboxMsg * ros_message = _ros_message;
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cls
    PyObject * field = PyObject_GetAttrString(_pymsg, "cls");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cls = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "conf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->conf = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // minx
    PyObject * field = PyObject_GetAttrString(_pymsg, "minx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->minx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // miny
    PyObject * field = PyObject_GetAttrString(_pymsg, "miny");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->miny = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // maxx
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maxx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // maxy
    PyObject * field = PyObject_GetAttrString(_pymsg, "maxy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maxy = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * my_msgs__msg__bbox_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BboxMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("my_msgs.msg._bbox_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BboxMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  my_msgs__msg__BboxMsg * ros_message = (my_msgs__msg__BboxMsg *)raw_ros_message;
  {  // index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cls
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cls);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cls", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // conf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->conf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // minx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->minx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "minx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // miny
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->miny);
    {
      int rc = PyObject_SetAttrString(_pymessage, "miny", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->maxx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maxy
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->maxy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maxy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
