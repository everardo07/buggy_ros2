# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/HILinitCMD.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HILinitCMD(type):
    """Metaclass of message 'HILinitCMD'."""

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
                'buggy_msgs.msg.HILinitCMD')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hi_linit_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hi_linit_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hi_linit_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hi_linit_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hi_linit_cmd

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

            from std_msgs.msg import Int16
            if Int16.__class__._TYPE_SUPPORT is None:
                Int16.__class__.__import_type_support__()

            from std_msgs.msg import UInt8
            if UInt8.__class__._TYPE_SUPPORT is None:
                UInt8.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HILinitCMD(metaclass=Metaclass_HILinitCMD):
    """Message class 'HILinitCMD'."""

    __slots__ = [
        '_counter',
        '_lon_mm',
        '_lon_mm_frac',
        '_lat_mm',
        '_lat_mm_frac',
        '_angle',
    ]

    _fields_and_field_types = {
        'counter': 'std_msgs/UInt8',
        'lon_mm': 'std_msgs/Int16',
        'lon_mm_frac': 'std_msgs/Float32',
        'lat_mm': 'std_msgs/Int16',
        'lat_mm_frac': 'std_msgs/Float32',
        'angle': 'std_msgs/Int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import UInt8
        self.counter = kwargs.get('counter', UInt8())
        from std_msgs.msg import Int16
        self.lon_mm = kwargs.get('lon_mm', Int16())
        from std_msgs.msg import Float32
        self.lon_mm_frac = kwargs.get('lon_mm_frac', Float32())
        from std_msgs.msg import Int16
        self.lat_mm = kwargs.get('lat_mm', Int16())
        from std_msgs.msg import Float32
        self.lat_mm_frac = kwargs.get('lat_mm_frac', Float32())
        from std_msgs.msg import Int16
        self.angle = kwargs.get('angle', Int16())

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
        if self.lon_mm != other.lon_mm:
            return False
        if self.lon_mm_frac != other.lon_mm_frac:
            return False
        if self.lat_mm != other.lat_mm:
            return False
        if self.lat_mm_frac != other.lat_mm_frac:
            return False
        if self.angle != other.angle:
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
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'counter' field must be a sub message of type 'UInt8'"
        self._counter = value

    @property
    def lon_mm(self):
        """Message field 'lon_mm'."""
        return self._lon_mm

    @lon_mm.setter
    def lon_mm(self, value):
        if __debug__:
            from std_msgs.msg import Int16
            assert \
                isinstance(value, Int16), \
                "The 'lon_mm' field must be a sub message of type 'Int16'"
        self._lon_mm = value

    @property
    def lon_mm_frac(self):
        """Message field 'lon_mm_frac'."""
        return self._lon_mm_frac

    @lon_mm_frac.setter
    def lon_mm_frac(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'lon_mm_frac' field must be a sub message of type 'Float32'"
        self._lon_mm_frac = value

    @property
    def lat_mm(self):
        """Message field 'lat_mm'."""
        return self._lat_mm

    @lat_mm.setter
    def lat_mm(self, value):
        if __debug__:
            from std_msgs.msg import Int16
            assert \
                isinstance(value, Int16), \
                "The 'lat_mm' field must be a sub message of type 'Int16'"
        self._lat_mm = value

    @property
    def lat_mm_frac(self):
        """Message field 'lat_mm_frac'."""
        return self._lat_mm_frac

    @lat_mm_frac.setter
    def lat_mm_frac(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'lat_mm_frac' field must be a sub message of type 'Float32'"
        self._lat_mm_frac = value

    @property
    def angle(self):
        """Message field 'angle'."""
        return self._angle

    @angle.setter
    def angle(self, value):
        if __debug__:
            from std_msgs.msg import Int16
            assert \
                isinstance(value, Int16), \
                "The 'angle' field must be a sub message of type 'Int16'"
        self._angle = value
