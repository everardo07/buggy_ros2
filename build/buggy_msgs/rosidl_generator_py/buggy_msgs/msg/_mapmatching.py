# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/Mapmatching.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mapmatching(type):
    """Metaclass of message 'Mapmatching'."""

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
                'buggy_msgs.msg.Mapmatching')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mapmatching
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mapmatching
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mapmatching
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mapmatching
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mapmatching

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

            from std_msgs.msg import UInt16
            if UInt16.__class__._TYPE_SUPPORT is None:
                UInt16.__class__.__import_type_support__()

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


class Mapmatching(metaclass=Metaclass_Mapmatching):
    """Message class 'Mapmatching'."""

    __slots__ = [
        '_id',
        '_counter',
        '_is_lead_vehicle',
        '_mapmatching_checksum',
        '_mapmatching_is_valid',
        '_mapmatching_roadindex',
        '_platoon_mapmatching_s',
    ]

    _fields_and_field_types = {
        'id': 'std_msgs/UInt16',
        'counter': 'std_msgs/UInt16',
        'is_lead_vehicle': 'std_msgs/UInt8',
        'mapmatching_checksum': 'std_msgs/Float32',
        'mapmatching_is_valid': 'std_msgs/Float32',
        'mapmatching_roadindex': 'std_msgs/Float32',
        'platoon_mapmatching_s': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt8'),  # noqa: E501
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
        from std_msgs.msg import UInt8
        self.is_lead_vehicle = kwargs.get('is_lead_vehicle', UInt8())
        from std_msgs.msg import Float32
        self.mapmatching_checksum = kwargs.get('mapmatching_checksum', Float32())
        from std_msgs.msg import Float32
        self.mapmatching_is_valid = kwargs.get('mapmatching_is_valid', Float32())
        from std_msgs.msg import Float32
        self.mapmatching_roadindex = kwargs.get('mapmatching_roadindex', Float32())
        from std_msgs.msg import Float32
        self.platoon_mapmatching_s = kwargs.get('platoon_mapmatching_s', Float32())

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
        if self.is_lead_vehicle != other.is_lead_vehicle:
            return False
        if self.mapmatching_checksum != other.mapmatching_checksum:
            return False
        if self.mapmatching_is_valid != other.mapmatching_is_valid:
            return False
        if self.mapmatching_roadindex != other.mapmatching_roadindex:
            return False
        if self.platoon_mapmatching_s != other.platoon_mapmatching_s:
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
    def is_lead_vehicle(self):
        """Message field 'is_lead_vehicle'."""
        return self._is_lead_vehicle

    @is_lead_vehicle.setter
    def is_lead_vehicle(self, value):
        if __debug__:
            from std_msgs.msg import UInt8
            assert \
                isinstance(value, UInt8), \
                "The 'is_lead_vehicle' field must be a sub message of type 'UInt8'"
        self._is_lead_vehicle = value

    @property
    def mapmatching_checksum(self):
        """Message field 'mapmatching_checksum'."""
        return self._mapmatching_checksum

    @mapmatching_checksum.setter
    def mapmatching_checksum(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'mapmatching_checksum' field must be a sub message of type 'Float32'"
        self._mapmatching_checksum = value

    @property
    def mapmatching_is_valid(self):
        """Message field 'mapmatching_is_valid'."""
        return self._mapmatching_is_valid

    @mapmatching_is_valid.setter
    def mapmatching_is_valid(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'mapmatching_is_valid' field must be a sub message of type 'Float32'"
        self._mapmatching_is_valid = value

    @property
    def mapmatching_roadindex(self):
        """Message field 'mapmatching_roadindex'."""
        return self._mapmatching_roadindex

    @mapmatching_roadindex.setter
    def mapmatching_roadindex(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'mapmatching_roadindex' field must be a sub message of type 'Float32'"
        self._mapmatching_roadindex = value

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
