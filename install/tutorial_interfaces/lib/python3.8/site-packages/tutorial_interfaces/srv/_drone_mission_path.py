# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/DroneMissionPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'speed'
# Member 'altitude'
# Member 'latitude'
# Member 'longitude'
# Member 'yaw_delta'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DroneMissionPath_Request(type):
    """Metaclass of message 'DroneMissionPath_Request'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.DroneMissionPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__drone_mission_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__drone_mission_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__drone_mission_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__drone_mission_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__drone_mission_path__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DroneMissionPath_Request(metaclass=Metaclass_DroneMissionPath_Request):
    """Message class 'DroneMissionPath_Request'."""

    __slots__ = [
        '_speed',
        '_altitude',
        '_latitude',
        '_longitude',
        '_yaw_delta',
        '_point_count',
    ]

    _fields_and_field_types = {
        'speed': 'sequence<float>',
        'altitude': 'sequence<float>',
        'latitude': 'sequence<double>',
        'longitude': 'sequence<double>',
        'yaw_delta': 'sequence<float>',
        'point_count': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed = array.array('f', kwargs.get('speed', []))
        self.altitude = array.array('f', kwargs.get('altitude', []))
        self.latitude = array.array('d', kwargs.get('latitude', []))
        self.longitude = array.array('d', kwargs.get('longitude', []))
        self.yaw_delta = array.array('f', kwargs.get('yaw_delta', []))
        self.point_count = kwargs.get('point_count', str())

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
        if self.speed != other.speed:
            return False
        if self.altitude != other.altitude:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.yaw_delta != other.yaw_delta:
            return False
        if self.point_count != other.point_count:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'speed' array.array() must have the type code of 'f'"
            self._speed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'speed' field must be a set or sequence and each value of type 'float'"
        self._speed = array.array('f', value)

    @property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'altitude' array.array() must have the type code of 'f'"
            self._altitude = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'altitude' field must be a set or sequence and each value of type 'float'"
        self._altitude = array.array('f', value)

    @property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'latitude' array.array() must have the type code of 'd'"
            self._latitude = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'latitude' field must be a set or sequence and each value of type 'float'"
        self._latitude = array.array('d', value)

    @property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'longitude' array.array() must have the type code of 'd'"
            self._longitude = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'longitude' field must be a set or sequence and each value of type 'float'"
        self._longitude = array.array('d', value)

    @property
    def yaw_delta(self):
        """Message field 'yaw_delta'."""
        return self._yaw_delta

    @yaw_delta.setter
    def yaw_delta(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'yaw_delta' array.array() must have the type code of 'f'"
            self._yaw_delta = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'yaw_delta' field must be a set or sequence and each value of type 'float'"
        self._yaw_delta = array.array('f', value)

    @property
    def point_count(self):
        """Message field 'point_count'."""
        return self._point_count

    @point_count.setter
    def point_count(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'point_count' field must be of type 'str'"
        self._point_count = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_DroneMissionPath_Response(type):
    """Metaclass of message 'DroneMissionPath_Response'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.DroneMissionPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__drone_mission_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__drone_mission_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__drone_mission_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__drone_mission_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__drone_mission_path__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DroneMissionPath_Response(metaclass=Metaclass_DroneMissionPath_Response):
    """Message class 'DroneMissionPath_Response'."""

    __slots__ = [
        '_path_check',
    ]

    _fields_and_field_types = {
        'path_check': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.path_check = kwargs.get('path_check', bool())

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
        if self.path_check != other.path_check:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def path_check(self):
        """Message field 'path_check'."""
        return self._path_check

    @path_check.setter
    def path_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'path_check' field must be of type 'bool'"
        self._path_check = value


class Metaclass_DroneMissionPath(type):
    """Metaclass of service 'DroneMissionPath'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.DroneMissionPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__drone_mission_path

            from tutorial_interfaces.srv import _drone_mission_path
            if _drone_mission_path.Metaclass_DroneMissionPath_Request._TYPE_SUPPORT is None:
                _drone_mission_path.Metaclass_DroneMissionPath_Request.__import_type_support__()
            if _drone_mission_path.Metaclass_DroneMissionPath_Response._TYPE_SUPPORT is None:
                _drone_mission_path.Metaclass_DroneMissionPath_Response.__import_type_support__()


class DroneMissionPath(metaclass=Metaclass_DroneMissionPath):
    from tutorial_interfaces.srv._drone_mission_path import DroneMissionPath_Request as Request
    from tutorial_interfaces.srv._drone_mission_path import DroneMissionPath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
