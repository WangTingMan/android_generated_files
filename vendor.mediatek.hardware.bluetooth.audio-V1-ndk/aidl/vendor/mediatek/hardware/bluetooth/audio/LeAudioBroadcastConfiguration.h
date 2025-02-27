/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/LeAudioBroadcastConfiguration.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/LeAudioBroadcastConfiguration.aidl
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
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/CodecType.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LeAudioBroadcastConfiguration.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LeAudioCodecConfiguration.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace vendor {
namespace mediatek {
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
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::LeAudioCodecConfiguration leAudioCodecConfig;

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
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType codecType = ::aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType(0);
  std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::LeAudioBroadcastConfiguration::BroadcastStreamMap> streamMap;

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
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
