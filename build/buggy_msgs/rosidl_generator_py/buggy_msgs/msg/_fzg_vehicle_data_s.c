// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/FzgVehicleData.idl
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
#include "buggy_msgs/msg/detail/fzg_vehicle_data__struct.h"
#include "buggy_msgs/msg/detail/fzg_vehicle_data__functions.h"

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
bool buggy_msgs__msg__fzg_vehicle_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("buggy_msgs.msg._fzg_vehicle_data.FzgVehicleData", full_classname_dest, 47) == 0);
  }
  buggy_msgs__msg__FzgVehicleData * ros_message = _ros_message;
  {  // counter
    PyObject * field = PyObject_GetAttrString(_pymsg, "counter");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->counter)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // longitudinal_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_acc");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->longitudinal_acc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // yawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrate");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->yawrate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // set_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_curvature");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->set_curvature)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__fzg_vehicle_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FzgVehicleData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._fzg_vehicle_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FzgVehicleData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__FzgVehicleData * ros_message = (buggy_msgs__msg__FzgVehicleData *)raw_ros_message;
  {  // counter
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->counter);
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
  {  // longitudinal_acc
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->longitudinal_acc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrate
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->yawrate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_curvature
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->set_curvature);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
