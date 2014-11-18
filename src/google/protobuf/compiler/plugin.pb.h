// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/compiler/plugin.proto

#ifndef PROTOBUF_google_2fprotobuf_2fcompiler_2fplugin_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fcompiler_2fplugin_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006002 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "google/protobuf/descriptor.pb.h"
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {
namespace compiler {

// Internal implementation detail -- do not call these.
void LIBPROTOC_EXPORT protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2fcompiler_2fplugin_2eproto();

class CodeGeneratorRequest;
class CodeGeneratorResponse;
class CodeGeneratorResponse_File;

// ===================================================================

class LIBPROTOC_EXPORT CodeGeneratorRequest : public ::google::protobuf::Message {
 public:
  CodeGeneratorRequest();
  virtual ~CodeGeneratorRequest();

  CodeGeneratorRequest(const CodeGeneratorRequest& from);

  inline CodeGeneratorRequest& operator=(const CodeGeneratorRequest& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CodeGeneratorRequest& default_instance();

  void Swap(CodeGeneratorRequest* other);

  // implements Message ----------------------------------------------

  inline CodeGeneratorRequest* New() const { return New(NULL); }

  CodeGeneratorRequest* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CodeGeneratorRequest& from);
  void MergeFrom(const CodeGeneratorRequest& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CodeGeneratorRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string file_to_generate = 1;
  inline int file_to_generate_size() const;
  inline void clear_file_to_generate();
  static const int kFileToGenerateFieldNumber = 1;
  inline const ::std::string& file_to_generate(int index) const;
  inline ::std::string* mutable_file_to_generate(int index);
  inline void set_file_to_generate(int index, const ::std::string& value);
  inline void set_file_to_generate(int index, const char* value);
  inline void set_file_to_generate(int index, const char* value, size_t size);
  inline ::std::string* add_file_to_generate();
  inline void add_file_to_generate(const ::std::string& value);
  inline void add_file_to_generate(const char* value);
  inline void add_file_to_generate(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& file_to_generate() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_file_to_generate();

  // optional string parameter = 2;
  inline bool has_parameter() const;
  inline void clear_parameter();
  static const int kParameterFieldNumber = 2;
  inline const ::std::string& parameter() const;
  inline void set_parameter(const ::std::string& value);
  inline void set_parameter(const char* value);
  inline void set_parameter(const char* value, size_t size);
  inline ::std::string* mutable_parameter();
  inline ::std::string* release_parameter();
  inline void set_allocated_parameter(::std::string* parameter);

  // repeated .google.protobuf.FileDescriptorProto proto_file = 15;
  inline int proto_file_size() const;
  inline void clear_proto_file();
  static const int kProtoFileFieldNumber = 15;
  inline const ::google::protobuf::FileDescriptorProto& proto_file(int index) const;
  inline ::google::protobuf::FileDescriptorProto* mutable_proto_file(int index);
  inline ::google::protobuf::FileDescriptorProto* add_proto_file();
  inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >&
      proto_file() const;
  inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >*
      mutable_proto_file();

  // @@protoc_insertion_point(class_scope:google.protobuf.compiler.CodeGeneratorRequest)
 private:
  inline void set_has_parameter();
  inline void clear_has_parameter();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> file_to_generate_;
  ::google::protobuf::internal::ArenaStringPtr parameter_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto > proto_file_;
  friend void LIBPROTOC_EXPORT protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fcompiler_2fplugin_2eproto();

  void InitAsDefaultInstance();
  static CodeGeneratorRequest* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOC_EXPORT CodeGeneratorResponse_File : public ::google::protobuf::Message {
 public:
  CodeGeneratorResponse_File();
  virtual ~CodeGeneratorResponse_File();

  CodeGeneratorResponse_File(const CodeGeneratorResponse_File& from);

  inline CodeGeneratorResponse_File& operator=(const CodeGeneratorResponse_File& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CodeGeneratorResponse_File& default_instance();

  void Swap(CodeGeneratorResponse_File* other);

  // implements Message ----------------------------------------------

  inline CodeGeneratorResponse_File* New() const { return New(NULL); }

  CodeGeneratorResponse_File* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CodeGeneratorResponse_File& from);
  void MergeFrom(const CodeGeneratorResponse_File& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CodeGeneratorResponse_File* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // optional string insertion_point = 2;
  inline bool has_insertion_point() const;
  inline void clear_insertion_point();
  static const int kInsertionPointFieldNumber = 2;
  inline const ::std::string& insertion_point() const;
  inline void set_insertion_point(const ::std::string& value);
  inline void set_insertion_point(const char* value);
  inline void set_insertion_point(const char* value, size_t size);
  inline ::std::string* mutable_insertion_point();
  inline ::std::string* release_insertion_point();
  inline void set_allocated_insertion_point(::std::string* insertion_point);

  // optional string content = 15;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 15;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // @@protoc_insertion_point(class_scope:google.protobuf.compiler.CodeGeneratorResponse.File)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_insertion_point();
  inline void clear_has_insertion_point();
  inline void set_has_content();
  inline void clear_has_content();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr insertion_point_;
  ::google::protobuf::internal::ArenaStringPtr content_;
  friend void LIBPROTOC_EXPORT protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fcompiler_2fplugin_2eproto();

  void InitAsDefaultInstance();
  static CodeGeneratorResponse_File* default_instance_;
};
// -------------------------------------------------------------------

class LIBPROTOC_EXPORT CodeGeneratorResponse : public ::google::protobuf::Message {
 public:
  CodeGeneratorResponse();
  virtual ~CodeGeneratorResponse();

  CodeGeneratorResponse(const CodeGeneratorResponse& from);

  inline CodeGeneratorResponse& operator=(const CodeGeneratorResponse& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CodeGeneratorResponse& default_instance();

  void Swap(CodeGeneratorResponse* other);

  // implements Message ----------------------------------------------

  inline CodeGeneratorResponse* New() const { return New(NULL); }

  CodeGeneratorResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CodeGeneratorResponse& from);
  void MergeFrom(const CodeGeneratorResponse& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(CodeGeneratorResponse* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef CodeGeneratorResponse_File File;

  // accessors -------------------------------------------------------

  // optional string error = 1;
  inline bool has_error() const;
  inline void clear_error();
  static const int kErrorFieldNumber = 1;
  inline const ::std::string& error() const;
  inline void set_error(const ::std::string& value);
  inline void set_error(const char* value);
  inline void set_error(const char* value, size_t size);
  inline ::std::string* mutable_error();
  inline ::std::string* release_error();
  inline void set_allocated_error(::std::string* error);

  // repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
  inline int file_size() const;
  inline void clear_file();
  static const int kFileFieldNumber = 15;
  inline const ::google::protobuf::compiler::CodeGeneratorResponse_File& file(int index) const;
  inline ::google::protobuf::compiler::CodeGeneratorResponse_File* mutable_file(int index);
  inline ::google::protobuf::compiler::CodeGeneratorResponse_File* add_file();
  inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File >&
      file() const;
  inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File >*
      mutable_file();

  // @@protoc_insertion_point(class_scope:google.protobuf.compiler.CodeGeneratorResponse)
 private:
  inline void set_has_error();
  inline void clear_has_error();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr error_;
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File > file_;
  friend void LIBPROTOC_EXPORT protobuf_AddDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fcompiler_2fplugin_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fcompiler_2fplugin_2eproto();

  void InitAsDefaultInstance();
  static CodeGeneratorResponse* default_instance_;
};
// ===================================================================


// ===================================================================

// CodeGeneratorRequest

// repeated string file_to_generate = 1;
inline int CodeGeneratorRequest::file_to_generate_size() const {
  return file_to_generate_.size();
}
inline void CodeGeneratorRequest::clear_file_to_generate() {
  file_to_generate_.Clear();
}
inline const ::std::string& CodeGeneratorRequest::file_to_generate(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_.Get(index);
}
inline ::std::string* CodeGeneratorRequest::mutable_file_to_generate(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_.Mutable(index);
}
inline void CodeGeneratorRequest::set_file_to_generate(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  file_to_generate_.Mutable(index)->assign(value);
}
inline void CodeGeneratorRequest::set_file_to_generate(int index, const char* value) {
  file_to_generate_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
inline void CodeGeneratorRequest::set_file_to_generate(int index, const char* value, size_t size) {
  file_to_generate_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
inline ::std::string* CodeGeneratorRequest::add_file_to_generate() {
  return file_to_generate_.Add();
}
inline void CodeGeneratorRequest::add_file_to_generate(const ::std::string& value) {
  file_to_generate_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
inline void CodeGeneratorRequest::add_file_to_generate(const char* value) {
  file_to_generate_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
inline void CodeGeneratorRequest::add_file_to_generate(const char* value, size_t size) {
  file_to_generate_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CodeGeneratorRequest::file_to_generate() const {
  // @@protoc_insertion_point(field_list:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return file_to_generate_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CodeGeneratorRequest::mutable_file_to_generate() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.compiler.CodeGeneratorRequest.file_to_generate)
  return &file_to_generate_;
}

// optional string parameter = 2;
inline bool CodeGeneratorRequest::has_parameter() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CodeGeneratorRequest::set_has_parameter() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CodeGeneratorRequest::clear_has_parameter() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CodeGeneratorRequest::clear_parameter() {
  parameter_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_parameter();
}
inline const ::std::string& CodeGeneratorRequest::parameter() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorRequest.parameter)
  return parameter_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorRequest::set_parameter(const ::std::string& value) {
  set_has_parameter();
  parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}
inline void CodeGeneratorRequest::set_parameter(const char* value) {
  set_has_parameter();
  parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}
inline void CodeGeneratorRequest::set_parameter(const char* value, size_t size) {
  set_has_parameter();
  parameter_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}
inline ::std::string* CodeGeneratorRequest::mutable_parameter() {
  set_has_parameter();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorRequest.parameter)
  return parameter_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeGeneratorRequest::release_parameter() {
  clear_has_parameter();
  return parameter_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorRequest::set_allocated_parameter(::std::string* parameter) {
  if (parameter != NULL) {
    set_has_parameter();
  } else {
    clear_has_parameter();
  }
  parameter_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), parameter);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorRequest.parameter)
}

// repeated .google.protobuf.FileDescriptorProto proto_file = 15;
inline int CodeGeneratorRequest::proto_file_size() const {
  return proto_file_.size();
}
inline void CodeGeneratorRequest::clear_proto_file() {
  proto_file_.Clear();
}
inline const ::google::protobuf::FileDescriptorProto& CodeGeneratorRequest::proto_file(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_.Get(index);
}
inline ::google::protobuf::FileDescriptorProto* CodeGeneratorRequest::mutable_proto_file(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_.Mutable(index);
}
inline ::google::protobuf::FileDescriptorProto* CodeGeneratorRequest::add_proto_file() {
  // @@protoc_insertion_point(field_add:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >&
CodeGeneratorRequest::proto_file() const {
  // @@protoc_insertion_point(field_list:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return proto_file_;
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::FileDescriptorProto >*
CodeGeneratorRequest::mutable_proto_file() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.compiler.CodeGeneratorRequest.proto_file)
  return &proto_file_;
}

// -------------------------------------------------------------------

// CodeGeneratorResponse_File

// optional string name = 1;
inline bool CodeGeneratorResponse_File::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CodeGeneratorResponse_File::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CodeGeneratorResponse_File::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CodeGeneratorResponse_File::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& CodeGeneratorResponse_File::name() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.File.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse_File::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}
inline void CodeGeneratorResponse_File::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}
inline void CodeGeneratorResponse_File::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}
inline ::std::string* CodeGeneratorResponse_File::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.File.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeGeneratorResponse_File::release_name() {
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse_File::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.File.name)
}

// optional string insertion_point = 2;
inline bool CodeGeneratorResponse_File::has_insertion_point() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CodeGeneratorResponse_File::set_has_insertion_point() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CodeGeneratorResponse_File::clear_has_insertion_point() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CodeGeneratorResponse_File::clear_insertion_point() {
  insertion_point_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_insertion_point();
}
inline const ::std::string& CodeGeneratorResponse_File::insertion_point() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
  return insertion_point_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse_File::set_insertion_point(const ::std::string& value) {
  set_has_insertion_point();
  insertion_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}
inline void CodeGeneratorResponse_File::set_insertion_point(const char* value) {
  set_has_insertion_point();
  insertion_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}
inline void CodeGeneratorResponse_File::set_insertion_point(const char* value, size_t size) {
  set_has_insertion_point();
  insertion_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}
inline ::std::string* CodeGeneratorResponse_File::mutable_insertion_point() {
  set_has_insertion_point();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
  return insertion_point_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeGeneratorResponse_File::release_insertion_point() {
  clear_has_insertion_point();
  return insertion_point_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse_File::set_allocated_insertion_point(::std::string* insertion_point) {
  if (insertion_point != NULL) {
    set_has_insertion_point();
  } else {
    clear_has_insertion_point();
  }
  insertion_point_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), insertion_point);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.File.insertion_point)
}

// optional string content = 15;
inline bool CodeGeneratorResponse_File::has_content() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CodeGeneratorResponse_File::set_has_content() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CodeGeneratorResponse_File::clear_has_content() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CodeGeneratorResponse_File::clear_content() {
  content_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_content();
}
inline const ::std::string& CodeGeneratorResponse_File::content() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.File.content)
  return content_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse_File::set_content(const ::std::string& value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}
inline void CodeGeneratorResponse_File::set_content(const char* value) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}
inline void CodeGeneratorResponse_File::set_content(const char* value, size_t size) {
  set_has_content();
  content_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}
inline ::std::string* CodeGeneratorResponse_File::mutable_content() {
  set_has_content();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.File.content)
  return content_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeGeneratorResponse_File::release_content() {
  clear_has_content();
  return content_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse_File::set_allocated_content(::std::string* content) {
  if (content != NULL) {
    set_has_content();
  } else {
    clear_has_content();
  }
  content_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), content);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.File.content)
}

// -------------------------------------------------------------------

// CodeGeneratorResponse

// optional string error = 1;
inline bool CodeGeneratorResponse::has_error() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CodeGeneratorResponse::set_has_error() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CodeGeneratorResponse::clear_has_error() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CodeGeneratorResponse::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_error();
}
inline const ::std::string& CodeGeneratorResponse::error() const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.error)
  return error_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse::set_error(const ::std::string& value) {
  set_has_error();
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.compiler.CodeGeneratorResponse.error)
}
inline void CodeGeneratorResponse::set_error(const char* value) {
  set_has_error();
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.compiler.CodeGeneratorResponse.error)
}
inline void CodeGeneratorResponse::set_error(const char* value, size_t size) {
  set_has_error();
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.compiler.CodeGeneratorResponse.error)
}
inline ::std::string* CodeGeneratorResponse::mutable_error() {
  set_has_error();
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CodeGeneratorResponse::release_error() {
  clear_has_error();
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CodeGeneratorResponse::set_allocated_error(::std::string* error) {
  if (error != NULL) {
    set_has_error();
  } else {
    clear_has_error();
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.compiler.CodeGeneratorResponse.error)
}

// repeated .google.protobuf.compiler.CodeGeneratorResponse.File file = 15;
inline int CodeGeneratorResponse::file_size() const {
  return file_.size();
}
inline void CodeGeneratorResponse::clear_file() {
  file_.Clear();
}
inline const ::google::protobuf::compiler::CodeGeneratorResponse_File& CodeGeneratorResponse::file(int index) const {
  // @@protoc_insertion_point(field_get:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_.Get(index);
}
inline ::google::protobuf::compiler::CodeGeneratorResponse_File* CodeGeneratorResponse::mutable_file(int index) {
  // @@protoc_insertion_point(field_mutable:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_.Mutable(index);
}
inline ::google::protobuf::compiler::CodeGeneratorResponse_File* CodeGeneratorResponse::add_file() {
  // @@protoc_insertion_point(field_add:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File >&
CodeGeneratorResponse::file() const {
  // @@protoc_insertion_point(field_list:google.protobuf.compiler.CodeGeneratorResponse.file)
  return file_;
}
inline ::google::protobuf::RepeatedPtrField< ::google::protobuf::compiler::CodeGeneratorResponse_File >*
CodeGeneratorResponse::mutable_file() {
  // @@protoc_insertion_point(field_mutable_list:google.protobuf.compiler.CodeGeneratorResponse.file)
  return &file_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace compiler
}  // namespace protobuf
}  // namespace google

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fcompiler_2fplugin_2eproto__INCLUDED
