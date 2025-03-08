/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/ContextHubMessage.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/ContextHubMessage.aidl
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

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ANDROIDHARDWARECONTEXTHUBV4NDK_API ContextHubMessage {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int64_t nanoappId = 0L;
  char16_t hostEndPoint = '\0';
  int32_t messageType = 0;
  std::vector<uint8_t> messageBody;
  std::vector<std::string> permissions;
  bool isReliable = false;
  int32_t messageSequenceNumber = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ContextHubMessage& _rhs) const {
    return std::tie(nanoappId, hostEndPoint, messageType, messageBody, permissions, isReliable, messageSequenceNumber) == std::tie(_rhs.nanoappId, _rhs.hostEndPoint, _rhs.messageType, _rhs.messageBody, _rhs.permissions, _rhs.isReliable, _rhs.messageSequenceNumber);
  }
  inline bool operator<(const ContextHubMessage& _rhs) const {
    return std::tie(nanoappId, hostEndPoint, messageType, messageBody, permissions, isReliable, messageSequenceNumber) < std::tie(_rhs.nanoappId, _rhs.hostEndPoint, _rhs.messageType, _rhs.messageBody, _rhs.permissions, _rhs.isReliable, _rhs.messageSequenceNumber);
  }
  inline bool operator!=(const ContextHubMessage& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ContextHubMessage& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ContextHubMessage& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ContextHubMessage& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ContextHubMessage{";
    _aidl_os << "nanoappId: " << ::android::internal::ToString(nanoappId);
    _aidl_os << ", hostEndPoint: " << ::android::internal::ToString(hostEndPoint);
    _aidl_os << ", messageType: " << ::android::internal::ToString(messageType);
    _aidl_os << ", messageBody: " << ::android::internal::ToString(messageBody);
    _aidl_os << ", permissions: " << ::android::internal::ToString(permissions);
    _aidl_os << ", isReliable: " << ::android::internal::ToString(isReliable);
    _aidl_os << ", messageSequenceNumber: " << ::android::internal::ToString(messageSequenceNumber);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
