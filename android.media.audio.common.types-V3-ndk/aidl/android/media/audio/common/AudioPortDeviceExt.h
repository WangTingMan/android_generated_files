/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging/android/media/audio/common/AudioPortDeviceExt.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/AudioPortDeviceExt.aidl
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
#include <aidl/android/media/audio/common/AudioDevice.h>
#include <aidl/android/media/audio/common/AudioFormatDescription.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS_.h"

namespace aidl::android::media::audio::common {
class AudioDevice;
class AudioFormatDescription;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API AudioPortDeviceExt {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::media::audio::common::AudioDevice device;
  int32_t flags = 0;
  std::vector<::aidl::android::media::audio::common::AudioFormatDescription> encodedFormats;
  int32_t encapsulationModes = 0;
  int32_t encapsulationMetadataTypes = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioPortDeviceExt& _rhs) const {
    return std::tie(device, flags, encodedFormats, encapsulationModes, encapsulationMetadataTypes) == std::tie(_rhs.device, _rhs.flags, _rhs.encodedFormats, _rhs.encapsulationModes, _rhs.encapsulationMetadataTypes);
  }
  inline bool operator<(const AudioPortDeviceExt& _rhs) const {
    return std::tie(device, flags, encodedFormats, encapsulationModes, encapsulationMetadataTypes) < std::tie(_rhs.device, _rhs.flags, _rhs.encodedFormats, _rhs.encapsulationModes, _rhs.encapsulationMetadataTypes);
  }
  inline bool operator!=(const AudioPortDeviceExt& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioPortDeviceExt& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioPortDeviceExt& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioPortDeviceExt& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { FLAG_INDEX_DEFAULT_DEVICE = 0 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioPortDeviceExt{";
    _aidl_os << "device: " << ::android::internal::ToString(device);
    _aidl_os << ", flags: " << ::android::internal::ToString(flags);
    _aidl_os << ", encodedFormats: " << ::android::internal::ToString(encodedFormats);
    _aidl_os << ", encapsulationModes: " << ::android::internal::ToString(encapsulationModes);
    _aidl_os << ", encapsulationMetadataTypes: " << ::android::internal::ToString(encapsulationMetadataTypes);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
