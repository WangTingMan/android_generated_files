/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/AacObjectType.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/AacObjectType.aidl
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
enum class AacObjectType : int8_t {
  MPEG2_LC = 0,
  MPEG4_LC = 1,
  MPEG4_LTP = 2,
  MPEG4_SCALABLE = 3,
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
[[nodiscard]] static inline std::string toString(AacObjectType val) {
  switch(val) {
  case AacObjectType::MPEG2_LC:
    return "MPEG2_LC";
  case AacObjectType::MPEG4_LC:
    return "MPEG4_LC";
  case AacObjectType::MPEG4_LTP:
    return "MPEG4_LTP";
  case AacObjectType::MPEG4_SCALABLE:
    return "MPEG4_SCALABLE";
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
constexpr inline std::array<aidl::android::hardware::bluetooth::audio::AacObjectType, 4> enum_values<aidl::android::hardware::bluetooth::audio::AacObjectType> = {
  aidl::android::hardware::bluetooth::audio::AacObjectType::MPEG2_LC,
  aidl::android::hardware::bluetooth::audio::AacObjectType::MPEG4_LC,
  aidl::android::hardware::bluetooth::audio::AacObjectType::MPEG4_LTP,
  aidl::android::hardware::bluetooth::audio::AacObjectType::MPEG4_SCALABLE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
