/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 985ad49c876a50c60c726dc87f60cb598fd087ad --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging/android/media/audio/common/PcmType.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/1/android/media/audio/common/PcmType.aidl
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
enum class PcmType : int8_t {
  DEFAULT = 0,
  UINT_8_BIT = 0,
  INT_16_BIT = 1,
  INT_32_BIT = 2,
  FIXED_Q_8_24 = 3,
  FLOAT_32_BIT = 4,
  INT_24_BIT = 5,
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
[[nodiscard]] static inline std::string toString(PcmType val) {
  switch(val) {
  case PcmType::DEFAULT:
    return "DEFAULT";
  case PcmType::INT_16_BIT:
    return "INT_16_BIT";
  case PcmType::INT_32_BIT:
    return "INT_32_BIT";
  case PcmType::FIXED_Q_8_24:
    return "FIXED_Q_8_24";
  case PcmType::FLOAT_32_BIT:
    return "FLOAT_32_BIT";
  case PcmType::INT_24_BIT:
    return "INT_24_BIT";
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
constexpr inline std::array<aidl::android::media::audio::common::PcmType, 7> enum_values<aidl::android::media::audio::common::PcmType> = {
  aidl::android::media::audio::common::PcmType::DEFAULT,
  aidl::android::media::audio::common::PcmType::UINT_8_BIT,
  aidl::android::media::audio::common::PcmType::INT_16_BIT,
  aidl::android::media::audio::common::PcmType::INT_32_BIT,
  aidl::android::media::audio::common::PcmType::FIXED_Q_8_24,
  aidl::android::media::audio::common::PcmType::FLOAT_32_BIT,
  aidl::android::media::audio::common::PcmType::INT_24_BIT,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
