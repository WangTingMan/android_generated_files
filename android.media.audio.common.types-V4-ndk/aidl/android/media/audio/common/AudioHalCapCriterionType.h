/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash af71e6ae2c6861fc2b09bb477e7285e6777cd41c -t --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V4-ndk-source/gen/staging/android/media/audio/common/AudioHalCapCriterionType.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V4-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/4 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/4/android/media/audio/common/AudioHalCapCriterionType.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API AudioHalCapCriterionType {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::string name;
  bool isInclusive = false;
  std::vector<std::string> values;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioHalCapCriterionType& _rhs) const {
    return std::tie(name, isInclusive, values) == std::tie(_rhs.name, _rhs.isInclusive, _rhs.values);
  }
  inline bool operator<(const AudioHalCapCriterionType& _rhs) const {
    return std::tie(name, isInclusive, values) < std::tie(_rhs.name, _rhs.isInclusive, _rhs.values);
  }
  inline bool operator!=(const AudioHalCapCriterionType& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioHalCapCriterionType& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioHalCapCriterionType& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioHalCapCriterionType& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioHalCapCriterionType{";
    _aidl_os << "name: " << ::android::internal::ToString(name);
    _aidl_os << ", isInclusive: " << ::android::internal::ToString(isInclusive);
    _aidl_os << ", values: " << ::android::internal::ToString(values);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
