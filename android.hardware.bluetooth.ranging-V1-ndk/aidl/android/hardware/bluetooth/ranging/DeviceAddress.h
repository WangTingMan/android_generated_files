/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/DeviceAddress.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/DeviceAddress.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/AddressType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "ANDROIDHARDWAREBLUETOOTHRANGINGV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ANDROIDHARDWAREBLUETOOTHRANGINGV1NDK_API DeviceAddress {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "android.hardware.bluetooth.ranging.DeviceAddress";

  ::aidl::android::hardware::bluetooth::ranging::AddressType addressType = ::aidl::android::hardware::bluetooth::ranging::AddressType(0);
  std::array<uint8_t, 6> address = {{}};

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const DeviceAddress& _rhs) const {
    return std::tie(addressType, address) == std::tie(_rhs.addressType, _rhs.address);
  }
  inline bool operator<(const DeviceAddress& _rhs) const {
    return std::tie(addressType, address) < std::tie(_rhs.addressType, _rhs.address);
  }
  inline bool operator!=(const DeviceAddress& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DeviceAddress& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DeviceAddress& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DeviceAddress& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DeviceAddress{";
    _aidl_os << "addressType: " << ::android::internal::ToString(addressType);
    _aidl_os << ", address: " << ::android::internal::ToString(address);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl