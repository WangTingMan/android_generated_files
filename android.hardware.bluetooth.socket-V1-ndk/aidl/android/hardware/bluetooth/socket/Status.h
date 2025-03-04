/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/Status.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/Status.aidl
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
namespace socket {
enum class Status : int32_t {
  SUCCESS = 0,
  FAILURE = 1,
};

}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
[[nodiscard]] static inline std::string toString(Status val) {
  switch(val) {
  case Status::SUCCESS:
    return "SUCCESS";
  case Status::FAILURE:
    return "FAILURE";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::bluetooth::socket::Status, 2> enum_values<aidl::android::hardware::bluetooth::socket::Status> = {
  aidl::android::hardware::bluetooth::socket::Status::SUCCESS,
  aidl::android::hardware::bluetooth::socket::Status::FAILURE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
