/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 985ad49c876a50c60c726dc87f60cb598fd087ad --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging/android/media/audio/common/AudioEncapsulationMode.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1/android/media/audio/common/AudioEncapsulationMode.aidl
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
namespace media {
namespace audio {
namespace common {
enum class AudioEncapsulationMode : int8_t {
  INVALID = -1,
  NONE = 0,
  ELEMENTARY_STREAM = 1,
  HANDLE = 2,
};

}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
[[nodiscard]] static inline std::string toString(AudioEncapsulationMode val) {
  switch(val) {
  case AudioEncapsulationMode::INVALID:
    return "INVALID";
  case AudioEncapsulationMode::NONE:
    return "NONE";
  case AudioEncapsulationMode::ELEMENTARY_STREAM:
    return "ELEMENTARY_STREAM";
  case AudioEncapsulationMode::HANDLE:
    return "HANDLE";
  default:
    return std::to_string(static_cast<int8_t>(val));
  }
}
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::media::audio::common::AudioEncapsulationMode, 4> enum_values<aidl::android::media::audio::common::AudioEncapsulationMode> = {
  aidl::android::media::audio::common::AudioEncapsulationMode::INVALID,
  aidl::android::media::audio::common::AudioEncapsulationMode::NONE,
  aidl::android::media::audio::common::AudioEncapsulationMode::ELEMENTARY_STREAM,
  aidl::android::media::audio::common::AudioEncapsulationMode::HANDLE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
