/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 34506b107801d68c881c2c7368ad4c676aed3e9b -t --min_sdk_version 30 --ninja -d out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging/android/system/suspend/IWakelockCallback.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1 system/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1/android/system/suspend/IWakelockCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/system/suspend/IWakelockCallback.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace system {
namespace suspend {
class BnWakelockCallback : public ::ndk::BnCInterface<IWakelockCallback> {
public:
  BnWakelockCallback();
  virtual ~BnWakelockCallback();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IWakelockCallbackDelegator : public BnWakelockCallback {
public:
  explicit IWakelockCallbackDelegator(const std::shared_ptr<IWakelockCallback> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IWakelockCallback::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus notifyAcquired() override {
    return _impl->notifyAcquired();
  }
  ::ndk::ScopedAStatus notifyReleased() override {
    return _impl->notifyReleased();
  }
protected:
private:
  std::shared_ptr<IWakelockCallback> _impl;
};

}  // namespace suspend
}  // namespace system
}  // namespace android
}  // namespace aidl
