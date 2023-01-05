# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/FzgVehicleData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FzgVehicleData(type):
    """Metaclass of message 'FzgVehicleData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('buggy_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'buggy_msgs.msg.FzgVehicleData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fzg_vehicle_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fzg_vehicle_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fzg_vehicle_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fzg_vehicle_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fzg_vehicle_data

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FzgVehicleData(metaclass=Metaclass_FzgVehicleData):
    """Message class 'FzgVehicleData'."""

    __slots__ = [
        '_counter',
        '_longitudinal_acc',
        '_velocity',
        '_yawrate',
        '_set_curvature',
    ]

    _fields_and_field_types = {
        'counter': 'std_msgs/Float32',
        'longitudinal_acc': 'std_msgs/Float32',
        'velocity': 'std_msgs/Float32',
        'yawrate': 'std_msgs/Float32',
        'set_curvature': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float32
        self.counter = kwargs.get('counter', Float32())
        from std_msgs.msg import Float32
        self.longitudinal_acc = kwargs.get('longitudinal_acc', Float32())
        from std_msgs.msg import Float32
        self.velocity = kwargs.get('velocity', Float32())
        from std_msgs.msg import Float32
        self.yawrate = kwargs.get('yawrate', Float32())
        from std_msgs.msg import Float32
        self.set_curvature = kwargs.get('set_curvature', Float32())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.counter != other.counter:
            return False
        if self.longitudinal_acc != other.longitudinal_acc:
            return False
        if self.velocity != other.velocity:
            return False
        if self.yawrate != other.yawrate:
            return False
        if self.set_curvature != other.set_curvature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'counter' field must be a sub message of type 'Float32'"
        self._counter = value

    @property
    def longitudinal_acc(self):
        """Message field 'longitudinal_acc'."""
        return self._longitudinal_acc

    @longitudinal_acc.setter
    def longitudinal_acc(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'longitudinal_acc' field must be a sub message of type 'Float32'"
        self._longitudinal_acc = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'velocity' field must be a sub message of type 'Float32'"
        self._velocity = value

    @property
    def yawrate(self):
        """Message field 'yawrate'."""
        return self._yawrate

    @yawrate.setter
    def yawrate(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'yawrate' field must be a sub message of type 'Float32'"
        self._yawrate = value

    @property
    def set_curvature(self):
        """Message field 'set_curvature'."""
        return self._set_curvature

    @set_curvature.setter
    def set_curvature(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'set_curvature' field must be a sub message of type 'Float32'"
        self._set_curvature = value
