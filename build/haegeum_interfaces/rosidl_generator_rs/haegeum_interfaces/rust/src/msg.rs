#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to haegeum_interfaces__msg__RobotStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub busy: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_task: std::string::String,

}



impl Default for RobotStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_id: msg.robot_id.as_str().into(),
        robot_type: msg.robot_type.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        battery: msg.battery,
        busy: msg.busy,
        state: msg.state.as_str().into(),
        current_task: msg.current_task.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        robot_id: msg.robot_id.as_str().into(),
        robot_type: msg.robot_type.as_str().into(),
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      battery: msg.battery,
      busy: msg.busy,
        state: msg.state.as_str().into(),
        current_task: msg.current_task.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      robot_id: msg.robot_id.to_string(),
      robot_type: msg.robot_type.to_string(),
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      battery: msg.battery,
      busy: msg.busy,
      state: msg.state.to_string(),
      current_task: msg.current_task.to_string(),
    }
  }
}


// Corresponds to haegeum_interfaces__msg__Target

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Target {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub position: geometry_msgs::msg::Point,


    // This member is not documented.
    #[allow(missing_docs)]
    pub confidence: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detected_by: std::string::String,

}



impl Default for Target {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Target::default())
  }
}

impl rosidl_runtime_rs::Message for Target {
  type RmwMsg = super::msg::rmw::Target;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_id: msg.target_id.as_str().into(),
        target_type: msg.target_type.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.position)).into_owned(),
        confidence: msg.confidence,
        detected_by: msg.detected_by.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_id: msg.target_id.as_str().into(),
        target_type: msg.target_type.as_str().into(),
        position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.position)).into_owned(),
      confidence: msg.confidence,
        detected_by: msg.detected_by.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_id: msg.target_id.to_string(),
      target_type: msg.target_type.to_string(),
      position: geometry_msgs::msg::Point::from_rmw_message(msg.position),
      confidence: msg.confidence,
      detected_by: msg.detected_by.to_string(),
    }
  }
}


// Corresponds to haegeum_interfaces__msg__Assignment

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Assignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub target_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assigned_robot: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mission_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub target_position: geometry_msgs::msg::Point,

}



impl Default for Assignment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Assignment::default())
  }
}

impl rosidl_runtime_rs::Message for Assignment {
  type RmwMsg = super::msg::rmw::Assignment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_id: msg.target_id.as_str().into(),
        assigned_robot: msg.assigned_robot.as_str().into(),
        mission_type: msg.mission_type.as_str().into(),
        target_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(msg.target_position)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        target_id: msg.target_id.as_str().into(),
        assigned_robot: msg.assigned_robot.as_str().into(),
        mission_type: msg.mission_type.as_str().into(),
        target_position: geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(&msg.target_position)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      target_id: msg.target_id.to_string(),
      assigned_robot: msg.assigned_robot.to_string(),
      mission_type: msg.mission_type.to_string(),
      target_position: geometry_msgs::msg::Point::from_rmw_message(msg.target_position),
    }
  }
}


// Corresponds to haegeum_interfaces__msg__Event

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Event {

    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub event_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub source: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub detail: std::string::String,

}



impl Default for Event {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Event::default())
  }
}

impl rosidl_runtime_rs::Message for Event {
  type RmwMsg = super::msg::rmw::Event;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.stamp)).into_owned(),
        event_type: msg.event_type.as_str().into(),
        source: msg.source.as_str().into(),
        detail: msg.detail.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        stamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.stamp)).into_owned(),
        event_type: msg.event_type.as_str().into(),
        source: msg.source.as_str().into(),
        detail: msg.detail.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      stamp: builtin_interfaces::msg::Time::from_rmw_message(msg.stamp),
      event_type: msg.event_type.to_string(),
      source: msg.source.to_string(),
      detail: msg.detail.to_string(),
    }
  }
}


// Corresponds to haegeum_interfaces__msg__BattlefieldState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BattlefieldState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub targets: Vec<super::msg::Target>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: Vec<super::msg::RobotStatus>,

}



impl Default for BattlefieldState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BattlefieldState::default())
  }
}

impl rosidl_runtime_rs::Message for BattlefieldState {
  type RmwMsg = super::msg::rmw::BattlefieldState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        targets: msg.targets
          .into_iter()
          .map(|elem| super::msg::Target::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        robots: msg.robots
          .into_iter()
          .map(|elem| super::msg::RobotStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        targets: msg.targets
          .iter()
          .map(|elem| super::msg::Target::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        robots: msg.robots
          .iter()
          .map(|elem| super::msg::RobotStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      targets: msg.targets
          .into_iter()
          .map(super::msg::Target::from_rmw_message)
          .collect(),
      robots: msg.robots
          .into_iter()
          .map(super::msg::RobotStatus::from_rmw_message)
          .collect(),
    }
  }
}


