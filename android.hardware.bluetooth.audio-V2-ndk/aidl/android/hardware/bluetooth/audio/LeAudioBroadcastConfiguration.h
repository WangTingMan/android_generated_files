/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/LeAudioBroadcastConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/LeAudioBroadcastConfiguration.aidl
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
#include <aidl/android/hardware/bluetooth/audio/CodecType.h>
#include <aidl/android/hardware/bluetooth/audio/LeAudioBroadcastConfiguration.h>
#include <aidl/android/hardware/bluetooth/audio/LeAudioCodecConfiguration.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class LeAudioBroadcastConfiguration {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  class BroadcastStreamMap {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    char16_t streamHandle = '\0';
    int32_t audioChannelAllocation = 0;
    ::aidl::android::hardware::bluetooth::audio::LeAudioCodecConfiguration leAudioCodecConfig;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const BroadcastStreamMap& _rhs) const {
      return std::tie(streamHandle, audioChannelAllocation, leAudioCodecConfig) == std::tie(_rhs.streamHandle, _rhs.audioChannelAllocation, _rhs.leAudioCodecConfig);
    }
    inline bool operator<(const BroadcastStreamMap& _rhs) const {
      return std::tie(streamHandle, audioChannelAllocation, leAudioCodecConfig) < std::tie(_rhs.streamHandle, _rhs.audioChannelAllocation, _rhs.leAudioCodecConfig);
    }
    inline bool operator!=(const BroadcastStreamMap& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const BroadcastStreamMap& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const BroadcastStreamMap& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const BroadcastStreamMap& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "BroadcastStreamMap{";
      _aidl_os << "streamHandle: " << ::android::internal::ToString(streamHandle);
      _aidl_os << ", audioChannelAllocation: " << ::android::internal::ToString(audioChannelAllocation);
      _aidl_os << ", leAudioCodecConfig: " << ::android::internal::ToString(leAudioCodecConfig);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  ::aidl::android::hardware::bluetooth::audio::CodecType codecType = ::aidl::android::hardware::bluetooth::audio::CodecType(0);
  std::vector<::aidl::android::hardware::bluetooth::audio::LeAudioBroadcastConfiguration::BroadcastStreamMap> streamMap;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const LeAudioBroadcastConfiguration& _rhs) const {
    return std::tie(codecType, streamMap) == std::tie(_rhs.codecType, _rhs.streamMap);
  }
  inline bool operator<(const LeAudioBroadcastConfiguration& _rhs) const {
    return std::tie(codecType, streamMap) < std::tie(_rhs.codecType, _rhs.streamMap);
  }
  inline bool operator!=(const LeAudioBroadcastConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const LeAudioBroadcastConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const LeAudioBroadcastConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const LeAudioBroadcastConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "LeAudioBroadcastConfiguration{";
    _aidl_os << "codecType: " << ::android::internal::ToString(codecType);
    _aidl_os << ", streamMap: " << ::android::internal::ToString(streamMap);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
