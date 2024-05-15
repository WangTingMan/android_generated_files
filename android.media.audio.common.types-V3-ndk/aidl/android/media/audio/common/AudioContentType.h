/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging/android/media/audio/common/AudioContentType.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/AudioContentType.aidl
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
#include "ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
enum class AudioContentType : int32_t {
  UNKNOWN = 0,
  SPEECH = 1,
  MUSIC = 2,
  MOVIE = 3,
  SONIFICATION = 4,
  ULTRASOUND = 1997,
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
[[nodiscard]] static inline std::string toString(AudioContentType val) {
  switch(val) {
  case AudioContentType::UNKNOWN:
    return "UNKNOWN";
  case AudioContentType::SPEECH:
    return "SPEECH";
  case AudioContentType::MUSIC:
    return "MUSIC";
  case AudioContentType::MOVIE:
    return "MOVIE";
  case AudioContentType::SONIFICATION:
    return "SONIFICATION";
  case AudioContentType::ULTRASOUND:
    return "ULTRASOUND";
  default:
    return std::to_string(static_cast<int32_t>(val));
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
constexpr inline std::array<aidl::android::media::audio::common::AudioContentType, 6> enum_values<aidl::android::media::audio::common::AudioContentType> = {
  aidl::android::media::audio::common::AudioContentType::UNKNOWN,
  aidl::android::media::audio::common::AudioContentType::SPEECH,
  aidl::android::media::audio::common::AudioContentType::MUSIC,
  aidl::android::media::audio::common::AudioContentType::MOVIE,
  aidl::android::media::audio::common::AudioContentType::SONIFICATION,
  aidl::android::media::audio::common::AudioContentType::ULTRASOUND,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
