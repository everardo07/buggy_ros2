# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/WheelsState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WheelsState(type):
    """Metaclass of message 'WheelsState'."""

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
                'buggy_msgs.msg.WheelsState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wheels_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wheels_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wheels_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wheels_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wheels_state

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


class WheelsState(metaclass=Metaclass_WheelsState):
    """Message class 'WheelsState'."""

    __slots__ = [
        '_rf_speed',
        '_lf_speed',
        '_rr_speed',
        '_lr_speed',
    ]

    _fields_and_field_types = {
        'rf_speed': 'std_msgs/Float64',
        'lf_speed': 'std_msgs/Float64',
        'rr_speed': 'std_msgs/Float64',
        'lr_speed': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Float64
        self.rf_speed = kwargs.get('rf_speed', Float64())
        from std_msgs.msg import Float64
        self.lf_speed = kwargs.get('lf_speed', Float64())
        from std_msgs.msg import Float64
        self.rr_speed = kwargs.get('rr_speed', Float64())
        from std_msgs.msg import Float64
        self.lr_speed = kwargs.get('lr_speed', Float64())

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
        if self.rf_speed != other.rf_speed:
            return False
        if self.lf_speed != other.lf_speed:
            return False
        if self.rr_speed != other.rr_speed:
            return False
        if self.lr_speed != other.lr_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def rf_speed(self):
        """Message field 'rf_speed'."""
        return self._rf_speed

    @rf_speed.setter
    def rf_speed(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'rf_speed' field must be a sub message of type 'Float64'"
        self._rf_speed = value

    @property
    def lf_speed(self):
        """Message field 'lf_speed'."""
        return self._lf_speed

    @lf_speed.setter
    def lf_speed(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'lf_speed' field must be a sub message of type 'Float64'"
        self._lf_speed = value

    @property
    def rr_speed(self):
        """Message field 'rr_speed'."""
        return self._rr_speed

    @rr_speed.setter
    def rr_speed(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'rr_speed' field must be a sub message of type 'Float64'"
        self._rr_speed = value

    @property
    def lr_speed(self):
        """Message field 'lr_speed'."""
        return self._lr_speed

    @lr_speed.setter
    def lr_speed(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'lr_speed' field must be a sub message of type 'Float64'"
        self._lr_speed = value
