# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from plan2control_msgs/Traj_Node.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class Traj_Node(genpy.Message):
  _md5sum = "cf8156c0b203e66c6cdd6a4117bc4ae5"
  _type = "plan2control_msgs/Traj_Node"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """bool forward
int32 id
geometry_msgs/Point position
geometry_msgs/Quaternion orientation
float64 curvature
geometry_msgs/Twist velocity


================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Twist
# This expresses velocity in free space broken into its linear and angular parts.
Vector3  linear
Vector3  angular

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z"""
  __slots__ = ['forward','id','position','orientation','curvature','velocity']
  _slot_types = ['bool','int32','geometry_msgs/Point','geometry_msgs/Quaternion','float64','geometry_msgs/Twist']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       forward,id,position,orientation,curvature,velocity

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Traj_Node, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.forward is None:
        self.forward = False
      if self.id is None:
        self.id = 0
      if self.position is None:
        self.position = geometry_msgs.msg.Point()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.curvature is None:
        self.curvature = 0.
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.Twist()
    else:
      self.forward = False
      self.id = 0
      self.position = geometry_msgs.msg.Point()
      self.orientation = geometry_msgs.msg.Quaternion()
      self.curvature = 0.
      self.velocity = geometry_msgs.msg.Twist()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_Bi14d().pack(_x.forward, _x.id, _x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.curvature, _x.velocity.linear.x, _x.velocity.linear.y, _x.velocity.linear.z, _x.velocity.angular.x, _x.velocity.angular.y, _x.velocity.angular.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.position is None:
        self.position = geometry_msgs.msg.Point()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.Twist()
      end = 0
      _x = self
      start = end
      end += 117
      (_x.forward, _x.id, _x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.curvature, _x.velocity.linear.x, _x.velocity.linear.y, _x.velocity.linear.z, _x.velocity.angular.x, _x.velocity.angular.y, _x.velocity.angular.z,) = _get_struct_Bi14d().unpack(str[start:end])
      self.forward = bool(self.forward)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_Bi14d().pack(_x.forward, _x.id, _x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.curvature, _x.velocity.linear.x, _x.velocity.linear.y, _x.velocity.linear.z, _x.velocity.angular.x, _x.velocity.angular.y, _x.velocity.angular.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.position is None:
        self.position = geometry_msgs.msg.Point()
      if self.orientation is None:
        self.orientation = geometry_msgs.msg.Quaternion()
      if self.velocity is None:
        self.velocity = geometry_msgs.msg.Twist()
      end = 0
      _x = self
      start = end
      end += 117
      (_x.forward, _x.id, _x.position.x, _x.position.y, _x.position.z, _x.orientation.x, _x.orientation.y, _x.orientation.z, _x.orientation.w, _x.curvature, _x.velocity.linear.x, _x.velocity.linear.y, _x.velocity.linear.z, _x.velocity.angular.x, _x.velocity.angular.y, _x.velocity.angular.z,) = _get_struct_Bi14d().unpack(str[start:end])
      self.forward = bool(self.forward)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_Bi14d = None
def _get_struct_Bi14d():
    global _struct_Bi14d
    if _struct_Bi14d is None:
        _struct_Bi14d = struct.Struct("<Bi14d")
    return _struct_Bi14d
