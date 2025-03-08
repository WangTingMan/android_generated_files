/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/ErrorCode.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/ErrorCode.aidl
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
enum class ErrorCode : int8_t {
  OK = 0,
  TRANSIENT_ERROR = 1,
  PERMANENT_ERROR = 2,
  PERMISSION_DENIED = 3,
  DESTINATION_NOT_FOUND = 4,
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
[[nodiscard]] static inline std::string toString(ErrorCode val) {
  switch(val) {
  case ErrorCode::OK:
    return "OK";
  case ErrorCode::TRANSIENT_ERROR:
    return "TRANSIENT_ERROR";
  case ErrorCode::PERMANENT_ERROR:
    return "PERMANENT_ERROR";
  case ErrorCode::PERMISSION_DENIED:
    return "PERMISSION_DENIED";
  case ErrorCode::DESTINATION_NOT_FOUND:
    return "DESTINATION_NOT_FOUND";
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
constexpr inline std::array<aidl::android::hardware::contexthub::ErrorCode, 5> enum_values<aidl::android::hardware::contexthub::ErrorCode> = {
  aidl::android::hardware::contexthub::ErrorCode::OK,
  aidl::android::hardware::contexthub::ErrorCode::TRANSIENT_ERROR,
  aidl::android::hardware::contexthub::ErrorCode::PERMANENT_ERROR,
  aidl::android::hardware::contexthub::ErrorCode::PERMISSION_DENIED,
  aidl::android::hardware::contexthub::ErrorCode::DESTINATION_NOT_FOUND,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
