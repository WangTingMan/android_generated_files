/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/Service.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/Service.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
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
#include <aidl/android/hardware/contexthub/Service.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ANDROIDHARDWARECONTEXTHUBV4NDK_API Service {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  enum class RpcFormat : int32_t {
    CUSTOM = 0,
    AIDL = 1,
    PW_RPC_PROTOBUF = 2,
  };

  ::aidl::android::hardware::contexthub::Service::RpcFormat format = ::aidl::android::hardware::contexthub::Service::RpcFormat(0);
  std::string serviceDescriptor;
  int32_t majorVersion = 0;
  int32_t minorVersion = 0;
  ::ndk::AParcelableHolder extendedInfo{::ndk::STABILITY_VINTF};

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Service& _rhs) const {
    return std::tie(format, serviceDescriptor, majorVersion, minorVersion, extendedInfo) == std::tie(_rhs.format, _rhs.serviceDescriptor, _rhs.majorVersion, _rhs.minorVersion, _rhs.extendedInfo);
  }
  inline bool operator<(const Service& _rhs) const {
    return std::tie(format, serviceDescriptor, majorVersion, minorVersion, extendedInfo) < std::tie(_rhs.format, _rhs.serviceDescriptor, _rhs.majorVersion, _rhs.minorVersion, _rhs.extendedInfo);
  }
  inline bool operator!=(const Service& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Service& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Service& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Service& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Service{";
    _aidl_os << "format: " << ::android::internal::ToString(format);
    _aidl_os << ", serviceDescriptor: " << ::android::internal::ToString(serviceDescriptor);
    _aidl_os << ", majorVersion: " << ::android::internal::ToString(majorVersion);
    _aidl_os << ", minorVersion: " << ::android::internal::ToString(minorVersion);
    _aidl_os << ", extendedInfo: " << ::android::internal::ToString(extendedInfo);
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
[[nodiscard]] static inline std::string toString(Service::RpcFormat val) {
  switch(val) {
  case Service::RpcFormat::CUSTOM:
    return "CUSTOM";
  case Service::RpcFormat::AIDL:
    return "AIDL";
  case Service::RpcFormat::PW_RPC_PROTOBUF:
    return "PW_RPC_PROTOBUF";
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
constexpr inline std::array<aidl::android::hardware::contexthub::Service::RpcFormat, 3> enum_values<aidl::android::hardware::contexthub::Service::RpcFormat> = {
  aidl::android::hardware::contexthub::Service::RpcFormat::CUSTOM,
  aidl::android::hardware::contexthub::Service::RpcFormat::AIDL,
  aidl::android::hardware::contexthub::Service::RpcFormat::PW_RPC_PROTOBUF,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
