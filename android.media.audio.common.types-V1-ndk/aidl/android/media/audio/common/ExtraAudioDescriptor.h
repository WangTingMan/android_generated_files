/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 985ad49c876a50c60c726dc87f60cb598fd087ad --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging/android/media/audio/common/ExtraAudioDescriptor.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1/android/media/audio/common/ExtraAudioDescriptor.aidl
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
#include <aidl/android/media/audio/common/AudioEncapsulationType.h>
#include <aidl/android/media/audio/common/AudioStandard.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDMEDIAAUDIOCOMMONTYPESV1NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV1NDK_EXPORTS_API ExtraAudioDescriptor {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::media::audio::common::AudioStandard standard = ::aidl::android::media::audio::common::AudioStandard::NONE;
  std::vector<uint8_t> audioDescriptor;
  ::aidl::android::media::audio::common::AudioEncapsulationType encapsulationType = ::aidl::android::media::audio::common::AudioEncapsulationType::NONE;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ExtraAudioDescriptor& _rhs) const {
    return std::tie(standard, audioDescriptor, encapsulationType) == std::tie(_rhs.standard, _rhs.audioDescriptor, _rhs.encapsulationType);
  }
  inline bool operator<(const ExtraAudioDescriptor& _rhs) const {
    return std::tie(standard, audioDescriptor, encapsulationType) < std::tie(_rhs.standard, _rhs.audioDescriptor, _rhs.encapsulationType);
  }
  inline bool operator!=(const ExtraAudioDescriptor& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ExtraAudioDescriptor& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ExtraAudioDescriptor& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ExtraAudioDescriptor& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ExtraAudioDescriptor{";
    _aidl_os << "standard: " << ::android::internal::ToString(standard);
    _aidl_os << ", audioDescriptor: " << ::android::internal::ToString(audioDescriptor);
    _aidl_os << ", encapsulationType: " << ::android::internal::ToString(encapsulationType);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
