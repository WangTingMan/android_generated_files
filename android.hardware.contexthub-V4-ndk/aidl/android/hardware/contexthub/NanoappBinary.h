/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/NanoappBinary.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/NanoappBinary.aidl
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
class NanoappBinary {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int64_t nanoappId = 0L;
  int32_t nanoappVersion = 0;
  int32_t flags = 0;
  int8_t targetChreApiMajorVersion = 0;
  int8_t targetChreApiMinorVersion = 0;
  std::vector<uint8_t> customBinary;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const NanoappBinary& _rhs) const {
    return std::tie(nanoappId, nanoappVersion, flags, targetChreApiMajorVersion, targetChreApiMinorVersion, customBinary) == std::tie(_rhs.nanoappId, _rhs.nanoappVersion, _rhs.flags, _rhs.targetChreApiMajorVersion, _rhs.targetChreApiMinorVersion, _rhs.customBinary);
  }
  inline bool operator<(const NanoappBinary& _rhs) const {
    return std::tie(nanoappId, nanoappVersion, flags, targetChreApiMajorVersion, targetChreApiMinorVersion, customBinary) < std::tie(_rhs.nanoappId, _rhs.nanoappVersion, _rhs.flags, _rhs.targetChreApiMajorVersion, _rhs.targetChreApiMinorVersion, _rhs.customBinary);
  }
  inline bool operator!=(const NanoappBinary& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const NanoappBinary& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const NanoappBinary& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const NanoappBinary& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  enum : int32_t { FLAG_SIGNED = 1 };
  enum : int32_t { FLAG_ENCRYPTED = 2 };
  enum : int32_t { FLAG_TCM_CAPABLE = 4 };
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "NanoappBinary{";
    _aidl_os << "nanoappId: " << ::android::internal::ToString(nanoappId);
    _aidl_os << ", nanoappVersion: " << ::android::internal::ToString(nanoappVersion);
    _aidl_os << ", flags: " << ::android::internal::ToString(flags);
    _aidl_os << ", targetChreApiMajorVersion: " << ::android::internal::ToString(targetChreApiMajorVersion);
    _aidl_os << ", targetChreApiMinorVersion: " << ::android::internal::ToString(targetChreApiMinorVersion);
    _aidl_os << ", customBinary: " << ::android::internal::ToString(customBinary);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
