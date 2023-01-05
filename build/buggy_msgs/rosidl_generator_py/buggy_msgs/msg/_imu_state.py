# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/IMUState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IMUState(type):
    """Metaclass of message 'IMUState'."""

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
                'buggy_msgs.msg.IMUState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_state

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IMUState(metaclass=Metaclass_IMUState):
    """Message class 'IMUState'."""

    __slots__ = [
        '_imu_gz',
        '_imu_ax',
        '_imu_ay',
    ]

    _fields_and_field_types = {
        'imu_gz': 'std_msgs/Float64',
        'imu_ax': 'std_msgs/Float64',
        'imu_ay': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.imu_gz = kwargs.get('imu_gz', Float64())
        from std_msgs.msg import Float64
        self.imu_ax = kwargs.get('imu_ax', Float64())
        from std_msgs.msg import Float64
        self.imu_ay = kwargs.get('imu_ay', Float64())

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
        if self.imu_gz != other.imu_gz:
            return False
        if self.imu_ax != other.imu_ax:
            return False
        if self.imu_ay != other.imu_ay:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def imu_gz(self):
        """Message field 'imu_gz'."""
        return self._imu_gz

    @imu_gz.setter
    def imu_gz(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'imu_gz' field must be a sub message of type 'Float64'"
        self._imu_gz = value

    @property
    def imu_ax(self):
        """Message field 'imu_ax'."""
        return self._imu_ax

    @imu_ax.setter
    def imu_ax(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'imu_ax' field must be a sub message of type 'Float64'"
        self._imu_ax = value

    @property
    def imu_ay(self):
        """Message field 'imu_ay'."""
        return self._imu_ay

    @imu_ay.setter
    def imu_ay(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'imu_ay' field must be a sub message of type 'Float64'"
        self._imu_ay = value
