# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/PlatoonState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlatoonState(type):
    """Metaclass of message 'PlatoonState'."""

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
                'buggy_msgs.msg.PlatoonState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__platoon_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__platoon_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__platoon_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__platoon_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__platoon_state

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

            from std_msgs.msg import UInt16
            if UInt16.__class__._TYPE_SUPPORT is None:
                UInt16.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlatoonState(metaclass=Metaclass_PlatoonState):
    """Message class 'PlatoonState'."""

    __slots__ = [
        '_id',
        '_counter',
        '_platoon_acc_x',
        '_platoon_mapmatching_isvalid',
        '_platoon_mapmatching_roadindex',
        '_platoon_mapmatching_s',
        '_platoon_velocity',
    ]

    _fields_and_field_types = {
        'id': 'std_msgs/UInt16',
        'counter': 'std_msgs/UInt16',
        'platoon_acc_x': 'std_msgs/Float32',
        'platoon_mapmatching_isvalid': 'std_msgs/Float32',
        'platoon_mapmatching_roadindex': 'std_msgs/Float32',
        'platoon_mapmatching_s': 'std_msgs/Float32',
        'platoon_velocity': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
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
        from std_msgs.msg import UInt16
        self.id = kwargs.get('id', UInt16())
        from std_msgs.msg import UInt16
        self.counter = kwargs.get('counter', UInt16())
        from std_msgs.msg import Float32
        self.platoon_acc_x = kwargs.get('platoon_acc_x', Float32())
        from std_msgs.msg import Float32
        self.platoon_mapmatching_isvalid = kwargs.get('platoon_mapmatching_isvalid', Float32())
        from std_msgs.msg import Float32
        self.platoon_mapmatching_roadindex = kwargs.get('platoon_mapmatching_roadindex', Float32())
        from std_msgs.msg import Float32
        self.platoon_mapmatching_s = kwargs.get('platoon_mapmatching_s', Float32())
        from std_msgs.msg import Float32
        self.platoon_velocity = kwargs.get('platoon_velocity', Float32())

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
        if self.id != other.id:
            return False
        if self.counter != other.counter:
            return False
        if self.platoon_acc_x != other.platoon_acc_x:
            return False
        if self.platoon_mapmatching_isvalid != other.platoon_mapmatching_isvalid:
            return False
        if self.platoon_mapmatching_roadindex != other.platoon_mapmatching_roadindex:
            return False
        if self.platoon_mapmatching_s != other.platoon_mapmatching_s:
            return False
        if self.platoon_velocity != other.platoon_velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'id' field must be a sub message of type 'UInt16'"
        self._id = value

    @property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'counter' field must be a sub message of type 'UInt16'"
        self._counter = value

    @property
    def platoon_acc_x(self):
        """Message field 'platoon_acc_x'."""
        return self._platoon_acc_x

    @platoon_acc_x.setter
    def platoon_acc_x(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'platoon_acc_x' field must be a sub message of type 'Float32'"
        self._platoon_acc_x = value

    @property
    def platoon_mapmatching_isvalid(self):
        """Message field 'platoon_mapmatching_isvalid'."""
        return self._platoon_mapmatching_isvalid

    @platoon_mapmatching_isvalid.setter
    def platoon_mapmatching_isvalid(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'platoon_mapmatching_isvalid' field must be a sub message of type 'Float32'"
        self._platoon_mapmatching_isvalid = value

    @property
    def platoon_mapmatching_roadindex(self):
        """Message field 'platoon_mapmatching_roadindex'."""
        return self._platoon_mapmatching_roadindex

    @platoon_mapmatching_roadindex.setter
    def platoon_mapmatching_roadindex(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'platoon_mapmatching_roadindex' field must be a sub message of type 'Float32'"
        self._platoon_mapmatching_roadindex = value

    @property
    def platoon_mapmatching_s(self):
        """Message field 'platoon_mapmatching_s'."""
        return self._platoon_mapmatching_s

    @platoon_mapmatching_s.setter
    def platoon_mapmatching_s(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'platoon_mapmatching_s' field must be a sub message of type 'Float32'"
        self._platoon_mapmatching_s = value

    @property
    def platoon_velocity(self):
        """Message field 'platoon_velocity'."""
        return self._platoon_velocity

    @platoon_velocity.setter
    def platoon_velocity(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'platoon_velocity' field must be a sub message of type 'Float32'"
        self._platoon_velocity = value
