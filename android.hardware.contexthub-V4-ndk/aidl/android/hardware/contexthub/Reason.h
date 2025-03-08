/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/Reason.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/Reason.aidl
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
enum class Reason : int8_t {
  UNSPECIFIED = 0,
  OUT_OF_MEMORY = 1,
  TIMEOUT = 2,
  OPEN_ENDPOINT_SESSION_REQUEST_REJECTED = 3,
  CLOSE_ENDPOINT_SESSION_REQUESTED = 4,
  ENDPOINT_INVALID = 5,
  ENDPOINT_GONE = 6,
  ENDPOINT_CRASHED = 7,
  HUB_RESET = 8,
  PERMISSION_DENIED = 9,
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
[[nodiscard]] static inline std::string toString(Reason val) {
  switch(val) {
  case Reason::UNSPECIFIED:
    return "UNSPECIFIED";
  case Reason::OUT_OF_MEMORY:
    return "OUT_OF_MEMORY";
  case Reason::TIMEOUT:
    return "TIMEOUT";
  case Reason::OPEN_ENDPOINT_SESSION_REQUEST_REJECTED:
    return "OPEN_ENDPOINT_SESSION_REQUEST_REJECTED";
  case Reason::CLOSE_ENDPOINT_SESSION_REQUESTED:
    return "CLOSE_ENDPOINT_SESSION_REQUESTED";
  case Reason::ENDPOINT_INVALID:
    return "ENDPOINT_INVALID";
  case Reason::ENDPOINT_GONE:
    return "ENDPOINT_GONE";
  case Reason::ENDPOINT_CRASHED:
    return "ENDPOINT_CRASHED";
  case Reason::HUB_RESET:
    return "HUB_RESET";
  case Reason::PERMISSION_DENIED:
    return "PERMISSION_DENIED";
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
constexpr inline std::array<aidl::android::hardware::contexthub::Reason, 10> enum_values<aidl::android::hardware::contexthub::Reason> = {
  aidl::android::hardware::contexthub::Reason::UNSPECIFIED,
  aidl::android::hardware::contexthub::Reason::OUT_OF_MEMORY,
  aidl::android::hardware::contexthub::Reason::TIMEOUT,
  aidl::android::hardware::contexthub::Reason::OPEN_ENDPOINT_SESSION_REQUEST_REJECTED,
  aidl::android::hardware::contexthub::Reason::CLOSE_ENDPOINT_SESSION_REQUESTED,
  aidl::android::hardware::contexthub::Reason::ENDPOINT_INVALID,
  aidl::android::hardware::contexthub::Reason::ENDPOINT_GONE,
  aidl::android::hardware::contexthub::Reason::ENDPOINT_CRASHED,
  aidl::android::hardware::contexthub::Reason::HUB_RESET,
  aidl::android::hardware::contexthub::Reason::PERMISSION_DENIED,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
