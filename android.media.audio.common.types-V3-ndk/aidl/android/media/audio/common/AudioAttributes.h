/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging/android/media/audio/common/AudioAttributes.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/AudioAttributes.aidl
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
#include <aidl/android/media/audio/common/AudioContentType.h>
#include <aidl/android/media/audio/common/AudioFlag.h>
#include <aidl/android/media/audio/common/AudioSource.h>
#include <aidl/android/media/audio/common/AudioUsage.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API AudioAttributes {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::media::audio::common::AudioContentType contentType = ::aidl::android::media::audio::common::AudioContentType::UNKNOWN;
  ::aidl::android::media::audio::common::AudioUsage usage = ::aidl::android::media::audio::common::AudioUsage::UNKNOWN;
  ::aidl::android::media::audio::common::AudioSource source = ::aidl::android::media::audio::common::AudioSource::DEFAULT;
  int32_t flags = 0;
  std::vector<std::string> tags;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioAttributes& _rhs) const {
    return std::tie(contentType, usage, source, flags, tags) == std::tie(_rhs.contentType, _rhs.usage, _rhs.source, _rhs.flags, _rhs.tags);
  }
  inline bool operator<(const AudioAttributes& _rhs) const {
    return std::tie(contentType, usage, source, flags, tags) < std::tie(_rhs.contentType, _rhs.usage, _rhs.source, _rhs.flags, _rhs.tags);
  }
  inline bool operator!=(const AudioAttributes& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioAttributes& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioAttributes& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioAttributes& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioAttributes{";
    _aidl_os << "contentType: " << ::android::internal::ToString(contentType);
    _aidl_os << ", usage: " << ::android::internal::ToString(usage);
    _aidl_os << ", source: " << ::android::internal::ToString(source);
    _aidl_os << ", flags: " << ::android::internal::ToString(flags);
    _aidl_os << ", tags: " << ::android::internal::ToString(tags);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
