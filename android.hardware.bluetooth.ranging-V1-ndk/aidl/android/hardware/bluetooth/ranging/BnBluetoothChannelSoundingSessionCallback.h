/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.h"

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
class BnBluetoothChannelSoundingSessionCallback : public ::ndk::BnCInterface<IBluetoothChannelSoundingSessionCallback> {
public:
  BnBluetoothChannelSoundingSessionCallback();
  virtual ~BnBluetoothChannelSoundingSessionCallback();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothChannelSoundingSessionCallbackDelegator : public BnBluetoothChannelSoundingSessionCallback {
public:
  explicit IBluetoothChannelSoundingSessionCallbackDelegator(const std::shared_ptr<IBluetoothChannelSoundingSessionCallback> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothChannelSoundingSessionCallback::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus onOpened(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override {
    return _impl->onOpened(in_reason);
  }
  ::ndk::ScopedAStatus onOpenFailed(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override {
    return _impl->onOpenFailed(in_reason);
  }
  ::ndk::ScopedAStatus onResult(const ::aidl::android::hardware::bluetooth::ranging::RangingResult& in_result) override {
    return _impl->onResult(in_result);
  }
  ::ndk::ScopedAStatus onClose(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override {
    return _impl->onClose(in_reason);
  }
  ::ndk::ScopedAStatus onCloseFailed(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override {
    return _impl->onCloseFailed(in_reason);
  }
protected:
private:
  std::shared_ptr<IBluetoothChannelSoundingSessionCallback> _impl;
};

}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
