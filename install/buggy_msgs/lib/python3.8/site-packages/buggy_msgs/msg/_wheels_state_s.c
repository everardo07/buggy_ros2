// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/WheelsState.idl
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
#include "buggy_msgs/msg/detail/wheels_state__struct.h"
#include "buggy_msgs/msg/detail/wheels_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float64__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float64__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool buggy_msgs__msg__wheels_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("buggy_msgs.msg._wheels_state.WheelsState", full_classname_dest, 40) == 0);
  }
  buggy_msgs__msg__WheelsState * ros_message = _ros_message;
  {  // rf_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rf_speed");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->rf_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lf_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "lf_speed");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->lf_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rr_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_speed");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->rr_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lr_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "lr_speed");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float64__convert_from_py(field, &ros_message->lr_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__wheels_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WheelsState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._wheels_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WheelsState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__WheelsState * ros_message = (buggy_msgs__msg__WheelsState *)raw_ros_message;
  {  // rf_speed
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->rf_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rf_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lf_speed
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->lf_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lf_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_speed
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->rr_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lr_speed
    PyObject * field = NULL;
    field = std_msgs__msg__float64__convert_to_py(&ros_message->lr_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lr_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
