/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5Specific.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5Specific.aidl
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
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
enum class Lhdcv5Specific : int8_t {
  UNKNOWN = 0,
  SPECIFIC_FEATURE_AR = 1,
  SPECIFIC_FEATURE_JAS = 2,
  SPECIFIC_FEATURE_META = 3,
  SPECIFIC_ACTION_AR_ON = 4,
  SPECIFIC_FEATURE_SPLIT = 5,
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
[[nodiscard]] static inline std::string toString(Lhdcv5Specific val) {
  switch(val) {
  case Lhdcv5Specific::UNKNOWN:
    return "UNKNOWN";
  case Lhdcv5Specific::SPECIFIC_FEATURE_AR:
    return "SPECIFIC_FEATURE_AR";
  case Lhdcv5Specific::SPECIFIC_FEATURE_JAS:
    return "SPECIFIC_FEATURE_JAS";
  case Lhdcv5Specific::SPECIFIC_FEATURE_META:
    return "SPECIFIC_FEATURE_META";
  case Lhdcv5Specific::SPECIFIC_ACTION_AR_ON:
    return "SPECIFIC_ACTION_AR_ON";
  case Lhdcv5Specific::SPECIFIC_FEATURE_SPLIT:
    return "SPECIFIC_FEATURE_SPLIT";
  default:
    return std::to_string(static_cast<int8_t>(val));
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
constexpr inline std::array<aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific, 6> enum_values<aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific> = {
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific::UNKNOWN,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific::SPECIFIC_FEATURE_AR,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific::SPECIFIC_FEATURE_JAS,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific::SPECIFIC_FEATURE_META,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific::SPECIFIC_ACTION_AR_ON,
  aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific::SPECIFIC_FEATURE_SPLIT,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
