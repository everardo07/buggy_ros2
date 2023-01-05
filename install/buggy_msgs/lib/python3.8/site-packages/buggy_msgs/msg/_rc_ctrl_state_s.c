// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/RCCtrlState.idl
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
#include "buggy_msgs/msg/detail/rc_ctrl_state__struct.h"
#include "buggy_msgs/msg/detail/rc_ctrl_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int8__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int8__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool buggy_msgs__msg__rc_ctrl_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("buggy_msgs.msg._rc_ctrl_state.RCCtrlState", full_classname_dest, 41) == 0);
  }
  buggy_msgs__msg__RCCtrlState * ros_message = _ros_message;
  {  // joyctrl_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "joyctrl_enabled");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->joyctrl_enabled)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ro2car_enabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "ro2car_enabled");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->ro2car_enabled)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // control_disabled
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_disabled");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->control_disabled)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rc1_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc1_value");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->rc1_value)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rc2_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc2_value");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->rc2_value)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rc3_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "rc3_value");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->rc3_value)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__rc_ctrl_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RCCtrlState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._rc_ctrl_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RCCtrlState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__RCCtrlState * ros_message = (buggy_msgs__msg__RCCtrlState *)raw_ros_message;
  {  // joyctrl_enabled
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->joyctrl_enabled);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joyctrl_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ro2car_enabled
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->ro2car_enabled);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ro2car_enabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_disabled
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->control_disabled);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_disabled", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc1_value
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->rc1_value);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc1_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc2_value
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->rc2_value);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc2_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rc3_value
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->rc3_value);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rc3_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
