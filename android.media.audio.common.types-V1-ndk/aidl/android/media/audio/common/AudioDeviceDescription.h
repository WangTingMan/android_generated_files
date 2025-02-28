/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 985ad49c876a50c60c726dc87f60cb598fd087ad -t --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging/android/media/audio/common/AudioDeviceDescription.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1/android/media/audio/common/AudioDeviceDescription.aidl
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
#include <aidl/android/media/audio/common/AudioDeviceType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class AudioDeviceDescription {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::media::audio::common::AudioDeviceType type = ::aidl::android::media::audio::common::AudioDeviceType::NONE;
  std::string connection;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioDeviceDescription& _rhs) const {
    return std::tie(type, connection) == std::tie(_rhs.type, _rhs.connection);
  }
  inline bool operator<(const AudioDeviceDescription& _rhs) const {
    return std::tie(type, connection) < std::tie(_rhs.type, _rhs.connection);
  }
  inline bool operator!=(const AudioDeviceDescription& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioDeviceDescription& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioDeviceDescription& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioDeviceDescription& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  static const char* CONNECTION_ANALOG;
  static const char* CONNECTION_BT_A2DP;
  static const char* CONNECTION_BT_LE;
  static const char* CONNECTION_BT_SCO;
  static const char* CONNECTION_BUS;
  static const char* CONNECTION_HDMI;
  static const char* CONNECTION_HDMI_ARC;
  static const char* CONNECTION_HDMI_EARC;
  static const char* CONNECTION_IP_V4;
  static const char* CONNECTION_SPDIF;
  static const char* CONNECTION_WIRELESS;
  static const char* CONNECTION_USB;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioDeviceDescription{";
    _aidl_os << "type: " << ::android::internal::ToString(type);
    _aidl_os << ", connection: " << ::android::internal::ToString(connection);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
