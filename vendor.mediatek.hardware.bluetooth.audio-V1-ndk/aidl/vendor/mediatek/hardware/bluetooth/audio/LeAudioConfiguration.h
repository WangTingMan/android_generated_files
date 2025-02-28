/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/LeAudioConfiguration.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/LeAudioConfiguration.aidl
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
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/CodecType.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LeAudioCodecConfiguration.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LeAudioConfiguration.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class LeAudioConfiguration {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  class StreamMap {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    char16_t streamHandle = '\0';
    int32_t audioChannelAllocation = 0;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const StreamMap& _rhs) const {
      return std::tie(streamHandle, audioChannelAllocation) == std::tie(_rhs.streamHandle, _rhs.audioChannelAllocation);
    }
    inline bool operator<(const StreamMap& _rhs) const {
      return std::tie(streamHandle, audioChannelAllocation) < std::tie(_rhs.streamHandle, _rhs.audioChannelAllocation);
    }
    inline bool operator!=(const StreamMap& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const StreamMap& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const StreamMap& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const StreamMap& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "StreamMap{";
      _aidl_os << "streamHandle: " << ::android::internal::ToString(streamHandle);
      _aidl_os << ", audioChannelAllocation: " << ::android::internal::ToString(audioChannelAllocation);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType codecType = ::aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType(0);
  std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::LeAudioConfiguration::StreamMap> streamMap;
  int32_t peerDelayUs = 0;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::LeAudioCodecConfiguration leAudioCodecConfig;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const LeAudioConfiguration& _rhs) const {
    return std::tie(codecType, streamMap, peerDelayUs, leAudioCodecConfig) == std::tie(_rhs.codecType, _rhs.streamMap, _rhs.peerDelayUs, _rhs.leAudioCodecConfig);
  }
  inline bool operator<(const LeAudioConfiguration& _rhs) const {
    return std::tie(codecType, streamMap, peerDelayUs, leAudioCodecConfig) < std::tie(_rhs.codecType, _rhs.streamMap, _rhs.peerDelayUs, _rhs.leAudioCodecConfig);
  }
  inline bool operator!=(const LeAudioConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const LeAudioConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const LeAudioConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const LeAudioConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "LeAudioConfiguration{";
    _aidl_os << "codecType: " << ::android::internal::ToString(codecType);
    _aidl_os << ", streamMap: " << ::android::internal::ToString(streamMap);
    _aidl_os << ", peerDelayUs: " << ::android::internal::ToString(peerDelayUs);
    _aidl_os << ", leAudioCodecConfig: " << ::android::internal::ToString(leAudioCodecConfig);
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
