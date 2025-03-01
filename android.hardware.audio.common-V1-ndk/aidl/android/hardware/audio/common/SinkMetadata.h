/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 90d0a7ea5cee4579d33066885d8648f180387f55 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V1-ndk-source/gen/staging/android/hardware/audio/common/SinkMetadata.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V1-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/1 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/1/android/hardware/audio/common/SinkMetadata.aidl
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
