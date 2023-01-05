// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/HILinitCMD.idl
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
#include "buggy_msgs/msg/detail/hi_linit_cmd__struct.h"
#include "buggy_msgs/msg/detail/hi_linit_cmd__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int16__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int16__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__int16__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool buggy_msgs__msg__hi_linit_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[40];
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
    assert(strncmp("buggy_msgs.msg._hi_linit_cmd.HILinitCMD", full_classname_dest, 39) == 0);
  }
  buggy_msgs__msg__HILinitCMD * ros_message = _ros_message;
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->counter)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lon_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_mm");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int16__convert_from_py(field, &ros_message->lon_mm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lon_mm_frac
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_mm_frac");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->lon_mm_frac)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lat_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_mm");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int16__convert_from_py(field, &ros_message->lat_mm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lat_mm_frac
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_mm_frac");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->lat_mm_frac)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__int16__convert_from_py(field, &ros_message->angle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__hi_linit_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HILinitCMD */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._hi_linit_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HILinitCMD");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__HILinitCMD * ros_message = (buggy_msgs__msg__HILinitCMD *)raw_ros_message;
  {  // counter
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->counter);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "counter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_mm
    PyObject * field = NULL;
    field = std_msgs__msg__int16__convert_to_py(&ros_message->lon_mm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_mm_frac
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->lon_mm_frac);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_mm_frac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_mm
    PyObject * field = NULL;
    field = std_msgs__msg__int16__convert_to_py(&ros_message->lat_mm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_mm_frac
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->lat_mm_frac);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_mm_frac", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle
    PyObject * field = NULL;
    field = std_msgs__msg__int16__convert_to_py(&ros_message->angle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
