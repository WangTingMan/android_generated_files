/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash ac25616dda1c45dc2915d3f5ac82687a1a6f6e46 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging/android/hardware/bluetooth/audio/Phy.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4/android/hardware/bluetooth/audio/Phy.aidl
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
namespace audio {
enum class Phy : int8_t {
  UNDEFINED = 0,
  ONE_M = 1,
  TWO_M = 2,
  CODED = 3,
};

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
[[nodiscard]] static inline std::string toString(Phy val) {
  switch(val) {
  case Phy::UNDEFINED:
    return "UNDEFINED";
  case Phy::ONE_M:
    return "ONE_M";
  case Phy::TWO_M:
    return "TWO_M";
  case Phy::CODED:
    return "CODED";
  default:
    return std::to_string(static_cast<int8_t>(val));
  }
}
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::bluetooth::audio::Phy, 4> enum_values<aidl::android::hardware::bluetooth::audio::Phy> = {
  aidl::android::hardware::bluetooth::audio::Phy::UNDEFINED,
  aidl::android::hardware::bluetooth::audio::Phy::ONE_M,
  aidl::android::hardware::bluetooth::audio::Phy::TWO_M,
  aidl::android::hardware::bluetooth::audio::Phy::CODED,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
