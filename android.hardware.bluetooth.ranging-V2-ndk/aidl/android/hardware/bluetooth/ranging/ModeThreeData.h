/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 1ce66c3f521da97079f169b56452be7371c4a61f -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging/android/hardware/bluetooth/ranging/ModeThreeData.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2/android/hardware/bluetooth/ranging/ModeThreeData.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/ModeOneData.h>
#include <aidl/android/hardware/bluetooth/ranging/ModeTwoData.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::ranging {
class ModeOneData;
class ModeTwoData;
}  // namespace aidl::android::hardware::bluetooth::ranging
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ModeThreeData {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::hardware::bluetooth::ranging::ModeOneData modeOneData;
  ::aidl::android::hardware::bluetooth::ranging::ModeTwoData modeTwoData;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ModeThreeData& _rhs) const {
    return std::tie(modeOneData, modeTwoData) == std::tie(_rhs.modeOneData, _rhs.modeTwoData);
  }
  inline bool operator<(const ModeThreeData& _rhs) const {
    return std::tie(modeOneData, modeTwoData) < std::tie(_rhs.modeOneData, _rhs.modeTwoData);
  }
  inline bool operator!=(const ModeThreeData& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ModeThreeData& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ModeThreeData& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ModeThreeData& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ModeThreeData{";
    _aidl_os << "modeOneData: " << ::android::internal::ToString(modeOneData);
    _aidl_os << ", modeTwoData: " << ::android::internal::ToString(modeTwoData);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
