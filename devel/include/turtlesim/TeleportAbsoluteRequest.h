// Generated by gencpp from file turtlesim/TeleportAbsoluteRequest.msg
// DO NOT EDIT!


#ifndef TURTLESIM_MESSAGE_TELEPORTABSOLUTEREQUEST_H
#define TURTLESIM_MESSAGE_TELEPORTABSOLUTEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace turtlesim
{
template <class ContainerAllocator>
struct TeleportAbsoluteRequest_
{
  typedef TeleportAbsoluteRequest_<ContainerAllocator> Type;

  TeleportAbsoluteRequest_()
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
    }
  TeleportAbsoluteRequest_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _theta_type;
  _theta_type theta;





  typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TeleportAbsoluteRequest_

typedef ::turtlesim::TeleportAbsoluteRequest_<std::allocator<void> > TeleportAbsoluteRequest;

typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteRequest > TeleportAbsoluteRequestPtr;
typedef boost::shared_ptr< ::turtlesim::TeleportAbsoluteRequest const> TeleportAbsoluteRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlesim

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'turtlesim': ['/home/peterli/catkin_ws_com/src/ros_tutorials/turtlesim/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a130bc60ee6513855dc62ea83fcc5b20";
  }

  static const char* value(const ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa130bc60ee651385ULL;
  static const uint64_t static_value2 = 0x5dc62ea83fcc5b20ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlesim/TeleportAbsoluteRequest";
  }

  static const char* value(const ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 x\n\
float32 y\n\
float32 theta\n\
";
  }

  static const char* value(const ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TeleportAbsoluteRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlesim::TeleportAbsoluteRequest_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "theta: ";
    Printer<float>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLESIM_MESSAGE_TELEPORTABSOLUTEREQUEST_H
