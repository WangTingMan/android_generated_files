/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash 0ee71d2de1a8f272238a96f6da793744e6dd3e60 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V4-ndk-source/gen/staging/android/hardware/audio/common/AudioOffloadMetadata.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V4-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/4 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/4/android/hardware/audio/common/AudioOffloadMetadata.aidl
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
#include <aidl/android/media/audio/common/AudioChannelLayout.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREAUDIOCOMMONV4NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
class ANDROIDHARDWAREAUDIOCOMMONV4NDK_API AudioOffloadMetadata {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t sampleRate = 0;
  ::aidl::android::media::audio::common::AudioChannelLayout channelMask;
  int32_t averageBitRatePerSecond = 0;
  int32_t delayFrames = 0;
  int32_t paddingFrames = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioOffloadMetadata& _rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) == std::tie(_rhs.sampleRate, _rhs.channelMask, _rhs.averageBitRatePerSecond, _rhs.delayFrames, _rhs.paddingFrames);
  }
  inline bool operator<(const AudioOffloadMetadata& _rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) < std::tie(_rhs.sampleRate, _rhs.channelMask, _rhs.averageBitRatePerSecond, _rhs.delayFrames, _rhs.paddingFrames);
  }
  inline bool operator!=(const AudioOffloadMetadata& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioOffloadMetadata& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioOffloadMetadata& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioOffloadMetadata& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioOffloadMetadata{";
    _aidl_os << "sampleRate: " << ::android::internal::ToString(sampleRate);
    _aidl_os << ", channelMask: " << ::android::internal::ToString(channelMask);
    _aidl_os << ", averageBitRatePerSecond: " << ::android::internal::ToString(averageBitRatePerSecond);
    _aidl_os << ", delayFrames: " << ::android::internal::ToString(delayFrames);
    _aidl_os << ", paddingFrames: " << ::android::internal::ToString(paddingFrames);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
