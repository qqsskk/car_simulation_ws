// Generated by gencpp from file control_msgs/Trajectory.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_TRAJECTORY_H
#define CONTROL_MSGS_MESSAGE_TRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <control_msgs/Traj_Node.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct Trajectory_
{
  typedef Trajectory_<ContainerAllocator> Type;

  Trajectory_()
    : header()
    , points()  {
    }
  Trajectory_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::control_msgs::Traj_Node_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::control_msgs::Traj_Node_<ContainerAllocator> >::other >  _points_type;
  _points_type points;





  typedef boost::shared_ptr< ::control_msgs::Trajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::Trajectory_<ContainerAllocator> const> ConstPtr;

}; // struct Trajectory_

typedef ::control_msgs::Trajectory_<std::allocator<void> > Trajectory;

typedef boost::shared_ptr< ::control_msgs::Trajectory > TrajectoryPtr;
typedef boost::shared_ptr< ::control_msgs::Trajectory const> TrajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::Trajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::Trajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_driver_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/sensor_driver_msgs/msg'], 'control_msgs': ['/home/lhn/hhh_ws/src/car_simulation_interface/msgs/control_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::Trajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::Trajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1acf959f1699019d95490880434a87c";
  }

  static const char* value(const ::control_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1acf959f1699019ULL;
  static const uint64_t static_value2 = 0xd95490880434a87cULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/Trajectory";
  }

  static const char* value(const ::control_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Traj_Node[] points\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: control_msgs/Traj_Node\n\
bool forward\n\
int32 id\n\
geometry_msgs/Point position\n\
geometry_msgs/Quaternion orientation\n\
float64 curvature\n\
geometry_msgs/Twist velocity\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::control_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::Trajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Trajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::Trajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::Trajectory_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::control_msgs::Traj_Node_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_TRAJECTORY_H
