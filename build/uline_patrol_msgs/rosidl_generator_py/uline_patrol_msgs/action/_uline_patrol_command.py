# generated from rosidl_generator_py/resource/_idl.py.em
# with input from uline_patrol_msgs:action/UlinePatrolCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UlinePatrolCommand_Goal(type):
    """Metaclass of message 'UlinePatrolCommand_Goal'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_Goal(metaclass=Metaclass_UlinePatrolCommand_Goal):
    """Message class 'UlinePatrolCommand_Goal'."""

    __slots__ = [
        '_command',
        '_initial_dis',
        '_velocity',
        '_duration',
        '_obstacle_stop_time',
        '_apriltag_stop_distance',
    ]

    _fields_and_field_types = {
        'command': 'string',
        'initial_dis': 'int64',
        'velocity': 'double',
        'duration': 'double',
        'obstacle_stop_time': 'double',
        'apriltag_stop_distance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.command = kwargs.get('command', str())
        self.initial_dis = kwargs.get('initial_dis', int())
        self.velocity = kwargs.get('velocity', float())
        self.duration = kwargs.get('duration', float())
        self.obstacle_stop_time = kwargs.get('obstacle_stop_time', float())
        self.apriltag_stop_distance = kwargs.get('apriltag_stop_distance', float())

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
        if self.command != other.command:
            return False
        if self.initial_dis != other.initial_dis:
            return False
        if self.velocity != other.velocity:
            return False
        if self.duration != other.duration:
            return False
        if self.obstacle_stop_time != other.obstacle_stop_time:
            return False
        if self.apriltag_stop_distance != other.apriltag_stop_distance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value

    @builtins.property
    def initial_dis(self):
        """Message field 'initial_dis'."""
        return self._initial_dis

    @initial_dis.setter
    def initial_dis(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'initial_dis' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'initial_dis' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._initial_dis = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration = value

    @builtins.property
    def obstacle_stop_time(self):
        """Message field 'obstacle_stop_time'."""
        return self._obstacle_stop_time

    @obstacle_stop_time.setter
    def obstacle_stop_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'obstacle_stop_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'obstacle_stop_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._obstacle_stop_time = value

    @builtins.property
    def apriltag_stop_distance(self):
        """Message field 'apriltag_stop_distance'."""
        return self._apriltag_stop_distance

    @apriltag_stop_distance.setter
    def apriltag_stop_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'apriltag_stop_distance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'apriltag_stop_distance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._apriltag_stop_distance = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_Result(type):
    """Metaclass of message 'UlinePatrolCommand_Result'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_Result(metaclass=Metaclass_UlinePatrolCommand_Result):
    """Message class 'UlinePatrolCommand_Result'."""

    __slots__ = [
        '_ret_code',
        '_state',
    ]

    _fields_and_field_types = {
        'ret_code': 'int64',
        'state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ret_code = kwargs.get('ret_code', int())
        self.state = kwargs.get('state', str())

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
        if self.ret_code != other.ret_code:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ret_code(self):
        """Message field 'ret_code'."""
        return self._ret_code

    @ret_code.setter
    def ret_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ret_code' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'ret_code' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._ret_code = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_Feedback(type):
    """Metaclass of message 'UlinePatrolCommand_Feedback'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_Feedback(metaclass=Metaclass_UlinePatrolCommand_Feedback):
    """Message class 'UlinePatrolCommand_Feedback'."""

    __slots__ = [
        '_elapsed_time',
        '_state',
    ]

    _fields_and_field_types = {
        'elapsed_time': 'double',
        'state': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.elapsed_time = kwargs.get('elapsed_time', float())
        self.state = kwargs.get('state', str())

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
        if self.elapsed_time != other.elapsed_time:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def elapsed_time(self):
        """Message field 'elapsed_time'."""
        return self._elapsed_time

    @elapsed_time.setter
    def elapsed_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'elapsed_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elapsed_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elapsed_time = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'state' field must be of type 'str'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_SendGoal_Request(type):
    """Metaclass of message 'UlinePatrolCommand_SendGoal_Request'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__send_goal__request

            from uline_patrol_msgs.action import UlinePatrolCommand
            if UlinePatrolCommand.Goal.__class__._TYPE_SUPPORT is None:
                UlinePatrolCommand.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_SendGoal_Request(metaclass=Metaclass_UlinePatrolCommand_SendGoal_Request):
    """Message class 'UlinePatrolCommand_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'uline_patrol_msgs/UlinePatrolCommand_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['uline_patrol_msgs', 'action'], 'UlinePatrolCommand_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Goal
        self.goal = kwargs.get('goal', UlinePatrolCommand_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Goal
            assert \
                isinstance(value, UlinePatrolCommand_Goal), \
                "The 'goal' field must be a sub message of type 'UlinePatrolCommand_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_SendGoal_Response(type):
    """Metaclass of message 'UlinePatrolCommand_SendGoal_Response'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_SendGoal_Response(metaclass=Metaclass_UlinePatrolCommand_SendGoal_Response):
    """Message class 'UlinePatrolCommand_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_UlinePatrolCommand_SendGoal(type):
    """Metaclass of service 'UlinePatrolCommand_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__uline_patrol_command__send_goal

            from uline_patrol_msgs.action import _uline_patrol_command
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_SendGoal_Request._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_SendGoal_Request.__import_type_support__()
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_SendGoal_Response._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_SendGoal_Response.__import_type_support__()


class UlinePatrolCommand_SendGoal(metaclass=Metaclass_UlinePatrolCommand_SendGoal):
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_SendGoal_Request as Request
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_GetResult_Request(type):
    """Metaclass of message 'UlinePatrolCommand_GetResult_Request'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_GetResult_Request(metaclass=Metaclass_UlinePatrolCommand_GetResult_Request):
    """Message class 'UlinePatrolCommand_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_GetResult_Response(type):
    """Metaclass of message 'UlinePatrolCommand_GetResult_Response'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__get_result__response

            from uline_patrol_msgs.action import UlinePatrolCommand
            if UlinePatrolCommand.Result.__class__._TYPE_SUPPORT is None:
                UlinePatrolCommand.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_GetResult_Response(metaclass=Metaclass_UlinePatrolCommand_GetResult_Response):
    """Message class 'UlinePatrolCommand_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'uline_patrol_msgs/UlinePatrolCommand_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['uline_patrol_msgs', 'action'], 'UlinePatrolCommand_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Result
        self.result = kwargs.get('result', UlinePatrolCommand_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Result
            assert \
                isinstance(value, UlinePatrolCommand_Result), \
                "The 'result' field must be a sub message of type 'UlinePatrolCommand_Result'"
        self._result = value


class Metaclass_UlinePatrolCommand_GetResult(type):
    """Metaclass of service 'UlinePatrolCommand_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__uline_patrol_command__get_result

            from uline_patrol_msgs.action import _uline_patrol_command
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_GetResult_Request._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_GetResult_Request.__import_type_support__()
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_GetResult_Response._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_GetResult_Response.__import_type_support__()


class UlinePatrolCommand_GetResult(metaclass=Metaclass_UlinePatrolCommand_GetResult):
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_GetResult_Request as Request
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_UlinePatrolCommand_FeedbackMessage(type):
    """Metaclass of message 'UlinePatrolCommand_FeedbackMessage'."""

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
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__uline_patrol_command__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__uline_patrol_command__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__uline_patrol_command__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__uline_patrol_command__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__uline_patrol_command__feedback_message

            from uline_patrol_msgs.action import UlinePatrolCommand
            if UlinePatrolCommand.Feedback.__class__._TYPE_SUPPORT is None:
                UlinePatrolCommand.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UlinePatrolCommand_FeedbackMessage(metaclass=Metaclass_UlinePatrolCommand_FeedbackMessage):
    """Message class 'UlinePatrolCommand_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'uline_patrol_msgs/UlinePatrolCommand_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['uline_patrol_msgs', 'action'], 'UlinePatrolCommand_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Feedback
        self.feedback = kwargs.get('feedback', UlinePatrolCommand_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Feedback
            assert \
                isinstance(value, UlinePatrolCommand_Feedback), \
                "The 'feedback' field must be a sub message of type 'UlinePatrolCommand_Feedback'"
        self._feedback = value


class Metaclass_UlinePatrolCommand(type):
    """Metaclass of action 'UlinePatrolCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('uline_patrol_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'uline_patrol_msgs.action.UlinePatrolCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__uline_patrol_command

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from uline_patrol_msgs.action import _uline_patrol_command
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_SendGoal._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_SendGoal.__import_type_support__()
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_GetResult._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_GetResult.__import_type_support__()
            if _uline_patrol_command.Metaclass_UlinePatrolCommand_FeedbackMessage._TYPE_SUPPORT is None:
                _uline_patrol_command.Metaclass_UlinePatrolCommand_FeedbackMessage.__import_type_support__()


class UlinePatrolCommand(metaclass=Metaclass_UlinePatrolCommand):

    # The goal message defined in the action definition.
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Goal as Goal
    # The result message defined in the action definition.
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Result as Result
    # The feedback message defined in the action definition.
    from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from uline_patrol_msgs.action._uline_patrol_command import UlinePatrolCommand_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
