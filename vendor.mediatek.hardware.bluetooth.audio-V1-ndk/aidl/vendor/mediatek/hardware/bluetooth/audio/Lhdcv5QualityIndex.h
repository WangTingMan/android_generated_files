/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5QualityIndex.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5QualityIndex.aidl
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
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
enum class Lhdcv5QualityIndex : int32_t {
  UNKNOWN = 0,
  QUALITY_LOW0 = 1,
  QUALITY_LOW1 = 2,
  QUALITY_LOW2 = 3,
  QUALITY_LOW3 = 4,
  QUALITY_LOW4 = 5,
  QUALITY_LOW = 6,
  QUALITY_MID = 7,
  QUALITY_HIGH = 8,
  QUALITY_HIGH1 = 9,
  QUALITY_ABR = 10,
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
[[nodiscard]] static inline std::string toString(Lhdcv5QualityIndex val) {
  switch(val) {
  case Lhdcv5QualityIndex::UNKNOWN:
    return "UNKNOWN";
  case Lhdcv5QualityIndex::QUALITY_LOW0:
    return "QUALITY_LOW0";
  case Lhdcv5QualityIndex::QUALITY_LOW1:
    return "QUALITY_LOW1";
  case Lhdcv5QualityIndex::QUALITY_LOW2:
    return "QUALITY_LOW2";
  case Lhdcv5QualityIndex::QUALITY_LOW3:
    return "QUALITY_LOW3";
  case Lhdcv5QualityIndex::QUALITY_LOW4:
    return "QUALITY_LOW4";
  case Lhdcv5QualityIndex::QUALITY_LOW:
    return "QUALITY_LOW";
  case Lhdcv5QualityIndex::QUALITY_MID:
    return "QUALITY_MID";
  case Lhdcv5QualityIndex::QUALITY_HIGH:
    return "QUALITY_HIGH";
  case Lhdcv5QualityIndex::QUALITY_HIGH1:
    return "QUALITY_HIGH1";
  case Lhdcv5QualityIndex::QUALITY_ABR:
    return "QUALITY_ABR";
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
constexpr inline std::array<aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex, 11> enum_values<aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex> = {
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::UNKNOWN,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_LOW0,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_LOW1,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_LOW2,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_LOW3,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_LOW4,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_LOW,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_MID,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_HIGH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_HIGH1,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex::QUALITY_ABR,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
