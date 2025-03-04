/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 1ce66c3f521da97079f169b56452be7371c4a61f -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging/android/hardware/bluetooth/ranging/ModeTwoData.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2/android/hardware/bluetooth/ranging/ModeTwoData.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/PctIQSample.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::ranging {
class PctIQSample;
}  // namespace aidl::android::hardware::bluetooth::ranging
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ModeTwoData {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int8_t antennaPermutationIndex = 0;
  std::vector<::aidl::android::hardware::bluetooth::ranging::PctIQSample> tonePctIQSamples;
  std::vector<uint8_t> toneQualityIndicators;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ModeTwoData& _rhs) const {
    return std::tie(antennaPermutationIndex, tonePctIQSamples, toneQualityIndicators) == std::tie(_rhs.antennaPermutationIndex, _rhs.tonePctIQSamples, _rhs.toneQualityIndicators);
  }
  inline bool operator<(const ModeTwoData& _rhs) const {
    return std::tie(antennaPermutationIndex, tonePctIQSamples, toneQualityIndicators) < std::tie(_rhs.antennaPermutationIndex, _rhs.tonePctIQSamples, _rhs.toneQualityIndicators);
  }
  inline bool operator!=(const ModeTwoData& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ModeTwoData& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ModeTwoData& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ModeTwoData& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { TONE_QUALITY_HIGH = 0 };
  enum : int32_t { TONE_QUALITY_MEDIUM = 1 };
  enum : int32_t { TONE_QUALITY_LOW = 2 };
  enum : int32_t { TONE_QUALITY_UNAVAILABLE = 3 };
  enum : int32_t { EXTENSION_SLOT_NONE = 0 };
  enum : int32_t { EXTENSION_SLOT_TONE_NOT_EXPECTED_TO_BE_PRESENT = 1 };
  enum : int32_t { EXTENSION_SLOT_TONE_EXPECTED_TO_BE_PRESENT = 2 };
  enum : int32_t { EXTENSION_SLOT_SHIFT = 4 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ModeTwoData{";
    _aidl_os << "antennaPermutationIndex: " << ::android::internal::ToString(antennaPermutationIndex);
    _aidl_os << ", tonePctIQSamples: " << ::android::internal::ToString(tonePctIQSamples);
    _aidl_os << ", toneQualityIndicators: " << ::android::internal::ToString(toneQualityIndicators);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
