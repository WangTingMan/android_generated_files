/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/RfcommCapabilities.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/RfcommCapabilities.aidl
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
namespace bluetooth {
namespace socket {
class RfcommCapabilities {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t numberOfSupportedSockets = 0;
  int32_t maxFrameSize = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const RfcommCapabilities& _rhs) const {
    return std::tie(numberOfSupportedSockets, maxFrameSize) == std::tie(_rhs.numberOfSupportedSockets, _rhs.maxFrameSize);
  }
  inline bool operator<(const RfcommCapabilities& _rhs) const {
    return std::tie(numberOfSupportedSockets, maxFrameSize) < std::tie(_rhs.numberOfSupportedSockets, _rhs.maxFrameSize);
  }
  inline bool operator!=(const RfcommCapabilities& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const RfcommCapabilities& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const RfcommCapabilities& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const RfcommCapabilities& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "RfcommCapabilities{";
    _aidl_os << "numberOfSupportedSockets: " << ::android::internal::ToString(numberOfSupportedSockets);
    _aidl_os << ", maxFrameSize: " << ::android::internal::ToString(maxFrameSize);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
