# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/GNSSState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GNSSState(type):
    """Metaclass of message 'GNSSState'."""

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
                'buggy_msgs.msg.GNSSState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gnss_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gnss_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gnss_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gnss_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gnss_state

            from std_msgs.msg import Float32
            if Float32.__class__._TYPE_SUPPORT is None:
                Float32.__class__.__import_type_support__()

            from std_msgs.msg import Float64
            if Float64.__class__._TYPE_SUPPORT is None:
                Float64.__class__.__import_type_support__()

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


class GNSSState(metaclass=Metaclass_GNSSState):
    """Message class 'GNSSState'."""

    __slots__ = [
        '_gnss_counter_falling',
        '_gnss_counter_rising',
        '_gnss_counter_bus',
        '_gnss_altitude',
        '_gnss_number_satellites',
        '_gnss_quality',
        '_gnss_hdop',
        '_gnss_mode',
        '_gnss_counter',
        '_gnss_pdop',
        '_gnss_vdop',
        '_gnss_counter_rmc1',
        '_gnss_lon_mm',
        '_gnss_lon_mm_frac',
        '_gnss_counter_rmc2',
        '_gnss_lat_mm',
        '_gnss_lat_mm_frac',
        '_gnss_angle',
        '_gnss_angle_valid',
        '_gnss_counter_rmc3',
        '_gnss_quality_rmc3',
        '_gnss_speed',
        '_gnss_time',
    ]

    _fields_and_field_types = {
        'gnss_counter_falling': 'std_msgs/UInt16',
        'gnss_counter_rising': 'std_msgs/UInt16',
        'gnss_counter_bus': 'std_msgs/UInt16',
        'gnss_altitude': 'std_msgs/Float32',
        'gnss_number_satellites': 'std_msgs/UInt16',
        'gnss_quality': 'std_msgs/UInt16',
        'gnss_hdop': 'std_msgs/Float32',
        'gnss_mode': 'std_msgs/UInt16',
        'gnss_counter': 'std_msgs/UInt16',
        'gnss_pdop': 'std_msgs/Float32',
        'gnss_vdop': 'std_msgs/Float32',
        'gnss_counter_rmc1': 'std_msgs/Float64',
        'gnss_lon_mm': 'std_msgs/Float64',
        'gnss_lon_mm_frac': 'std_msgs/Float64',
        'gnss_counter_rmc2': 'std_msgs/Float64',
        'gnss_lat_mm': 'std_msgs/Float64',
        'gnss_lat_mm_frac': 'std_msgs/Float64',
        'gnss_angle': 'std_msgs/Float64',
        'gnss_angle_valid': 'std_msgs/Float64',
        'gnss_counter_rmc3': 'std_msgs/Float64',
        'gnss_quality_rmc3': 'std_msgs/Float64',
        'gnss_speed': 'std_msgs/Float64',
        'gnss_time': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'UInt16'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import UInt16
        self.gnss_counter_falling = kwargs.get('gnss_counter_falling', UInt16())
        from std_msgs.msg import UInt16
        self.gnss_counter_rising = kwargs.get('gnss_counter_rising', UInt16())
        from std_msgs.msg import UInt16
        self.gnss_counter_bus = kwargs.get('gnss_counter_bus', UInt16())
        from std_msgs.msg import Float32
        self.gnss_altitude = kwargs.get('gnss_altitude', Float32())
        from std_msgs.msg import UInt16
        self.gnss_number_satellites = kwargs.get('gnss_number_satellites', UInt16())
        from std_msgs.msg import UInt16
        self.gnss_quality = kwargs.get('gnss_quality', UInt16())
        from std_msgs.msg import Float32
        self.gnss_hdop = kwargs.get('gnss_hdop', Float32())
        from std_msgs.msg import UInt16
        self.gnss_mode = kwargs.get('gnss_mode', UInt16())
        from std_msgs.msg import UInt16
        self.gnss_counter = kwargs.get('gnss_counter', UInt16())
        from std_msgs.msg import Float32
        self.gnss_pdop = kwargs.get('gnss_pdop', Float32())
        from std_msgs.msg import Float32
        self.gnss_vdop = kwargs.get('gnss_vdop', Float32())
        from std_msgs.msg import Float64
        self.gnss_counter_rmc1 = kwargs.get('gnss_counter_rmc1', Float64())
        from std_msgs.msg import Float64
        self.gnss_lon_mm = kwargs.get('gnss_lon_mm', Float64())
        from std_msgs.msg import Float64
        self.gnss_lon_mm_frac = kwargs.get('gnss_lon_mm_frac', Float64())
        from std_msgs.msg import Float64
        self.gnss_counter_rmc2 = kwargs.get('gnss_counter_rmc2', Float64())
        from std_msgs.msg import Float64
        self.gnss_lat_mm = kwargs.get('gnss_lat_mm', Float64())
        from std_msgs.msg import Float64
        self.gnss_lat_mm_frac = kwargs.get('gnss_lat_mm_frac', Float64())
        from std_msgs.msg import Float64
        self.gnss_angle = kwargs.get('gnss_angle', Float64())
        from std_msgs.msg import Float64
        self.gnss_angle_valid = kwargs.get('gnss_angle_valid', Float64())
        from std_msgs.msg import Float64
        self.gnss_counter_rmc3 = kwargs.get('gnss_counter_rmc3', Float64())
        from std_msgs.msg import Float64
        self.gnss_quality_rmc3 = kwargs.get('gnss_quality_rmc3', Float64())
        from std_msgs.msg import Float64
        self.gnss_speed = kwargs.get('gnss_speed', Float64())
        from std_msgs.msg import Float64
        self.gnss_time = kwargs.get('gnss_time', Float64())

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
        if self.gnss_counter_falling != other.gnss_counter_falling:
            return False
        if self.gnss_counter_rising != other.gnss_counter_rising:
            return False
        if self.gnss_counter_bus != other.gnss_counter_bus:
            return False
        if self.gnss_altitude != other.gnss_altitude:
            return False
        if self.gnss_number_satellites != other.gnss_number_satellites:
            return False
        if self.gnss_quality != other.gnss_quality:
            return False
        if self.gnss_hdop != other.gnss_hdop:
            return False
        if self.gnss_mode != other.gnss_mode:
            return False
        if self.gnss_counter != other.gnss_counter:
            return False
        if self.gnss_pdop != other.gnss_pdop:
            return False
        if self.gnss_vdop != other.gnss_vdop:
            return False
        if self.gnss_counter_rmc1 != other.gnss_counter_rmc1:
            return False
        if self.gnss_lon_mm != other.gnss_lon_mm:
            return False
        if self.gnss_lon_mm_frac != other.gnss_lon_mm_frac:
            return False
        if self.gnss_counter_rmc2 != other.gnss_counter_rmc2:
            return False
        if self.gnss_lat_mm != other.gnss_lat_mm:
            return False
        if self.gnss_lat_mm_frac != other.gnss_lat_mm_frac:
            return False
        if self.gnss_angle != other.gnss_angle:
            return False
        if self.gnss_angle_valid != other.gnss_angle_valid:
            return False
        if self.gnss_counter_rmc3 != other.gnss_counter_rmc3:
            return False
        if self.gnss_quality_rmc3 != other.gnss_quality_rmc3:
            return False
        if self.gnss_speed != other.gnss_speed:
            return False
        if self.gnss_time != other.gnss_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def gnss_counter_falling(self):
        """Message field 'gnss_counter_falling'."""
        return self._gnss_counter_falling

    @gnss_counter_falling.setter
    def gnss_counter_falling(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_counter_falling' field must be a sub message of type 'UInt16'"
        self._gnss_counter_falling = value

    @property
    def gnss_counter_rising(self):
        """Message field 'gnss_counter_rising'."""
        return self._gnss_counter_rising

    @gnss_counter_rising.setter
    def gnss_counter_rising(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_counter_rising' field must be a sub message of type 'UInt16'"
        self._gnss_counter_rising = value

    @property
    def gnss_counter_bus(self):
        """Message field 'gnss_counter_bus'."""
        return self._gnss_counter_bus

    @gnss_counter_bus.setter
    def gnss_counter_bus(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_counter_bus' field must be a sub message of type 'UInt16'"
        self._gnss_counter_bus = value

    @property
    def gnss_altitude(self):
        """Message field 'gnss_altitude'."""
        return self._gnss_altitude

    @gnss_altitude.setter
    def gnss_altitude(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'gnss_altitude' field must be a sub message of type 'Float32'"
        self._gnss_altitude = value

    @property
    def gnss_number_satellites(self):
        """Message field 'gnss_number_satellites'."""
        return self._gnss_number_satellites

    @gnss_number_satellites.setter
    def gnss_number_satellites(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_number_satellites' field must be a sub message of type 'UInt16'"
        self._gnss_number_satellites = value

    @property
    def gnss_quality(self):
        """Message field 'gnss_quality'."""
        return self._gnss_quality

    @gnss_quality.setter
    def gnss_quality(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_quality' field must be a sub message of type 'UInt16'"
        self._gnss_quality = value

    @property
    def gnss_hdop(self):
        """Message field 'gnss_hdop'."""
        return self._gnss_hdop

    @gnss_hdop.setter
    def gnss_hdop(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'gnss_hdop' field must be a sub message of type 'Float32'"
        self._gnss_hdop = value

    @property
    def gnss_mode(self):
        """Message field 'gnss_mode'."""
        return self._gnss_mode

    @gnss_mode.setter
    def gnss_mode(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_mode' field must be a sub message of type 'UInt16'"
        self._gnss_mode = value

    @property
    def gnss_counter(self):
        """Message field 'gnss_counter'."""
        return self._gnss_counter

    @gnss_counter.setter
    def gnss_counter(self, value):
        if __debug__:
            from std_msgs.msg import UInt16
            assert \
                isinstance(value, UInt16), \
                "The 'gnss_counter' field must be a sub message of type 'UInt16'"
        self._gnss_counter = value

    @property
    def gnss_pdop(self):
        """Message field 'gnss_pdop'."""
        return self._gnss_pdop

    @gnss_pdop.setter
    def gnss_pdop(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'gnss_pdop' field must be a sub message of type 'Float32'"
        self._gnss_pdop = value

    @property
    def gnss_vdop(self):
        """Message field 'gnss_vdop'."""
        return self._gnss_vdop

    @gnss_vdop.setter
    def gnss_vdop(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'gnss_vdop' field must be a sub message of type 'Float32'"
        self._gnss_vdop = value

    @property
    def gnss_counter_rmc1(self):
        """Message field 'gnss_counter_rmc1'."""
        return self._gnss_counter_rmc1

    @gnss_counter_rmc1.setter
    def gnss_counter_rmc1(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_counter_rmc1' field must be a sub message of type 'Float64'"
        self._gnss_counter_rmc1 = value

    @property
    def gnss_lon_mm(self):
        """Message field 'gnss_lon_mm'."""
        return self._gnss_lon_mm

    @gnss_lon_mm.setter
    def gnss_lon_mm(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_lon_mm' field must be a sub message of type 'Float64'"
        self._gnss_lon_mm = value

    @property
    def gnss_lon_mm_frac(self):
        """Message field 'gnss_lon_mm_frac'."""
        return self._gnss_lon_mm_frac

    @gnss_lon_mm_frac.setter
    def gnss_lon_mm_frac(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_lon_mm_frac' field must be a sub message of type 'Float64'"
        self._gnss_lon_mm_frac = value

    @property
    def gnss_counter_rmc2(self):
        """Message field 'gnss_counter_rmc2'."""
        return self._gnss_counter_rmc2

    @gnss_counter_rmc2.setter
    def gnss_counter_rmc2(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_counter_rmc2' field must be a sub message of type 'Float64'"
        self._gnss_counter_rmc2 = value

    @property
    def gnss_lat_mm(self):
        """Message field 'gnss_lat_mm'."""
        return self._gnss_lat_mm

    @gnss_lat_mm.setter
    def gnss_lat_mm(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_lat_mm' field must be a sub message of type 'Float64'"
        self._gnss_lat_mm = value

    @property
    def gnss_lat_mm_frac(self):
        """Message field 'gnss_lat_mm_frac'."""
        return self._gnss_lat_mm_frac

    @gnss_lat_mm_frac.setter
    def gnss_lat_mm_frac(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_lat_mm_frac' field must be a sub message of type 'Float64'"
        self._gnss_lat_mm_frac = value

    @property
    def gnss_angle(self):
        """Message field 'gnss_angle'."""
        return self._gnss_angle

    @gnss_angle.setter
    def gnss_angle(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_angle' field must be a sub message of type 'Float64'"
        self._gnss_angle = value

    @property
    def gnss_angle_valid(self):
        """Message field 'gnss_angle_valid'."""
        return self._gnss_angle_valid

    @gnss_angle_valid.setter
    def gnss_angle_valid(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_angle_valid' field must be a sub message of type 'Float64'"
        self._gnss_angle_valid = value

    @property
    def gnss_counter_rmc3(self):
        """Message field 'gnss_counter_rmc3'."""
        return self._gnss_counter_rmc3

    @gnss_counter_rmc3.setter
    def gnss_counter_rmc3(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_counter_rmc3' field must be a sub message of type 'Float64'"
        self._gnss_counter_rmc3 = value

    @property
    def gnss_quality_rmc3(self):
        """Message field 'gnss_quality_rmc3'."""
        return self._gnss_quality_rmc3

    @gnss_quality_rmc3.setter
    def gnss_quality_rmc3(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_quality_rmc3' field must be a sub message of type 'Float64'"
        self._gnss_quality_rmc3 = value

    @property
    def gnss_speed(self):
        """Message field 'gnss_speed'."""
        return self._gnss_speed

    @gnss_speed.setter
    def gnss_speed(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_speed' field must be a sub message of type 'Float64'"
        self._gnss_speed = value

    @property
    def gnss_time(self):
        """Message field 'gnss_time'."""
        return self._gnss_time

    @gnss_time.setter
    def gnss_time(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'gnss_time' field must be a sub message of type 'Float64'"
        self._gnss_time = value
