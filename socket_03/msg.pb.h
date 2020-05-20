// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_msg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_msg_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_msg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_msg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_msg_2eproto;
namespace Data {
class FinalMsg;
class FinalMsgDefaultTypeInternal;
extern FinalMsgDefaultTypeInternal _FinalMsg_default_instance_;
class Point;
class PointDefaultTypeInternal;
extern PointDefaultTypeInternal _Point_default_instance_;
class Vector;
class VectorDefaultTypeInternal;
extern VectorDefaultTypeInternal _Vector_default_instance_;
}  // namespace Data
PROTOBUF_NAMESPACE_OPEN
template<> ::Data::FinalMsg* Arena::CreateMaybeMessage<::Data::FinalMsg>(Arena*);
template<> ::Data::Point* Arena::CreateMaybeMessage<::Data::Point>(Arena*);
template<> ::Data::Vector* Arena::CreateMaybeMessage<::Data::Vector>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Data {

enum MsgType : int {
  Vec = 0,
  Pnt = 1,
  MsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  MsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool MsgType_IsValid(int value);
constexpr MsgType MsgType_MIN = Vec;
constexpr MsgType MsgType_MAX = Pnt;
constexpr int MsgType_ARRAYSIZE = MsgType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MsgType_descriptor();
template<typename T>
inline const std::string& MsgType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, MsgType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function MsgType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    MsgType_descriptor(), enum_t_value);
}
inline bool MsgType_Parse(
    const std::string& name, MsgType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<MsgType>(
    MsgType_descriptor(), name, value);
}
// ===================================================================

class Vector :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Data.Vector) */ {
 public:
  Vector();
  virtual ~Vector();

  Vector(const Vector& from);
  Vector(Vector&& from) noexcept
    : Vector() {
    *this = ::std::move(from);
  }

  inline Vector& operator=(const Vector& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector& operator=(Vector&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Vector& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector* internal_default_instance() {
    return reinterpret_cast<const Vector*>(
               &_Vector_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vector& a, Vector& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vector* New() const final {
    return CreateMaybeMessage<Vector>(nullptr);
  }

  Vector* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vector>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vector& from);
  void MergeFrom(const Vector& from);
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
  void InternalSwap(Vector* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Data.Vector";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_msg_2eproto);
    return ::descriptor_table_msg_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVxFieldNumber = 1,
    kVyFieldNumber = 2,
    kVzFieldNumber = 3,
  };
  // int32 vx = 1;
  void clear_vx();
  ::PROTOBUF_NAMESPACE_ID::int32 vx() const;
  void set_vx(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 vy = 2;
  void clear_vy();
  ::PROTOBUF_NAMESPACE_ID::int32 vy() const;
  void set_vy(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 vz = 3;
  void clear_vz();
  ::PROTOBUF_NAMESPACE_ID::int32 vz() const;
  void set_vz(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:Data.Vector)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int32 vx_;
  ::PROTOBUF_NAMESPACE_ID::int32 vy_;
  ::PROTOBUF_NAMESPACE_ID::int32 vz_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msg_2eproto;
};
// -------------------------------------------------------------------

class Point :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Data.Point) */ {
 public:
  Point();
  virtual ~Point();

  Point(const Point& from);
  Point(Point&& from) noexcept
    : Point() {
    *this = ::std::move(from);
  }

  inline Point& operator=(const Point& from) {
    CopyFrom(from);
    return *this;
  }
  inline Point& operator=(Point&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const Point& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Point* internal_default_instance() {
    return reinterpret_cast<const Point*>(
               &_Point_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Point& a, Point& b) {
    a.Swap(&b);
  }
  inline void Swap(Point* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Point* New() const final {
    return CreateMaybeMessage<Point>(nullptr);
  }

  Point* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Point>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Point& from);
  void MergeFrom(const Point& from);
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
  void InternalSwap(Point* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Data.Point";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_msg_2eproto);
    return ::descriptor_table_msg_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPxFieldNumber = 1,
    kPyFieldNumber = 2,
    kPzFieldNumber = 3,
  };
  // float px = 1;
  void clear_px();
  float px() const;
  void set_px(float value);

  // float py = 2;
  void clear_py();
  float py() const;
  void set_py(float value);

  // float pz = 3;
  void clear_pz();
  float pz() const;
  void set_pz(float value);

  // @@protoc_insertion_point(class_scope:Data.Point)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  float px_;
  float py_;
  float pz_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msg_2eproto;
};
// -------------------------------------------------------------------

class FinalMsg :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Data.FinalMsg) */ {
 public:
  FinalMsg();
  virtual ~FinalMsg();

  FinalMsg(const FinalMsg& from);
  FinalMsg(FinalMsg&& from) noexcept
    : FinalMsg() {
    *this = ::std::move(from);
  }

  inline FinalMsg& operator=(const FinalMsg& from) {
    CopyFrom(from);
    return *this;
  }
  inline FinalMsg& operator=(FinalMsg&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const FinalMsg& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FinalMsg* internal_default_instance() {
    return reinterpret_cast<const FinalMsg*>(
               &_FinalMsg_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(FinalMsg& a, FinalMsg& b) {
    a.Swap(&b);
  }
  inline void Swap(FinalMsg* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FinalMsg* New() const final {
    return CreateMaybeMessage<FinalMsg>(nullptr);
  }

  FinalMsg* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FinalMsg>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FinalMsg& from);
  void MergeFrom(const FinalMsg& from);
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
  void InternalSwap(FinalMsg* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Data.FinalMsg";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_msg_2eproto);
    return ::descriptor_table_msg_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsernameFieldNumber = 1,
    kPasswordFieldNumber = 2,
    kVectorFieldNumber = 4,
    kPointFieldNumber = 5,
    kMsgTypeFieldNumber = 3,
  };
  // string username = 1;
  void clear_username();
  const std::string& username() const;
  void set_username(const std::string& value);
  void set_username(std::string&& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  std::string* mutable_username();
  std::string* release_username();
  void set_allocated_username(std::string* username);

  // string password = 2;
  void clear_password();
  const std::string& password() const;
  void set_password(const std::string& value);
  void set_password(std::string&& value);
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  std::string* mutable_password();
  std::string* release_password();
  void set_allocated_password(std::string* password);

  // .Data.Vector vector = 4;
  bool has_vector() const;
  void clear_vector();
  const ::Data::Vector& vector() const;
  ::Data::Vector* release_vector();
  ::Data::Vector* mutable_vector();
  void set_allocated_vector(::Data::Vector* vector);

  // .Data.Point point = 5;
  bool has_point() const;
  void clear_point();
  const ::Data::Point& point() const;
  ::Data::Point* release_point();
  ::Data::Point* mutable_point();
  void set_allocated_point(::Data::Point* point);

  // .Data.MsgType msgType = 3;
  void clear_msgtype();
  ::Data::MsgType msgtype() const;
  void set_msgtype(::Data::MsgType value);

  // @@protoc_insertion_point(class_scope:Data.FinalMsg)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr password_;
  ::Data::Vector* vector_;
  ::Data::Point* point_;
  int msgtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_msg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector

// int32 vx = 1;
inline void Vector::clear_vx() {
  vx_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Vector::vx() const {
  // @@protoc_insertion_point(field_get:Data.Vector.vx)
  return vx_;
}
inline void Vector::set_vx(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  vx_ = value;
  // @@protoc_insertion_point(field_set:Data.Vector.vx)
}

// int32 vy = 2;
inline void Vector::clear_vy() {
  vy_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Vector::vy() const {
  // @@protoc_insertion_point(field_get:Data.Vector.vy)
  return vy_;
}
inline void Vector::set_vy(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  vy_ = value;
  // @@protoc_insertion_point(field_set:Data.Vector.vy)
}

// int32 vz = 3;
inline void Vector::clear_vz() {
  vz_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Vector::vz() const {
  // @@protoc_insertion_point(field_get:Data.Vector.vz)
  return vz_;
}
inline void Vector::set_vz(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  vz_ = value;
  // @@protoc_insertion_point(field_set:Data.Vector.vz)
}

// -------------------------------------------------------------------

// Point

// float px = 1;
inline void Point::clear_px() {
  px_ = 0;
}
inline float Point::px() const {
  // @@protoc_insertion_point(field_get:Data.Point.px)
  return px_;
}
inline void Point::set_px(float value) {
  
  px_ = value;
  // @@protoc_insertion_point(field_set:Data.Point.px)
}

// float py = 2;
inline void Point::clear_py() {
  py_ = 0;
}
inline float Point::py() const {
  // @@protoc_insertion_point(field_get:Data.Point.py)
  return py_;
}
inline void Point::set_py(float value) {
  
  py_ = value;
  // @@protoc_insertion_point(field_set:Data.Point.py)
}

// float pz = 3;
inline void Point::clear_pz() {
  pz_ = 0;
}
inline float Point::pz() const {
  // @@protoc_insertion_point(field_get:Data.Point.pz)
  return pz_;
}
inline void Point::set_pz(float value) {
  
  pz_ = value;
  // @@protoc_insertion_point(field_set:Data.Point.pz)
}

// -------------------------------------------------------------------

// FinalMsg

// string username = 1;
inline void FinalMsg::clear_username() {
  username_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& FinalMsg::username() const {
  // @@protoc_insertion_point(field_get:Data.FinalMsg.username)
  return username_.GetNoArena();
}
inline void FinalMsg::set_username(const std::string& value) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Data.FinalMsg.username)
}
inline void FinalMsg::set_username(std::string&& value) {
  
  username_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Data.FinalMsg.username)
}
inline void FinalMsg::set_username(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Data.FinalMsg.username)
}
inline void FinalMsg::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Data.FinalMsg.username)
}
inline std::string* FinalMsg::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:Data.FinalMsg.username)
  return username_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* FinalMsg::release_username() {
  // @@protoc_insertion_point(field_release:Data.FinalMsg.username)
  
  return username_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void FinalMsg::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:Data.FinalMsg.username)
}

// string password = 2;
inline void FinalMsg::clear_password() {
  password_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& FinalMsg::password() const {
  // @@protoc_insertion_point(field_get:Data.FinalMsg.password)
  return password_.GetNoArena();
}
inline void FinalMsg::set_password(const std::string& value) {
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Data.FinalMsg.password)
}
inline void FinalMsg::set_password(std::string&& value) {
  
  password_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Data.FinalMsg.password)
}
inline void FinalMsg::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Data.FinalMsg.password)
}
inline void FinalMsg::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Data.FinalMsg.password)
}
inline std::string* FinalMsg::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:Data.FinalMsg.password)
  return password_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* FinalMsg::release_password() {
  // @@protoc_insertion_point(field_release:Data.FinalMsg.password)
  
  return password_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void FinalMsg::set_allocated_password(std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:Data.FinalMsg.password)
}

// .Data.MsgType msgType = 3;
inline void FinalMsg::clear_msgtype() {
  msgtype_ = 0;
}
inline ::Data::MsgType FinalMsg::msgtype() const {
  // @@protoc_insertion_point(field_get:Data.FinalMsg.msgType)
  return static_cast< ::Data::MsgType >(msgtype_);
}
inline void FinalMsg::set_msgtype(::Data::MsgType value) {
  
  msgtype_ = value;
  // @@protoc_insertion_point(field_set:Data.FinalMsg.msgType)
}

// .Data.Vector vector = 4;
inline bool FinalMsg::has_vector() const {
  return this != internal_default_instance() && vector_ != nullptr;
}
inline void FinalMsg::clear_vector() {
  if (GetArenaNoVirtual() == nullptr && vector_ != nullptr) {
    delete vector_;
  }
  vector_ = nullptr;
}
inline const ::Data::Vector& FinalMsg::vector() const {
  const ::Data::Vector* p = vector_;
  // @@protoc_insertion_point(field_get:Data.FinalMsg.vector)
  return p != nullptr ? *p : *reinterpret_cast<const ::Data::Vector*>(
      &::Data::_Vector_default_instance_);
}
inline ::Data::Vector* FinalMsg::release_vector() {
  // @@protoc_insertion_point(field_release:Data.FinalMsg.vector)
  
  ::Data::Vector* temp = vector_;
  vector_ = nullptr;
  return temp;
}
inline ::Data::Vector* FinalMsg::mutable_vector() {
  
  if (vector_ == nullptr) {
    auto* p = CreateMaybeMessage<::Data::Vector>(GetArenaNoVirtual());
    vector_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Data.FinalMsg.vector)
  return vector_;
}
inline void FinalMsg::set_allocated_vector(::Data::Vector* vector) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete vector_;
  }
  if (vector) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      vector = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, vector, submessage_arena);
    }
    
  } else {
    
  }
  vector_ = vector;
  // @@protoc_insertion_point(field_set_allocated:Data.FinalMsg.vector)
}

// .Data.Point point = 5;
inline bool FinalMsg::has_point() const {
  return this != internal_default_instance() && point_ != nullptr;
}
inline void FinalMsg::clear_point() {
  if (GetArenaNoVirtual() == nullptr && point_ != nullptr) {
    delete point_;
  }
  point_ = nullptr;
}
inline const ::Data::Point& FinalMsg::point() const {
  const ::Data::Point* p = point_;
  // @@protoc_insertion_point(field_get:Data.FinalMsg.point)
  return p != nullptr ? *p : *reinterpret_cast<const ::Data::Point*>(
      &::Data::_Point_default_instance_);
}
inline ::Data::Point* FinalMsg::release_point() {
  // @@protoc_insertion_point(field_release:Data.FinalMsg.point)
  
  ::Data::Point* temp = point_;
  point_ = nullptr;
  return temp;
}
inline ::Data::Point* FinalMsg::mutable_point() {
  
  if (point_ == nullptr) {
    auto* p = CreateMaybeMessage<::Data::Point>(GetArenaNoVirtual());
    point_ = p;
  }
  // @@protoc_insertion_point(field_mutable:Data.FinalMsg.point)
  return point_;
}
inline void FinalMsg::set_allocated_point(::Data::Point* point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete point_;
  }
  if (point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, point, submessage_arena);
    }
    
  } else {
    
  }
  point_ = point;
  // @@protoc_insertion_point(field_set_allocated:Data.FinalMsg.point)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace Data

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Data::MsgType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Data::MsgType>() {
  return ::Data::MsgType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_msg_2eproto
