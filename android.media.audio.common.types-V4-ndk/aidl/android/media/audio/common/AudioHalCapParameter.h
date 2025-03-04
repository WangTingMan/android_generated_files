/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash af71e6ae2c6861fc2b09bb477e7285e6777cd41c -t --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V4-ndk-source/gen/staging/android/media/audio/common/AudioHalCapParameter.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V4-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/4 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/4/android/media/audio/common/AudioHalCapParameter.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <array>
#include <cassert>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <type_traits>
#include <utility>
#include <variant>
#include <vector>
#include <android/binder_enums.h>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/media/audio/common/AudioDeviceAddress.h>
#include <aidl/android/media/audio/common/AudioDeviceDescription.h>
#include <aidl/android/media/audio/common/AudioHalCapParameter.h>
#include <aidl/android/media/audio/common/AudioProductStrategyType.h>
#include <aidl/android/media/audio/common/AudioSource.h>
#include <aidl/android/media/audio/common/AudioStreamType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_EXPORTS_.h"

#ifndef __BIONIC__
#define __assert2(a,b,c,d) ((void)0)
#endif

namespace aidl::android::media::audio::common {
class AudioDeviceDescription;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
class ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API AudioHalCapParameter {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  class ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API StrategyDevice {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    ::aidl::android::media::audio::common::AudioDeviceDescription device;
    int32_t id = -1;
    bool isSelected = false;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const StrategyDevice& _rhs) const {
      return std::tie(device, id, isSelected) == std::tie(_rhs.device, _rhs.id, _rhs.isSelected);
    }
    inline bool operator<(const StrategyDevice& _rhs) const {
      return std::tie(device, id, isSelected) < std::tie(_rhs.device, _rhs.id, _rhs.isSelected);
    }
    inline bool operator!=(const StrategyDevice& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const StrategyDevice& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const StrategyDevice& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const StrategyDevice& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "StrategyDevice{";
      _aidl_os << "device: " << ::android::internal::ToString(device);
      _aidl_os << ", id: " << ::android::internal::ToString(id);
      _aidl_os << ", isSelected: " << ::android::internal::ToString(isSelected);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API InputSourceDevice {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    ::aidl::android::media::audio::common::AudioDeviceDescription device;
    ::aidl::android::media::audio::common::AudioSource inputSource = ::aidl::android::media::audio::common::AudioSource::DEFAULT;
    bool isSelected = false;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const InputSourceDevice& _rhs) const {
      return std::tie(device, inputSource, isSelected) == std::tie(_rhs.device, _rhs.inputSource, _rhs.isSelected);
    }
    inline bool operator<(const InputSourceDevice& _rhs) const {
      return std::tie(device, inputSource, isSelected) < std::tie(_rhs.device, _rhs.inputSource, _rhs.isSelected);
    }
    inline bool operator!=(const InputSourceDevice& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const InputSourceDevice& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const InputSourceDevice& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const InputSourceDevice& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "InputSourceDevice{";
      _aidl_os << "device: " << ::android::internal::ToString(device);
      _aidl_os << ", inputSource: " << ::android::internal::ToString(inputSource);
      _aidl_os << ", isSelected: " << ::android::internal::ToString(isSelected);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API StrategyDeviceAddress {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    ::aidl::android::media::audio::common::AudioDeviceAddress deviceAddress;
    int32_t id = -1;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const StrategyDeviceAddress& _rhs) const {
      return std::tie(deviceAddress, id) == std::tie(_rhs.deviceAddress, _rhs.id);
    }
    inline bool operator<(const StrategyDeviceAddress& _rhs) const {
      return std::tie(deviceAddress, id) < std::tie(_rhs.deviceAddress, _rhs.id);
    }
    inline bool operator!=(const StrategyDeviceAddress& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const StrategyDeviceAddress& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const StrategyDeviceAddress& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const StrategyDeviceAddress& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "StrategyDeviceAddress{";
      _aidl_os << "deviceAddress: " << ::android::internal::ToString(deviceAddress);
      _aidl_os << ", id: " << ::android::internal::ToString(id);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API StreamVolumeProfile {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    ::aidl::android::media::audio::common::AudioStreamType stream = ::aidl::android::media::audio::common::AudioStreamType::INVALID;
    ::aidl::android::media::audio::common::AudioStreamType profile = ::aidl::android::media::audio::common::AudioStreamType::INVALID;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const StreamVolumeProfile& _rhs) const {
      return std::tie(stream, profile) == std::tie(_rhs.stream, _rhs.profile);
    }
    inline bool operator<(const StreamVolumeProfile& _rhs) const {
      return std::tie(stream, profile) < std::tie(_rhs.stream, _rhs.profile);
    }
    inline bool operator!=(const StreamVolumeProfile& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const StreamVolumeProfile& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const StreamVolumeProfile& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const StreamVolumeProfile& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "StreamVolumeProfile{";
      _aidl_os << "stream: " << ::android::internal::ToString(stream);
      _aidl_os << ", profile: " << ::android::internal::ToString(profile);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  enum class Tag : int32_t {
    selectedStrategyDevice = 0,
    selectedInputSourceDevice = 1,
    strategyDeviceAddress = 2,
    streamVolumeProfile = 3,
  };

  // Expose tag symbols for legacy code
  static const inline Tag selectedStrategyDevice = Tag::selectedStrategyDevice;
  static const inline Tag selectedInputSourceDevice = Tag::selectedInputSourceDevice;
  static const inline Tag strategyDeviceAddress = Tag::strategyDeviceAddress;
  static const inline Tag streamVolumeProfile = Tag::streamVolumeProfile;

  template<typename _Tp>
  static constexpr bool _not_self = !std::is_same_v<std::remove_cv_t<std::remove_reference_t<_Tp>>, AudioHalCapParameter>;

  AudioHalCapParameter() : _value(std::in_place_index<static_cast<size_t>(selectedStrategyDevice)>, ::aidl::android::media::audio::common::AudioHalCapParameter::StrategyDevice()) { }

  template <typename _Tp, typename = std::enable_if_t<
      _not_self<_Tp> &&
      std::is_constructible_v<std::variant<::aidl::android::media::audio::common::AudioHalCapParameter::StrategyDevice, ::aidl::android::media::audio::common::AudioHalCapParameter::InputSourceDevice, ::aidl::android::media::audio::common::AudioHalCapParameter::StrategyDeviceAddress, ::aidl::android::media::audio::common::AudioHalCapParameter::StreamVolumeProfile>, _Tp>
    >>
  // NOLINTNEXTLINE(google-explicit-constructor)
  constexpr AudioHalCapParameter(_Tp&& _arg)
      : _value(std::forward<_Tp>(_arg)) {}

  template <size_t _Np, typename... _Tp>
  constexpr explicit AudioHalCapParameter(std::in_place_index_t<_Np>, _Tp&&... _args)
      : _value(std::in_place_index<_Np>, std::forward<_Tp>(_args)...) {}

  template <Tag _tag, typename... _Tp>
  static AudioHalCapParameter make(_Tp&&... _args) {
    return AudioHalCapParameter(std::in_place_index<static_cast<size_t>(_tag)>, std::forward<_Tp>(_args)...);
  }

  template <Tag _tag, typename _Tp, typename... _Up>
  static AudioHalCapParameter make(std::initializer_list<_Tp> _il, _Up&&... _args) {
    return AudioHalCapParameter(std::in_place_index<static_cast<size_t>(_tag)>, std::move(_il), std::forward<_Up>(_args)...);
  }

  Tag getTag() const {
    return static_cast<Tag>(_value.index());
  }

  template <Tag _tag>
  const auto& get() const {
    if (getTag() != _tag) { __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "bad access: a wrong tag"); }
    return std::get<static_cast<size_t>(_tag)>(_value);
  }

  template <Tag _tag>
  auto& get() {
    if (getTag() != _tag) { __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "bad access: a wrong tag"); }
    return std::get<static_cast<size_t>(_tag)>(_value);
  }

  template <Tag _tag, typename... _Tp>
  void set(_Tp&&... _args) {
    _value.emplace<static_cast<size_t>(_tag)>(std::forward<_Tp>(_args)...);
  }

  binder_status_t readFromParcel(const AParcel* _parcel);
  binder_status_t writeToParcel(AParcel* _parcel) const;

  inline bool operator==(const AudioHalCapParameter& _rhs) const {
    return _value == _rhs._value;
  }
  inline bool operator<(const AudioHalCapParameter& _rhs) const {
    return _value < _rhs._value;
  }
  inline bool operator!=(const AudioHalCapParameter& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AudioHalCapParameter& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AudioHalCapParameter& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AudioHalCapParameter& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream os;
    os << "AudioHalCapParameter{";
    switch (getTag()) {
    case selectedStrategyDevice: os << "selectedStrategyDevice: " << ::android::internal::ToString(get<selectedStrategyDevice>()); break;
    case selectedInputSourceDevice: os << "selectedInputSourceDevice: " << ::android::internal::ToString(get<selectedInputSourceDevice>()); break;
    case strategyDeviceAddress: os << "strategyDeviceAddress: " << ::android::internal::ToString(get<strategyDeviceAddress>()); break;
    case streamVolumeProfile: os << "streamVolumeProfile: " << ::android::internal::ToString(get<streamVolumeProfile>()); break;
    }
    os << "}";
    return os.str();
  }
private:
  std::variant<::aidl::android::media::audio::common::AudioHalCapParameter::StrategyDevice, ::aidl::android::media::audio::common::AudioHalCapParameter::InputSourceDevice, ::aidl::android::media::audio::common::AudioHalCapParameter::StrategyDeviceAddress, ::aidl::android::media::audio::common::AudioHalCapParameter::StreamVolumeProfile> _value;
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
[[nodiscard]] static inline std::string toString(AudioHalCapParameter::Tag val) {
  switch(val) {
  case AudioHalCapParameter::Tag::selectedStrategyDevice:
    return "selectedStrategyDevice";
  case AudioHalCapParameter::Tag::selectedInputSourceDevice:
    return "selectedInputSourceDevice";
  case AudioHalCapParameter::Tag::strategyDeviceAddress:
    return "strategyDeviceAddress";
  case AudioHalCapParameter::Tag::streamVolumeProfile:
    return "streamVolumeProfile";
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
constexpr inline std::array<aidl::android::media::audio::common::AudioHalCapParameter::Tag, 4> enum_values<aidl::android::media::audio::common::AudioHalCapParameter::Tag> = {
  aidl::android::media::audio::common::AudioHalCapParameter::Tag::selectedStrategyDevice,
  aidl::android::media::audio::common::AudioHalCapParameter::Tag::selectedInputSourceDevice,
  aidl::android::media::audio::common::AudioHalCapParameter::Tag::strategyDeviceAddress,
  aidl::android::media::audio::common::AudioHalCapParameter::Tag::streamVolumeProfile,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
