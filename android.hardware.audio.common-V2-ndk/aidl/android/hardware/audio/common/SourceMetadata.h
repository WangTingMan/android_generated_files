#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/hardware/audio/common/PlaybackTrackMetadata.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREAUDIOCOMMONV2NDK_EXPORTS_.h"

namespace aidl::android::hardware::audio::common {
class PlaybackTrackMetadata;
}  // namespace aidl::android::hardware::audio::common
namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
class ANDROIDHARDWAREAUDIOCOMMONV2NDK_API SourceMetadata {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::vector<::aidl::android::hardware::audio::common::PlaybackTrackMetadata> tracks;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator!=(const SourceMetadata& rhs) const {
    return std::tie(tracks) != std::tie(rhs.tracks);
  }
  inline bool operator<(const SourceMetadata& rhs) const {
    return std::tie(tracks) < std::tie(rhs.tracks);
  }
  inline bool operator<=(const SourceMetadata& rhs) const {
    return std::tie(tracks) <= std::tie(rhs.tracks);
  }
  inline bool operator==(const SourceMetadata& rhs) const {
    return std::tie(tracks) == std::tie(rhs.tracks);
  }
  inline bool operator>(const SourceMetadata& rhs) const {
    return std::tie(tracks) > std::tie(rhs.tracks);
  }
  inline bool operator>=(const SourceMetadata& rhs) const {
    return std::tie(tracks) >= std::tie(rhs.tracks);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream os;
    os << "SourceMetadata{";
    os << "tracks: " << ::android::internal::ToString(tracks);
    os << "}";
    return os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
