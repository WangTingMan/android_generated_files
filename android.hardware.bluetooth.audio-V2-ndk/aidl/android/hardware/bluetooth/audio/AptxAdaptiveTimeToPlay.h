/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/AptxAdaptiveTimeToPlay.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/AptxAdaptiveTimeToPlay.aidl
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
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API AptxAdaptiveTimeToPlay {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int8_t lowLowLatency = 0;
  int8_t highLowLatency = 0;
  int8_t lowHighQuality = 0;
  int8_t highHighQuality = 0;
  int8_t lowTws = 0;
  int8_t highTws = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AptxAdaptiveTimeToPlay& _rhs) const {
    return std::tie(lowLowLatency, highLowLatency, lowHighQuality, highHighQuality, lowTws, highTws) == std::tie(_rhs.lowLowLatency, _rhs.highLowLatency, _rhs.lowHighQuality, _rhs.highHighQuality, _rhs.lowTws, _rhs.highTws);
  }
  inline bool operator<(const AptxAdaptiveTimeToPlay& _rhs) const {
    return std::tie(lowLowLatency, highLowLatency, lowHighQuality, highHighQuality, lowTws, highTws) < std::tie(_rhs.lowLowLatency, _rhs.highLowLatency, _rhs.lowHighQuality, _rhs.highHighQuality, _rhs.lowTws, _rhs.highTws);
  }
  inline bool operator!=(const AptxAdaptiveTimeToPlay& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AptxAdaptiveTimeToPlay& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AptxAdaptiveTimeToPlay& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AptxAdaptiveTimeToPlay& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AptxAdaptiveTimeToPlay{";
    _aidl_os << "lowLowLatency: " << ::android::internal::ToString(lowLowLatency);
    _aidl_os << ", highLowLatency: " << ::android::internal::ToString(highLowLatency);
    _aidl_os << ", lowHighQuality: " << ::android::internal::ToString(lowHighQuality);
    _aidl_os << ", highHighQuality: " << ::android::internal::ToString(highHighQuality);
    _aidl_os << ", lowTws: " << ::android::internal::ToString(lowTws);
    _aidl_os << ", highTws: " << ::android::internal::ToString(highTws);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
