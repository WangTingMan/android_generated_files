/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/MessageDeliveryStatus.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/MessageDeliveryStatus.aidl
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
#include <aidl/android/hardware/contexthub/ErrorCode.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class MessageDeliveryStatus {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t messageSequenceNumber = 0;
  ::aidl::android::hardware::contexthub::ErrorCode errorCode = ::aidl::android::hardware::contexthub::ErrorCode(0);

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const MessageDeliveryStatus& _rhs) const {
    return std::tie(messageSequenceNumber, errorCode) == std::tie(_rhs.messageSequenceNumber, _rhs.errorCode);
  }
  inline bool operator<(const MessageDeliveryStatus& _rhs) const {
    return std::tie(messageSequenceNumber, errorCode) < std::tie(_rhs.messageSequenceNumber, _rhs.errorCode);
  }
  inline bool operator!=(const MessageDeliveryStatus& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const MessageDeliveryStatus& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const MessageDeliveryStatus& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const MessageDeliveryStatus& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "MessageDeliveryStatus{";
    _aidl_os << "messageSequenceNumber: " << ::android::internal::ToString(messageSequenceNumber);
    _aidl_os << ", errorCode: " << ::android::internal::ToString(errorCode);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
