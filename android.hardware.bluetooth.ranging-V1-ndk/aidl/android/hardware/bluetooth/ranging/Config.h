/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/Config.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/Config.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/ModeType.h>
#include <aidl/android/hardware/bluetooth/ranging/RttType.h>
#include <aidl/android/hardware/bluetooth/ranging/SubModeType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class Config {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::hardware::bluetooth::ranging::ModeType modeType = ::aidl::android::hardware::bluetooth::ranging::ModeType(0);
  ::aidl::android::hardware::bluetooth::ranging::SubModeType subModeType = ::aidl::android::hardware::bluetooth::ranging::SubModeType(0);
  ::aidl::android::hardware::bluetooth::ranging::RttType rttType = ::aidl::android::hardware::bluetooth::ranging::RttType(0);
  std::array<uint8_t, 10> channelMap = {{}};

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Config& _rhs) const {
    return std::tie(modeType, subModeType, rttType, channelMap) == std::tie(_rhs.modeType, _rhs.subModeType, _rhs.rttType, _rhs.channelMap);
  }
  inline bool operator<(const Config& _rhs) const {
    return std::tie(modeType, subModeType, rttType, channelMap) < std::tie(_rhs.modeType, _rhs.subModeType, _rhs.rttType, _rhs.channelMap);
  }
  inline bool operator!=(const Config& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Config& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Config& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Config& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Config{";
    _aidl_os << "modeType: " << ::android::internal::ToString(modeType);
    _aidl_os << ", subModeType: " << ::android::internal::ToString(subModeType);
    _aidl_os << ", rttType: " << ::android::internal::ToString(rttType);
    _aidl_os << ", channelMap: " << ::android::internal::ToString(channelMap);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
