# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/SteeringCMD.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SteeringCMD(type):
    """Metaclass of message 'SteeringCMD'."""

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
                'buggy_msgs.msg.SteeringCMD')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__steering_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__steering_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__steering_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__steering_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__steering_cmd

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


class SteeringCMD(metaclass=Metaclass_SteeringCMD):
    """Message class 'SteeringCMD'."""

    __slots__ = [
        '_steering_angle',
        '_steering_angle_velocity',
        '_steering_torque',
    ]

    _fields_and_field_types = {
        'steering_angle': 'std_msgs/Float64',
        'steering_angle_velocity': 'std_msgs/Float64',
        'steering_torque': 'std_msgs/Float64',
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
        self.steering_angle = kwargs.get('steering_angle', Float64())
        from std_msgs.msg import Float64
        self.steering_angle_velocity = kwargs.get('steering_angle_velocity', Float64())
        from std_msgs.msg import Float64
        self.steering_torque = kwargs.get('steering_torque', Float64())

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
        if self.steering_angle != other.steering_angle:
            return False
        if self.steering_angle_velocity != other.steering_angle_velocity:
            return False
        if self.steering_torque != other.steering_torque:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def steering_angle(self):
        """Message field 'steering_angle'."""
        return self._steering_angle

    @steering_angle.setter
    def steering_angle(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'steering_angle' field must be a sub message of type 'Float64'"
        self._steering_angle = value

    @property
    def steering_angle_velocity(self):
        """Message field 'steering_angle_velocity'."""
        return self._steering_angle_velocity

    @steering_angle_velocity.setter
    def steering_angle_velocity(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'steering_angle_velocity' field must be a sub message of type 'Float64'"
        self._steering_angle_velocity = value

    @property
    def steering_torque(self):
        """Message field 'steering_torque'."""
        return self._steering_torque

    @steering_torque.setter
    def steering_torque(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'steering_torque' field must be a sub message of type 'Float64'"
        self._steering_torque = value
