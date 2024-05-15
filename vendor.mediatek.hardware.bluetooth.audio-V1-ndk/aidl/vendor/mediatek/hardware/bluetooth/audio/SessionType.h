/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/SessionType.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/SessionType.aidl
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
enum class SessionType : int8_t {
  UNKNOWN = 0,
  A2DP_SOFTWARE_ENCODING_DATAPATH = 1,
  A2DP_HARDWARE_OFFLOAD_ENCODING_DATAPATH = 2,
  HEARING_AID_SOFTWARE_ENCODING_DATAPATH = 3,
  LE_AUDIO_SOFTWARE_ENCODING_DATAPATH = 4,
  LE_AUDIO_SOFTWARE_DECODING_DATAPATH = 5,
  LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH = 6,
  LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH = 7,
  LE_AUDIO_BROADCAST_SOFTWARE_ENCODING_DATAPATH = 8,
  LE_AUDIO_BROADCAST_HARDWARE_OFFLOAD_ENCODING_DATAPATH = 9,
  A2DP_SOFTWARE_DECODING_DATAPATH = 10,
  A2DP_HARDWARE_OFFLOAD_DECODING_DATAPATH = 11,
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
[[nodiscard]] static inline std::string toString(SessionType val) {
  switch(val) {
  case SessionType::UNKNOWN:
    return "UNKNOWN";
  case SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH:
    return "A2DP_SOFTWARE_ENCODING_DATAPATH";
  case SessionType::A2DP_HARDWARE_OFFLOAD_ENCODING_DATAPATH:
    return "A2DP_HARDWARE_OFFLOAD_ENCODING_DATAPATH";
  case SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH:
    return "HEARING_AID_SOFTWARE_ENCODING_DATAPATH";
  case SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH:
    return "LE_AUDIO_SOFTWARE_ENCODING_DATAPATH";
  case SessionType::LE_AUDIO_SOFTWARE_DECODING_DATAPATH:
    return "LE_AUDIO_SOFTWARE_DECODING_DATAPATH";
  case SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH:
    return "LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH";
  case SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH:
    return "LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH";
  case SessionType::LE_AUDIO_BROADCAST_SOFTWARE_ENCODING_DATAPATH:
    return "LE_AUDIO_BROADCAST_SOFTWARE_ENCODING_DATAPATH";
  case SessionType::LE_AUDIO_BROADCAST_HARDWARE_OFFLOAD_ENCODING_DATAPATH:
    return "LE_AUDIO_BROADCAST_HARDWARE_OFFLOAD_ENCODING_DATAPATH";
  case SessionType::A2DP_SOFTWARE_DECODING_DATAPATH:
    return "A2DP_SOFTWARE_DECODING_DATAPATH";
  case SessionType::A2DP_HARDWARE_OFFLOAD_DECODING_DATAPATH:
    return "A2DP_HARDWARE_OFFLOAD_DECODING_DATAPATH";
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
constexpr inline std::array<aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType, 12> enum_values<aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType> = {
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::UNKNOWN,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::A2DP_HARDWARE_OFFLOAD_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::LE_AUDIO_SOFTWARE_DECODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::LE_AUDIO_BROADCAST_SOFTWARE_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::LE_AUDIO_BROADCAST_HARDWARE_OFFLOAD_ENCODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::A2DP_SOFTWARE_DECODING_DATAPATH,
  aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType::A2DP_HARDWARE_OFFLOAD_DECODING_DATAPATH,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
