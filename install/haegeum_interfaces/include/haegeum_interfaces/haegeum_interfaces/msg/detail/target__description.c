// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from haegeum_interfaces:msg/Target.idl
// generated code does not contain a copyright notice

#include "haegeum_interfaces/msg/detail/target__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_haegeum_interfaces
const rosidl_type_hash_t *
haegeum_interfaces__msg__Target__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9c, 0x77, 0xcc, 0x40, 0x38, 0xe8, 0x5d, 0xae,
      0xc7, 0xdf, 0x10, 0x85, 0x68, 0x74, 0xb8, 0x47,
      0xef, 0x6b, 0xaa, 0x02, 0xae, 0x0c, 0x5e, 0xd8,
      0x3b, 0xa9, 0xb9, 0xdf, 0xe9, 0x8f, 0xa1, 0x4f,
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

static char haegeum_interfaces__msg__Target__TYPE_NAME[] = "haegeum_interfaces/msg/Target";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char haegeum_interfaces__msg__Target__FIELD_NAME__target_id[] = "target_id";
static char haegeum_interfaces__msg__Target__FIELD_NAME__target_type[] = "target_type";
static char haegeum_interfaces__msg__Target__FIELD_NAME__position[] = "position";
static char haegeum_interfaces__msg__Target__FIELD_NAME__confidence[] = "confidence";
static char haegeum_interfaces__msg__Target__FIELD_NAME__detected_by[] = "detected_by";

static rosidl_runtime_c__type_description__Field haegeum_interfaces__msg__Target__FIELDS[] = {
  {
    {haegeum_interfaces__msg__Target__FIELD_NAME__target_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Target__FIELD_NAME__target_type, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Target__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Target__FIELD_NAME__confidence, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Target__FIELD_NAME__detected_by, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription haegeum_interfaces__msg__Target__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
haegeum_interfaces__msg__Target__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {haegeum_interfaces__msg__Target__TYPE_NAME, 29, 29},
      {haegeum_interfaces__msg__Target__FIELDS, 5, 5},
    },
    {haegeum_interfaces__msg__Target__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
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
  "string target_type\n"
  "\n"
  "geometry_msgs/Point position\n"
  "\n"
  "float32 confidence\n"
  "\n"
  "string detected_by";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
haegeum_interfaces__msg__Target__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {haegeum_interfaces__msg__Target__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 106, 106},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
haegeum_interfaces__msg__Target__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *haegeum_interfaces__msg__Target__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
