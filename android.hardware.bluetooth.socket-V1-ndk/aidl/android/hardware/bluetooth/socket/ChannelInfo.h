/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/ChannelInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/ChannelInfo.aidl
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
#include <aidl/android/hardware/bluetooth/socket/LeCocChannelInfo.h>
#include <aidl/android/hardware/bluetooth/socket/RfcommChannelInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_EXPORTS_.h"

#ifndef __BIONIC__
#define __assert2(a,b,c,d) ((void)0)
#endif

namespace aidl::android::hardware::bluetooth::socket {
class LeCocChannelInfo;
class RfcommChannelInfo;
}  // namespace aidl::android::hardware::bluetooth::socket
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API ChannelInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  enum class Tag : int32_t {
    leCocChannelInfo = 0,
    rfcommChannelInfo = 1,
  };

  // Expose tag symbols for legacy code
  static const inline Tag leCocChannelInfo = Tag::leCocChannelInfo;
  static const inline Tag rfcommChannelInfo = Tag::rfcommChannelInfo;

  template<typename _Tp>
  static constexpr bool _not_self = !std::is_same_v<std::remove_cv_t<std::remove_reference_t<_Tp>>, ChannelInfo>;

  ChannelInfo() : _value(std::in_place_index<static_cast<size_t>(leCocChannelInfo)>, ::aidl::android::hardware::bluetooth::socket::LeCocChannelInfo()) { }

  template <typename _Tp, typename = std::enable_if_t<
      _not_self<_Tp> &&
      std::is_constructible_v<std::variant<::aidl::android::hardware::bluetooth::socket::LeCocChannelInfo, ::aidl::android::hardware::bluetooth::socket::RfcommChannelInfo>, _Tp>
    >>
  // NOLINTNEXTLINE(google-explicit-constructor)
  constexpr ChannelInfo(_Tp&& _arg)
      : _value(std::forward<_Tp>(_arg)) {}

  template <size_t _Np, typename... _Tp>
  constexpr explicit ChannelInfo(std::in_place_index_t<_Np>, _Tp&&... _args)
      : _value(std::in_place_index<_Np>, std::forward<_Tp>(_args)...) {}

  template <Tag _tag, typename... _Tp>
  static ChannelInfo make(_Tp&&... _args) {
    return ChannelInfo(std::in_place_index<static_cast<size_t>(_tag)>, std::forward<_Tp>(_args)...);
  }

  template <Tag _tag, typename _Tp, typename... _Up>
  static ChannelInfo make(std::initializer_list<_Tp> _il, _Up&&... _args) {
    return ChannelInfo(std::in_place_index<static_cast<size_t>(_tag)>, std::move(_il), std::forward<_Up>(_args)...);
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

  inline bool operator==(const ChannelInfo& _rhs) const {
    return _value == _rhs._value;
  }
  inline bool operator<(const ChannelInfo& _rhs) const {
    return _value < _rhs._value;
  }
  inline bool operator!=(const ChannelInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ChannelInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ChannelInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ChannelInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream os;
    os << "ChannelInfo{";
    switch (getTag()) {
    case leCocChannelInfo: os << "leCocChannelInfo: " << ::android::internal::ToString(get<leCocChannelInfo>()); break;
    case rfcommChannelInfo: os << "rfcommChannelInfo: " << ::android::internal::ToString(get<rfcommChannelInfo>()); break;
    }
    os << "}";
    return os.str();
  }
private:
  std::variant<::aidl::android::hardware::bluetooth::socket::LeCocChannelInfo, ::aidl::android::hardware::bluetooth::socket::RfcommChannelInfo> _value;
};
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
[[nodiscard]] static inline std::string toString(ChannelInfo::Tag val) {
  switch(val) {
  case ChannelInfo::Tag::leCocChannelInfo:
    return "leCocChannelInfo";
  case ChannelInfo::Tag::rfcommChannelInfo:
    return "rfcommChannelInfo";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::bluetooth::socket::ChannelInfo::Tag, 2> enum_values<aidl::android::hardware::bluetooth::socket::ChannelInfo::Tag> = {
  aidl::android::hardware::bluetooth::socket::ChannelInfo::Tag::leCocChannelInfo,
  aidl::android::hardware::bluetooth::socket::ChannelInfo::Tag::rfcommChannelInfo,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
