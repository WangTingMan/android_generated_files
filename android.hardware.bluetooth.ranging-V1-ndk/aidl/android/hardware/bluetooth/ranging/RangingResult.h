/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/RangingResult.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/RangingResult.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/Nadm.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class RangingResult {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  double resultMeters = 0.000000;
  double errorMeters = 0.000000;
  double azimuthDegrees = 0.000000;
  double errorAzimuthDegrees = 0.000000;
  double altitudeDegrees = 0.000000;
  double errorAltitudeDegrees = 0.000000;
  double delaySpreadMeters = 0.000000;
  int8_t confidenceLevel = 0;
  ::aidl::android::hardware::bluetooth::ranging::Nadm detectedAttackLevel = ::aidl::android::hardware::bluetooth::ranging::Nadm(0);
  double velocityMetersPerSecond = 0.000000;
  std::optional<std::vector<uint8_t>> vendorSpecificCsRangingResultsData;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const RangingResult& _rhs) const {
    return std::tie(resultMeters, errorMeters, azimuthDegrees, errorAzimuthDegrees, altitudeDegrees, errorAltitudeDegrees, delaySpreadMeters, confidenceLevel, detectedAttackLevel, velocityMetersPerSecond, vendorSpecificCsRangingResultsData) == std::tie(_rhs.resultMeters, _rhs.errorMeters, _rhs.azimuthDegrees, _rhs.errorAzimuthDegrees, _rhs.altitudeDegrees, _rhs.errorAltitudeDegrees, _rhs.delaySpreadMeters, _rhs.confidenceLevel, _rhs.detectedAttackLevel, _rhs.velocityMetersPerSecond, _rhs.vendorSpecificCsRangingResultsData);
  }
  inline bool operator<(const RangingResult& _rhs) const {
    return std::tie(resultMeters, errorMeters, azimuthDegrees, errorAzimuthDegrees, altitudeDegrees, errorAltitudeDegrees, delaySpreadMeters, confidenceLevel, detectedAttackLevel, velocityMetersPerSecond, vendorSpecificCsRangingResultsData) < std::tie(_rhs.resultMeters, _rhs.errorMeters, _rhs.azimuthDegrees, _rhs.errorAzimuthDegrees, _rhs.altitudeDegrees, _rhs.errorAltitudeDegrees, _rhs.delaySpreadMeters, _rhs.confidenceLevel, _rhs.detectedAttackLevel, _rhs.velocityMetersPerSecond, _rhs.vendorSpecificCsRangingResultsData);
  }
  inline bool operator!=(const RangingResult& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const RangingResult& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const RangingResult& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const RangingResult& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "RangingResult{";
    _aidl_os << "resultMeters: " << ::android::internal::ToString(resultMeters);
    _aidl_os << ", errorMeters: " << ::android::internal::ToString(errorMeters);
    _aidl_os << ", azimuthDegrees: " << ::android::internal::ToString(azimuthDegrees);
    _aidl_os << ", errorAzimuthDegrees: " << ::android::internal::ToString(errorAzimuthDegrees);
    _aidl_os << ", altitudeDegrees: " << ::android::internal::ToString(altitudeDegrees);
    _aidl_os << ", errorAltitudeDegrees: " << ::android::internal::ToString(errorAltitudeDegrees);
    _aidl_os << ", delaySpreadMeters: " << ::android::internal::ToString(delaySpreadMeters);
    _aidl_os << ", confidenceLevel: " << ::android::internal::ToString(confidenceLevel);
    _aidl_os << ", detectedAttackLevel: " << ::android::internal::ToString(detectedAttackLevel);
    _aidl_os << ", velocityMetersPerSecond: " << ::android::internal::ToString(velocityMetersPerSecond);
    _aidl_os << ", vendorSpecificCsRangingResultsData: " << ::android::internal::ToString(vendorSpecificCsRangingResultsData);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
