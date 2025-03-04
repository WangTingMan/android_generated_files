/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/CsSecurityLevel.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/CsSecurityLevel.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_enums.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
enum class CsSecurityLevel : int32_t {
  NOT_SUPPORTED = 0,
  ONE = 1,
  TWO = 2,
  THREE = 3,
  FOUR = 4,
};

}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
[[nodiscard]] static inline std::string toString(CsSecurityLevel val) {
  switch(val) {
  case CsSecurityLevel::NOT_SUPPORTED:
    return "NOT_SUPPORTED";
  case CsSecurityLevel::ONE:
    return "ONE";
  case CsSecurityLevel::TWO:
    return "TWO";
  case CsSecurityLevel::THREE:
    return "THREE";
  case CsSecurityLevel::FOUR:
    return "FOUR";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::bluetooth::ranging::CsSecurityLevel, 5> enum_values<aidl::android::hardware::bluetooth::ranging::CsSecurityLevel> = {
  aidl::android::hardware::bluetooth::ranging::CsSecurityLevel::NOT_SUPPORTED,
  aidl::android::hardware::bluetooth::ranging::CsSecurityLevel::ONE,
  aidl::android::hardware::bluetooth::ranging::CsSecurityLevel::TWO,
  aidl::android::hardware::bluetooth::ranging::CsSecurityLevel::THREE,
  aidl::android::hardware::bluetooth::ranging::CsSecurityLevel::FOUR,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
