// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/Mapmatching.idl
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
#include "buggy_msgs/msg/detail/mapmatching__struct.h"
#include "buggy_msgs/msg/detail/mapmatching__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int16__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__u_int16__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__u_int16__convert_to_py(void * raw_ros_message);
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
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__float32__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__float32__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool buggy_msgs__msg__mapmatching__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("buggy_msgs.msg._mapmatching.Mapmatching", full_classname_dest, 39) == 0);
  }
  buggy_msgs__msg__Mapmatching * ros_message = _ros_message;
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
  {  // is_lead_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_lead_vehicle");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__u_int8__convert_from_py(field, &ros_message->is_lead_vehicle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mapmatching_checksum
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapmatching_checksum");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->mapmatching_checksum)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mapmatching_is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapmatching_is_valid");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->mapmatching_is_valid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // mapmatching_roadindex
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapmatching_roadindex");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->mapmatching_roadindex)) {
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__mapmatching__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Mapmatching */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._mapmatching");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Mapmatching");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__Mapmatching * ros_message = (buggy_msgs__msg__Mapmatching *)raw_ros_message;
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
  {  // is_lead_vehicle
    PyObject * field = NULL;
    field = std_msgs__msg__u_int8__convert_to_py(&ros_message->is_lead_vehicle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_lead_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mapmatching_checksum
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->mapmatching_checksum);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapmatching_checksum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mapmatching_is_valid
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->mapmatching_is_valid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapmatching_is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mapmatching_roadindex
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->mapmatching_roadindex);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapmatching_roadindex", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
