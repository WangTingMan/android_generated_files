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

#include "ANDROIDHARDWAREAUDIOCOMMONV2NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
class ANDROIDHARDWAREAUDIOCOMMONV2NDK_API AudioOffloadMetadata {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "android.hardware.audio.common.AudioOffloadMetadata";

  int32_t sampleRate = 0;
  ::aidl::android::media::audio::common::AudioChannelLayout channelMask;
  int32_t averageBitRatePerSecond = 0;
  int32_t delayFrames = 0;
  int32_t paddingFrames = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator!=(const AudioOffloadMetadata& rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) != std::tie(rhs.sampleRate, rhs.channelMask, rhs.averageBitRatePerSecond, rhs.delayFrames, rhs.paddingFrames);
  }
  inline bool operator<(const AudioOffloadMetadata& rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) < std::tie(rhs.sampleRate, rhs.channelMask, rhs.averageBitRatePerSecond, rhs.delayFrames, rhs.paddingFrames);
  }
  inline bool operator<=(const AudioOffloadMetadata& rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) <= std::tie(rhs.sampleRate, rhs.channelMask, rhs.averageBitRatePerSecond, rhs.delayFrames, rhs.paddingFrames);
  }
  inline bool operator==(const AudioOffloadMetadata& rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) == std::tie(rhs.sampleRate, rhs.channelMask, rhs.averageBitRatePerSecond, rhs.delayFrames, rhs.paddingFrames);
  }
  inline bool operator>(const AudioOffloadMetadata& rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) > std::tie(rhs.sampleRate, rhs.channelMask, rhs.averageBitRatePerSecond, rhs.delayFrames, rhs.paddingFrames);
  }
  inline bool operator>=(const AudioOffloadMetadata& rhs) const {
    return std::tie(sampleRate, channelMask, averageBitRatePerSecond, delayFrames, paddingFrames) >= std::tie(rhs.sampleRate, rhs.channelMask, rhs.averageBitRatePerSecond, rhs.delayFrames, rhs.paddingFrames);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream os;
    os << "AudioOffloadMetadata{";
    os << "sampleRate: " << ::android::internal::ToString(sampleRate);
    os << ", channelMask: " << ::android::internal::ToString(channelMask);
    os << ", averageBitRatePerSecond: " << ::android::internal::ToString(averageBitRatePerSecond);
    os << ", delayFrames: " << ::android::internal::ToString(delayFrames);
    os << ", paddingFrames: " << ::android::internal::ToString(paddingFrames);
    os << "}";
    return os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
