/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash ac25616dda1c45dc2915d3f5ac82687a1a6f6e46 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging/android/hardware/bluetooth/audio/A2dpConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4/android/hardware/bluetooth/audio/A2dpConfiguration.aidl
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
#include <aidl/android/hardware/bluetooth/audio/CodecId.h>
#include <aidl/android/hardware/bluetooth/audio/CodecParameters.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS.h"

namespace aidl::android::hardware::bluetooth::audio {
class CodecParameters;
}  // namespace aidl::android::hardware::bluetooth::audio
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API A2dpConfiguration {
public:
  typedef std::false_type fixed_size;
  inline static constexpr const char* descriptor = "android.hardware.bluetooth.audio.A2dpConfiguration";

  int32_t remoteSeid = 0;
  ::aidl::android::hardware::bluetooth::audio::CodecId id;
  ::aidl::android::hardware::bluetooth::audio::CodecParameters parameters;
  std::vector<uint8_t> configuration;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const A2dpConfiguration& _rhs) const {
    return std::tie(remoteSeid, id, parameters, configuration) == std::tie(_rhs.remoteSeid, _rhs.id, _rhs.parameters, _rhs.configuration);
  }
  inline bool operator<(const A2dpConfiguration& _rhs) const {
    return std::tie(remoteSeid, id, parameters, configuration) < std::tie(_rhs.remoteSeid, _rhs.id, _rhs.parameters, _rhs.configuration);
  }
  inline bool operator!=(const A2dpConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const A2dpConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const A2dpConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const A2dpConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "A2dpConfiguration{";
    _aidl_os << "remoteSeid: " << ::android::internal::ToString(remoteSeid);
    _aidl_os << ", id: " << ::android::internal::ToString(id);
    _aidl_os << ", parameters: " << ::android::internal::ToString(parameters);
    _aidl_os << ", configuration: " << ::android::internal::ToString(configuration);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
