#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rviz_plugin_tutorial_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rviz_plugin_tutorial_msgs__msg__Point2D() -> *const std::ffi::c_void;
}

#[link(name = "rviz_plugin_tutorial_msgs__rosidl_generator_c")]
extern "C" {
    fn rviz_plugin_tutorial_msgs__msg__Point2D__init(msg: *mut Point2D) -> bool;
    fn rviz_plugin_tutorial_msgs__msg__Point2D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Point2D>, size: usize) -> bool;
    fn rviz_plugin_tutorial_msgs__msg__Point2D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Point2D>);
    fn rviz_plugin_tutorial_msgs__msg__Point2D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Point2D>, out_seq: *mut rosidl_runtime_rs::Sequence<Point2D>) -> bool;
}

// Corresponds to rviz_plugin_tutorial_msgs__msg__Point2D
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Point2D {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f64,

}



impl Default for Point2D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rviz_plugin_tutorial_msgs__msg__Point2D__init(&mut msg as *mut _) {
        panic!("Call to rviz_plugin_tutorial_msgs__msg__Point2D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Point2D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rviz_plugin_tutorial_msgs__msg__Point2D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rviz_plugin_tutorial_msgs__msg__Point2D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rviz_plugin_tutorial_msgs__msg__Point2D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Point2D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Point2D where Self: Sized {
  const TYPE_NAME: &'static str = "rviz_plugin_tutorial_msgs/msg/Point2D";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rviz_plugin_tutorial_msgs__msg__Point2D() }
  }
}


