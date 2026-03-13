# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_msgs:msg/BboxMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BboxMsg(type):
    """Metaclass of message 'BboxMsg'."""

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
            module = import_type_support('my_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_msgs.msg.BboxMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bbox_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bbox_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bbox_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bbox_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bbox_msg

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BboxMsg(metaclass=Metaclass_BboxMsg):
    """Message class 'BboxMsg'."""

    __slots__ = [
        '_index',
        '_cls',
        '_conf',
        '_minx',
        '_miny',
        '_maxx',
        '_maxy',
    ]

    _fields_and_field_types = {
        'index': 'int32',
        'cls': 'int32',
        'conf': 'float',
        'minx': 'int32',
        'miny': 'int32',
        'maxx': 'int32',
        'maxy': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.index = kwargs.get('index', int())
        self.cls = kwargs.get('cls', int())
        self.conf = kwargs.get('conf', float())
        self.minx = kwargs.get('minx', int())
        self.miny = kwargs.get('miny', int())
        self.maxx = kwargs.get('maxx', int())
        self.maxy = kwargs.get('maxy', int())

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
        if self.index != other.index:
            return False
        if self.cls != other.cls:
            return False
        if self.conf != other.conf:
            return False
        if self.minx != other.minx:
            return False
        if self.miny != other.miny:
            return False
        if self.maxx != other.maxx:
            return False
        if self.maxy != other.maxy:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def index(self):
        """Message field 'index'."""
        return self._index

    @index.setter
    def index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'index' field must be an integer in [-2147483648, 2147483647]"
        self._index = value

    @builtins.property
    def cls(self):
        """Message field 'cls'."""
        return self._cls

    @cls.setter
    def cls(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cls' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'cls' field must be an integer in [-2147483648, 2147483647]"
        self._cls = value

    @builtins.property
    def conf(self):
        """Message field 'conf'."""
        return self._conf

    @conf.setter
    def conf(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'conf' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'conf' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._conf = value

    @builtins.property
    def minx(self):
        """Message field 'minx'."""
        return self._minx

    @minx.setter
    def minx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'minx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'minx' field must be an integer in [-2147483648, 2147483647]"
        self._minx = value

    @builtins.property
    def miny(self):
        """Message field 'miny'."""
        return self._miny

    @miny.setter
    def miny(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'miny' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'miny' field must be an integer in [-2147483648, 2147483647]"
        self._miny = value

    @builtins.property
    def maxx(self):
        """Message field 'maxx'."""
        return self._maxx

    @maxx.setter
    def maxx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maxx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'maxx' field must be an integer in [-2147483648, 2147483647]"
        self._maxx = value

    @builtins.property
    def maxy(self):
        """Message field 'maxy'."""
        return self._maxy

    @maxy.setter
    def maxy(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maxy' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'maxy' field must be an integer in [-2147483648, 2147483647]"
        self._maxy = value
