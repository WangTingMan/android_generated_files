/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash be7f6f90eb88c54a08b4bd98ba130b87a3a467c4 --stability vintf --min_sdk_version 31 --ninja -d out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/qti/hardware/bluetooth/audio/classicVendorCapabilities.cpp.d -h out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1 vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1/vendor/qti/hardware/bluetooth/audio/classicVendorCapabilities.aidl
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
#include <aidl/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4_TTP.h>
#include <aidl/vendor/qti/hardware/bluetooth/audio/VendorCodecType.h>
#include <aidl/vendor/qti/hardware/bluetooth/audio/classicVendorCapabilities.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "VENDORQTIHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

#ifndef __BIONIC__
#define __assert2(a,b,c,d) ((void)0)
#endif

namespace aidl::vendor::qti::hardware::bluetooth::audio {
class AptxAdaptiveR4_TTP;
}  // namespace aidl::vendor::qti::hardware::bluetooth::audio
namespace aidl {
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth {
namespace audio {
class VENDORQTIHARDWAREBLUETOOTHAUDIOV1NDK_API classicVendorCapabilities {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "vendor.qti.hardware.bluetooth.audio.classicVendorCapabilities";

  class VENDORQTIHARDWAREBLUETOOTHAUDIOV1NDK_API AptxAdaptiveR4Capabilities {
  public:
    typedef std::false_type fixed_size;
    static inline constexpr const char* descriptor = "vendor.qti.hardware.bluetooth.audio.classicVendorCapabilities.AptxAdaptiveR4Capabilities";

    std::vector<int32_t> sampleRate;
    std::vector<int32_t> channelMode;
    ::aidl::vendor::qti::hardware::bluetooth::audio::AptxAdaptiveR4_TTP ttp;
    int32_t max_bitrate = 0;
    std::vector<uint8_t> decoder_capability;
    int32_t decoder_capability_len = 0;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const AptxAdaptiveR4Capabilities& _rhs) const {
      return std::tie(sampleRate, channelMode, ttp, max_bitrate, decoder_capability, decoder_capability_len) == std::tie(_rhs.sampleRate, _rhs.channelMode, _rhs.ttp, _rhs.max_bitrate, _rhs.decoder_capability, _rhs.decoder_capability_len);
    }
    inline bool operator<(const AptxAdaptiveR4Capabilities& _rhs) const {
      return std::tie(sampleRate, channelMode, ttp, max_bitrate, decoder_capability, decoder_capability_len) < std::tie(_rhs.sampleRate, _rhs.channelMode, _rhs.ttp, _rhs.max_bitrate, _rhs.decoder_capability, _rhs.decoder_capability_len);
    }
    inline bool operator!=(const AptxAdaptiveR4Capabilities& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const AptxAdaptiveR4Capabilities& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const AptxAdaptiveR4Capabilities& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const AptxAdaptiveR4Capabilities& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "AptxAdaptiveR4Capabilities{";
      _aidl_os << "sampleRate: " << ::android::internal::ToString(sampleRate);
      _aidl_os << ", channelMode: " << ::android::internal::ToString(channelMode);
      _aidl_os << ", ttp: " << ::android::internal::ToString(ttp);
      _aidl_os << ", max_bitrate: " << ::android::internal::ToString(max_bitrate);
      _aidl_os << ", decoder_capability: " << ::android::internal::ToString(decoder_capability);
      _aidl_os << ", decoder_capability_len: " << ::android::internal::ToString(decoder_capability_len);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class VENDORQTIHARDWAREBLUETOOTHAUDIOV1NDK_API CodecSpecific {
  public:
    typedef std::false_type fixed_size;
    static inline constexpr const char* descriptor = "vendor.qti.hardware.bluetooth.audio.classicVendorCapabilities.CodecSpecific";

    enum class Tag : int32_t {
      aptxAdaptiveR4Cap = 0,
    };

    // Expose tag symbols for legacy code
    static const inline Tag aptxAdaptiveR4Cap = Tag::aptxAdaptiveR4Cap;

    template<typename _Tp>
    static constexpr bool _not_self = !std::is_same_v<std::remove_cv_t<std::remove_reference_t<_Tp>>, CodecSpecific>;

    CodecSpecific() : _value(std::in_place_index<static_cast<size_t>(aptxAdaptiveR4Cap)>, ::aidl::vendor::qti::hardware::bluetooth::audio::classicVendorCapabilities::AptxAdaptiveR4Capabilities()) { }

    template <typename _Tp, typename = std::enable_if_t<_not_self<_Tp>>>
    // NOLINTNEXTLINE(google-explicit-constructor)
    constexpr CodecSpecific(_Tp&& _arg)
        : _value(std::forward<_Tp>(_arg)) {}

    template <size_t _Np, typename... _Tp>
    constexpr explicit CodecSpecific(std::in_place_index_t<_Np>, _Tp&&... _args)
        : _value(std::in_place_index<_Np>, std::forward<_Tp>(_args)...) {}

    template <Tag _tag, typename... _Tp>
    static CodecSpecific make(_Tp&&... _args) {
      return CodecSpecific(std::in_place_index<static_cast<size_t>(_tag)>, std::forward<_Tp>(_args)...);
    }

    template <Tag _tag, typename _Tp, typename... _Up>
    static CodecSpecific make(std::initializer_list<_Tp> _il, _Up&&... _args) {
      return CodecSpecific(std::in_place_index<static_cast<size_t>(_tag)>, std::move(_il), std::forward<_Up>(_args)...);
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

    inline bool operator==(const CodecSpecific& _rhs) const {
      return _value == _rhs._value;
    }
    inline bool operator<(const CodecSpecific& _rhs) const {
      return _value < _rhs._value;
    }
    inline bool operator!=(const CodecSpecific& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const CodecSpecific& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const CodecSpecific& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const CodecSpecific& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream os;
      os << "CodecSpecific{";
      switch (getTag()) {
      case aptxAdaptiveR4Cap: os << "aptxAdaptiveR4Cap: " << ::android::internal::ToString(get<aptxAdaptiveR4Cap>()); break;
      }
      os << "}";
      return os.str();
    }
  private:
    std::variant<::aidl::vendor::qti::hardware::bluetooth::audio::classicVendorCapabilities::AptxAdaptiveR4Capabilities> _value;
  };
  ::aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType vendorCodecType = ::aidl::vendor::qti::hardware::bluetooth::audio::VendorCodecType(0);

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const classicVendorCapabilities& _rhs) const {
    return std::tie(vendorCodecType) == std::tie(_rhs.vendorCodecType);
  }
  inline bool operator<(const classicVendorCapabilities& _rhs) const {
    return std::tie(vendorCodecType) < std::tie(_rhs.vendorCodecType);
  }
  inline bool operator!=(const classicVendorCapabilities& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const classicVendorCapabilities& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const classicVendorCapabilities& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const classicVendorCapabilities& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "classicVendorCapabilities{";
    _aidl_os << "vendorCodecType: " << ::android::internal::ToString(vendorCodecType);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
}  // namespace aidl
namespace aidl {
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth {
namespace audio {
[[nodiscard]] static inline std::string toString(classicVendorCapabilities::CodecSpecific::Tag val) {
  switch(val) {
  case classicVendorCapabilities::CodecSpecific::Tag::aptxAdaptiveR4Cap:
    return "aptxAdaptiveR4Cap";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::vendor::qti::hardware::bluetooth::audio::classicVendorCapabilities::CodecSpecific::Tag, 1> enum_values<aidl::vendor::qti::hardware::bluetooth::audio::classicVendorCapabilities::CodecSpecific::Tag> = {
  aidl::vendor::qti::hardware::bluetooth::audio::classicVendorCapabilities::CodecSpecific::Tag::aptxAdaptiveR4Cap,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
