/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/SocketContext.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/SocketContext.aidl
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
#include <aidl/android/hardware/bluetooth/socket/ChannelInfo.h>
#include <aidl/android/hardware/contexthub/EndpointId.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_EXPORTS_.h"

namespace aidl::android::hardware::contexthub {
class EndpointId;
}  // namespace aidl::android::hardware::contexthub
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API SocketContext {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int64_t socketId = 0L;
  std::string name;
  int32_t aclConnectionHandle = 0;
  ::aidl::android::hardware::bluetooth::socket::ChannelInfo channelInfo;
  ::aidl::android::hardware::contexthub::EndpointId endpointId;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const SocketContext& _rhs) const {
    return std::tie(socketId, name, aclConnectionHandle, channelInfo, endpointId) == std::tie(_rhs.socketId, _rhs.name, _rhs.aclConnectionHandle, _rhs.channelInfo, _rhs.endpointId);
  }
  inline bool operator<(const SocketContext& _rhs) const {
    return std::tie(socketId, name, aclConnectionHandle, channelInfo, endpointId) < std::tie(_rhs.socketId, _rhs.name, _rhs.aclConnectionHandle, _rhs.channelInfo, _rhs.endpointId);
  }
  inline bool operator!=(const SocketContext& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const SocketContext& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const SocketContext& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const SocketContext& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SocketContext{";
    _aidl_os << "socketId: " << ::android::internal::ToString(socketId);
    _aidl_os << ", name: " << ::android::internal::ToString(name);
    _aidl_os << ", aclConnectionHandle: " << ::android::internal::ToString(aclConnectionHandle);
    _aidl_os << ", channelInfo: " << ::android::internal::ToString(channelInfo);
    _aidl_os << ", endpointId: " << ::android::internal::ToString(endpointId);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
