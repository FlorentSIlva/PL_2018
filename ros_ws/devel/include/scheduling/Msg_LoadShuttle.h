// Generated by gencpp from file scheduling/Msg_LoadShuttle.msg
// DO NOT EDIT!


#ifndef SCHEDULING_MESSAGE_MSG_LOADSHUTTLE_H
#define SCHEDULING_MESSAGE_MSG_LOADSHUTTLE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace scheduling
{
template <class ContainerAllocator>
struct Msg_LoadShuttle_
{
  typedef Msg_LoadShuttle_<ContainerAllocator> Type;

  Msg_LoadShuttle_()
    : header()
    , shuttleType(0)
    , product(0)
    , firstDestination(0)  {
    }
  Msg_LoadShuttle_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , shuttleType(0)
    , product(0)
    , firstDestination(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _shuttleType_type;
  _shuttleType_type shuttleType;

   typedef int32_t _product_type;
  _product_type product;

   typedef int32_t _firstDestination_type;
  _firstDestination_type firstDestination;




  typedef boost::shared_ptr< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> const> ConstPtr;

}; // struct Msg_LoadShuttle_

typedef ::scheduling::Msg_LoadShuttle_<std::allocator<void> > Msg_LoadShuttle;

typedef boost::shared_ptr< ::scheduling::Msg_LoadShuttle > Msg_LoadShuttlePtr;
typedef boost::shared_ptr< ::scheduling::Msg_LoadShuttle const> Msg_LoadShuttleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::scheduling::Msg_LoadShuttle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace scheduling

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'scheduling': ['/home/projn7cellule/PL_2018/ros_ws/src/scheduling/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "109f4b38f55347e749c6e9e0d96b9cd6";
  }

  static const char* value(const ::scheduling::Msg_LoadShuttle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x109f4b38f55347e7ULL;
  static const uint64_t static_value2 = 0x49c6e9e0d96b9cd6ULL;
};

template<class ContainerAllocator>
struct DataType< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "scheduling/Msg_LoadShuttle";
  }

  static const char* value(const ::scheduling::Msg_LoadShuttle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
uint8 shuttleType\n\
int32 product\n\
int32 firstDestination\n\
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
";
  }

  static const char* value(const ::scheduling::Msg_LoadShuttle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.shuttleType);
      stream.next(m.product);
      stream.next(m.firstDestination);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Msg_LoadShuttle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::scheduling::Msg_LoadShuttle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::scheduling::Msg_LoadShuttle_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "shuttleType: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shuttleType);
    s << indent << "product: ";
    Printer<int32_t>::stream(s, indent + "  ", v.product);
    s << indent << "firstDestination: ";
    Printer<int32_t>::stream(s, indent + "  ", v.firstDestination);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SCHEDULING_MESSAGE_MSG_LOADSHUTTLE_H