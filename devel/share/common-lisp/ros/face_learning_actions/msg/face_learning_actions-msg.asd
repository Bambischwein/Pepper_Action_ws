
(cl:in-package :asdf)

(defsystem "face_learning_actions-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :actionlib_msgs-msg
               :std_msgs-msg
)
  :components ((:file "_package")
    (:file "FaceDetectionAction" :depends-on ("_package_FaceDetectionAction"))
    (:file "_package_FaceDetectionAction" :depends-on ("_package"))
    (:file "FaceDetectionActionFeedback" :depends-on ("_package_FaceDetectionActionFeedback"))
    (:file "_package_FaceDetectionActionFeedback" :depends-on ("_package"))
    (:file "FaceDetectionActionGoal" :depends-on ("_package_FaceDetectionActionGoal"))
    (:file "_package_FaceDetectionActionGoal" :depends-on ("_package"))
    (:file "FaceDetectionActionResult" :depends-on ("_package_FaceDetectionActionResult"))
    (:file "_package_FaceDetectionActionResult" :depends-on ("_package"))
    (:file "FaceDetectionFeedback" :depends-on ("_package_FaceDetectionFeedback"))
    (:file "_package_FaceDetectionFeedback" :depends-on ("_package"))
    (:file "FaceDetectionGoal" :depends-on ("_package_FaceDetectionGoal"))
    (:file "_package_FaceDetectionGoal" :depends-on ("_package"))
    (:file "FaceDetectionResult" :depends-on ("_package_FaceDetectionResult"))
    (:file "_package_FaceDetectionResult" :depends-on ("_package"))
  ))