/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 79bbabfe33e09450c7fc6120bd45f5339f3c7584 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging/android/media/audio/common/AudioMMapPolicy.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2/android/media/audio/common/AudioMMapPolicy.aidl
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
enum class AudioMMapPolicy : int32_t {
  UNSPECIFIED = 0,
  NEVER = 1,
  AUTO = 2,
  ALWAYS = 3,
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
[[nodiscard]] static inline std::string toString(AudioMMapPolicy val) {
  switch(val) {
  case AudioMMapPolicy::UNSPECIFIED:
    return "UNSPECIFIED";
  case AudioMMapPolicy::NEVER:
    return "NEVER";
  case AudioMMapPolicy::AUTO:
    return "AUTO";
  case AudioMMapPolicy::ALWAYS:
    return "ALWAYS";
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
constexpr inline std::array<aidl::android::media::audio::common::AudioMMapPolicy, 4> enum_values<aidl::android::media::audio::common::AudioMMapPolicy> = {
  aidl::android::media::audio::common::AudioMMapPolicy::UNSPECIFIED,
  aidl::android::media::audio::common::AudioMMapPolicy::NEVER,
  aidl::android::media::audio::common::AudioMMapPolicy::AUTO,
  aidl::android::media::audio::common::AudioMMapPolicy::ALWAYS,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
