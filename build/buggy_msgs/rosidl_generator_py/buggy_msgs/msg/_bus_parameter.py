# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/BUSParameter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BUSParameter(type):
    """Metaclass of message 'BUSParameter'."""

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
                'buggy_msgs.msg.BUSParameter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bus_parameter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bus_parameter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bus_parameter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bus_parameter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bus_parameter

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


class BUSParameter(metaclass=Metaclass_BUSParameter):
    """Message class 'BUSParameter'."""

    __slots__ = [
        '_params1_wheelcircumference_mm',
        '_params1_param_simplenav_reset',
        '_params1_param_obeyspeedlimit',
        '_params1_param_rv_a_demand',
        '_params1_v2vid',
        '_params1_param_track_a_max',
        '_params1_param_nav_triggermsg',
        '_params1_param_nav_gnssdelay',
        '_params1_param_stromgrenze',
        '_params1_param_drehzahlgrenze',
        '_params2_param_acc_inverseacc',
        '_params2_param_acc_timegap',
        '_params2_param_acc_gain',
        '_params2_param_acc_distance',
        '_params2_param_acc_activationdist',
        '_params2_param_menuparam4',
        '_params2_param_menuparam3',
        '_params2_param_menuparam2',
        '_params2_param_menuparam1',
    ]

    _fields_and_field_types = {
        'params1_wheelcircumference_mm': 'std_msgs/Float32',
        'params1_param_simplenav_reset': 'std_msgs/Float32',
        'params1_param_obeyspeedlimit': 'std_msgs/Float32',
        'params1_param_rv_a_demand': 'std_msgs/Float32',
        'params1_v2vid': 'std_msgs/Float32',
        'params1_param_track_a_max': 'std_msgs/Float32',
        'params1_param_nav_triggermsg': 'std_msgs/Float32',
        'params1_param_nav_gnssdelay': 'std_msgs/Float32',
        'params1_param_stromgrenze': 'std_msgs/Float32',
        'params1_param_drehzahlgrenze': 'std_msgs/Float32',
        'params2_param_acc_inverseacc': 'std_msgs/Float32',
        'params2_param_acc_timegap': 'std_msgs/Float32',
        'params2_param_acc_gain': 'std_msgs/Float32',
        'params2_param_acc_distance': 'std_msgs/Float32',
        'params2_param_acc_activationdist': 'std_msgs/Float32',
        'params2_param_menuparam4': 'std_msgs/Float32',
        'params2_param_menuparam3': 'std_msgs/Float32',
        'params2_param_menuparam2': 'std_msgs/Float32',
        'params2_param_menuparam1': 'std_msgs/Float32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float32'),  # noqa: E501
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
        self.params1_wheelcircumference_mm = kwargs.get('params1_wheelcircumference_mm', Float32())
        from std_msgs.msg import Float32
        self.params1_param_simplenav_reset = kwargs.get('params1_param_simplenav_reset', Float32())
        from std_msgs.msg import Float32
        self.params1_param_obeyspeedlimit = kwargs.get('params1_param_obeyspeedlimit', Float32())
        from std_msgs.msg import Float32
        self.params1_param_rv_a_demand = kwargs.get('params1_param_rv_a_demand', Float32())
        from std_msgs.msg import Float32
        self.params1_v2vid = kwargs.get('params1_v2vid', Float32())
        from std_msgs.msg import Float32
        self.params1_param_track_a_max = kwargs.get('params1_param_track_a_max', Float32())
        from std_msgs.msg import Float32
        self.params1_param_nav_triggermsg = kwargs.get('params1_param_nav_triggermsg', Float32())
        from std_msgs.msg import Float32
        self.params1_param_nav_gnssdelay = kwargs.get('params1_param_nav_gnssdelay', Float32())
        from std_msgs.msg import Float32
        self.params1_param_stromgrenze = kwargs.get('params1_param_stromgrenze', Float32())
        from std_msgs.msg import Float32
        self.params1_param_drehzahlgrenze = kwargs.get('params1_param_drehzahlgrenze', Float32())
        from std_msgs.msg import Float32
        self.params2_param_acc_inverseacc = kwargs.get('params2_param_acc_inverseacc', Float32())
        from std_msgs.msg import Float32
        self.params2_param_acc_timegap = kwargs.get('params2_param_acc_timegap', Float32())
        from std_msgs.msg import Float32
        self.params2_param_acc_gain = kwargs.get('params2_param_acc_gain', Float32())
        from std_msgs.msg import Float32
        self.params2_param_acc_distance = kwargs.get('params2_param_acc_distance', Float32())
        from std_msgs.msg import Float32
        self.params2_param_acc_activationdist = kwargs.get('params2_param_acc_activationdist', Float32())
        from std_msgs.msg import Float32
        self.params2_param_menuparam4 = kwargs.get('params2_param_menuparam4', Float32())
        from std_msgs.msg import Float32
        self.params2_param_menuparam3 = kwargs.get('params2_param_menuparam3', Float32())
        from std_msgs.msg import Float32
        self.params2_param_menuparam2 = kwargs.get('params2_param_menuparam2', Float32())
        from std_msgs.msg import Float32
        self.params2_param_menuparam1 = kwargs.get('params2_param_menuparam1', Float32())

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
        if self.params1_wheelcircumference_mm != other.params1_wheelcircumference_mm:
            return False
        if self.params1_param_simplenav_reset != other.params1_param_simplenav_reset:
            return False
        if self.params1_param_obeyspeedlimit != other.params1_param_obeyspeedlimit:
            return False
        if self.params1_param_rv_a_demand != other.params1_param_rv_a_demand:
            return False
        if self.params1_v2vid != other.params1_v2vid:
            return False
        if self.params1_param_track_a_max != other.params1_param_track_a_max:
            return False
        if self.params1_param_nav_triggermsg != other.params1_param_nav_triggermsg:
            return False
        if self.params1_param_nav_gnssdelay != other.params1_param_nav_gnssdelay:
            return False
        if self.params1_param_stromgrenze != other.params1_param_stromgrenze:
            return False
        if self.params1_param_drehzahlgrenze != other.params1_param_drehzahlgrenze:
            return False
        if self.params2_param_acc_inverseacc != other.params2_param_acc_inverseacc:
            return False
        if self.params2_param_acc_timegap != other.params2_param_acc_timegap:
            return False
        if self.params2_param_acc_gain != other.params2_param_acc_gain:
            return False
        if self.params2_param_acc_distance != other.params2_param_acc_distance:
            return False
        if self.params2_param_acc_activationdist != other.params2_param_acc_activationdist:
            return False
        if self.params2_param_menuparam4 != other.params2_param_menuparam4:
            return False
        if self.params2_param_menuparam3 != other.params2_param_menuparam3:
            return False
        if self.params2_param_menuparam2 != other.params2_param_menuparam2:
            return False
        if self.params2_param_menuparam1 != other.params2_param_menuparam1:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def params1_wheelcircumference_mm(self):
        """Message field 'params1_wheelcircumference_mm'."""
        return self._params1_wheelcircumference_mm

    @params1_wheelcircumference_mm.setter
    def params1_wheelcircumference_mm(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_wheelcircumference_mm' field must be a sub message of type 'Float32'"
        self._params1_wheelcircumference_mm = value

    @property
    def params1_param_simplenav_reset(self):
        """Message field 'params1_param_simplenav_reset'."""
        return self._params1_param_simplenav_reset

    @params1_param_simplenav_reset.setter
    def params1_param_simplenav_reset(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_simplenav_reset' field must be a sub message of type 'Float32'"
        self._params1_param_simplenav_reset = value

    @property
    def params1_param_obeyspeedlimit(self):
        """Message field 'params1_param_obeyspeedlimit'."""
        return self._params1_param_obeyspeedlimit

    @params1_param_obeyspeedlimit.setter
    def params1_param_obeyspeedlimit(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_obeyspeedlimit' field must be a sub message of type 'Float32'"
        self._params1_param_obeyspeedlimit = value

    @property
    def params1_param_rv_a_demand(self):
        """Message field 'params1_param_rv_a_demand'."""
        return self._params1_param_rv_a_demand

    @params1_param_rv_a_demand.setter
    def params1_param_rv_a_demand(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_rv_a_demand' field must be a sub message of type 'Float32'"
        self._params1_param_rv_a_demand = value

    @property
    def params1_v2vid(self):
        """Message field 'params1_v2vid'."""
        return self._params1_v2vid

    @params1_v2vid.setter
    def params1_v2vid(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_v2vid' field must be a sub message of type 'Float32'"
        self._params1_v2vid = value

    @property
    def params1_param_track_a_max(self):
        """Message field 'params1_param_track_a_max'."""
        return self._params1_param_track_a_max

    @params1_param_track_a_max.setter
    def params1_param_track_a_max(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_track_a_max' field must be a sub message of type 'Float32'"
        self._params1_param_track_a_max = value

    @property
    def params1_param_nav_triggermsg(self):
        """Message field 'params1_param_nav_triggermsg'."""
        return self._params1_param_nav_triggermsg

    @params1_param_nav_triggermsg.setter
    def params1_param_nav_triggermsg(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_nav_triggermsg' field must be a sub message of type 'Float32'"
        self._params1_param_nav_triggermsg = value

    @property
    def params1_param_nav_gnssdelay(self):
        """Message field 'params1_param_nav_gnssdelay'."""
        return self._params1_param_nav_gnssdelay

    @params1_param_nav_gnssdelay.setter
    def params1_param_nav_gnssdelay(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_nav_gnssdelay' field must be a sub message of type 'Float32'"
        self._params1_param_nav_gnssdelay = value

    @property
    def params1_param_stromgrenze(self):
        """Message field 'params1_param_stromgrenze'."""
        return self._params1_param_stromgrenze

    @params1_param_stromgrenze.setter
    def params1_param_stromgrenze(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_stromgrenze' field must be a sub message of type 'Float32'"
        self._params1_param_stromgrenze = value

    @property
    def params1_param_drehzahlgrenze(self):
        """Message field 'params1_param_drehzahlgrenze'."""
        return self._params1_param_drehzahlgrenze

    @params1_param_drehzahlgrenze.setter
    def params1_param_drehzahlgrenze(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params1_param_drehzahlgrenze' field must be a sub message of type 'Float32'"
        self._params1_param_drehzahlgrenze = value

    @property
    def params2_param_acc_inverseacc(self):
        """Message field 'params2_param_acc_inverseacc'."""
        return self._params2_param_acc_inverseacc

    @params2_param_acc_inverseacc.setter
    def params2_param_acc_inverseacc(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_acc_inverseacc' field must be a sub message of type 'Float32'"
        self._params2_param_acc_inverseacc = value

    @property
    def params2_param_acc_timegap(self):
        """Message field 'params2_param_acc_timegap'."""
        return self._params2_param_acc_timegap

    @params2_param_acc_timegap.setter
    def params2_param_acc_timegap(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_acc_timegap' field must be a sub message of type 'Float32'"
        self._params2_param_acc_timegap = value

    @property
    def params2_param_acc_gain(self):
        """Message field 'params2_param_acc_gain'."""
        return self._params2_param_acc_gain

    @params2_param_acc_gain.setter
    def params2_param_acc_gain(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_acc_gain' field must be a sub message of type 'Float32'"
        self._params2_param_acc_gain = value

    @property
    def params2_param_acc_distance(self):
        """Message field 'params2_param_acc_distance'."""
        return self._params2_param_acc_distance

    @params2_param_acc_distance.setter
    def params2_param_acc_distance(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_acc_distance' field must be a sub message of type 'Float32'"
        self._params2_param_acc_distance = value

    @property
    def params2_param_acc_activationdist(self):
        """Message field 'params2_param_acc_activationdist'."""
        return self._params2_param_acc_activationdist

    @params2_param_acc_activationdist.setter
    def params2_param_acc_activationdist(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_acc_activationdist' field must be a sub message of type 'Float32'"
        self._params2_param_acc_activationdist = value

    @property
    def params2_param_menuparam4(self):
        """Message field 'params2_param_menuparam4'."""
        return self._params2_param_menuparam4

    @params2_param_menuparam4.setter
    def params2_param_menuparam4(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_menuparam4' field must be a sub message of type 'Float32'"
        self._params2_param_menuparam4 = value

    @property
    def params2_param_menuparam3(self):
        """Message field 'params2_param_menuparam3'."""
        return self._params2_param_menuparam3

    @params2_param_menuparam3.setter
    def params2_param_menuparam3(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_menuparam3' field must be a sub message of type 'Float32'"
        self._params2_param_menuparam3 = value

    @property
    def params2_param_menuparam2(self):
        """Message field 'params2_param_menuparam2'."""
        return self._params2_param_menuparam2

    @params2_param_menuparam2.setter
    def params2_param_menuparam2(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_menuparam2' field must be a sub message of type 'Float32'"
        self._params2_param_menuparam2 = value

    @property
    def params2_param_menuparam1(self):
        """Message field 'params2_param_menuparam1'."""
        return self._params2_param_menuparam1

    @params2_param_menuparam1.setter
    def params2_param_menuparam1(self, value):
        if __debug__:
            from std_msgs.msg import Float32
            assert \
                isinstance(value, Float32), \
                "The 'params2_param_menuparam1' field must be a sub message of type 'Float32'"
        self._params2_param_menuparam1 = value
