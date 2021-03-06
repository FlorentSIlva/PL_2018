// Generated by gencpp from file robots/RobotJoints.msg
// DO NOT EDIT!


#ifndef ROBOTS_MESSAGE_ROBOTJOINTS_H
#define ROBOTS_MESSAGE_ROBOTJOINTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robots
{
template <class ContainerAllocator>
struct RobotJoints_
{
  typedef RobotJoints_<ContainerAllocator> Type;

  RobotJoints_()
    : joint1(0)
    , joint2(0)
    , joint3(0)
    , joint4(0)
    , joint5(0)
    , joint6(0)
    , joint7(0)  {
    }
  RobotJoints_(const ContainerAllocator& _alloc)
    : joint1(0)
    , joint2(0)
    , joint3(0)
    , joint4(0)
    , joint5(0)
    , joint6(0)
    , joint7(0)  {
  (void)_alloc;
    }



   typedef int32_t _joint1_type;
  _joint1_type joint1;

   typedef int32_t _joint2_type;
  _joint2_type joint2;

   typedef int32_t _joint3_type;
  _joint3_type joint3;

   typedef int32_t _joint4_type;
  _joint4_type joint4;

   typedef int32_t _joint5_type;
  _joint5_type joint5;

   typedef int32_t _joint6_type;
  _joint6_type joint6;

   typedef int32_t _joint7_type;
  _joint7_type joint7;




  typedef boost::shared_ptr< ::robots::RobotJoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robots::RobotJoints_<ContainerAllocator> const> ConstPtr;

}; // struct RobotJoints_

typedef ::robots::RobotJoints_<std::allocator<void> > RobotJoints;

typedef boost::shared_ptr< ::robots::RobotJoints > RobotJointsPtr;
typedef boost::shared_ptr< ::robots::RobotJoints const> RobotJointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robots::RobotJoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robots::RobotJoints_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robots

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'robots': ['/home/projn7cellule/PL_2018/ros_ws/src/robots/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robots::RobotJoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robots::RobotJoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robots::RobotJoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robots::RobotJoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robots::RobotJoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robots::RobotJoints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robots::RobotJoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5e5a38d7bec96b3437eca1b49cd93693";
  }

  static const char* value(const ::robots::RobotJoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5e5a38d7bec96b34ULL;
  static const uint64_t static_value2 = 0x37eca1b49cd93693ULL;
};

template<class ContainerAllocator>
struct DataType< ::robots::RobotJoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robots/RobotJoints";
  }

  static const char* value(const ::robots::RobotJoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robots::RobotJoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 joint1\n\
int32 joint2\n\
int32 joint3\n\
int32 joint4\n\
int32 joint5\n\
int32 joint6\n\
int32 joint7\n\
";
  }

  static const char* value(const ::robots::RobotJoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robots::RobotJoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint1);
      stream.next(m.joint2);
      stream.next(m.joint3);
      stream.next(m.joint4);
      stream.next(m.joint5);
      stream.next(m.joint6);
      stream.next(m.joint7);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotJoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robots::RobotJoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robots::RobotJoints_<ContainerAllocator>& v)
  {
    s << indent << "joint1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint1);
    s << indent << "joint2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint2);
    s << indent << "joint3: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint3);
    s << indent << "joint4: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint4);
    s << indent << "joint5: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint5);
    s << indent << "joint6: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint6);
    s << indent << "joint7: ";
    Printer<int32_t>::stream(s, indent + "  ", v.joint7);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTS_MESSAGE_ROBOTJOINTS_H
