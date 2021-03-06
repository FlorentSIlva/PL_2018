// Generated by gencpp from file aiguillages/ExchangeSh.msg
// DO NOT EDIT!


#ifndef AIGUILLAGES_MESSAGE_EXCHANGESH_H
#define AIGUILLAGES_MESSAGE_EXCHANGESH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace aiguillages
{
template <class ContainerAllocator>
struct ExchangeSh_
{
  typedef ExchangeSh_<ContainerAllocator> Type;

  ExchangeSh_()
    : header()
    , handle(0)  {
    }
  ExchangeSh_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , handle(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _handle_type;
  _handle_type handle;




  typedef boost::shared_ptr< ::aiguillages::ExchangeSh_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::aiguillages::ExchangeSh_<ContainerAllocator> const> ConstPtr;

}; // struct ExchangeSh_

typedef ::aiguillages::ExchangeSh_<std::allocator<void> > ExchangeSh;

typedef boost::shared_ptr< ::aiguillages::ExchangeSh > ExchangeShPtr;
typedef boost::shared_ptr< ::aiguillages::ExchangeSh const> ExchangeShConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::aiguillages::ExchangeSh_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::aiguillages::ExchangeSh_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace aiguillages

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'aiguillages': ['/home/projn7cellule/PL_2018/ros_ws/src/aiguillages/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::aiguillages::ExchangeSh_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::aiguillages::ExchangeSh_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aiguillages::ExchangeSh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::aiguillages::ExchangeSh_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aiguillages::ExchangeSh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::aiguillages::ExchangeSh_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::aiguillages::ExchangeSh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1e674e2a2bd56787e34ea71041f1bf6d";
  }

  static const char* value(const ::aiguillages::ExchangeSh_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1e674e2a2bd56787ULL;
  static const uint64_t static_value2 = 0xe34ea71041f1bf6dULL;
};

template<class ContainerAllocator>
struct DataType< ::aiguillages::ExchangeSh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aiguillages/ExchangeSh";
  }

  static const char* value(const ::aiguillages::ExchangeSh_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::aiguillages::ExchangeSh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 handle\n\
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

  static const char* value(const ::aiguillages::ExchangeSh_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::aiguillages::ExchangeSh_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.handle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ExchangeSh_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::aiguillages::ExchangeSh_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::aiguillages::ExchangeSh_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "handle: ";
    Printer<int32_t>::stream(s, indent + "  ", v.handle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // AIGUILLAGES_MESSAGE_EXCHANGESH_H
