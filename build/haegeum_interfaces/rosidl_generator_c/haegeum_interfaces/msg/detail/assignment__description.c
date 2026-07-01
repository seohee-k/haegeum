// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from haegeum_interfaces:msg/Assignment.idl
// generated code does not contain a copyright notice

#include "haegeum_interfaces/msg/detail/assignment__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_haegeum_interfaces
const rosidl_type_hash_t *
haegeum_interfaces__msg__Assignment__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc5, 0xe7, 0xcd, 0xea, 0xd8, 0x29, 0xa6, 0x32,
      0x51, 0x96, 0xc1, 0xe0, 0x07, 0x07, 0x4e, 0x58,
      0xcc, 0x9c, 0x88, 0xec, 0x64, 0xb4, 0x0b, 0xfb,
      0x9a, 0x0e, 0x04, 0x01, 0x7f, 0xbb, 0x1b, 0x63,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char haegeum_interfaces__msg__Assignment__TYPE_NAME[] = "haegeum_interfaces/msg/Assignment";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char haegeum_interfaces__msg__Assignment__FIELD_NAME__target_id[] = "target_id";
static char haegeum_interfaces__msg__Assignment__FIELD_NAME__assigned_robot[] = "assigned_robot";
static char haegeum_interfaces__msg__Assignment__FIELD_NAME__mission_type[] = "mission_type";
static char haegeum_interfaces__msg__Assignment__FIELD_NAME__target_position[] = "target_position";

static rosidl_runtime_c__type_description__Field haegeum_interfaces__msg__Assignment__FIELDS[] = {
  {
    {haegeum_interfaces__msg__Assignment__FIELD_NAME__target_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Assignment__FIELD_NAME__assigned_robot, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Assignment__FIELD_NAME__mission_type, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Assignment__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription haegeum_interfaces__msg__Assignment__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
haegeum_interfaces__msg__Assignment__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {haegeum_interfaces__msg__Assignment__TYPE_NAME, 33, 33},
      {haegeum_interfaces__msg__Assignment__FIELDS, 4, 4},
    },
    {haegeum_interfaces__msg__Assignment__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string target_id\n"
  "\n"
  "string assigned_robot\n"
  "\n"
  "string mission_type\n"
  "\n"
  "geometry_msgs/Point target_position";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
haegeum_interfaces__msg__Assignment__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {haegeum_interfaces__msg__Assignment__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 97, 97},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
haegeum_interfaces__msg__Assignment__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *haegeum_interfaces__msg__Assignment__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
