/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash ac25616dda1c45dc2915d3f5ac82687a1a6f6e46 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging/android/hardware/bluetooth/audio/ConfigurationFlags.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4/android/hardware/bluetooth/audio/ConfigurationFlags.aidl
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
class ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API ConfigurationFlags {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t bitmask = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ConfigurationFlags& _rhs) const {
    return std::tie(bitmask) == std::tie(_rhs.bitmask);
  }
  inline bool operator<(const ConfigurationFlags& _rhs) const {
    return std::tie(bitmask) < std::tie(_rhs.bitmask);
  }
  inline bool operator!=(const ConfigurationFlags& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ConfigurationFlags& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ConfigurationFlags& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ConfigurationFlags& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { NONE = 0 };
  enum : int32_t { LOSSLESS = 1 };
  enum : int32_t { LOW_LATENCY = 2 };
  enum : int32_t { ALLOW_ASYMMETRIC_CONFIGURATIONS = 4 };
  enum : int32_t { SPATIAL_AUDIO = 8 };
  enum : int32_t { PROVIDE_ASE_METADATA = 16 };
  enum : int32_t { MONO_MIC_CONFIGURATION = 32 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ConfigurationFlags{";
    _aidl_os << "bitmask: " << ::android::internal::ToString(bitmask);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
