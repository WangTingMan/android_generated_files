/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 078986eb5ef2dd183974ee4c9a79dc9b71bea088 -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging/android/hardware/bluetooth/finder/Eid.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1 hardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1/android/hardware/bluetooth/finder/Eid.aidl
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
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHFINDERV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace finder {
class ANDROIDHARDWAREBLUETOOTHFINDERV1NDK_API Eid {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "android.hardware.bluetooth.finder.Eid";

  std::array<uint8_t, 20> bytes = {{}};

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Eid& _rhs) const {
    return std::tie(bytes) == std::tie(_rhs.bytes);
  }
  inline bool operator<(const Eid& _rhs) const {
    return std::tie(bytes) < std::tie(_rhs.bytes);
  }
  inline bool operator!=(const Eid& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Eid& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Eid& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Eid& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Eid{";
    _aidl_os << "bytes: " << ::android::internal::ToString(bytes);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace finder
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
