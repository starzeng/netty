// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRespProto.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MessageRespProto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
class MessageResp_ValuesEntryDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MessageResp::MessageResp_ValuesEntry> {
} _MessageResp_ValuesEntry_default_instance_;
class MessageRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MessageResp> {
} _MessageResp_default_instance_;

namespace protobuf_MessageRespProto_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageResp, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageResp, code_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MessageResp, values_),
  0,
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 7, sizeof(MessageResp)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_MessageResp_ValuesEntry_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_MessageResp_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "MessageRespProto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
file_level_metadata[0].reflection = MessageResp::MessageResp_ValuesEntry::CreateReflection(file_level_metadata[0].descriptor, _MessageResp_ValuesEntry_default_instance_.get_mutable());
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace

void TableStruct::Shutdown() {
  _MessageResp_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _MessageResp_ValuesEntry_default_instance_.DefaultConstruct();
  _MessageResp_default_instance_.DefaultConstruct();
  _MessageResp_ValuesEntry_default_instance_.get_mutable()->set_default_instance(_MessageResp_ValuesEntry_default_instance_.get_mutable());
  _MessageResp_ValuesEntry_default_instance_.get_mutable()->InitAsDefaultInstance();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\026MessageRespProto.proto\"t\n\013MessageResp\022"
      "\014\n\004code\030\001 \001(\005\022(\n\006values\030\002 \003(\0132\030.MessageR"
      "esp.ValuesEntry\032-\n\013ValuesEntry\022\013\n\003key\030\001 "
      "\001(\t\022\r\n\005value\030\002 \001(\t:\0028\001B\022B\020MessageRespPro"
      "to"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 162);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MessageRespProto.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_MessageRespProto_2eproto


// ===================================================================

MessageResp::MessageResp_ValuesEntry::MessageResp_ValuesEntry() {}
MessageResp::MessageResp_ValuesEntry::MessageResp_ValuesEntry(::google::protobuf::Arena* arena) : SuperType(arena) {}
::google::protobuf::Metadata MessageResp::MessageResp_ValuesEntry::GetMetadata() const {
  protobuf_MessageRespProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_MessageRespProto_2eproto::file_level_metadata[0];
}
void MessageResp::MessageResp_ValuesEntry::MergeFrom(
    const ::google::protobuf::Message& other) {
  ::google::protobuf::Message::MergeFrom(other);
}
void MessageResp::MessageResp_ValuesEntry::MergeFrom(const MessageResp_ValuesEntry& other) {
  MergeFromInternal(other);
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MessageResp::kCodeFieldNumber;
const int MessageResp::kValuesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MessageResp::MessageResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_MessageRespProto_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:MessageResp)
}
MessageResp::MessageResp(const MessageResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  values_.MergeFrom(from.values_);
  code_ = from.code_;
  // @@protoc_insertion_point(copy_constructor:MessageResp)
}

void MessageResp::SharedCtor() {
  _cached_size_ = 0;
  code_ = 0;
}

MessageResp::~MessageResp() {
  // @@protoc_insertion_point(destructor:MessageResp)
  SharedDtor();
}

void MessageResp::SharedDtor() {
}

void MessageResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MessageResp::descriptor() {
  protobuf_MessageRespProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_MessageRespProto_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MessageResp& MessageResp::default_instance() {
  protobuf_MessageRespProto_2eproto::InitDefaults();
  return *internal_default_instance();
}

MessageResp* MessageResp::New(::google::protobuf::Arena* arena) const {
  MessageResp* n = new MessageResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MessageResp::Clear() {
// @@protoc_insertion_point(message_clear_start:MessageResp)
  values_.Clear();
  code_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MessageResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MessageResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          set_has_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &code_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // map<string, string> values = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u)) {
          MessageResp_ValuesEntry::Parser< ::google::protobuf::internal::MapField<
              MessageResp_ValuesEntry,
              ::std::string, ::std::string,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
              0 >,
            ::google::protobuf::Map< ::std::string, ::std::string > > parser(&values_);
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, &parser));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            parser.key().data(), parser.key().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MessageResp.ValuesEntry.key");
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            parser.value().data(), parser.value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "MessageResp.ValuesEntry.value");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MessageResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MessageResp)
  return false;
#undef DO_
}

void MessageResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MessageResp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 code = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->code(), output);
  }

  // map<string, string> values = 2;
  if (!this->values().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormat::SERIALIZE,
          "MessageResp.ValuesEntry.key");
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormat::SERIALIZE,
          "MessageResp.ValuesEntry.value");
      }
    };

    if (output->IsSerializationDeterministic() &&
        this->values().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->values().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->values().begin();
          it != this->values().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<MessageResp_ValuesEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(values_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<MessageResp_ValuesEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->values().begin();
          it != this->values().end(); ++it) {
        entry.reset(values_.NewEntryWrapper(
            it->first, it->second));
        ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
            2, *entry, output);
        Utf8Check::Check(&*it);
      }
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MessageResp)
}

::google::protobuf::uint8* MessageResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MessageResp)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 code = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->code(), target);
  }

  // map<string, string> values = 2;
  if (!this->values().empty()) {
    typedef ::google::protobuf::Map< ::std::string, ::std::string >::const_pointer
        ConstPtr;
    typedef ConstPtr SortItem;
    typedef ::google::protobuf::internal::CompareByDerefFirst<SortItem> Less;
    struct Utf8Check {
      static void Check(ConstPtr p) {
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
          p->first.data(), p->first.length(),
          ::google::protobuf::internal::WireFormat::SERIALIZE,
          "MessageResp.ValuesEntry.key");
        ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
          p->second.data(), p->second.length(),
          ::google::protobuf::internal::WireFormat::SERIALIZE,
          "MessageResp.ValuesEntry.value");
      }
    };

    if (deterministic &&
        this->values().size() > 1) {
      ::google::protobuf::scoped_array<SortItem> items(
          new SortItem[this->values().size()]);
      typedef ::google::protobuf::Map< ::std::string, ::std::string >::size_type size_type;
      size_type n = 0;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->values().begin();
          it != this->values().end(); ++it, ++n) {
        items[n] = SortItem(&*it);
      }
      ::std::sort(&items[0], &items[n], Less());
      ::google::protobuf::scoped_ptr<MessageResp_ValuesEntry> entry;
      for (size_type i = 0; i < n; i++) {
        entry.reset(values_.NewEntryWrapper(
            items[i]->first, items[i]->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        Utf8Check::Check(items[i]);
      }
    } else {
      ::google::protobuf::scoped_ptr<MessageResp_ValuesEntry> entry;
      for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
          it = this->values().begin();
          it != this->values().end(); ++it) {
        entry.reset(values_.NewEntryWrapper(
            it->first, it->second));
        target = ::google::protobuf::internal::WireFormatLite::
                   InternalWriteMessageNoVirtualToArray(
                       2, *entry, deterministic, target);
;
        Utf8Check::Check(&*it);
      }
    }
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MessageResp)
  return target;
}

size_t MessageResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MessageResp)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // map<string, string> values = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->values_size());
  {
    ::google::protobuf::scoped_ptr<MessageResp_ValuesEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::std::string >::const_iterator
        it = this->values().begin();
        it != this->values().end(); ++it) {
      entry.reset(values_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  // optional int32 code = 1;
  if (has_code()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->code());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MessageResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:MessageResp)
  GOOGLE_DCHECK_NE(&from, this);
  const MessageResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MessageResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:MessageResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:MessageResp)
    MergeFrom(*source);
  }
}

void MessageResp::MergeFrom(const MessageResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:MessageResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  values_.MergeFrom(from.values_);
  if (from.has_code()) {
    set_code(from.code());
  }
}

void MessageResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:MessageResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MessageResp::CopyFrom(const MessageResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MessageResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageResp::IsInitialized() const {
  return true;
}

void MessageResp::Swap(MessageResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MessageResp::InternalSwap(MessageResp* other) {
  values_.Swap(&other->values_);
  std::swap(code_, other->code_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MessageResp::GetMetadata() const {
  protobuf_MessageRespProto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_MessageRespProto_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MessageResp

// optional int32 code = 1;
bool MessageResp::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MessageResp::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
void MessageResp::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
void MessageResp::clear_code() {
  code_ = 0;
  clear_has_code();
}
::google::protobuf::int32 MessageResp::code() const {
  // @@protoc_insertion_point(field_get:MessageResp.code)
  return code_;
}
void MessageResp::set_code(::google::protobuf::int32 value) {
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:MessageResp.code)
}

// map<string, string> values = 2;
int MessageResp::values_size() const {
  return values_.size();
}
void MessageResp::clear_values() {
  values_.Clear();
}
 const ::google::protobuf::Map< ::std::string, ::std::string >&
MessageResp::values() const {
  // @@protoc_insertion_point(field_map:MessageResp.values)
  return values_.GetMap();
}
 ::google::protobuf::Map< ::std::string, ::std::string >*
MessageResp::mutable_values() {
  // @@protoc_insertion_point(field_mutable_map:MessageResp.values)
  return values_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)