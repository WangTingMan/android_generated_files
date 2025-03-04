/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash e9accf971a83a7829786ee24780fa7a5583b5dae -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging/android/hardware/bluetooth/lmp_event/Direction.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1 hardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1/android/hardware/bluetooth/lmp_event/Direction.aidl
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
namespace lmp_event {
enum class Direction : int8_t {
  TX = 0,
  RX = 1,
};

}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace lmp_event {
[[nodiscard]] static inline std::string toString(Direction val) {
  switch(val) {
  case Direction::TX:
    return "TX";
  case Direction::RX:
    return "RX";
  default:
    return std::to_string(static_cast<int8_t>(val));
  }
}
}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::bluetooth::lmp_event::Direction, 2> enum_values<aidl::android::hardware::bluetooth::lmp_event::Direction> = {
  aidl::android::hardware::bluetooth::lmp_event::Direction::TX,
  aidl::android::hardware::bluetooth::lmp_event::Direction::RX,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
