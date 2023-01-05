# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/RCCtrlState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RCCtrlState(type):
    """Metaclass of message 'RCCtrlState'."""

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
                'buggy_msgs.msg.RCCtrlState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rc_ctrl_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rc_ctrl_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rc_ctrl_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rc_ctrl_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rc_ctrl_state

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

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


class RCCtrlState(metaclass=Metaclass_RCCtrlState):
    """Message class 'RCCtrlState'."""

    __slots__ = [
        '_joyctrl_enabled',
        '_ro2car_enabled',
        '_control_disabled',
        '_rc1_value',
        '_rc2_value',
        '_rc3_value',
    ]

    _fields_and_field_types = {
        'joyctrl_enabled': 'std_msgs/UInt8',
        'ro2car_enabled': 'std_msgs/UInt8',
        'control_disabled': 'std_msgs/UInt8',
        'rc1_value': 'std_msgs/Float32',
        'rc2_value': 'std_msgs/Float32',
        'rc3_value': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import UInt8
        self.joyctrl_enabled = kwargs.get('joyctrl_enabled', UInt8())
        from std_msgs.msg import UInt8
        self.ro2car_enabled = kwargs.get('ro2car_enabled', UInt8())
        from std_msgs.msg import UInt8
        self.control_disabled = kwargs.get('control_disabled', UInt8())
        from std_msgs.msg import Float32
        self.rc1_value = kwargs.get('rc1_value', Float32())
        from std_msgs.msg import Float32
        self.rc2_value = kwargs.get('rc2_value', Float32())
        from std_msgs.msg import Float32
        self.rc3_value = kwargs.get('rc3_value', Float32())

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
        if self.joyctrl_enabled != other.joyctrl_enabled:
            return False
        if self.ro2car_enabled != other.ro2car_enabled:
            return False
        if self.control_disabled != other.control_disabled:
            return False
        if self.rc1_value != other.rc1_value:
            return False
        if self.rc2_value != other.rc2_value:
            return False
        if self.rc3_value != other.rc3_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def joyctrl_enabled(self):
        """Message field 'joyctrl_enabled'."""
        return self._joyctrl_enabled

    @joyctrl_enabled.setter
    def joyctrl_enabled(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'joyctrl_enabled' field must be a sub message of type 'UInt8'"
        self._joyctrl_enabled = value

    @property
    def ro2car_enabled(self):
        """Message field 'ro2car_enabled'."""
        return self._ro2car_enabled

    @ro2car_enabled.setter
    def ro2car_enabled(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'ro2car_enabled' field must be a sub message of type 'UInt8'"
        self._ro2car_enabled = value

    @property
    def control_disabled(self):
        """Message field 'control_disabled'."""
        return self._control_disabled

    @control_disabled.setter
    def control_disabled(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'control_disabled' field must be a sub message of type 'UInt8'"
        self._control_disabled = value

    @property
    def rc1_value(self):
        """Message field 'rc1_value'."""
        return self._rc1_value

    @rc1_value.setter
    def rc1_value(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'rc1_value' field must be a sub message of type 'Float32'"
        self._rc1_value = value

    @property
    def rc2_value(self):
        """Message field 'rc2_value'."""
        return self._rc2_value

    @rc2_value.setter
    def rc2_value(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'rc2_value' field must be a sub message of type 'Float32'"
        self._rc2_value = value

    @property
    def rc3_value(self):
        """Message field 'rc3_value'."""
        return self._rc3_value

    @rc3_value.setter
    def rc3_value(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'rc3_value' field must be a sub message of type 'Float32'"
        self._rc3_value = value
