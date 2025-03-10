/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 985ad49c876a50c60c726dc87f60cb598fd087ad --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging/android/media/audio/common/AudioPort.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1/android/media/audio/common/AudioPort.aidl
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
#include <aidl/android/media/audio/common/AudioGain.h>
#include <aidl/android/media/audio/common/AudioIoFlags.h>
#include <aidl/android/media/audio/common/AudioPortExt.h>
#include <aidl/android/media/audio/common/AudioProfile.h>
#include <aidl/android/media/audio/common/ExtraAudioDescriptor.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDMEDIAAUDIOCOMMONTYPESV1NDK_EXPORTS.h"
namespace aidl::android::media::audio::common {
class AudioGain;
class AudioProfile;
class ExtraAudioDescriptor;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV1NDK_EXPORTS_API AudioPort {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t id = 0;
  std::string name;
  std::vector<::aidl::android::media::audio::common::AudioProfile> profiles;
  ::aidl::android::media::audio::common::AudioIoFlags flags;
  std::vector<::aidl::android::media::audio::common::ExtraAudioDescriptor> extraAudioDescriptors;
  std::vector<::aidl::android::media::audio::common::AudioGain> gains;
  ::aidl::android::media::audio::common::AudioPortExt ext;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioPort& _rhs) const {
    return std::tie(id, name, profiles, flags, extraAudioDescriptors, gains, ext) == std::tie(_rhs.id, _rhs.name, _rhs.profiles, _rhs.flags, _rhs.extraAudioDescriptors, _rhs.gains, _rhs.ext);
  }
  inline bool operator<(const AudioPort& _rhs) const {
    return std::tie(id, name, profiles, flags, extraAudioDescriptors, gains, ext) < std::tie(_rhs.id, _rhs.name, _rhs.profiles, _rhs.flags, _rhs.extraAudioDescriptors, _rhs.gains, _rhs.ext);
  }
  inline bool operator!=(const AudioPort& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioPort& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioPort& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioPort& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioPort{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", name: " << ::android::internal::ToString(name);
    _aidl_os << ", profiles: " << ::android::internal::ToString(profiles);
    _aidl_os << ", flags: " << ::android::internal::ToString(flags);
    _aidl_os << ", extraAudioDescriptors: " << ::android::internal::ToString(extraAudioDescriptors);
    _aidl_os << ", gains: " << ::android::internal::ToString(gains);
    _aidl_os << ", ext: " << ::android::internal::ToString(ext);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
