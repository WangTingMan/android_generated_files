/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 57ce9506b87e721f0d994b16d7cd16a494f699b9 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V3-ndk-source/gen/staging/android/hardware/audio/common/RecordTrackMetadata.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V3-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/3 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/3/android/hardware/audio/common/RecordTrackMetadata.aidl
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
#include <aidl/android/media/audio/common/AudioDevice.h>
#include <aidl/android/media/audio/common/AudioSource.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "ANDROIDHARDWAREAUDIOCOMMONV3NDK_EXPORTS_.h"

namespace aidl::android::media::audio::common {
class AudioDevice;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
class ANDROIDHARDWAREAUDIOCOMMONV3NDK_API RecordTrackMetadata {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "android.hardware.audio.common.RecordTrackMetadata";

  ::aidl::android::media::audio::common::AudioSource source = ::aidl::android::media::audio::common::AudioSource::SYS_RESERVED_INVALID;
  float gain = 0.000000f;
  std::optional<::aidl::android::media::audio::common::AudioDevice> destinationDevice;
  ::aidl::android::media::audio::common::AudioChannelLayout channelMask;
  std::vector<std::string> tags;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const RecordTrackMetadata& _rhs) const {
    return std::tie(source, gain, destinationDevice, channelMask, tags) == std::tie(_rhs.source, _rhs.gain, _rhs.destinationDevice, _rhs.channelMask, _rhs.tags);
  }
  inline bool operator<(const RecordTrackMetadata& _rhs) const {
    return std::tie(source, gain, destinationDevice, channelMask, tags) < std::tie(_rhs.source, _rhs.gain, _rhs.destinationDevice, _rhs.channelMask, _rhs.tags);
  }
  inline bool operator!=(const RecordTrackMetadata& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const RecordTrackMetadata& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const RecordTrackMetadata& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const RecordTrackMetadata& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "RecordTrackMetadata{";
    _aidl_os << "source: " << ::android::internal::ToString(source);
    _aidl_os << ", gain: " << ::android::internal::ToString(gain);
    _aidl_os << ", destinationDevice: " << ::android::internal::ToString(destinationDevice);
    _aidl_os << ", channelMask: " << ::android::internal::ToString(channelMask);
    _aidl_os << ", tags: " << ::android::internal::ToString(tags);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
