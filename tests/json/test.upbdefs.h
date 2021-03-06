/* This file contains accessors for a set of compiled-in defs.
 * Note that unlike Google's protobuf, it does *not* define
 * generated classes or any other kind of data structure for
 * actually storing protobufs.  It only contains *defs* which
 * let you reflect over a protobuf *schema*.
 */
/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     tests/json/test.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef TESTS_JSON_TEST_PROTO_UPB_H_
#define TESTS_JSON_TEST_PROTO_UPB_H_

#include "upb/def.h"

UPB_BEGIN_EXTERN_C

/* MessageDefs: call these functions to get a ref to a msgdef. */
const upb_msgdef *upbdefs_upb_test_json_SubMessage_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_get(const void *owner);
const upb_msgdef *upbdefs_upb_test_json_TestMessage_MapStringStringEntry_get(const void *owner);

/* EnumDefs: call these functions to get a ref to an enumdef. */
const upb_enumdef *upbdefs_upb_test_json_MyEnum_get(const void *owner);

/* Functions to test whether this message is of a certain type. */
UPB_INLINE bool upbdefs_upb_test_json_SubMessage_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.SubMessage") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage.MapBoolStringEntry") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage.MapInt32StringEntry") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage.MapStringBoolEntry") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage.MapStringInt32Entry") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage.MapStringMsgEntry") == 0;
}
UPB_INLINE bool upbdefs_upb_test_json_TestMessage_MapStringStringEntry_is(const upb_msgdef *m) {
  return strcmp(upb_msgdef_fullname(m), "upb.test.json.TestMessage.MapStringStringEntry") == 0;
}

/* Functions to test whether this enum is of a certain type. */
UPB_INLINE bool upbdefs_upb_test_json_MyEnum_is(const upb_enumdef *e) {
  return strcmp(upb_enumdef_fullname(e), "upb.test.json.MyEnum") == 0;
}


/* Functions to get a fielddef from a msgdef reference. */
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_SubMessage_f_foo(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_SubMessage_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_f_key(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_f_value(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_f_key(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_f_value(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_f_key(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_f_value(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_f_key(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_f_value(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_f_key(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_f_value(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringStringEntry_f_key(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringStringEntry_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_MapStringStringEntry_f_value(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringStringEntry_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_map_bool_string(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 22); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_map_int32_string(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 21); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_map_string_bool(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 24); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_map_string_int32(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 23); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_map_string_msg(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 25); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_map_string_string(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 20); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_bool(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 7); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_bytes(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 6); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_enum(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 9); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_int32(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 1); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_int64(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 2); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_msg(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 8); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_string(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 5); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_uint32(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 3); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_optional_uint64(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 4); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_bool(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 17); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_bytes(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 16); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_enum(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 19); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_int32(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 11); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_int64(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 12); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_msg(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 18); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_string(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 15); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_uint32(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 13); }
UPB_INLINE const upb_fielddef *upbdefs_upb_test_json_TestMessage_f_repeated_uint64(const upb_msgdef *m) { UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m)); return upb_msgdef_itof(m, 14); }

UPB_END_EXTERN_C

#ifdef __cplusplus

namespace upbdefs {
namespace upb {
namespace test {
namespace json {

class MyEnum : public ::upb::reffed_ptr<const ::upb::EnumDef> {
 public:
  MyEnum(const ::upb::EnumDef* e, const void *ref_donor = NULL)
      : reffed_ptr(e, ref_donor) {
    UPB_ASSERT(upbdefs_upb_test_json_MyEnum_is(e));
  }
  static MyEnum get() {
    const ::upb::EnumDef* e = upbdefs_upb_test_json_MyEnum_get(&e);
    return MyEnum(e, &e);
  }
};

class SubMessage : public ::upb::reffed_ptr<const ::upb::MessageDef> {
 public:
  SubMessage(const ::upb::MessageDef* m, const void *ref_donor = NULL)
      : reffed_ptr(m, ref_donor) {
    UPB_ASSERT(upbdefs_upb_test_json_SubMessage_is(m));
  }

  static SubMessage get() {
    const ::upb::MessageDef* m = upbdefs_upb_test_json_SubMessage_get(&m);
    return SubMessage(m, &m);
  }
};

class TestMessage : public ::upb::reffed_ptr<const ::upb::MessageDef> {
 public:
  TestMessage(const ::upb::MessageDef* m, const void *ref_donor = NULL)
      : reffed_ptr(m, ref_donor) {
    UPB_ASSERT(upbdefs_upb_test_json_TestMessage_is(m));
  }

  static TestMessage get() {
    const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_get(&m);
    return TestMessage(m, &m);
  }

  class MapBoolStringEntry : public ::upb::reffed_ptr<const ::upb::MessageDef> {
   public:
    MapBoolStringEntry(const ::upb::MessageDef* m, const void *ref_donor = NULL)
        : reffed_ptr(m, ref_donor) {
      UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_is(m));
    }

    static MapBoolStringEntry get() {
      const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_MapBoolStringEntry_get(&m);
      return MapBoolStringEntry(m, &m);
    }
  };

  class MapInt32StringEntry : public ::upb::reffed_ptr<const ::upb::MessageDef> {
   public:
    MapInt32StringEntry(const ::upb::MessageDef* m, const void *ref_donor = NULL)
        : reffed_ptr(m, ref_donor) {
      UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_is(m));
    }

    static MapInt32StringEntry get() {
      const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_MapInt32StringEntry_get(&m);
      return MapInt32StringEntry(m, &m);
    }
  };

  class MapStringBoolEntry : public ::upb::reffed_ptr<const ::upb::MessageDef> {
   public:
    MapStringBoolEntry(const ::upb::MessageDef* m, const void *ref_donor = NULL)
        : reffed_ptr(m, ref_donor) {
      UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_is(m));
    }

    static MapStringBoolEntry get() {
      const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_MapStringBoolEntry_get(&m);
      return MapStringBoolEntry(m, &m);
    }
  };

  class MapStringInt32Entry : public ::upb::reffed_ptr<const ::upb::MessageDef> {
   public:
    MapStringInt32Entry(const ::upb::MessageDef* m, const void *ref_donor = NULL)
        : reffed_ptr(m, ref_donor) {
      UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_is(m));
    }

    static MapStringInt32Entry get() {
      const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_MapStringInt32Entry_get(&m);
      return MapStringInt32Entry(m, &m);
    }
  };

  class MapStringMsgEntry : public ::upb::reffed_ptr<const ::upb::MessageDef> {
   public:
    MapStringMsgEntry(const ::upb::MessageDef* m, const void *ref_donor = NULL)
        : reffed_ptr(m, ref_donor) {
      UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_is(m));
    }

    static MapStringMsgEntry get() {
      const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_MapStringMsgEntry_get(&m);
      return MapStringMsgEntry(m, &m);
    }
  };

  class MapStringStringEntry : public ::upb::reffed_ptr<const ::upb::MessageDef> {
   public:
    MapStringStringEntry(const ::upb::MessageDef* m, const void *ref_donor = NULL)
        : reffed_ptr(m, ref_donor) {
      UPB_ASSERT(upbdefs_upb_test_json_TestMessage_MapStringStringEntry_is(m));
    }

    static MapStringStringEntry get() {
      const ::upb::MessageDef* m = upbdefs_upb_test_json_TestMessage_MapStringStringEntry_get(&m);
      return MapStringStringEntry(m, &m);
    }
  };
};

}  /* namespace json */
}  /* namespace test */
}  /* namespace upb */
}  /* namespace upbdefs */

#endif  /* __cplusplus */

#endif  /* TESTS_JSON_TEST_PROTO_UPB_H_ */
