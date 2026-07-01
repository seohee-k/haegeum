// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from haegeum_interfaces:msg/Event.idl
// generated code does not contain a copyright notice

#include "haegeum_interfaces/msg/detail/event__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_haegeum_interfaces
const rosidl_type_hash_t *
haegeum_interfaces__msg__Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0xcb, 0x27, 0xbf, 0x83, 0x1f, 0x3d, 0x08,
      0x53, 0xa8, 0xd1, 0xe9, 0xa1, 0x80, 0xd7, 0x06,
      0x17, 0x3a, 0x0f, 0x2c, 0x95, 0x56, 0xf0, 0x26,
      0xca, 0xb8, 0x3f, 0x60, 0x39, 0x87, 0x28, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char haegeum_interfaces__msg__Event__TYPE_NAME[] = "haegeum_interfaces/msg/Event";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char haegeum_interfaces__msg__Event__FIELD_NAME__stamp[] = "stamp";
static char haegeum_interfaces__msg__Event__FIELD_NAME__event_type[] = "event_type";
static char haegeum_interfaces__msg__Event__FIELD_NAME__source[] = "source";
static char haegeum_interfaces__msg__Event__FIELD_NAME__detail[] = "detail";

static rosidl_runtime_c__type_description__Field haegeum_interfaces__msg__Event__FIELDS[] = {
  {
    {haegeum_interfaces__msg__Event__FIELD_NAME__stamp, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Event__FIELD_NAME__event_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Event__FIELD_NAME__source, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {haegeum_interfaces__msg__Event__FIELD_NAME__detail, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription haegeum_interfaces__msg__Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
haegeum_interfaces__msg__Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {haegeum_interfaces__msg__Event__TYPE_NAME, 28, 28},
      {haegeum_interfaces__msg__Event__FIELDS, 4, 4},
    },
    {haegeum_interfaces__msg__Event__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "builtin_interfaces/Time stamp\n"
  "\n"
  "string event_type\n"
  "\n"
  "string source\n"
  "\n"
  "string detail";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
haegeum_interfaces__msg__Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {haegeum_interfaces__msg__Event__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 78, 78},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
haegeum_interfaces__msg__Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *haegeum_interfaces__msg__Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
