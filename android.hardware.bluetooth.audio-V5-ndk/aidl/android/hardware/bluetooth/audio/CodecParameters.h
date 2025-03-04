/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 5 --hash 3ac4a1539dc76abf25f2ade699ee17ba036d7729 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V5-ndk-source/gen/staging/android/hardware/bluetooth/audio/CodecParameters.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V5-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V5-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/5 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/5/android/hardware/bluetooth/audio/CodecParameters.aidl
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
#include <aidl/android/hardware/bluetooth/audio/ChannelMode.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV5NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV5NDK_API CodecParameters {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::hardware::bluetooth::audio::ChannelMode channelMode = ::aidl::android::hardware::bluetooth::audio::ChannelMode(0);
  int32_t samplingFrequencyHz = 0;
  int32_t bitdepth = 0;
  int32_t minBitrate = 0;
  int32_t maxBitrate = 0;
  bool lowLatency = false;
  bool lossless = false;
  std::vector<uint8_t> vendorSpecificParameters;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const CodecParameters& _rhs) const {
    return std::tie(channelMode, samplingFrequencyHz, bitdepth, minBitrate, maxBitrate, lowLatency, lossless, vendorSpecificParameters) == std::tie(_rhs.channelMode, _rhs.samplingFrequencyHz, _rhs.bitdepth, _rhs.minBitrate, _rhs.maxBitrate, _rhs.lowLatency, _rhs.lossless, _rhs.vendorSpecificParameters);
  }
  inline bool operator<(const CodecParameters& _rhs) const {
    return std::tie(channelMode, samplingFrequencyHz, bitdepth, minBitrate, maxBitrate, lowLatency, lossless, vendorSpecificParameters) < std::tie(_rhs.channelMode, _rhs.samplingFrequencyHz, _rhs.bitdepth, _rhs.minBitrate, _rhs.maxBitrate, _rhs.lowLatency, _rhs.lossless, _rhs.vendorSpecificParameters);
  }
  inline bool operator!=(const CodecParameters& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const CodecParameters& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const CodecParameters& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const CodecParameters& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "CodecParameters{";
    _aidl_os << "channelMode: " << ::android::internal::ToString(channelMode);
    _aidl_os << ", samplingFrequencyHz: " << ::android::internal::ToString(samplingFrequencyHz);
    _aidl_os << ", bitdepth: " << ::android::internal::ToString(bitdepth);
    _aidl_os << ", minBitrate: " << ::android::internal::ToString(minBitrate);
    _aidl_os << ", maxBitrate: " << ::android::internal::ToString(maxBitrate);
    _aidl_os << ", lowLatency: " << ::android::internal::ToString(lowLatency);
    _aidl_os << ", lossless: " << ::android::internal::ToString(lossless);
    _aidl_os << ", vendorSpecificParameters: " << ::android::internal::ToString(vendorSpecificParameters);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
