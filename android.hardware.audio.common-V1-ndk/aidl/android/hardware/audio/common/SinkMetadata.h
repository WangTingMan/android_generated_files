#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/hardware/audio/common/RecordTrackMetadata.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS.h"

namespace aidl::android::hardware::audio::common {
class RecordTrackMetadata;
}  // namespace aidl::android::hardware::audio::common
namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
class ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS_API SinkMetadata {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::vector<::aidl::android::hardware::audio::common::RecordTrackMetadata> tracks;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const SinkMetadata& _rhs) const {
    return std::tie(tracks) == std::tie(_rhs.tracks);
  }
  inline bool operator<(const SinkMetadata& _rhs) const {
    return std::tie(tracks) < std::tie(_rhs.tracks);
  }
  inline bool operator!=(const SinkMetadata& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const SinkMetadata& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const SinkMetadata& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const SinkMetadata& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SinkMetadata{";
    _aidl_os << "tracks: " << ::android::internal::ToString(tracks);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
