// Generated by gencpp from file arbotix_msgs/EnableRequest.msg
// DO NOT EDIT!


#ifndef ARBOTIX_MSGS_MESSAGE_ENABLEREQUEST_H
#define ARBOTIX_MSGS_MESSAGE_ENABLEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace arbotix_msgs
{
template <class ContainerAllocator>
struct EnableRequest_
{
  typedef EnableRequest_<ContainerAllocator> Type;

  EnableRequest_()
    : enable(false)  {
    }
  EnableRequest_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::arbotix_msgs::EnableRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::arbotix_msgs::EnableRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EnableRequest_

typedef ::arbotix_msgs::EnableRequest_<std::allocator<void> > EnableRequest;

typedef boost::shared_ptr< ::arbotix_msgs::EnableRequest > EnableRequestPtr;
typedef boost::shared_ptr< ::arbotix_msgs::EnableRequest const> EnableRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::arbotix_msgs::EnableRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace arbotix_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'arbotix_msgs': ['/home/lhn/lhn_ws/src/arbotix_ros/arbotix_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::arbotix_msgs::EnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::arbotix_msgs::EnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::arbotix_msgs::EnableRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::arbotix_msgs::EnableRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "arbotix_msgs/EnableRequest";
  }

  static const char* value(const ::arbotix_msgs::EnableRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool enable\n\
";
  }

  static const char* value(const ::arbotix_msgs::EnableRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EnableRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::arbotix_msgs::EnableRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::arbotix_msgs::EnableRequest_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARBOTIX_MSGS_MESSAGE_ENABLEREQUEST_H
