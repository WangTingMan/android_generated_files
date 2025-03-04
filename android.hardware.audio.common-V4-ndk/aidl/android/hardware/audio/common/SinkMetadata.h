/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash 0ee71d2de1a8f272238a96f6da793744e6dd3e60 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V4-ndk-source/gen/staging/android/hardware/audio/common/SinkMetadata.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V4-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/4 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/4/android/hardware/audio/common/SinkMetadata.aidl
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
#include <aidl/android/hardware/audio/common/RecordTrackMetadata.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::audio::common {
class RecordTrackMetadata;
}  // namespace aidl::android::hardware::audio::common
namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
class SinkMetadata {
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
