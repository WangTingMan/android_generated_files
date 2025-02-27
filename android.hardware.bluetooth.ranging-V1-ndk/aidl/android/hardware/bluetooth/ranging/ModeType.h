/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/ModeType.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/ModeType.aidl
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
enum class ModeType : int8_t {
  ZERO = 0,
  ONE = 1,
  TWO = 2,
  THREE = 3,
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
[[nodiscard]] static inline std::string toString(ModeType val) {
  switch(val) {
  case ModeType::ZERO:
    return "ZERO";
  case ModeType::ONE:
    return "ONE";
  case ModeType::TWO:
    return "TWO";
  case ModeType::THREE:
    return "THREE";
  default:
    return std::to_string(static_cast<int8_t>(val));
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
constexpr inline std::array<aidl::android::hardware::bluetooth::ranging::ModeType, 4> enum_values<aidl::android::hardware::bluetooth::ranging::ModeType> = {
  aidl::android::hardware::bluetooth::ranging::ModeType::ZERO,
  aidl::android::hardware::bluetooth::ranging::ModeType::ONE,
  aidl::android::hardware::bluetooth::ranging::ModeType::TWO,
  aidl::android::hardware::bluetooth::ranging::ModeType::THREE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
