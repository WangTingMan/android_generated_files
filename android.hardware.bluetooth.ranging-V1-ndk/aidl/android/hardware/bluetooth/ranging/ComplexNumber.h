/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/ComplexNumber.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/ComplexNumber.aidl
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

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ComplexNumber {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  double real = 0.000000;
  double imaginary = 0.000000;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ComplexNumber& _rhs) const {
    return std::tie(real, imaginary) == std::tie(_rhs.real, _rhs.imaginary);
  }
  inline bool operator<(const ComplexNumber& _rhs) const {
    return std::tie(real, imaginary) < std::tie(_rhs.real, _rhs.imaginary);
  }
  inline bool operator!=(const ComplexNumber& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ComplexNumber& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ComplexNumber& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ComplexNumber& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ComplexNumber{";
    _aidl_os << "real: " << ::android::internal::ToString(real);
    _aidl_os << ", imaginary: " << ::android::internal::ToString(imaginary);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
