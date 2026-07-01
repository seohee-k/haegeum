#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "haegeum_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "haegeum_interfaces__rosidl_generator_c")]
extern "C" {
    fn haegeum_interfaces__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn haegeum_interfaces__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn haegeum_interfaces__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn haegeum_interfaces__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to haegeum_interfaces__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub busy: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_task: rosidl_runtime_rs::String,

}



impl Default for RobotStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !haegeum_interfaces__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to haegeum_interfaces__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "haegeum_interfaces/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__RobotStatus() }
  }
}


#[link(name = "haegeum_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__Target() -> *const std::ffi::c_void;
}

#[link(name = "haegeum_interfaces__rosidl_generator_c")]
extern "C" {
    fn haegeum_interfaces__msg__Target__init(msg: *mut Target) -> bool;
    fn haegeum_interfaces__msg__Target__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Target>, size: usize) -> bool;
    fn haegeum_interfaces__msg__Target__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Target>);
    fn haegeum_interfaces__msg__Target__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Target>, out_seq: *mut rosidl_runtime_rs::Sequence<Target>) -> bool;
}

// Corresponds to haegeum_interfaces__msg__Target
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Target {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::rmw::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected_by: rosidl_runtime_rs::String,

}



impl Default for Target {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !haegeum_interfaces__msg__Target__init(&mut msg as *mut _) {
        panic!("Call to haegeum_interfaces__msg__Target__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Target {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Target__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Target__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Target__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Target {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Target where Self: Sized {
  const TYPE_NAME: &'static str = "haegeum_interfaces/msg/Target";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__Target() }
  }
}


#[link(name = "haegeum_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__Assignment() -> *const std::ffi::c_void;
}

#[link(name = "haegeum_interfaces__rosidl_generator_c")]
extern "C" {
    fn haegeum_interfaces__msg__Assignment__init(msg: *mut Assignment) -> bool;
    fn haegeum_interfaces__msg__Assignment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Assignment>, size: usize) -> bool;
    fn haegeum_interfaces__msg__Assignment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Assignment>);
    fn haegeum_interfaces__msg__Assignment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Assignment>, out_seq: *mut rosidl_runtime_rs::Sequence<Assignment>) -> bool;
}

// Corresponds to haegeum_interfaces__msg__Assignment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Assignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_robot: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position: geometry_msgs::msg::rmw::Point,

}



impl Default for Assignment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !haegeum_interfaces__msg__Assignment__init(&mut msg as *mut _) {
        panic!("Call to haegeum_interfaces__msg__Assignment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Assignment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Assignment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Assignment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Assignment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Assignment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Assignment where Self: Sized {
  const TYPE_NAME: &'static str = "haegeum_interfaces/msg/Assignment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__Assignment() }
  }
}


#[link(name = "haegeum_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__Event() -> *const std::ffi::c_void;
}

#[link(name = "haegeum_interfaces__rosidl_generator_c")]
extern "C" {
    fn haegeum_interfaces__msg__Event__init(msg: *mut Event) -> bool;
    fn haegeum_interfaces__msg__Event__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Event>, size: usize) -> bool;
    fn haegeum_interfaces__msg__Event__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Event>);
    fn haegeum_interfaces__msg__Event__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Event>, out_seq: *mut rosidl_runtime_rs::Sequence<Event>) -> bool;
}

// Corresponds to haegeum_interfaces__msg__Event
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detail: rosidl_runtime_rs::String,

}



impl Default for Event {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !haegeum_interfaces__msg__Event__init(&mut msg as *mut _) {
        panic!("Call to haegeum_interfaces__msg__Event__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Event {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Event__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Event__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__Event__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Event where Self: Sized {
  const TYPE_NAME: &'static str = "haegeum_interfaces/msg/Event";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__Event() }
  }
}


#[link(name = "haegeum_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__BattlefieldState() -> *const std::ffi::c_void;
}

#[link(name = "haegeum_interfaces__rosidl_generator_c")]
extern "C" {
    fn haegeum_interfaces__msg__BattlefieldState__init(msg: *mut BattlefieldState) -> bool;
    fn haegeum_interfaces__msg__BattlefieldState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BattlefieldState>, size: usize) -> bool;
    fn haegeum_interfaces__msg__BattlefieldState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BattlefieldState>);
    fn haegeum_interfaces__msg__BattlefieldState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BattlefieldState>, out_seq: *mut rosidl_runtime_rs::Sequence<BattlefieldState>) -> bool;
}

// Corresponds to haegeum_interfaces__msg__BattlefieldState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BattlefieldState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub targets: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Target>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RobotStatus>,

}



impl Default for BattlefieldState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !haegeum_interfaces__msg__BattlefieldState__init(&mut msg as *mut _) {
        panic!("Call to haegeum_interfaces__msg__BattlefieldState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BattlefieldState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__BattlefieldState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__BattlefieldState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { haegeum_interfaces__msg__BattlefieldState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BattlefieldState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BattlefieldState where Self: Sized {
  const TYPE_NAME: &'static str = "haegeum_interfaces/msg/BattlefieldState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__haegeum_interfaces__msg__BattlefieldState() }
  }
}


