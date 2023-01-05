# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vox_nav_msgs:msg/Object.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Object(type):
    """Metaclass of message 'Object'."""

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
            module = import_type_support('vox_nav_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vox_nav_msgs.msg.Object')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__object
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__object
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__object
            cls._TYPE_SUPPORT = module.type_support_msg__msg__object
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__object

            from geometry_msgs.msg import PointStamped
            if PointStamped.__class__._TYPE_SUPPORT is None:
                PointStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Object(metaclass=Metaclass_Object):
    """Message class 'Object'."""

    __slots__ = [
        '_id',
        '_velo_pose',
        '_world_pose',
        '_cam_pose',
        '_heading',
        '_velocity',
        '_width',
        '_length',
        '_height',
        '_orientation',
        '_semantic_confidence',
        '_semantic_name',
        '_semantic_id',
        '_r',
        '_g',
        '_b',
        '_a',
        '_is_new_track',
        '_is_dynamic',
    ]

    _fields_and_field_types = {
        'id': 'int32',
        'velo_pose': 'geometry_msgs/PointStamped',
        'world_pose': 'geometry_msgs/PointStamped',
        'cam_pose': 'geometry_msgs/PointStamped',
        'heading': 'float',
        'velocity': 'float',
        'width': 'float',
        'length': 'float',
        'height': 'float',
        'orientation': 'float',
        'semantic_confidence': 'float',
        'semantic_name': 'string',
        'semantic_id': 'uint32',
        'r': 'uint32',
        'g': 'uint32',
        'b': 'uint32',
        'a': 'float',
        'is_new_track': 'boolean',
        'is_dynamic': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PointStamped'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        from geometry_msgs.msg import PointStamped
        self.velo_pose = kwargs.get('velo_pose', PointStamped())
        from geometry_msgs.msg import PointStamped
        self.world_pose = kwargs.get('world_pose', PointStamped())
        from geometry_msgs.msg import PointStamped
        self.cam_pose = kwargs.get('cam_pose', PointStamped())
        self.heading = kwargs.get('heading', float())
        self.velocity = kwargs.get('velocity', float())
        self.width = kwargs.get('width', float())
        self.length = kwargs.get('length', float())
        self.height = kwargs.get('height', float())
        self.orientation = kwargs.get('orientation', float())
        self.semantic_confidence = kwargs.get('semantic_confidence', float())
        self.semantic_name = kwargs.get('semantic_name', str())
        self.semantic_id = kwargs.get('semantic_id', int())
        self.r = kwargs.get('r', int())
        self.g = kwargs.get('g', int())
        self.b = kwargs.get('b', int())
        self.a = kwargs.get('a', float())
        self.is_new_track = kwargs.get('is_new_track', bool())
        self.is_dynamic = kwargs.get('is_dynamic', bool())

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
        if self.velo_pose != other.velo_pose:
            return False
        if self.world_pose != other.world_pose:
            return False
        if self.cam_pose != other.cam_pose:
            return False
        if self.heading != other.heading:
            return False
        if self.velocity != other.velocity:
            return False
        if self.width != other.width:
            return False
        if self.length != other.length:
            return False
        if self.height != other.height:
            return False
        if self.orientation != other.orientation:
            return False
        if self.semantic_confidence != other.semantic_confidence:
            return False
        if self.semantic_name != other.semantic_name:
            return False
        if self.semantic_id != other.semantic_id:
            return False
        if self.r != other.r:
            return False
        if self.g != other.g:
            return False
        if self.b != other.b:
            return False
        if self.a != other.a:
            return False
        if self.is_new_track != other.is_new_track:
            return False
        if self.is_dynamic != other.is_dynamic:
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
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'id' field must be an integer in [-2147483648, 2147483647]"
        self._id = value

    @property
    def velo_pose(self):
        """Message field 'velo_pose'."""
        return self._velo_pose

    @velo_pose.setter
    def velo_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            assert \
                isinstance(value, PointStamped), \
                "The 'velo_pose' field must be a sub message of type 'PointStamped'"
        self._velo_pose = value

    @property
    def world_pose(self):
        """Message field 'world_pose'."""
        return self._world_pose

    @world_pose.setter
    def world_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            assert \
                isinstance(value, PointStamped), \
                "The 'world_pose' field must be a sub message of type 'PointStamped'"
        self._world_pose = value

    @property
    def cam_pose(self):
        """Message field 'cam_pose'."""
        return self._cam_pose

    @cam_pose.setter
    def cam_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PointStamped
            assert \
                isinstance(value, PointStamped), \
                "The 'cam_pose' field must be a sub message of type 'PointStamped'"
        self._cam_pose = value

    @property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
        self._heading = value

    @property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
        self._velocity = value

    @property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'width' field must be of type 'float'"
        self._width = value

    @property
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'length' field must be of type 'float'"
        self._length = value

    @property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
        self._height = value

    @property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orientation' field must be of type 'float'"
        self._orientation = value

    @property
    def semantic_confidence(self):
        """Message field 'semantic_confidence'."""
        return self._semantic_confidence

    @semantic_confidence.setter
    def semantic_confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'semantic_confidence' field must be of type 'float'"
        self._semantic_confidence = value

    @property
    def semantic_name(self):
        """Message field 'semantic_name'."""
        return self._semantic_name

    @semantic_name.setter
    def semantic_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'semantic_name' field must be of type 'str'"
        self._semantic_name = value

    @property
    def semantic_id(self):
        """Message field 'semantic_id'."""
        return self._semantic_id

    @semantic_id.setter
    def semantic_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'semantic_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'semantic_id' field must be an unsigned integer in [0, 4294967295]"
        self._semantic_id = value

    @property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'r' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'r' field must be an unsigned integer in [0, 4294967295]"
        self._r = value

    @property
    def g(self):
        """Message field 'g'."""
        return self._g

    @g.setter
    def g(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'g' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'g' field must be an unsigned integer in [0, 4294967295]"
        self._g = value

    @property
    def b(self):
        """Message field 'b'."""
        return self._b

    @b.setter
    def b(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'b' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'b' field must be an unsigned integer in [0, 4294967295]"
        self._b = value

    @property
    def a(self):
        """Message field 'a'."""
        return self._a

    @a.setter
    def a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'a' field must be of type 'float'"
        self._a = value

    @property
    def is_new_track(self):
        """Message field 'is_new_track'."""
        return self._is_new_track

    @is_new_track.setter
    def is_new_track(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_new_track' field must be of type 'bool'"
        self._is_new_track = value

    @property
    def is_dynamic(self):
        """Message field 'is_dynamic'."""
        return self._is_dynamic

    @is_dynamic.setter
    def is_dynamic(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_dynamic' field must be of type 'bool'"
        self._is_dynamic = value
