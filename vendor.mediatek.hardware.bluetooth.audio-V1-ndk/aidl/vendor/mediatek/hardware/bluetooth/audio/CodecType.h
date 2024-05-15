/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/CodecType.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/CodecType.aidl
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
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
enum class CodecType : int32_t {
  UNKNOWN = 0,
  SBC = 1,
  AAC = 2,
  APTX = 3,
  APTX_HD = 4,
  LDAC = 5,
  LC3 = 6,
  VENDOR = 7,
  APTX_ADAPTIVE = 8,
  LHDCV3 = 9,
  LHDCV2 = 10,
  LHDCV5 = 11,
};

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
[[nodiscard]] static inline std::string toString(CodecType val) {
  switch(val) {
  case CodecType::UNKNOWN:
    return "UNKNOWN";
  case CodecType::SBC:
    return "SBC";
  case CodecType::AAC:
    return "AAC";
  case CodecType::APTX:
    return "APTX";
  case CodecType::APTX_HD:
    return "APTX_HD";
  case CodecType::LDAC:
    return "LDAC";
  case CodecType::LC3:
    return "LC3";
  case CodecType::VENDOR:
    return "VENDOR";
  case CodecType::APTX_ADAPTIVE:
    return "APTX_ADAPTIVE";
  case CodecType::LHDCV3:
    return "LHDCV3";
  case CodecType::LHDCV2:
    return "LHDCV2";
  case CodecType::LHDCV5:
    return "LHDCV5";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType, 12> enum_values<aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType> = {
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::UNKNOWN,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::SBC,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::AAC,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::APTX,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::APTX_HD,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::LDAC,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::LC3,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::VENDOR,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::APTX_ADAPTIVE,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::LHDCV3,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::LHDCV2,
  aidl::vendor::mediatek::hardware::bluetooth::audio::CodecType::LHDCV5,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
