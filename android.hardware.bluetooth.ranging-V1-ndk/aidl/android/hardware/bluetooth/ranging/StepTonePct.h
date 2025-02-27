/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/StepTonePct.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/StepTonePct.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/ComplexNumber.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::ranging {
class ComplexNumber;
}  // namespace aidl::android::hardware::bluetooth::ranging
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class StepTonePct {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::vector<::aidl::android::hardware::bluetooth::ranging::ComplexNumber> tonePcts;
  std::vector<uint8_t> toneQualityIndicator;
  int8_t toneExtensionAntennaIndex = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const StepTonePct& _rhs) const {
    return std::tie(tonePcts, toneQualityIndicator, toneExtensionAntennaIndex) == std::tie(_rhs.tonePcts, _rhs.toneQualityIndicator, _rhs.toneExtensionAntennaIndex);
  }
  inline bool operator<(const StepTonePct& _rhs) const {
    return std::tie(tonePcts, toneQualityIndicator, toneExtensionAntennaIndex) < std::tie(_rhs.tonePcts, _rhs.toneQualityIndicator, _rhs.toneExtensionAntennaIndex);
  }
  inline bool operator!=(const StepTonePct& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const StepTonePct& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const StepTonePct& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const StepTonePct& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { TONE_QUALITY_GOOD = 0 };
  enum : int32_t { TONE_QUALITY_MEDIUM = 1 };
  enum : int32_t { TONE_QUALITY_LOW = 2 };
  enum : int32_t { TONE_QUALITY_UNAVAILABLE = 3 };
  enum : int32_t { EXTENSION_SLOT_NONE = 0 };
  enum : int32_t { EXTENSION_SLOT_TONE_NOT_EXPECTED_TO_BE_PRESENT = 1 };
  enum : int32_t { EXTENSION_SLOT_TONE_EXPECTED_TO_BE_PRESENT = 2 };
  enum : int32_t { EXTENSION_SLOT_SHIFT_AMOUNT = 4 };
  enum : int8_t { TONE_EXTENSION_ANTENNA_1 = 0 };
  enum : int8_t { TONE_EXTENSION_ANTENNA_2 = 1 };
  enum : int8_t { TONE_EXTENSION_ANTENNA_3 = 2 };
  enum : int8_t { TONE_EXTENSION_ANTENNA_4 = 3 };
  enum : int8_t { TONE_EXTENSION_UNUSED = -1 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "StepTonePct{";
    _aidl_os << "tonePcts: " << ::android::internal::ToString(tonePcts);
    _aidl_os << ", toneQualityIndicator: " << ::android::internal::ToString(toneQualityIndicator);
    _aidl_os << ", toneExtensionAntennaIndex: " << ::android::internal::ToString(toneExtensionAntennaIndex);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
