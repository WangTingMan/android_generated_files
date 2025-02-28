/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/BluetoothAudioStatus.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/BluetoothAudioStatus.aidl
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
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
enum class BluetoothAudioStatus : int32_t {
  UNKNOWN = 0,
  SUCCESS = 1,
  UNSUPPORTED_CODEC_CONFIGURATION = 2,
  FAILURE = 3,
  RECONFIGURATION = 4,
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
[[nodiscard]] static inline std::string toString(BluetoothAudioStatus val) {
  switch(val) {
  case BluetoothAudioStatus::UNKNOWN:
    return "UNKNOWN";
  case BluetoothAudioStatus::SUCCESS:
    return "SUCCESS";
  case BluetoothAudioStatus::UNSUPPORTED_CODEC_CONFIGURATION:
    return "UNSUPPORTED_CODEC_CONFIGURATION";
  case BluetoothAudioStatus::FAILURE:
    return "FAILURE";
  case BluetoothAudioStatus::RECONFIGURATION:
    return "RECONFIGURATION";
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
constexpr inline std::array<aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus, 5> enum_values<aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus> = {
  aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus::UNKNOWN,
  aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus::SUCCESS,
  aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus::UNSUPPORTED_CODEC_CONFIGURATION,
  aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus::FAILURE,
  aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus::RECONFIGURATION,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
