/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.h"

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
namespace ranging {
class BnBluetoothChannelSounding : public ::ndk::BnCInterface<IBluetoothChannelSounding> {
public:
  BnBluetoothChannelSounding();
  virtual ~BnBluetoothChannelSounding();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothChannelSoundingDelegator : public BnBluetoothChannelSounding {
public:
  explicit IBluetoothChannelSoundingDelegator(const std::shared_ptr<IBluetoothChannelSounding> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothChannelSounding::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus getVendorSpecificData(std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>>* _aidl_return) override {
    return _impl->getVendorSpecificData(_aidl_return);
  }
  ::ndk::ScopedAStatus getSupportedSessionTypes(std::optional<std::vector<::aidl::android::hardware::bluetooth::ranging::SessionType>>* _aidl_return) override {
    return _impl->getSupportedSessionTypes(_aidl_return);
  }
  ::ndk::ScopedAStatus getMaxSupportedCsSecurityLevel(::aidl::android::hardware::bluetooth::ranging::CsSecurityLevel* _aidl_return) override {
    return _impl->getMaxSupportedCsSecurityLevel(_aidl_return);
  }
  ::ndk::ScopedAStatus openSession(const ::aidl::android::hardware::bluetooth::ranging::BluetoothChannelSoundingParameters& in_params, const std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSessionCallback>& in_callback, std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSession>* _aidl_return) override {
    return _impl->openSession(in_params, in_callback, _aidl_return);
  }
protected:
private:
  std::shared_ptr<IBluetoothChannelSounding> _impl;
};

}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
