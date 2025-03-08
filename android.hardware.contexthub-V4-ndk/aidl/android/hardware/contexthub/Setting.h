/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/Setting.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/Setting.aidl
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
namespace contexthub {
enum class Setting : int8_t {
  LOCATION = 1,
  WIFI_MAIN = 2,
  WIFI_SCANNING = 3,
  AIRPLANE_MODE = 4,
  MICROPHONE = 5,
  BT_MAIN = 6,
  BT_SCANNING = 7,
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
[[nodiscard]] static inline std::string toString(Setting val) {
  switch(val) {
  case Setting::LOCATION:
    return "LOCATION";
  case Setting::WIFI_MAIN:
    return "WIFI_MAIN";
  case Setting::WIFI_SCANNING:
    return "WIFI_SCANNING";
  case Setting::AIRPLANE_MODE:
    return "AIRPLANE_MODE";
  case Setting::MICROPHONE:
    return "MICROPHONE";
  case Setting::BT_MAIN:
    return "BT_MAIN";
  case Setting::BT_SCANNING:
    return "BT_SCANNING";
  default:
    return std::to_string(static_cast<int8_t>(val));
  }
}
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::contexthub::Setting, 7> enum_values<aidl::android::hardware::contexthub::Setting> = {
  aidl::android::hardware::contexthub::Setting::LOCATION,
  aidl::android::hardware::contexthub::Setting::WIFI_MAIN,
  aidl::android::hardware::contexthub::Setting::WIFI_SCANNING,
  aidl::android::hardware::contexthub::Setting::AIRPLANE_MODE,
  aidl::android::hardware::contexthub::Setting::MICROPHONE,
  aidl::android::hardware::contexthub::Setting::BT_MAIN,
  aidl::android::hardware::contexthub::Setting::BT_SCANNING,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
