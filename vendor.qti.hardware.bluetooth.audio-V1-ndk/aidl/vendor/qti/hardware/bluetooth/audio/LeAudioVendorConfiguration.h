/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash be7f6f90eb88c54a08b4bd98ba130b87a3a467c4 -t --stability vintf --min_sdk_version 31 --ninja -d out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/qti/hardware/bluetooth/audio/LeAudioVendorConfiguration.cpp.d -h out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1 vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1/vendor/qti/hardware/bluetooth/audio/LeAudioVendorConfiguration.aidl
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
#include <aidl/vendor/qti/hardware/bluetooth/audio/VendorCodecType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "VENDORQTIHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

namespace aidl {
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth {
namespace audio {
class VENDORQTIHARDWAREBLUETOOTHAUDIOV1NDK_API LeAudioVendorConfiguration {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "vendor.qti.hardware.bluetooth.audio.LeAudioVendorConfiguration";

  ::aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType vendorCodecType = ::aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType(0);
  int8_t pcmBitDepth = 0;
  int32_t samplingFrequencyHz = 0;
  int32_t frameDurationUs = 0;
  int32_t octetsPerFrame = 0;
  int8_t blocksPerSdu = 0;
  std::vector<uint8_t> codecSpecificData;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const LeAudioVendorConfiguration& _rhs) const {
    return std::tie(vendorCodecType, pcmBitDepth, samplingFrequencyHz, frameDurationUs, octetsPerFrame, blocksPerSdu, codecSpecificData) == std::tie(_rhs.vendorCodecType, _rhs.pcmBitDepth, _rhs.samplingFrequencyHz, _rhs.frameDurationUs, _rhs.octetsPerFrame, _rhs.blocksPerSdu, _rhs.codecSpecificData);
  }
  inline bool operator<(const LeAudioVendorConfiguration& _rhs) const {
    return std::tie(vendorCodecType, pcmBitDepth, samplingFrequencyHz, frameDurationUs, octetsPerFrame, blocksPerSdu, codecSpecificData) < std::tie(_rhs.vendorCodecType, _rhs.pcmBitDepth, _rhs.samplingFrequencyHz, _rhs.frameDurationUs, _rhs.octetsPerFrame, _rhs.blocksPerSdu, _rhs.codecSpecificData);
  }
  inline bool operator!=(const LeAudioVendorConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const LeAudioVendorConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const LeAudioVendorConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const LeAudioVendorConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "LeAudioVendorConfiguration{";
    _aidl_os << "vendorCodecType: " << ::android::internal::ToString(vendorCodecType);
    _aidl_os << ", pcmBitDepth: " << ::android::internal::ToString(pcmBitDepth);
    _aidl_os << ", samplingFrequencyHz: " << ::android::internal::ToString(samplingFrequencyHz);
    _aidl_os << ", frameDurationUs: " << ::android::internal::ToString(frameDurationUs);
    _aidl_os << ", octetsPerFrame: " << ::android::internal::ToString(octetsPerFrame);
    _aidl_os << ", blocksPerSdu: " << ::android::internal::ToString(blocksPerSdu);
    _aidl_os << ", codecSpecificData: " << ::android::internal::ToString(codecSpecificData);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
}  // namespace aidl
