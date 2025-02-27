/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash be7f6f90eb88c54a08b4bd98ba130b87a3a467c4 --stability vintf --min_sdk_version 31 --ninja -d out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4SampleRate.cpp.d -h out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1 vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4SampleRate.aidl
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
enum class AptxAdaptiveR4SampleRate : int32_t {
  RATE_UNKNOWN = 0,
  RATE_44100 = 44100,
  RATE_48000 = 48000,
  RATE_96000 = 96000,
  RATE_192000 = 192000,
  RATE_32000 = 32000,
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
[[nodiscard]] static inline std::string toString(AptxAdaptiveR4SampleRate val) {
  switch(val) {
  case AptxAdaptiveR4SampleRate::RATE_UNKNOWN:
    return "RATE_UNKNOWN";
  case AptxAdaptiveR4SampleRate::RATE_44100:
    return "RATE_44100";
  case AptxAdaptiveR4SampleRate::RATE_48000:
    return "RATE_48000";
  case AptxAdaptiveR4SampleRate::RATE_96000:
    return "RATE_96000";
  case AptxAdaptiveR4SampleRate::RATE_192000:
    return "RATE_192000";
  case AptxAdaptiveR4SampleRate::RATE_32000:
    return "RATE_32000";
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
constexpr inline std::array<aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate, 6> enum_values<aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate> = {
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate::RATE_UNKNOWN,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate::RATE_44100,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate::RATE_48000,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate::RATE_96000,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate::RATE_192000,
  aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4SampleRate::RATE_32000,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
