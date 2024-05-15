/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash ac25616dda1c45dc2915d3f5ac82687a1a6f6e46 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging/android/hardware/bluetooth/audio/AptxSinkBuffering.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4/android/hardware/bluetooth/audio/AptxSinkBuffering.aidl
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
#include "ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API AptxSinkBuffering {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int8_t minLowLatency = 0;
  int8_t maxLowLatency = 0;
  int8_t minHighQuality = 0;
  int8_t maxHighQuality = 0;
  int8_t minTws = 0;
  int8_t maxTws = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AptxSinkBuffering& _rhs) const {
    return std::tie(minLowLatency, maxLowLatency, minHighQuality, maxHighQuality, minTws, maxTws) == std::tie(_rhs.minLowLatency, _rhs.maxLowLatency, _rhs.minHighQuality, _rhs.maxHighQuality, _rhs.minTws, _rhs.maxTws);
  }
  inline bool operator<(const AptxSinkBuffering& _rhs) const {
    return std::tie(minLowLatency, maxLowLatency, minHighQuality, maxHighQuality, minTws, maxTws) < std::tie(_rhs.minLowLatency, _rhs.maxLowLatency, _rhs.minHighQuality, _rhs.maxHighQuality, _rhs.minTws, _rhs.maxTws);
  }
  inline bool operator!=(const AptxSinkBuffering& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AptxSinkBuffering& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AptxSinkBuffering& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AptxSinkBuffering& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AptxSinkBuffering{";
    _aidl_os << "minLowLatency: " << ::android::internal::ToString(minLowLatency);
    _aidl_os << ", maxLowLatency: " << ::android::internal::ToString(maxLowLatency);
    _aidl_os << ", minHighQuality: " << ::android::internal::ToString(minHighQuality);
    _aidl_os << ", maxHighQuality: " << ::android::internal::ToString(maxHighQuality);
    _aidl_os << ", minTws: " << ::android::internal::ToString(minTws);
    _aidl_os << ", maxTws: " << ::android::internal::ToString(maxTws);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
