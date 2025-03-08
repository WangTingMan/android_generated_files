/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/IBluetoothSocket.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/IBluetoothSocket.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/socket/IBluetoothSocket.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API BpBluetoothSocket : public ::ndk::BpCInterface<IBluetoothSocket> {
public:
  explicit BpBluetoothSocket(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothSocket();

  ::ndk::ScopedAStatus registerCallback(const std::shared_ptr<::aidl::android::hardware::bluetooth::socket::IBluetoothSocketCallback>& in_callback) override;
  ::ndk::ScopedAStatus getSocketCapabilities(::aidl::android::hardware::bluetooth::socket::SocketCapabilities* _aidl_return) override;
  ::ndk::ScopedAStatus opened(const ::aidl::android::hardware::bluetooth::socket::SocketContext& in_context) override;
  ::ndk::ScopedAStatus closed(int64_t in_socketId) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
