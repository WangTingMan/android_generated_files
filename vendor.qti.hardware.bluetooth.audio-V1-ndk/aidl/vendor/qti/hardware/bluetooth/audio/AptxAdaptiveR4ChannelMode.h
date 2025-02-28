/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash be7f6f90eb88c54a08b4bd98ba130b87a3a467c4 -t --stability vintf --min_sdk_version 31 --ninja -d out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4ChannelMode.cpp.d -h out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1 vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4ChannelMode.aidl
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
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth {
namespace audio {
enum class AptxAdaptiveR4ChannelMode : int32_t {
  UNKNOWN = 0,
  MONO = 1,
  STEREO_TWM = 2,
};

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
}  // namespace aidl
namespace aidl {
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth {
namespace audio {
[[nodiscard]] static inline std::string toString(AptxAdaptiveR4ChannelMode val) {
  switch(val) {
  case AptxAdaptiveR4ChannelMode::UNKNOWN:
    return "UNKNOWN";
  case AptxAdaptiveR4ChannelMode::MONO:
    return "MONO";
  case AptxAdaptiveR4ChannelMode::STEREO_TWM:
    return "STEREO_TWM";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4ChannelMode, 3> enum_values<aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4ChannelMode> = {
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4ChannelMode::UNKNOWN,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4ChannelMode::MONO,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4ChannelMode::STEREO_TWM,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
