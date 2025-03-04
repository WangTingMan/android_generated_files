/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 -t --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging/android/media/audio/common/AudioGainConfig.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/AudioGainConfig.aidl
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
#include "ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API AudioGainConfig {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t index = 0;
  int32_t mode = 0;
  ::aidl::android::media::audio::common::AudioChannelLayout channelMask;
  std::vector<int32_t> values;
  int32_t rampDurationMs = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioGainConfig& _rhs) const {
    return std::tie(index, mode, channelMask, values, rampDurationMs) == std::tie(_rhs.index, _rhs.mode, _rhs.channelMask, _rhs.values, _rhs.rampDurationMs);
  }
  inline bool operator<(const AudioGainConfig& _rhs) const {
    return std::tie(index, mode, channelMask, values, rampDurationMs) < std::tie(_rhs.index, _rhs.mode, _rhs.channelMask, _rhs.values, _rhs.rampDurationMs);
  }
  inline bool operator!=(const AudioGainConfig& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioGainConfig& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioGainConfig& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioGainConfig& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioGainConfig{";
    _aidl_os << "index: " << ::android::internal::ToString(index);
    _aidl_os << ", mode: " << ::android::internal::ToString(mode);
    _aidl_os << ", channelMask: " << ::android::internal::ToString(channelMask);
    _aidl_os << ", values: " << ::android::internal::ToString(values);
    _aidl_os << ", rampDurationMs: " << ::android::internal::ToString(rampDurationMs);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
