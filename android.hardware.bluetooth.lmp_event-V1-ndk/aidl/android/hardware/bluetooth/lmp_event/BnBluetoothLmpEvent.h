/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash e9accf971a83a7829786ee24780fa7a5583b5dae -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1 hardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.h"

#include <android/binder_ibinder.h>
#include <cassert>

#include "ANDROIDHARDWAREBLUETOOTHLMPEVENTV1NDK_EXPORTS_.h"

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace lmp_event {
class ANDROIDHARDWAREBLUETOOTHLMPEVENTV1NDK_API BnBluetoothLmpEvent : public ::ndk::BnCInterface<IBluetoothLmpEvent> {
public:
  BnBluetoothLmpEvent();
  virtual ~BnBluetoothLmpEvent();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothLmpEventDelegator : public BnBluetoothLmpEvent {
public:
  explicit IBluetoothLmpEventDelegator(const std::shared_ptr<IBluetoothLmpEvent> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothLmpEvent::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus registerForLmpEvents(const std::shared_ptr<::aidl::android::hardware::bluetooth::lmp_event::IBluetoothLmpEventCallback>& in_callback, ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address, const std::vector<::aidl::android::hardware::bluetooth::lmp_event::LmpEventId>& in_lmpEventIds) override {
    return _impl->registerForLmpEvents(in_callback, in_addressType, in_address, in_lmpEventIds);
  }
  ::ndk::ScopedAStatus unregisterLmpEvents(::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address) override {
    return _impl->unregisterLmpEvents(in_addressType, in_address);
  }
protected:
private:
  std::shared_ptr<IBluetoothLmpEvent> _impl;
};

}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
