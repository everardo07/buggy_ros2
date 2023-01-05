# generated from rosidl_generator_py/resource/_idl.py.em
# with input from buggy_msgs:msg/VehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

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
                'buggy_msgs.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

            from buggy_msgs.msg import SteeringWheelState
            if SteeringWheelState.__class__._TYPE_SUPPORT is None:
                SteeringWheelState.__class__.__import_type_support__()

            from buggy_msgs.msg import WheelsState
            if WheelsState.__class__._TYPE_SUPPORT is None:
                WheelsState.__class__.__import_type_support__()

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


class VehicleState(metaclass=Metaclass_VehicleState):
    """Message class 'VehicleState'."""

    __slots__ = [
        '_wheels',
        '_steering_wheel',
        '_acceleration',
    ]

    _fields_and_field_types = {
        'wheels': 'buggy_msgs/WheelsState',
        'steering_wheel': 'buggy_msgs/SteeringWheelState',
        'acceleration': 'std_msgs/Float64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['buggy_msgs', 'msg'], 'WheelsState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['buggy_msgs', 'msg'], 'SteeringWheelState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Float64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from buggy_msgs.msg import WheelsState
        self.wheels = kwargs.get('wheels', WheelsState())
        from buggy_msgs.msg import SteeringWheelState
        self.steering_wheel = kwargs.get('steering_wheel', SteeringWheelState())
        from std_msgs.msg import Float64
        self.acceleration = kwargs.get('acceleration', Float64())

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
        if self.wheels != other.wheels:
            return False
        if self.steering_wheel != other.steering_wheel:
            return False
        if self.acceleration != other.acceleration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def wheels(self):
        """Message field 'wheels'."""
        return self._wheels

    @wheels.setter
    def wheels(self, value):
        if __debug__:
            from buggy_msgs.msg import WheelsState
            assert \
                isinstance(value, WheelsState), \
                "The 'wheels' field must be a sub message of type 'WheelsState'"
        self._wheels = value

    @property
    def steering_wheel(self):
        """Message field 'steering_wheel'."""
        return self._steering_wheel

    @steering_wheel.setter
    def steering_wheel(self, value):
        if __debug__:
            from buggy_msgs.msg import SteeringWheelState
            assert \
                isinstance(value, SteeringWheelState), \
                "The 'steering_wheel' field must be a sub message of type 'SteeringWheelState'"
        self._steering_wheel = value

    @property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            from std_msgs.msg import Float64
            assert \
                isinstance(value, Float64), \
                "The 'acceleration' field must be a sub message of type 'Float64'"
        self._acceleration = value
