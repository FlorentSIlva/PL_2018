// Generated by gencpp from file shuttles/msgShuttleChange.msg
// DO NOT EDIT!


#ifndef SHUTTLES_MESSAGE_MSGSHUTTLECHANGE_H
#define SHUTTLES_MESSAGE_MSGSHUTTLECHANGE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace shuttles
{
template <class ContainerAllocator>
struct msgShuttleChange_
{
  typedef msgShuttleChange_<ContainerAllocator> Type;

  msgShuttleChange_()
    : handle(0)
    , argument(0)  {
    }
  msgShuttleChange_(const ContainerAllocator& _alloc)
    : handle(0)
    , argument(0)  {
  (void)_alloc;
    }



   typedef int32_t _handle_type;
  _handle_type handle;

   typedef int32_t _argument_type;
  _argument_type argument;




  typedef boost::shared_ptr< ::shuttles::msgShuttleChange_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shuttles::msgShuttleChange_<ContainerAllocator> const> ConstPtr;

}; // struct msgShuttleChange_

typedef ::shuttles::msgShuttleChange_<std::allocator<void> > msgShuttleChange;

typedef boost::shared_ptr< ::shuttles::msgShuttleChange > msgShuttleChangePtr;
typedef boost::shared_ptr< ::shuttles::msgShuttleChange const> msgShuttleChangeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::shuttles::msgShuttleChange_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::shuttles::msgShuttleChange_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace shuttles

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'shuttles': ['/home/projn7cellule/PL_2018/ros_ws/src/shuttles/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::shuttles::msgShuttleChange_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::shuttles::msgShuttleChange_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shuttles::msgShuttleChange_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shuttles::msgShuttleChange_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shuttles::msgShuttleChange_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shuttles::msgShuttleChange_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::shuttles::msgShuttleChange_<ContainerAllocator> >
{
  static const char* value()
  {
    return "02c8ec5acb6ca55401e7f0fabb5b8e17";
  }

  static const char* value(const ::shuttles::msgShuttleChange_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x02c8ec5acb6ca554ULL;
  static const uint64_t static_value2 = 0x01e7f0fabb5b8e17ULL;
};

template<class ContainerAllocator>
struct DataType< ::shuttles::msgShuttleChange_<ContainerAllocator> >
{
  static const char* value()
  {
    return "shuttles/msgShuttleChange";
  }

  static const char* value(const ::shuttles::msgShuttleChange_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::shuttles::msgShuttleChange_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# argument = destination or product\n\
\n\
int32 handle\n\
int32 argument \n\
";
  }

  static const char* value(const ::shuttles::msgShuttleChange_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::shuttles::msgShuttleChange_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
      stream.next(m.argument);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msgShuttleChange_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shuttles::msgShuttleChange_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::shuttles::msgShuttleChange_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
    s << indent << "argument: ";
    Printer<int32_t>::stream(s, indent + "  ", v.argument);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SHUTTLES_MESSAGE_MSGSHUTTLECHANGE_H