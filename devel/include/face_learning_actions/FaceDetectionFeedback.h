// Generated by gencpp from file face_learning_actions/FaceDetectionFeedback.msg
// DO NOT EDIT!


#ifndef FACE_LEARNING_ACTIONS_MESSAGE_FACEDETECTIONFEEDBACK_H
#define FACE_LEARNING_ACTIONS_MESSAGE_FACEDETECTIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace face_learning_actions
{
template <class ContainerAllocator>
struct FaceDetectionFeedback_
{
  typedef FaceDetectionFeedback_<ContainerAllocator> Type;

  FaceDetectionFeedback_()
    : number_of_faces(0)  {
    }
  FaceDetectionFeedback_(const ContainerAllocator& _alloc)
    : number_of_faces(0)  {
  (void)_alloc;
    }



   typedef int32_t _number_of_faces_type;
  _number_of_faces_type number_of_faces;





  typedef boost::shared_ptr< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct FaceDetectionFeedback_

typedef ::face_learning_actions::FaceDetectionFeedback_<std::allocator<void> > FaceDetectionFeedback;

typedef boost::shared_ptr< ::face_learning_actions::FaceDetectionFeedback > FaceDetectionFeedbackPtr;
typedef boost::shared_ptr< ::face_learning_actions::FaceDetectionFeedback const> FaceDetectionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace face_learning_actions

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'face_learning_actions': ['/home/hanna/action_ws/devel/share/face_learning_actions/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "efbc928311d5f00763e8c68b0f8a8609";
  }

  static const char* value(const ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xefbc928311d5f007ULL;
  static const uint64_t static_value2 = 0x63e8c68b0f8a8609ULL;
};

template<class ContainerAllocator>
struct DataType< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "face_learning_actions/FaceDetectionFeedback";
  }

  static const char* value(const ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
int32 number_of_faces\n\
";
  }

  static const char* value(const ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.number_of_faces);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FaceDetectionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::face_learning_actions::FaceDetectionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "number_of_faces: ";
    Printer<int32_t>::stream(s, indent + "  ", v.number_of_faces);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FACE_LEARNING_ACTIONS_MESSAGE_FACEDETECTIONFEEDBACK_H