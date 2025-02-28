/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/Lc3Capabilities.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/Lc3Capabilities.aidl
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
#include <aidl/android/hardware/bluetooth/audio/ChannelMode.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API Lc3Capabilities {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::vector<uint8_t> pcmBitDepth;
  std::vector<int32_t> samplingFrequencyHz;
  std::vector<int32_t> frameDurationUs;
  std::vector<int32_t> octetsPerFrame;
  std::vector<uint8_t> blocksPerSdu;
  std::vector<::aidl::android::hardware::bluetooth::audio::ChannelMode> channelMode;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Lc3Capabilities& _rhs) const {
    return std::tie(pcmBitDepth, samplingFrequencyHz, frameDurationUs, octetsPerFrame, blocksPerSdu, channelMode) == std::tie(_rhs.pcmBitDepth, _rhs.samplingFrequencyHz, _rhs.frameDurationUs, _rhs.octetsPerFrame, _rhs.blocksPerSdu, _rhs.channelMode);
  }
  inline bool operator<(const Lc3Capabilities& _rhs) const {
    return std::tie(pcmBitDepth, samplingFrequencyHz, frameDurationUs, octetsPerFrame, blocksPerSdu, channelMode) < std::tie(_rhs.pcmBitDepth, _rhs.samplingFrequencyHz, _rhs.frameDurationUs, _rhs.octetsPerFrame, _rhs.blocksPerSdu, _rhs.channelMode);
  }
  inline bool operator!=(const Lc3Capabilities& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Lc3Capabilities& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Lc3Capabilities& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Lc3Capabilities& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Lc3Capabilities{";
    _aidl_os << "pcmBitDepth: " << ::android::internal::ToString(pcmBitDepth);
    _aidl_os << ", samplingFrequencyHz: " << ::android::internal::ToString(samplingFrequencyHz);
    _aidl_os << ", frameDurationUs: " << ::android::internal::ToString(frameDurationUs);
    _aidl_os << ", octetsPerFrame: " << ::android::internal::ToString(octetsPerFrame);
    _aidl_os << ", blocksPerSdu: " << ::android::internal::ToString(blocksPerSdu);
    _aidl_os << ", channelMode: " << ::android::internal::ToString(channelMode);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
