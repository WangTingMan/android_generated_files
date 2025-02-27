/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 79bbabfe33e09450c7fc6120bd45f5339f3c7584 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging/android/media/audio/common/AudioHalProductStrategy.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2/android/media/audio/common/AudioHalProductStrategy.aidl
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
#include <aidl/android/media/audio/common/AudioHalAttributesGroup.h>
#include <aidl/android/media/audio/common/AudioProductStrategyType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::media::audio::common {
class AudioHalAttributesGroup;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class AudioHalProductStrategy {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t id = -1;
  std::vector<::aidl::android::media::audio::common::AudioHalAttributesGroup> attributesGroups;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioHalProductStrategy& _rhs) const {
    return std::tie(id, attributesGroups) == std::tie(_rhs.id, _rhs.attributesGroups);
  }
  inline bool operator<(const AudioHalProductStrategy& _rhs) const {
    return std::tie(id, attributesGroups) < std::tie(_rhs.id, _rhs.attributesGroups);
  }
  inline bool operator!=(const AudioHalProductStrategy& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioHalProductStrategy& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioHalProductStrategy& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioHalProductStrategy& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { VENDOR_STRATEGY_ID_START = 1000 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioHalProductStrategy{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", attributesGroups: " << ::android::internal::ToString(attributesGroups);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
