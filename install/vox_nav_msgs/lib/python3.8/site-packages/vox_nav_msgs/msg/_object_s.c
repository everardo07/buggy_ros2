// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from vox_nav_msgs:msg/Object.idl
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
#include "vox_nav_msgs/msg/detail/object__struct.h"
#include "vox_nav_msgs/msg/detail/object__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point_stamped__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool vox_nav_msgs__msg__object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
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
    assert(strncmp("vox_nav_msgs.msg._object.Object", full_classname_dest, 31) == 0);
  }
  vox_nav_msgs__msg__Object * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // velo_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "velo_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point_stamped__convert_from_py(field, &ros_message->velo_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // world_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point_stamped__convert_from_py(field, &ros_message->world_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cam_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point_stamped__convert_from_py(field, &ros_message->cam_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // semantic_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "semantic_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->semantic_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // semantic_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "semantic_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->semantic_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // semantic_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "semantic_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->semantic_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->r = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // g
    PyObject * field = PyObject_GetAttrString(_pymsg, "g");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->g = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // b
    PyObject * field = PyObject_GetAttrString(_pymsg, "b");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->b = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_new_track
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_new_track");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_new_track = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_dynamic
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_dynamic");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_dynamic = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * vox_nav_msgs__msg__object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Object */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("vox_nav_msgs.msg._object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Object");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  vox_nav_msgs__msg__Object * ros_message = (vox_nav_msgs__msg__Object *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velo_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__point_stamped__convert_to_py(&ros_message->velo_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velo_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__point_stamped__convert_to_py(&ros_message->world_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__point_stamped__convert_to_py(&ros_message->cam_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // semantic_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->semantic_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "semantic_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // semantic_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->semantic_name.data,
      strlen(ros_message->semantic_name.data),
      "strict");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "semantic_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // semantic_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->semantic_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "semantic_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // g
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->g);
    {
      int rc = PyObject_SetAttrString(_pymessage, "g", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->b);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_new_track
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_new_track ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_new_track", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_dynamic
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_dynamic ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_dynamic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
