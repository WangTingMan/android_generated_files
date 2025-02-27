/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash be7f6f90eb88c54a08b4bd98ba130b87a3a467c4 --stability vintf --min_sdk_version 31 --ninja -d out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/qti/hardware/bluetooth/audio/VendorCodecType.cpp.d -h out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1 vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1/vendor/qti/hardware/bluetooth/audio/VendorCodecType.aidl
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
enum class VendorCodecType : int32_t {
  LC3Q = 0,
  APTX_ADAPTIVE_R3 = 1,
  APTX_ADAPTIVE_R4 = 2,
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
[[nodiscard]] static inline std::string toString(VendorCodecType val) {
  switch(val) {
  case VendorCodecType::LC3Q:
    return "LC3Q";
  case VendorCodecType::APTX_ADAPTIVE_R3:
    return "APTX_ADAPTIVE_R3";
  case VendorCodecType::APTX_ADAPTIVE_R4:
    return "APTX_ADAPTIVE_R4";
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
constexpr inline std::array<aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType, 3> enum_values<aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType> = {
  aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType::LC3Q,
  aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType::APTX_ADAPTIVE_R3,
  aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType::APTX_ADAPTIVE_R4,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
