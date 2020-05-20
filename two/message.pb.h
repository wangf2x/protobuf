// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_message_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_message_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_message_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_message_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_message_2eproto;
class my_message;
class my_messageDefaultTypeInternal;
extern my_messageDefaultTypeInternal _my_message_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::my_message* Arena::CreateMaybeMessage<::my_message>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class my_message :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:my_message) */ {
 public:
  my_message();
  virtual ~my_message();

  my_message(const my_message& from);
  my_message(my_message&& from) noexcept
    : my_message() {
    *this = ::std::move(from);
  }

  inline my_message& operator=(const my_message& from) {
    CopyFrom(from);
    return *this;
  }
  inline my_message& operator=(my_message&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const my_message& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const my_message* internal_default_instance() {
    return reinterpret_cast<const my_message*>(
               &_my_message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(my_message& a, my_message& b) {
    a.Swap(&b);
  }
  inline void Swap(my_message* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline my_message* New() const final {
    return CreateMaybeMessage<my_message>(nullptr);
  }

  my_message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<my_message>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const my_message& from);
  void MergeFrom(const my_message& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(my_message* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "my_message";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_message_2eproto);
    return ::descriptor_table_message_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWordFieldNumber = 1,
    kNumberFieldNumber = 2,
  };
  // required string word = 1;
  bool has_word() const;
  void clear_word();
  const std::string& word() const;
  void set_word(const std::string& value);
  void set_word(std::string&& value);
  void set_word(const char* value);
  void set_word(const char* value, size_t size);
  std::string* mutable_word();
  std::string* release_word();
  void set_allocated_word(std::string* word);

  // required uint32 number = 2;
  bool has_number() const;
  void clear_number();
  ::PROTOBUF_NAMESPACE_ID::uint32 number() const;
  void set_number(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:my_message)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr word_;
  ::PROTOBUF_NAMESPACE_ID::uint32 number_;
  friend struct ::TableStruct_message_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// my_message

// required string word = 1;
inline bool my_message::has_word() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void my_message::clear_word() {
  word_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& my_message::word() const {
  // @@protoc_insertion_point(field_get:my_message.word)
  return word_.GetNoArena();
}
inline void my_message::set_word(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  word_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:my_message.word)
}
inline void my_message::set_word(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  word_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:my_message.word)
}
inline void my_message::set_word(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  word_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:my_message.word)
}
inline void my_message::set_word(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  word_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:my_message.word)
}
inline std::string* my_message::mutable_word() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:my_message.word)
  return word_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* my_message::release_word() {
  // @@protoc_insertion_point(field_release:my_message.word)
  if (!has_word()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return word_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void my_message::set_allocated_word(std::string* word) {
  if (word != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  word_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), word);
  // @@protoc_insertion_point(field_set_allocated:my_message.word)
}

// required uint32 number = 2;
inline bool my_message::has_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void my_message::clear_number() {
  number_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 my_message::number() const {
  // @@protoc_insertion_point(field_get:my_message.number)
  return number_;
}
inline void my_message::set_number(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  number_ = value;
  // @@protoc_insertion_point(field_set:my_message.number)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_message_2eproto