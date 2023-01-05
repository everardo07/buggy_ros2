// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/PlatoonState.idl
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
#include "buggy_msgs/msg/detail/platoon_state__struct.h"
#include "buggy_msgs/msg/detail/platoon_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int16__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int16__convert_to_py(void * raw_ros_message);
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
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool buggy_msgs__msg__platoon_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("buggy_msgs.msg._platoon_state.PlatoonState", full_classname_dest, 42) == 0);
  }
  buggy_msgs__msg__PlatoonState * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int16__convert_from_py(field, &ros_message->id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int16__convert_from_py(field, &ros_message->counter)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // platoon_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "platoon_acc_x");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->platoon_acc_x)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // platoon_mapmatching_isvalid
    PyObject * field = PyObject_GetAttrString(_pymsg, "platoon_mapmatching_isvalid");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->platoon_mapmatching_isvalid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // platoon_mapmatching_roadindex
    PyObject * field = PyObject_GetAttrString(_pymsg, "platoon_mapmatching_roadindex");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->platoon_mapmatching_roadindex)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // platoon_mapmatching_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "platoon_mapmatching_s");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->platoon_mapmatching_s)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // platoon_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "platoon_velocity");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->platoon_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__platoon_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PlatoonState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._platoon_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PlatoonState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__PlatoonState * ros_message = (buggy_msgs__msg__PlatoonState *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = std_msgs__msg__u_int16__convert_to_py(&ros_message->id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // counter
    PyObject * field = NULL;
    field = std_msgs__msg__u_int16__convert_to_py(&ros_message->counter);
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
  {  // platoon_acc_x
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->platoon_acc_x);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platoon_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // platoon_mapmatching_isvalid
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->platoon_mapmatching_isvalid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platoon_mapmatching_isvalid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // platoon_mapmatching_roadindex
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->platoon_mapmatching_roadindex);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platoon_mapmatching_roadindex", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // platoon_mapmatching_s
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->platoon_mapmatching_s);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platoon_mapmatching_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // platoon_velocity
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->platoon_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "platoon_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
