; Auto-generated. Do not edit!


(cl:in-package face_learning_actions-msg)


;//! \htmlinclude FaceDetectionFeedback.msg.html

(cl:defclass <FaceDetectionFeedback> (roslisp-msg-protocol:ros-message)
  ((number_of_faces
    :reader number_of_faces
    :initarg :number_of_faces
    :type cl:integer
    :initform 0))
)

(cl:defclass FaceDetectionFeedback (<FaceDetectionFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <FaceDetectionFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'FaceDetectionFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name face_learning_actions-msg:<FaceDetectionFeedback> is deprecated: use face_learning_actions-msg:FaceDetectionFeedback instead.")))

(cl:ensure-generic-function 'number_of_faces-val :lambda-list '(m))
(cl:defmethod number_of_faces-val ((m <FaceDetectionFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader face_learning_actions-msg:number_of_faces-val is deprecated.  Use face_learning_actions-msg:number_of_faces instead.")
  (number_of_faces m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <FaceDetectionFeedback>) ostream)
  "Serializes a message object of type '<FaceDetectionFeedback>"
  (cl:let* ((signed (cl:slot-value msg 'number_of_faces)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <FaceDetectionFeedback>) istream)
  "Deserializes a message object of type '<FaceDetectionFeedback>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'number_of_faces) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<FaceDetectionFeedback>)))
  "Returns string type for a message object of type '<FaceDetectionFeedback>"
  "face_learning_actions/FaceDetectionFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'FaceDetectionFeedback)))
  "Returns string type for a message object of type 'FaceDetectionFeedback"
  "face_learning_actions/FaceDetectionFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<FaceDetectionFeedback>)))
  "Returns md5sum for a message object of type '<FaceDetectionFeedback>"
  "efbc928311d5f00763e8c68b0f8a8609")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'FaceDetectionFeedback)))
  "Returns md5sum for a message object of type 'FaceDetectionFeedback"
  "efbc928311d5f00763e8c68b0f8a8609")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<FaceDetectionFeedback>)))
  "Returns full string definition for message of type '<FaceDetectionFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%int32 number_of_faces~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'FaceDetectionFeedback)))
  "Returns full string definition for message of type 'FaceDetectionFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%int32 number_of_faces~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <FaceDetectionFeedback>))
  (cl:+ 0
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <FaceDetectionFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'FaceDetectionFeedback
    (cl:cons ':number_of_faces (number_of_faces msg))
))
