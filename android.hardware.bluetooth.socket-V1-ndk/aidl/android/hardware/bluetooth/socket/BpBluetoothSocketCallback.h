/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/IBluetoothSocketCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/IBluetoothSocketCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/socket/IBluetoothSocketCallback.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API BpBluetoothSocketCallback : public ::ndk::BpCInterface<IBluetoothSocketCallback> {
public:
  explicit BpBluetoothSocketCallback(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothSocketCallback();

  ::ndk::ScopedAStatus openedComplete(int64_t in_socketId, ::aidl::android::hardware::bluetooth::socket::Status in_status, const std::string& in_reason) override;
  ::ndk::ScopedAStatus close(int64_t in_socketId, const std::string& in_reason) override;
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
