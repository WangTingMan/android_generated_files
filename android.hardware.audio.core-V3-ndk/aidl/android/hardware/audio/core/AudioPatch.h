/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash eb5f1f5af402830af56b50eb66bdd60fd8cc774e -t --stability vintf --min_sdk_version current -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/4/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.effect_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core.sounddose_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core-V3-ndk-source/gen/staging/android/hardware/audio/core/AudioPatch.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core-V3-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.core/3 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.core/3/android/hardware/audio/core/AudioPatch.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace core {
class AudioPatch {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t id = 0;
  std::vector<int32_t> sourcePortConfigIds;
  std::vector<int32_t> sinkPortConfigIds;
  int32_t minimumStreamBufferSizeFrames = 0;
  std::vector<int32_t> latenciesMs;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioPatch& _rhs) const {
    return std::tie(id, sourcePortConfigIds, sinkPortConfigIds, minimumStreamBufferSizeFrames, latenciesMs) == std::tie(_rhs.id, _rhs.sourcePortConfigIds, _rhs.sinkPortConfigIds, _rhs.minimumStreamBufferSizeFrames, _rhs.latenciesMs);
  }
  inline bool operator<(const AudioPatch& _rhs) const {
    return std::tie(id, sourcePortConfigIds, sinkPortConfigIds, minimumStreamBufferSizeFrames, latenciesMs) < std::tie(_rhs.id, _rhs.sourcePortConfigIds, _rhs.sinkPortConfigIds, _rhs.minimumStreamBufferSizeFrames, _rhs.latenciesMs);
  }
  inline bool operator!=(const AudioPatch& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioPatch& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioPatch& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioPatch& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioPatch{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", sourcePortConfigIds: " << ::android::internal::ToString(sourcePortConfigIds);
    _aidl_os << ", sinkPortConfigIds: " << ::android::internal::ToString(sinkPortConfigIds);
    _aidl_os << ", minimumStreamBufferSizeFrames: " << ::android::internal::ToString(minimumStreamBufferSizeFrames);
    _aidl_os << ", latenciesMs: " << ::android::internal::ToString(latenciesMs);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace core
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
