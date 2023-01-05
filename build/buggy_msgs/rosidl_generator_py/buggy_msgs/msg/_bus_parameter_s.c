// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from buggy_msgs:msg/BUSParameter.idl
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
#include "buggy_msgs/msg/detail/bus_parameter__struct.h"
#include "buggy_msgs/msg/detail/bus_parameter__functions.h"

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
bool buggy_msgs__msg__bus_parameter__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("buggy_msgs.msg._bus_parameter.BUSParameter", full_classname_dest, 42) == 0);
  }
  buggy_msgs__msg__BUSParameter * ros_message = _ros_message;
  {  // params1_wheelcircumference_mm
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_wheelcircumference_mm");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_wheelcircumference_mm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_simplenav_reset
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_simplenav_reset");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_simplenav_reset)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_obeyspeedlimit
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_obeyspeedlimit");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_obeyspeedlimit)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_rv_a_demand
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_rv_a_demand");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_rv_a_demand)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_v2vid
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_v2vid");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_v2vid)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_track_a_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_track_a_max");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_track_a_max)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_nav_triggermsg
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_nav_triggermsg");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_nav_triggermsg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_nav_gnssdelay
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_nav_gnssdelay");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_nav_gnssdelay)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_stromgrenze
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_stromgrenze");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_stromgrenze)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params1_param_drehzahlgrenze
    PyObject * field = PyObject_GetAttrString(_pymsg, "params1_param_drehzahlgrenze");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params1_param_drehzahlgrenze)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_acc_inverseacc
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_acc_inverseacc");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_acc_inverseacc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_acc_timegap
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_acc_timegap");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_acc_timegap)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_acc_gain
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_acc_gain");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_acc_gain)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_acc_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_acc_distance");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_acc_distance)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_acc_activationdist
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_acc_activationdist");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_acc_activationdist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_menuparam4
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_menuparam4");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_menuparam4)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_menuparam3
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_menuparam3");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_menuparam3)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_menuparam2
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_menuparam2");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_menuparam2)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // params2_param_menuparam1
    PyObject * field = PyObject_GetAttrString(_pymsg, "params2_param_menuparam1");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__float32__convert_from_py(field, &ros_message->params2_param_menuparam1)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * buggy_msgs__msg__bus_parameter__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BUSParameter */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("buggy_msgs.msg._bus_parameter");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BUSParameter");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  buggy_msgs__msg__BUSParameter * ros_message = (buggy_msgs__msg__BUSParameter *)raw_ros_message;
  {  // params1_wheelcircumference_mm
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_wheelcircumference_mm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_wheelcircumference_mm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_simplenav_reset
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_simplenav_reset);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_simplenav_reset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_obeyspeedlimit
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_obeyspeedlimit);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_obeyspeedlimit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_rv_a_demand
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_rv_a_demand);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_rv_a_demand", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_v2vid
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_v2vid);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_v2vid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_track_a_max
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_track_a_max);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_track_a_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_nav_triggermsg
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_nav_triggermsg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_nav_triggermsg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_nav_gnssdelay
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_nav_gnssdelay);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_nav_gnssdelay", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_stromgrenze
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_stromgrenze);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_stromgrenze", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params1_param_drehzahlgrenze
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params1_param_drehzahlgrenze);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params1_param_drehzahlgrenze", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_acc_inverseacc
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_acc_inverseacc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_acc_inverseacc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_acc_timegap
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_acc_timegap);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_acc_timegap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_acc_gain
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_acc_gain);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_acc_gain", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_acc_distance
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_acc_distance);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_acc_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_acc_activationdist
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_acc_activationdist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_acc_activationdist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_menuparam4
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_menuparam4);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_menuparam4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_menuparam3
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_menuparam3);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_menuparam3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_menuparam2
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_menuparam2);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_menuparam2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // params2_param_menuparam1
    PyObject * field = NULL;
    field = std_msgs__msg__float32__convert_to_py(&ros_message->params2_param_menuparam1);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "params2_param_menuparam1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
