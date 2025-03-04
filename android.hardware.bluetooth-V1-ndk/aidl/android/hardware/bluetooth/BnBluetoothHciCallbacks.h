/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119 -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging/android/hardware/bluetooth/IBluetoothHciCallbacks.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1 hardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1/android/hardware/bluetooth/IBluetoothHciCallbacks.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/IBluetoothHciCallbacks.h"

#include <android/binder_ibinder.h>
#include <cassert>

#include "ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS_.h"

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
class ANDROIDHARDWAREBLUETOOTHV1NDK_API BnBluetoothHciCallbacks : public ::ndk::BnCInterface<IBluetoothHciCallbacks> {
public:
  BnBluetoothHciCallbacks();
  virtual ~BnBluetoothHciCallbacks();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
#ifdef _MSC_VER
  ::ndk::SpAIBinder createBinderDetail();
#endif
private:
};
class ANDROIDHARDWAREBLUETOOTHV1NDK_API IBluetoothHciCallbacksDelegator : public BnBluetoothHciCallbacks {
public:
  explicit IBluetoothHciCallbacksDelegator(const std::shared_ptr<IBluetoothHciCallbacks> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothHciCallbacks::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus aclDataReceived(const std::vector<uint8_t>& in_data) override {
    return _impl->aclDataReceived(in_data);
  }
  ::ndk::ScopedAStatus hciEventReceived(const std::vector<uint8_t>& in_event) override {
    return _impl->hciEventReceived(in_event);
  }
  ::ndk::ScopedAStatus initializationComplete(::aidl::android::hardware::bluetooth::Status in_status) override {
    return _impl->initializationComplete(in_status);
  }
  ::ndk::ScopedAStatus isoDataReceived(const std::vector<uint8_t>& in_data) override {
    return _impl->isoDataReceived(in_data);
  }
  ::ndk::ScopedAStatus scoDataReceived(const std::vector<uint8_t>& in_data) override {
    return _impl->scoDataReceived(in_data);
  }
protected:
private:
  std::shared_ptr<IBluetoothHciCallbacks> _impl;
};

}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
