/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119 --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging/android/hardware/bluetooth/Status.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1 hardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1/android/hardware/bluetooth/Status.aidl
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
enum class Status : int32_t {
  SUCCESS = 0,
  ALREADY_INITIALIZED = 1,
  UNABLE_TO_OPEN_INTERFACE = 2,
  HARDWARE_INITIALIZATION_ERROR = 3,
  UNKNOWN = 4,
};

}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
[[nodiscard]] static inline std::string toString(Status val) {
  switch(val) {
  case Status::SUCCESS:
    return "SUCCESS";
  case Status::ALREADY_INITIALIZED:
    return "ALREADY_INITIALIZED";
  case Status::UNABLE_TO_OPEN_INTERFACE:
    return "UNABLE_TO_OPEN_INTERFACE";
  case Status::HARDWARE_INITIALIZATION_ERROR:
    return "HARDWARE_INITIALIZATION_ERROR";
  case Status::UNKNOWN:
    return "UNKNOWN";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::bluetooth::Status, 5> enum_values<aidl::android::hardware::bluetooth::Status> = {
  aidl::android::hardware::bluetooth::Status::SUCCESS,
  aidl::android::hardware::bluetooth::Status::ALREADY_INITIALIZED,
  aidl::android::hardware::bluetooth::Status::UNABLE_TO_OPEN_INTERFACE,
  aidl::android::hardware::bluetooth::Status::HARDWARE_INITIALIZATION_ERROR,
  aidl::android::hardware::bluetooth::Status::UNKNOWN,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
