/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash fead4df60244a5440283617064f184690414a685 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V3-ndk-source/gen/staging/android/hardware/bluetooth/audio/SbcConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V3-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/3 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/3/android/hardware/bluetooth/audio/SbcConfiguration.aidl
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
#include <aidl/android/hardware/bluetooth/audio/SbcAllocMethod.h>
#include <aidl/android/hardware/bluetooth/audio/SbcChannelMode.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class SbcConfiguration {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t sampleRateHz = 0;
  ::aidl::android::hardware::bluetooth::audio::SbcChannelMode channelMode = ::aidl::android::hardware::bluetooth::audio::SbcChannelMode(0);
  int8_t blockLength = 0;
  int8_t numSubbands = 0;
  ::aidl::android::hardware::bluetooth::audio::SbcAllocMethod allocMethod = ::aidl::android::hardware::bluetooth::audio::SbcAllocMethod(0);
  int8_t bitsPerSample = 0;
  int32_t minBitpool = 0;
  int32_t maxBitpool = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const SbcConfiguration& _rhs) const {
    return std::tie(sampleRateHz, channelMode, blockLength, numSubbands, allocMethod, bitsPerSample, minBitpool, maxBitpool) == std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.blockLength, _rhs.numSubbands, _rhs.allocMethod, _rhs.bitsPerSample, _rhs.minBitpool, _rhs.maxBitpool);
  }
  inline bool operator<(const SbcConfiguration& _rhs) const {
    return std::tie(sampleRateHz, channelMode, blockLength, numSubbands, allocMethod, bitsPerSample, minBitpool, maxBitpool) < std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.blockLength, _rhs.numSubbands, _rhs.allocMethod, _rhs.bitsPerSample, _rhs.minBitpool, _rhs.maxBitpool);
  }
  inline bool operator!=(const SbcConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const SbcConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const SbcConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const SbcConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SbcConfiguration{";
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
}  // namespace android
}  // namespace aidl
