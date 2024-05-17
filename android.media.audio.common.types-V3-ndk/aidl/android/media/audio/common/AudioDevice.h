/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging/android/media/audio/common/AudioDevice.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/AudioDevice.aidl
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
#include <aidl/android/media/audio/common/AudioDeviceAddress.h>
#include <aidl/android/media/audio/common/AudioDeviceDescription.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS_.h"

namespace aidl::android::media::audio::common {
class AudioDeviceDescription;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API AudioDevice {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::media::audio::common::AudioDeviceDescription type;
  ::aidl::android::media::audio::common::AudioDeviceAddress address;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioDevice& _rhs) const {
    return std::tie(type, address) == std::tie(_rhs.type, _rhs.address);
  }
  inline bool operator<(const AudioDevice& _rhs) const {
    return std::tie(type, address) < std::tie(_rhs.type, _rhs.address);
  }
  inline bool operator!=(const AudioDevice& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioDevice& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioDevice& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioDevice& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioDevice{";
    _aidl_os << "type: " << ::android::internal::ToString(type);
    _aidl_os << ", address: " << ::android::internal::ToString(address);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl