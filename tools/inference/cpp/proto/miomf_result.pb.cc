// Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: miomf_result.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "miomf_result.pb.h"

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

namespace PaddleRec {
namespace infer {

namespace {

const ::google::protobuf::Descriptor* MioMFResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MioMFResult_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_miomf_5fresult_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_miomf_5fresult_2eproto() {
  protobuf_AddDesc_miomf_5fresult_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "miomf_result.proto");
  GOOGLE_CHECK(file != NULL);
  MioMFResult_descriptor_ = file->message_type(0);
  static const int MioMFResult_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, show_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, click_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, pred_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, weight_lr_person_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, weight_mf_),
  };
  MioMFResult_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MioMFResult_descriptor_,
      MioMFResult::internal_default_instance(),
      MioMFResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, _has_bits_),
      -1,
      -1,
      sizeof(MioMFResult),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MioMFResult, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_miomf_5fresult_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MioMFResult_descriptor_, MioMFResult::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_miomf_5fresult_2eproto() {
  MioMFResult_default_instance_.Shutdown();
  delete MioMFResult_reflection_;
}

void protobuf_InitDefaults_miomf_5fresult_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  MioMFResult_default_instance_.DefaultConstruct();
  MioMFResult_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_miomf_5fresult_2eproto_once_);
void protobuf_InitDefaults_miomf_5fresult_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_miomf_5fresult_2eproto_once_,
                 &protobuf_InitDefaults_miomf_5fresult_2eproto_impl);
}
void protobuf_AddDesc_miomf_5fresult_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_miomf_5fresult_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022miomf_result.proto\022\017PaddleRec.infer\"i\n"
    "\013MioMFResult\022\014\n\004show\030\002 \001(\022\022\r\n\005click\030\003 \001("
    "\022\022\014\n\004pred\030\004 \001(\021\022\030\n\020weight_lr_person\030\005 \001("
    "\021\022\025\n\tweight_mf\030\007 \003(\021B\002\020\001", 144);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "miomf_result.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_miomf_5fresult_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_miomf_5fresult_2eproto_once_);
void protobuf_AddDesc_miomf_5fresult_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_miomf_5fresult_2eproto_once_,
                 &protobuf_AddDesc_miomf_5fresult_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_miomf_5fresult_2eproto {
  StaticDescriptorInitializer_miomf_5fresult_2eproto() {
    protobuf_AddDesc_miomf_5fresult_2eproto();
  }
} static_descriptor_initializer_miomf_5fresult_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MioMFResult::kShowFieldNumber;
const int MioMFResult::kClickFieldNumber;
const int MioMFResult::kPredFieldNumber;
const int MioMFResult::kWeightLrPersonFieldNumber;
const int MioMFResult::kWeightMfFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MioMFResult::MioMFResult()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_miomf_5fresult_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:PaddleRec.infer.MioMFResult)
}

void MioMFResult::InitAsDefaultInstance() {
}

MioMFResult::MioMFResult(const MioMFResult& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PaddleRec.infer.MioMFResult)
}

void MioMFResult::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&show_, 0, reinterpret_cast<char*>(&weight_lr_person_) -
    reinterpret_cast<char*>(&show_) + sizeof(weight_lr_person_));
}

MioMFResult::~MioMFResult() {
  // @@protoc_insertion_point(destructor:PaddleRec.infer.MioMFResult)
  SharedDtor();
}

void MioMFResult::SharedDtor() {
}

void MioMFResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MioMFResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MioMFResult_descriptor_;
}

const MioMFResult& MioMFResult::default_instance() {
  protobuf_InitDefaults_miomf_5fresult_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<MioMFResult> MioMFResult_default_instance_;

MioMFResult* MioMFResult::New(::google::protobuf::Arena* arena) const {
  MioMFResult* n = new MioMFResult;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MioMFResult::Clear() {
// @@protoc_insertion_point(message_clear_start:PaddleRec.infer.MioMFResult)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(MioMFResult, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<MioMFResult*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(show_, weight_lr_person_);

#undef ZR_HELPER_
#undef ZR_

  weight_mf_.Clear();
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool MioMFResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PaddleRec.infer.MioMFResult)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional sint64 show = 2;
      case 2: {
        if (tag == 16) {
          set_has_show();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &show_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_click;
        break;
      }

      // optional sint64 click = 3;
      case 3: {
        if (tag == 24) {
         parse_click:
          set_has_click();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_SINT64>(
                 input, &click_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_pred;
        break;
      }

      // optional sint32 pred = 4;
      case 4: {
        if (tag == 32) {
         parse_pred:
          set_has_pred();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &pred_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_weight_lr_person;
        break;
      }

      // optional sint32 weight_lr_person = 5;
      case 5: {
        if (tag == 40) {
         parse_weight_lr_person:
          set_has_weight_lr_person();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, &weight_lr_person_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_weight_mf;
        break;
      }

      // repeated sint32 weight_mf = 7 [packed = true];
      case 7: {
        if (tag == 58) {
         parse_weight_mf:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 input, this->mutable_weight_mf())));
        } else if (tag == 56) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_SINT32>(
                 1, 58, input, this->mutable_weight_mf())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
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
  // @@protoc_insertion_point(parse_success:PaddleRec.infer.MioMFResult)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PaddleRec.infer.MioMFResult)
  return false;
#undef DO_
}

void MioMFResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PaddleRec.infer.MioMFResult)
  // optional sint64 show = 2;
  if (has_show()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(2, this->show(), output);
  }

  // optional sint64 click = 3;
  if (has_click()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt64(3, this->click(), output);
  }

  // optional sint32 pred = 4;
  if (has_pred()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(4, this->pred(), output);
  }

  // optional sint32 weight_lr_person = 5;
  if (has_weight_lr_person()) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32(5, this->weight_lr_person(), output);
  }

  // repeated sint32 weight_mf = 7 [packed = true];
  if (this->weight_mf_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(7, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_weight_mf_cached_byte_size_);
  }
  for (int i = 0; i < this->weight_mf_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteSInt32NoTag(
      this->weight_mf(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PaddleRec.infer.MioMFResult)
}

::google::protobuf::uint8* MioMFResult::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:PaddleRec.infer.MioMFResult)
  // optional sint64 show = 2;
  if (has_show()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt64ToArray(2, this->show(), target);
  }

  // optional sint64 click = 3;
  if (has_click()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt64ToArray(3, this->click(), target);
  }

  // optional sint32 pred = 4;
  if (has_pred()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(4, this->pred(), target);
  }

  // optional sint32 weight_lr_person = 5;
  if (has_weight_lr_person()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteSInt32ToArray(5, this->weight_lr_person(), target);
  }

  // repeated sint32 weight_mf = 7 [packed = true];
  if (this->weight_mf_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      7,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _weight_mf_cached_byte_size_, target);
  }
  for (int i = 0; i < this->weight_mf_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteSInt32NoTagToArray(this->weight_mf(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PaddleRec.infer.MioMFResult)
  return target;
}

size_t MioMFResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PaddleRec.infer.MioMFResult)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional sint64 show = 2;
    if (has_show()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt64Size(
          this->show());
    }

    // optional sint64 click = 3;
    if (has_click()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt64Size(
          this->click());
    }

    // optional sint32 pred = 4;
    if (has_pred()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->pred());
    }

    // optional sint32 weight_lr_person = 5;
    if (has_weight_lr_person()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::SInt32Size(
          this->weight_lr_person());
    }

  }
  // repeated sint32 weight_mf = 7 [packed = true];
  {
    size_t data_size = 0;
    unsigned int count = this->weight_mf_size();
    for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        SInt32Size(this->weight_mf(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _weight_mf_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MioMFResult::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:PaddleRec.infer.MioMFResult)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const MioMFResult* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MioMFResult>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:PaddleRec.infer.MioMFResult)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:PaddleRec.infer.MioMFResult)
    UnsafeMergeFrom(*source);
  }
}

void MioMFResult::MergeFrom(const MioMFResult& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PaddleRec.infer.MioMFResult)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void MioMFResult::UnsafeMergeFrom(const MioMFResult& from) {
  GOOGLE_DCHECK(&from != this);
  weight_mf_.UnsafeMergeFrom(from.weight_mf_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_show()) {
      set_show(from.show());
    }
    if (from.has_click()) {
      set_click(from.click());
    }
    if (from.has_pred()) {
      set_pred(from.pred());
    }
    if (from.has_weight_lr_person()) {
      set_weight_lr_person(from.weight_lr_person());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void MioMFResult::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:PaddleRec.infer.MioMFResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MioMFResult::CopyFrom(const MioMFResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PaddleRec.infer.MioMFResult)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool MioMFResult::IsInitialized() const {

  return true;
}

void MioMFResult::Swap(MioMFResult* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MioMFResult::InternalSwap(MioMFResult* other) {
  std::swap(show_, other->show_);
  std::swap(click_, other->click_);
  std::swap(pred_, other->pred_);
  std::swap(weight_lr_person_, other->weight_lr_person_);
  weight_mf_.UnsafeArenaSwap(&other->weight_mf_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MioMFResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MioMFResult_descriptor_;
  metadata.reflection = MioMFResult_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MioMFResult

// optional sint64 show = 2;
bool MioMFResult::has_show() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MioMFResult::set_has_show() {
  _has_bits_[0] |= 0x00000001u;
}
void MioMFResult::clear_has_show() {
  _has_bits_[0] &= ~0x00000001u;
}
void MioMFResult::clear_show() {
  show_ = GOOGLE_LONGLONG(0);
  clear_has_show();
}
::google::protobuf::int64 MioMFResult::show() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.show)
  return show_;
}
void MioMFResult::set_show(::google::protobuf::int64 value) {
  set_has_show();
  show_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.show)
}

// optional sint64 click = 3;
bool MioMFResult::has_click() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void MioMFResult::set_has_click() {
  _has_bits_[0] |= 0x00000002u;
}
void MioMFResult::clear_has_click() {
  _has_bits_[0] &= ~0x00000002u;
}
void MioMFResult::clear_click() {
  click_ = GOOGLE_LONGLONG(0);
  clear_has_click();
}
::google::protobuf::int64 MioMFResult::click() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.click)
  return click_;
}
void MioMFResult::set_click(::google::protobuf::int64 value) {
  set_has_click();
  click_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.click)
}

// optional sint32 pred = 4;
bool MioMFResult::has_pred() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void MioMFResult::set_has_pred() {
  _has_bits_[0] |= 0x00000004u;
}
void MioMFResult::clear_has_pred() {
  _has_bits_[0] &= ~0x00000004u;
}
void MioMFResult::clear_pred() {
  pred_ = 0;
  clear_has_pred();
}
::google::protobuf::int32 MioMFResult::pred() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.pred)
  return pred_;
}
void MioMFResult::set_pred(::google::protobuf::int32 value) {
  set_has_pred();
  pred_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.pred)
}

// optional sint32 weight_lr_person = 5;
bool MioMFResult::has_weight_lr_person() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void MioMFResult::set_has_weight_lr_person() {
  _has_bits_[0] |= 0x00000008u;
}
void MioMFResult::clear_has_weight_lr_person() {
  _has_bits_[0] &= ~0x00000008u;
}
void MioMFResult::clear_weight_lr_person() {
  weight_lr_person_ = 0;
  clear_has_weight_lr_person();
}
::google::protobuf::int32 MioMFResult::weight_lr_person() const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.weight_lr_person)
  return weight_lr_person_;
}
void MioMFResult::set_weight_lr_person(::google::protobuf::int32 value) {
  set_has_weight_lr_person();
  weight_lr_person_ = value;
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.weight_lr_person)
}

// repeated sint32 weight_mf = 7 [packed = true];
int MioMFResult::weight_mf_size() const {
  return weight_mf_.size();
}
void MioMFResult::clear_weight_mf() {
  weight_mf_.Clear();
}
::google::protobuf::int32 MioMFResult::weight_mf(int index) const {
  // @@protoc_insertion_point(field_get:PaddleRec.infer.MioMFResult.weight_mf)
  return weight_mf_.Get(index);
}
void MioMFResult::set_weight_mf(int index, ::google::protobuf::int32 value) {
  weight_mf_.Set(index, value);
  // @@protoc_insertion_point(field_set:PaddleRec.infer.MioMFResult.weight_mf)
}
void MioMFResult::add_weight_mf(::google::protobuf::int32 value) {
  weight_mf_.Add(value);
  // @@protoc_insertion_point(field_add:PaddleRec.infer.MioMFResult.weight_mf)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
MioMFResult::weight_mf() const {
  // @@protoc_insertion_point(field_list:PaddleRec.infer.MioMFResult.weight_mf)
  return weight_mf_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
MioMFResult::mutable_weight_mf() {
  // @@protoc_insertion_point(field_mutable_list:PaddleRec.infer.MioMFResult.weight_mf)
  return &weight_mf_;
}

inline const MioMFResult* MioMFResult::internal_default_instance() {
  return &MioMFResult_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace infer
}  // namespace PaddleRec

// @@protoc_insertion_point(global_scope)