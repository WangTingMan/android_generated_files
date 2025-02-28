/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119 -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging/android/hardware/bluetooth/IBluetoothHci.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1 hardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1/android/hardware/bluetooth/IBluetoothHci.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/IBluetoothHci.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
class BnBluetoothHci : public ::ndk::BnCInterface<IBluetoothHci> {
public:
  BnBluetoothHci();
  virtual ~BnBluetoothHci();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothHciDelegator : public BnBluetoothHci {
public:
  explicit IBluetoothHciDelegator(const std::shared_ptr<IBluetoothHci> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothHci::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus close() override {
    return _impl->close();
  }
  ::ndk::ScopedAStatus initialize(const std::shared_ptr<::aidl::android::hardware::bluetooth::IBluetoothHciCallbacks>& in_callback) override {
    return _impl->initialize(in_callback);
  }
  ::ndk::ScopedAStatus sendAclData(const std::vector<uint8_t>& in_data) override {
    return _impl->sendAclData(in_data);
  }
  ::ndk::ScopedAStatus sendHciCommand(const std::vector<uint8_t>& in_command) override {
    return _impl->sendHciCommand(in_command);
  }
  ::ndk::ScopedAStatus sendIsoData(const std::vector<uint8_t>& in_data) override {
    return _impl->sendIsoData(in_data);
  }
  ::ndk::ScopedAStatus sendScoData(const std::vector<uint8_t>& in_data) override {
    return _impl->sendScoData(in_data);
  }
protected:
private:
  std::shared_ptr<IBluetoothHci> _impl;
};

}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
