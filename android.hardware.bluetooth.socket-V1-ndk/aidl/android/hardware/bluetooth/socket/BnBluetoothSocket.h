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
#include <cassert>

#include "ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_EXPORTS_.h"

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API BnBluetoothSocket : public ::ndk::BnCInterface<IBluetoothSocket> {
public:
  BnBluetoothSocket();
  virtual ~BnBluetoothSocket();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothSocketDelegator : public BnBluetoothSocket {
public:
  explicit IBluetoothSocketDelegator(const std::shared_ptr<IBluetoothSocket> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothSocket::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus registerCallback(const std::shared_ptr<::aidl::android::hardware::bluetooth::socket::IBluetoothSocketCallback>& in_callback) override {
    return _impl->registerCallback(in_callback);
  }
  ::ndk::ScopedAStatus getSocketCapabilities(::aidl::android::hardware::bluetooth::socket::SocketCapabilities* _aidl_return) override {
    return _impl->getSocketCapabilities(_aidl_return);
  }
  ::ndk::ScopedAStatus opened(const ::aidl::android::hardware::bluetooth::socket::SocketContext& in_context) override {
    return _impl->opened(in_context);
  }
  ::ndk::ScopedAStatus closed(int64_t in_socketId) override {
    return _impl->closed(in_socketId);
  }
protected:
private:
  std::shared_ptr<IBluetoothSocket> _impl;
};

}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
