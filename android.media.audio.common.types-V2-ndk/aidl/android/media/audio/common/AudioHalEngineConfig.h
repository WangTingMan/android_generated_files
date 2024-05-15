/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 79bbabfe33e09450c7fc6120bd45f5339f3c7584 --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging/android/media/audio/common/AudioHalEngineConfig.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2/android/media/audio/common/AudioHalEngineConfig.aidl
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
#include <aidl/android/media/audio/common/AudioHalCapCriterion.h>
#include <aidl/android/media/audio/common/AudioHalCapCriterionType.h>
#include <aidl/android/media/audio/common/AudioHalEngineConfig.h>
#include <aidl/android/media/audio/common/AudioHalProductStrategy.h>
#include <aidl/android/media/audio/common/AudioHalVolumeGroup.h>
#include <aidl/android/media/audio/common/AudioProductStrategyType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "ANDROIDMEDIAAUDIOCOMMONTYPESV2NDK_EXPORTS_.h"

namespace aidl::android::media::audio::common {
class AudioHalCapCriterion;
class AudioHalCapCriterionType;
class AudioHalProductStrategy;
class AudioHalVolumeGroup;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV2NDK_EXPORTS_API AudioHalEngineConfig {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  class ANDROIDMEDIAAUDIOCOMMONTYPESV2NDK_EXPORTS_API CapSpecificConfig {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    std::vector<::aidl::android::media::audio::common::AudioHalCapCriterion> criteria;
    std::vector<::aidl::android::media::audio::common::AudioHalCapCriterionType> criterionTypes;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const CapSpecificConfig& _rhs) const {
      return std::tie(criteria, criterionTypes) == std::tie(_rhs.criteria, _rhs.criterionTypes);
    }
    inline bool operator<(const CapSpecificConfig& _rhs) const {
      return std::tie(criteria, criterionTypes) < std::tie(_rhs.criteria, _rhs.criterionTypes);
    }
    inline bool operator!=(const CapSpecificConfig& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const CapSpecificConfig& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const CapSpecificConfig& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const CapSpecificConfig& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "CapSpecificConfig{";
      _aidl_os << "criteria: " << ::android::internal::ToString(criteria);
      _aidl_os << ", criterionTypes: " << ::android::internal::ToString(criterionTypes);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  int32_t defaultProductStrategyId = -1;
  std::vector<::aidl::android::media::audio::common::AudioHalProductStrategy> productStrategies;
  std::vector<::aidl::android::media::audio::common::AudioHalVolumeGroup> volumeGroups;
  std::optional<::aidl::android::media::audio::common::AudioHalEngineConfig::CapSpecificConfig> capSpecificConfig;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AudioHalEngineConfig& _rhs) const {
    return std::tie(defaultProductStrategyId, productStrategies, volumeGroups, capSpecificConfig) == std::tie(_rhs.defaultProductStrategyId, _rhs.productStrategies, _rhs.volumeGroups, _rhs.capSpecificConfig);
  }
  inline bool operator<(const AudioHalEngineConfig& _rhs) const {
    return std::tie(defaultProductStrategyId, productStrategies, volumeGroups, capSpecificConfig) < std::tie(_rhs.defaultProductStrategyId, _rhs.productStrategies, _rhs.volumeGroups, _rhs.capSpecificConfig);
  }
  inline bool operator!=(const AudioHalEngineConfig& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioHalEngineConfig& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioHalEngineConfig& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioHalEngineConfig& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AudioHalEngineConfig{";
    _aidl_os << "defaultProductStrategyId: " << ::android::internal::ToString(defaultProductStrategyId);
    _aidl_os << ", productStrategies: " << ::android::internal::ToString(productStrategies);
    _aidl_os << ", volumeGroups: " << ::android::internal::ToString(volumeGroups);
    _aidl_os << ", capSpecificConfig: " << ::android::internal::ToString(capSpecificConfig);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
