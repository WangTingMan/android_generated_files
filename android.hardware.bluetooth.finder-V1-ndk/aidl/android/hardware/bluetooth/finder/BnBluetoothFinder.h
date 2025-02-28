/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 078986eb5ef2dd183974ee4c9a79dc9b71bea088 -t --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging/android/hardware/bluetooth/finder/IBluetoothFinder.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1 hardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1/android/hardware/bluetooth/finder/IBluetoothFinder.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/finder/IBluetoothFinder.h"

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
namespace finder {
class BnBluetoothFinder : public ::ndk::BnCInterface<IBluetoothFinder> {
public:
  BnBluetoothFinder();
  virtual ~BnBluetoothFinder();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothFinderDelegator : public BnBluetoothFinder {
public:
  explicit IBluetoothFinderDelegator(const std::shared_ptr<IBluetoothFinder> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothFinder::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus sendEids(const std::vector<::aidl::android::hardware::bluetooth::finder::Eid>& in_eids) override {
    return _impl->sendEids(in_eids);
  }
  ::ndk::ScopedAStatus setPoweredOffFinderMode(bool in_enable) override {
    return _impl->setPoweredOffFinderMode(in_enable);
  }
  ::ndk::ScopedAStatus getPoweredOffFinderMode(bool* _aidl_return) override {
    return _impl->getPoweredOffFinderMode(_aidl_return);
  }
protected:
private:
  std::shared_ptr<IBluetoothFinder> _impl;
};

}  // namespace finder
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
