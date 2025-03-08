/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/EndpointInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/EndpointInfo.aidl
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
#include <aidl/android/hardware/contexthub/EndpointId.h>
#include <aidl/android/hardware/contexthub/EndpointInfo.h>
#include <aidl/android/hardware/contexthub/Service.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::contexthub {
class EndpointId;
class Service;
}  // namespace aidl::android::hardware::contexthub
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class EndpointInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  enum class EndpointType : int32_t {
    FRAMEWORK = 1,
    APP = 2,
    NATIVE = 3,
    NANOAPP = 4,
    GENERIC = 5,
  };

  ::aidl::android::hardware::contexthub::EndpointId id;
  ::aidl::android::hardware::contexthub::EndpointInfo::EndpointType type = ::aidl::android::hardware::contexthub::EndpointInfo::EndpointType(0);
  std::string name;
  int32_t version = 0;
  std::optional<std::string> tag;
  std::vector<std::string> requiredPermissions;
  std::vector<::aidl::android::hardware::contexthub::Service> services;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const EndpointInfo& _rhs) const {
    return std::tie(id, type, name, version, tag, requiredPermissions, services) == std::tie(_rhs.id, _rhs.type, _rhs.name, _rhs.version, _rhs.tag, _rhs.requiredPermissions, _rhs.services);
  }
  inline bool operator<(const EndpointInfo& _rhs) const {
    return std::tie(id, type, name, version, tag, requiredPermissions, services) < std::tie(_rhs.id, _rhs.type, _rhs.name, _rhs.version, _rhs.tag, _rhs.requiredPermissions, _rhs.services);
  }
  inline bool operator!=(const EndpointInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const EndpointInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const EndpointInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const EndpointInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "EndpointInfo{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", type: " << ::android::internal::ToString(type);
    _aidl_os << ", name: " << ::android::internal::ToString(name);
    _aidl_os << ", version: " << ::android::internal::ToString(version);
    _aidl_os << ", tag: " << ::android::internal::ToString(tag);
    _aidl_os << ", requiredPermissions: " << ::android::internal::ToString(requiredPermissions);
    _aidl_os << ", services: " << ::android::internal::ToString(services);
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
[[nodiscard]] static inline std::string toString(EndpointInfo::EndpointType val) {
  switch(val) {
  case EndpointInfo::EndpointType::FRAMEWORK:
    return "FRAMEWORK";
  case EndpointInfo::EndpointType::APP:
    return "APP";
  case EndpointInfo::EndpointType::NATIVE:
    return "NATIVE";
  case EndpointInfo::EndpointType::NANOAPP:
    return "NANOAPP";
  case EndpointInfo::EndpointType::GENERIC:
    return "GENERIC";
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
constexpr inline std::array<aidl::android::hardware::contexthub::EndpointInfo::EndpointType, 5> enum_values<aidl::android::hardware::contexthub::EndpointInfo::EndpointType> = {
  aidl::android::hardware::contexthub::EndpointInfo::EndpointType::FRAMEWORK,
  aidl::android::hardware::contexthub::EndpointInfo::EndpointType::APP,
  aidl::android::hardware::contexthub::EndpointInfo::EndpointType::NATIVE,
  aidl::android::hardware::contexthub::EndpointInfo::EndpointType::NANOAPP,
  aidl::android::hardware::contexthub::EndpointInfo::EndpointType::GENERIC,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
