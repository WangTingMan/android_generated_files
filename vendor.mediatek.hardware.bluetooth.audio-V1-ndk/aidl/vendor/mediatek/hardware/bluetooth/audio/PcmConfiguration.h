/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/PcmConfiguration.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/PcmConfiguration.aidl
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
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/ChannelMode.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LhdcLowLatencyEn.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API PcmConfiguration {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t sampleRateHz = 0;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::ChannelMode channelMode = ::aidl::vendor::mediatek::hardware::bluetooth::audio::ChannelMode(0);
  int8_t bitsPerSample = 0;
  int32_t dataIntervalUs = 0;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::LhdcLowLatencyEn isLowLatencyEnabled = ::aidl::vendor::mediatek::hardware::bluetooth::audio::LhdcLowLatencyEn(0);

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const PcmConfiguration& _rhs) const {
    return std::tie(sampleRateHz, channelMode, bitsPerSample, dataIntervalUs, isLowLatencyEnabled) == std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.bitsPerSample, _rhs.dataIntervalUs, _rhs.isLowLatencyEnabled);
  }
  inline bool operator<(const PcmConfiguration& _rhs) const {
    return std::tie(sampleRateHz, channelMode, bitsPerSample, dataIntervalUs, isLowLatencyEnabled) < std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.bitsPerSample, _rhs.dataIntervalUs, _rhs.isLowLatencyEnabled);
  }
  inline bool operator!=(const PcmConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const PcmConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const PcmConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const PcmConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "PcmConfiguration{";
    _aidl_os << "sampleRateHz: " << ::android::internal::ToString(sampleRateHz);
    _aidl_os << ", channelMode: " << ::android::internal::ToString(channelMode);
    _aidl_os << ", bitsPerSample: " << ::android::internal::ToString(bitsPerSample);
    _aidl_os << ", dataIntervalUs: " << ::android::internal::ToString(dataIntervalUs);
    _aidl_os << ", isLowLatencyEnabled: " << ::android::internal::ToString(isLowLatencyEnabled);
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
