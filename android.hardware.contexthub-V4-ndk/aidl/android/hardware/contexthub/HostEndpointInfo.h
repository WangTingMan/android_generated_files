/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/HostEndpointInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/HostEndpointInfo.aidl
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
#include <aidl/android/hardware/contexthub/HostEndpointInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class HostEndpointInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  enum class Type : int32_t {
    FRAMEWORK = 1,
    APP = 2,
    NATIVE = 3,
  };

  char16_t hostEndpointId = '\0';
  ::aidl::android::hardware::contexthub::HostEndpointInfo::Type type = ::aidl::android::hardware::contexthub::HostEndpointInfo::Type(0);
  std::optional<std::string> packageName;
  std::optional<std::string> attributionTag;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const HostEndpointInfo& _rhs) const {
    return std::tie(hostEndpointId, type, packageName, attributionTag) == std::tie(_rhs.hostEndpointId, _rhs.type, _rhs.packageName, _rhs.attributionTag);
  }
  inline bool operator<(const HostEndpointInfo& _rhs) const {
    return std::tie(hostEndpointId, type, packageName, attributionTag) < std::tie(_rhs.hostEndpointId, _rhs.type, _rhs.packageName, _rhs.attributionTag);
  }
  inline bool operator!=(const HostEndpointInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const HostEndpointInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const HostEndpointInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const HostEndpointInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "HostEndpointInfo{";
    _aidl_os << "hostEndpointId: " << ::android::internal::ToString(hostEndpointId);
    _aidl_os << ", type: " << ::android::internal::ToString(type);
    _aidl_os << ", packageName: " << ::android::internal::ToString(packageName);
    _aidl_os << ", attributionTag: " << ::android::internal::ToString(attributionTag);
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
[[nodiscard]] static inline std::string toString(HostEndpointInfo::Type val) {
  switch(val) {
  case HostEndpointInfo::Type::FRAMEWORK:
    return "FRAMEWORK";
  case HostEndpointInfo::Type::APP:
    return "APP";
  case HostEndpointInfo::Type::NATIVE:
    return "NATIVE";
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
constexpr inline std::array<aidl::android::hardware::contexthub::HostEndpointInfo::Type, 3> enum_values<aidl::android::hardware::contexthub::HostEndpointInfo::Type> = {
  aidl::android::hardware::contexthub::HostEndpointInfo::Type::FRAMEWORK,
  aidl::android::hardware::contexthub::HostEndpointInfo::Type::APP,
  aidl::android::hardware::contexthub::HostEndpointInfo::Type::NATIVE,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
