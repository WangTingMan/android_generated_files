/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/SbcCapabilities.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/SbcCapabilities.aidl
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
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/SbcAllocMethod.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/SbcChannelMode.h>
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
class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API SbcCapabilities {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::vector<int32_t> sampleRateHz;
  std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::SbcChannelMode> channelMode;
  std::vector<uint8_t> blockLength;
  std::vector<uint8_t> numSubbands;
  std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::SbcAllocMethod> allocMethod;
  std::vector<uint8_t> bitsPerSample;
  int32_t minBitpool = 0;
  int32_t maxBitpool = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const SbcCapabilities& _rhs) const {
    return std::tie(sampleRateHz, channelMode, blockLength, numSubbands, allocMethod, bitsPerSample, minBitpool, maxBitpool) == std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.blockLength, _rhs.numSubbands, _rhs.allocMethod, _rhs.bitsPerSample, _rhs.minBitpool, _rhs.maxBitpool);
  }
  inline bool operator<(const SbcCapabilities& _rhs) const {
    return std::tie(sampleRateHz, channelMode, blockLength, numSubbands, allocMethod, bitsPerSample, minBitpool, maxBitpool) < std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.blockLength, _rhs.numSubbands, _rhs.allocMethod, _rhs.bitsPerSample, _rhs.minBitpool, _rhs.maxBitpool);
  }
  inline bool operator!=(const SbcCapabilities& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const SbcCapabilities& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const SbcCapabilities& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const SbcCapabilities& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SbcCapabilities{";
    _aidl_os << "sampleRateHz: " << ::android::internal::ToString(sampleRateHz);
    _aidl_os << ", channelMode: " << ::android::internal::ToString(channelMode);
    _aidl_os << ", blockLength: " << ::android::internal::ToString(blockLength);
    _aidl_os << ", numSubbands: " << ::android::internal::ToString(numSubbands);
    _aidl_os << ", allocMethod: " << ::android::internal::ToString(allocMethod);
    _aidl_os << ", bitsPerSample: " << ::android::internal::ToString(bitsPerSample);
    _aidl_os << ", minBitpool: " << ::android::internal::ToString(minBitpool);
    _aidl_os << ", maxBitpool: " << ::android::internal::ToString(maxBitpool);
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
