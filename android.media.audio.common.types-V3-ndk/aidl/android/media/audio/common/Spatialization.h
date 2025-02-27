/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash 0c86a38729dd5d560fe3a0eca6aa9d8cf83efb00 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging/android/media/audio/common/Spatialization.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V3-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/3/android/media/audio/common/Spatialization.aidl
 */
#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_enums.h>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class Spatialization {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  enum class Level : int8_t {
    NONE = 0,
    MULTICHANNEL = 1,
    BED_PLUS_OBJECTS = 2,
  };

  enum class Mode : int8_t {
    BINAURAL = 0,
    TRANSAURAL = 1,
  };


  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Spatialization&) const {
    return std::tie() == std::tie();
  }
  inline bool operator<(const Spatialization&) const {
    return std::tie() < std::tie();
  }
  inline bool operator!=(const Spatialization& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Spatialization& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Spatialization& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Spatialization& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Spatialization{";
    _aidl_os << "}";
    return _aidl_os.str();
  }
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
[[nodiscard]] static inline std::string toString(Spatialization::Level val) {
  switch(val) {
  case Spatialization::Level::NONE:
    return "NONE";
  case Spatialization::Level::MULTICHANNEL:
    return "MULTICHANNEL";
  case Spatialization::Level::BED_PLUS_OBJECTS:
    return "BED_PLUS_OBJECTS";
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
constexpr inline std::array<aidl::android::media::audio::common::Spatialization::Level, 3> enum_values<aidl::android::media::audio::common::Spatialization::Level> = {
  aidl::android::media::audio::common::Spatialization::Level::NONE,
  aidl::android::media::audio::common::Spatialization::Level::MULTICHANNEL,
  aidl::android::media::audio::common::Spatialization::Level::BED_PLUS_OBJECTS,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
[[nodiscard]] static inline std::string toString(Spatialization::Mode val) {
  switch(val) {
  case Spatialization::Mode::BINAURAL:
    return "BINAURAL";
  case Spatialization::Mode::TRANSAURAL:
    return "TRANSAURAL";
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
constexpr inline std::array<aidl::android::media::audio::common::Spatialization::Mode, 2> enum_values<aidl::android::media::audio::common::Spatialization::Mode> = {
  aidl::android::media::audio::common::Spatialization::Mode::BINAURAL,
  aidl::android::media::audio::common::Spatialization::Mode::TRANSAURAL,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
