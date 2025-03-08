/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/ContextHubInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/ContextHubInfo.aidl
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

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ContextHubInfo {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::string name;
  std::string vendor;
  std::string toolchain;
  int32_t id = 0;
  float peakMips = 0.000000f;
  int32_t maxSupportedMessageLengthBytes = 0;
  int64_t chrePlatformId = 0L;
  int8_t chreApiMajorVersion = 0;
  int8_t chreApiMinorVersion = 0;
  char16_t chrePatchVersion = '\0';
  std::vector<std::string> supportedPermissions;
  bool supportsReliableMessages = false;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ContextHubInfo& _rhs) const {
    return std::tie(name, vendor, toolchain, id, peakMips, maxSupportedMessageLengthBytes, chrePlatformId, chreApiMajorVersion, chreApiMinorVersion, chrePatchVersion, supportedPermissions, supportsReliableMessages) == std::tie(_rhs.name, _rhs.vendor, _rhs.toolchain, _rhs.id, _rhs.peakMips, _rhs.maxSupportedMessageLengthBytes, _rhs.chrePlatformId, _rhs.chreApiMajorVersion, _rhs.chreApiMinorVersion, _rhs.chrePatchVersion, _rhs.supportedPermissions, _rhs.supportsReliableMessages);
  }
  inline bool operator<(const ContextHubInfo& _rhs) const {
    return std::tie(name, vendor, toolchain, id, peakMips, maxSupportedMessageLengthBytes, chrePlatformId, chreApiMajorVersion, chreApiMinorVersion, chrePatchVersion, supportedPermissions, supportsReliableMessages) < std::tie(_rhs.name, _rhs.vendor, _rhs.toolchain, _rhs.id, _rhs.peakMips, _rhs.maxSupportedMessageLengthBytes, _rhs.chrePlatformId, _rhs.chreApiMajorVersion, _rhs.chreApiMinorVersion, _rhs.chrePatchVersion, _rhs.supportedPermissions, _rhs.supportsReliableMessages);
  }
  inline bool operator!=(const ContextHubInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ContextHubInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ContextHubInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ContextHubInfo& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ContextHubInfo{";
    _aidl_os << "name: " << ::android::internal::ToString(name);
    _aidl_os << ", vendor: " << ::android::internal::ToString(vendor);
    _aidl_os << ", toolchain: " << ::android::internal::ToString(toolchain);
    _aidl_os << ", id: " << ::android::internal::ToString(id);
    _aidl_os << ", peakMips: " << ::android::internal::ToString(peakMips);
    _aidl_os << ", maxSupportedMessageLengthBytes: " << ::android::internal::ToString(maxSupportedMessageLengthBytes);
    _aidl_os << ", chrePlatformId: " << ::android::internal::ToString(chrePlatformId);
    _aidl_os << ", chreApiMajorVersion: " << ::android::internal::ToString(chreApiMajorVersion);
    _aidl_os << ", chreApiMinorVersion: " << ::android::internal::ToString(chreApiMinorVersion);
    _aidl_os << ", chrePatchVersion: " << ::android::internal::ToString(chrePatchVersion);
    _aidl_os << ", supportedPermissions: " << ::android::internal::ToString(supportedPermissions);
    _aidl_os << ", supportsReliableMessages: " << ::android::internal::ToString(supportsReliableMessages);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
