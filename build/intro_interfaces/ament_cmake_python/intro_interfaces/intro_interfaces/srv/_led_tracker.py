# generated from rosidl_generator_py/resource/_idl.py.em
# with input from intro_interfaces:srv/LEDTracker.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LEDTracker_Request(type):
    """Metaclass of message 'LEDTracker_Request'."""

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
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.LEDTracker_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_tracker__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_tracker__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_tracker__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_tracker__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_tracker__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LEDTracker_Request(metaclass=Metaclass_LEDTracker_Request):
    """Message class 'LEDTracker_Request'."""

    __slots__ = [
        '_num_of_sys_blinks',
        '_led_state',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num_of_sys_blinks': 'int64',
        'led_state': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_of_sys_blinks = kwargs.get('num_of_sys_blinks', int())
        self.led_state = kwargs.get('led_state', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num_of_sys_blinks != other.num_of_sys_blinks:
            return False
        if self.led_state != other.led_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_of_sys_blinks(self):
        """Message field 'num_of_sys_blinks'."""
        return self._num_of_sys_blinks

    @num_of_sys_blinks.setter
    def num_of_sys_blinks(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_of_sys_blinks' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_of_sys_blinks' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_of_sys_blinks = value

    @builtins.property
    def led_state(self):
        """Message field 'led_state'."""
        return self._led_state

    @led_state.setter
    def led_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'led_state' field must be of type 'bool'"
        self._led_state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LEDTracker_Response(type):
    """Metaclass of message 'LEDTracker_Response'."""

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
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.LEDTracker_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_tracker__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_tracker__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_tracker__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_tracker__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_tracker__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NUM_OF_CYCLES_COMPLETED__DEFAULT': 0,
            'IS_TOTAL_BLINKS_IN_SERIES_OF_TEN__DEFAULT': False,
        }

    @property
    def NUM_OF_CYCLES_COMPLETED__DEFAULT(cls):
        """Return default value for message field 'num_of_cycles_completed'."""
        return 0

    @property
    def IS_TOTAL_BLINKS_IN_SERIES_OF_TEN__DEFAULT(cls):
        """Return default value for message field 'is_total_blinks_in_series_of_ten'."""
        return False


class LEDTracker_Response(metaclass=Metaclass_LEDTracker_Response):
    """Message class 'LEDTracker_Response'."""

    __slots__ = [
        '_num_of_cycles_completed',
        '_is_total_blinks_in_series_of_ten',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'num_of_cycles_completed': 'int64',
        'is_total_blinks_in_series_of_ten': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.num_of_cycles_completed = kwargs.get(
            'num_of_cycles_completed', LEDTracker_Response.NUM_OF_CYCLES_COMPLETED__DEFAULT)
        self.is_total_blinks_in_series_of_ten = kwargs.get(
            'is_total_blinks_in_series_of_ten', LEDTracker_Response.IS_TOTAL_BLINKS_IN_SERIES_OF_TEN__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.num_of_cycles_completed != other.num_of_cycles_completed:
            return False
        if self.is_total_blinks_in_series_of_ten != other.is_total_blinks_in_series_of_ten:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def num_of_cycles_completed(self):
        """Message field 'num_of_cycles_completed'."""
        return self._num_of_cycles_completed

    @num_of_cycles_completed.setter
    def num_of_cycles_completed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_of_cycles_completed' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'num_of_cycles_completed' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._num_of_cycles_completed = value

    @builtins.property
    def is_total_blinks_in_series_of_ten(self):
        """Message field 'is_total_blinks_in_series_of_ten'."""
        return self._is_total_blinks_in_series_of_ten

    @is_total_blinks_in_series_of_ten.setter
    def is_total_blinks_in_series_of_ten(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_total_blinks_in_series_of_ten' field must be of type 'bool'"
        self._is_total_blinks_in_series_of_ten = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LEDTracker_Event(type):
    """Metaclass of message 'LEDTracker_Event'."""

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
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.LEDTracker_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__led_tracker__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__led_tracker__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__led_tracker__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__led_tracker__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__led_tracker__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LEDTracker_Event(metaclass=Metaclass_LEDTracker_Event):
    """Message class 'LEDTracker_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<intro_interfaces/LEDTracker_Request, 1>',
        'response': 'sequence<intro_interfaces/LEDTracker_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['intro_interfaces', 'srv'], 'LEDTracker_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['intro_interfaces', 'srv'], 'LEDTracker_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from intro_interfaces.srv import LEDTracker_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, LEDTracker_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'LEDTracker_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from intro_interfaces.srv import LEDTracker_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, LEDTracker_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'LEDTracker_Response'"
        self._response = value


class Metaclass_LEDTracker(type):
    """Metaclass of service 'LEDTracker'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('intro_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'intro_interfaces.srv.LEDTracker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__led_tracker

            from intro_interfaces.srv import _led_tracker
            if _led_tracker.Metaclass_LEDTracker_Request._TYPE_SUPPORT is None:
                _led_tracker.Metaclass_LEDTracker_Request.__import_type_support__()
            if _led_tracker.Metaclass_LEDTracker_Response._TYPE_SUPPORT is None:
                _led_tracker.Metaclass_LEDTracker_Response.__import_type_support__()
            if _led_tracker.Metaclass_LEDTracker_Event._TYPE_SUPPORT is None:
                _led_tracker.Metaclass_LEDTracker_Event.__import_type_support__()


class LEDTracker(metaclass=Metaclass_LEDTracker):
    from intro_interfaces.srv._led_tracker import LEDTracker_Request as Request
    from intro_interfaces.srv._led_tracker import LEDTracker_Response as Response
    from intro_interfaces.srv._led_tracker import LEDTracker_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
