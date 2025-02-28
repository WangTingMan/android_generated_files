/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/LeAudioCodecCapabilitiesSetting.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/LeAudioCodecCapabilitiesSetting.aidl
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
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BroadcastCapability.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/UnicastCapability.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::vendor::mediatek::hardware::bluetooth::audio {
class BroadcastCapability;
class UnicastCapability;
}  // namespace aidl::vendor::mediatek::hardware::bluetooth::audio
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class LeAudioCodecCapabilitiesSetting {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::vendor::mediatek::hardware::bluetooth::audio::UnicastCapability unicastEncodeCapability;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::UnicastCapability unicastDecodeCapability;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::BroadcastCapability broadcastCapability;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const LeAudioCodecCapabilitiesSetting& _rhs) const {
    return std::tie(unicastEncodeCapability, unicastDecodeCapability, broadcastCapability) == std::tie(_rhs.unicastEncodeCapability, _rhs.unicastDecodeCapability, _rhs.broadcastCapability);
  }
  inline bool operator<(const LeAudioCodecCapabilitiesSetting& _rhs) const {
    return std::tie(unicastEncodeCapability, unicastDecodeCapability, broadcastCapability) < std::tie(_rhs.unicastEncodeCapability, _rhs.unicastDecodeCapability, _rhs.broadcastCapability);
  }
  inline bool operator!=(const LeAudioCodecCapabilitiesSetting& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const LeAudioCodecCapabilitiesSetting& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const LeAudioCodecCapabilitiesSetting& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const LeAudioCodecCapabilitiesSetting& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "LeAudioCodecCapabilitiesSetting{";
    _aidl_os << "unicastEncodeCapability: " << ::android::internal::ToString(unicastEncodeCapability);
    _aidl_os << ", unicastDecodeCapability: " << ::android::internal::ToString(unicastDecodeCapability);
    _aidl_os << ", broadcastCapability: " << ::android::internal::ToString(broadcastCapability);
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
