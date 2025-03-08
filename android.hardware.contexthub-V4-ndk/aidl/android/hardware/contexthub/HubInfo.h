/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/HubInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/HubInfo.aidl
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
#include <aidl/android/hardware/contexthub/ContextHubInfo.h>
#include <aidl/android/hardware/contexthub/HubInfo.h>
#include <aidl/android/hardware/contexthub/VendorHubInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

#ifndef __BIONIC__
#define __assert2(a,b,c,d) ((void)0)
#endif

namespace aidl::android::hardware::contexthub {
class ContextHubInfo;
class VendorHubInfo;
}  // namespace aidl::android::hardware::contexthub
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ANDROIDHARDWARECONTEXTHUBV4NDK_API HubInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  class ANDROIDHARDWARECONTEXTHUBV4NDK_API HubDetails {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    enum class Tag : int32_t {
      contextHubInfo = 0,
      vendorHubInfo = 1,
    };

    // Expose tag symbols for legacy code
    static const inline Tag contextHubInfo = Tag::contextHubInfo;
    static const inline Tag vendorHubInfo = Tag::vendorHubInfo;

    template<typename _Tp>
    static constexpr bool _not_self = !std::is_same_v<std::remove_cv_t<std::remove_reference_t<_Tp>>, HubDetails>;

    HubDetails() : _value(std::in_place_index<static_cast<size_t>(contextHubInfo)>, ::aidl::android::hardware::contexthub::ContextHubInfo()) { }

    template <typename _Tp, typename = std::enable_if_t<
        _not_self<_Tp> &&
        std::is_constructible_v<std::variant<::aidl::android::hardware::contexthub::ContextHubInfo, ::aidl::android::hardware::contexthub::VendorHubInfo>, _Tp>
      >>
    // NOLINTNEXTLINE(google-explicit-constructor)
    constexpr HubDetails(_Tp&& _arg)
        : _value(std::forward<_Tp>(_arg)) {}

    template <size_t _Np, typename... _Tp>
    constexpr explicit HubDetails(std::in_place_index_t<_Np>, _Tp&&... _args)
        : _value(std::in_place_index<_Np>, std::forward<_Tp>(_args)...) {}

    template <Tag _tag, typename... _Tp>
    static HubDetails make(_Tp&&... _args) {
      return HubDetails(std::in_place_index<static_cast<size_t>(_tag)>, std::forward<_Tp>(_args)...);
    }

    template <Tag _tag, typename _Tp, typename... _Up>
    static HubDetails make(std::initializer_list<_Tp> _il, _Up&&... _args) {
      return HubDetails(std::in_place_index<static_cast<size_t>(_tag)>, std::move(_il), std::forward<_Up>(_args)...);
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

    inline bool operator==(const HubDetails& _rhs) const {
      return _value == _rhs._value;
    }
    inline bool operator<(const HubDetails& _rhs) const {
      return _value < _rhs._value;
    }
    inline bool operator!=(const HubDetails& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const HubDetails& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const HubDetails& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const HubDetails& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream os;
      os << "HubDetails{";
      switch (getTag()) {
      case contextHubInfo: os << "contextHubInfo: " << ::android::internal::ToString(get<contextHubInfo>()); break;
      case vendorHubInfo: os << "vendorHubInfo: " << ::android::internal::ToString(get<vendorHubInfo>()); break;
      }
      os << "}";
      return os.str();
    }
  private:
    std::variant<::aidl::android::hardware::contexthub::ContextHubInfo, ::aidl::android::hardware::contexthub::VendorHubInfo> _value;
  };
  int64_t hubId = 0L;
  ::aidl::android::hardware::contexthub::HubInfo::HubDetails hubDetails;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const HubInfo& _rhs) const {
    return std::tie(hubId, hubDetails) == std::tie(_rhs.hubId, _rhs.hubDetails);
  }
  inline bool operator<(const HubInfo& _rhs) const {
    return std::tie(hubId, hubDetails) < std::tie(_rhs.hubId, _rhs.hubDetails);
  }
  inline bool operator!=(const HubInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const HubInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const HubInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const HubInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int64_t { HUB_ID_INVALID = 0L };
  enum : int64_t { HUB_ID_RESERVED = -1L };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "HubInfo{";
    _aidl_os << "hubId: " << ::android::internal::ToString(hubId);
    _aidl_os << ", hubDetails: " << ::android::internal::ToString(hubDetails);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
[[nodiscard]] static inline std::string toString(HubInfo::HubDetails::Tag val) {
  switch(val) {
  case HubInfo::HubDetails::Tag::contextHubInfo:
    return "contextHubInfo";
  case HubInfo::HubDetails::Tag::vendorHubInfo:
    return "vendorHubInfo";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::contexthub::HubInfo::HubDetails::Tag, 2> enum_values<aidl::android::hardware::contexthub::HubInfo::HubDetails::Tag> = {
  aidl::android::hardware::contexthub::HubInfo::HubDetails::Tag::contextHubInfo,
  aidl::android::hardware::contexthub::HubInfo::HubDetails::Tag::vendorHubInfo,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
