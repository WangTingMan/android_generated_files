/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/Message.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/Message.aidl
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
class Message {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t flags = 0;
  int32_t sequenceNumber = 0;
  std::vector<std::string> permissions;
  int32_t type = 0;
  std::vector<uint8_t> content;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Message& _rhs) const {
    return std::tie(flags, sequenceNumber, permissions, type, content) == std::tie(_rhs.flags, _rhs.sequenceNumber, _rhs.permissions, _rhs.type, _rhs.content);
  }
  inline bool operator<(const Message& _rhs) const {
    return std::tie(flags, sequenceNumber, permissions, type, content) < std::tie(_rhs.flags, _rhs.sequenceNumber, _rhs.permissions, _rhs.type, _rhs.content);
  }
  inline bool operator!=(const Message& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Message& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Message& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Message& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { FLAG_REQUIRES_DELIVERY_STATUS = 1 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Message{";
    _aidl_os << "flags: " << ::android::internal::ToString(flags);
    _aidl_os << ", sequenceNumber: " << ::android::internal::ToString(sequenceNumber);
    _aidl_os << ", permissions: " << ::android::internal::ToString(permissions);
    _aidl_os << ", type: " << ::android::internal::ToString(type);
    _aidl_os << ", content: " << ::android::internal::ToString(content);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
