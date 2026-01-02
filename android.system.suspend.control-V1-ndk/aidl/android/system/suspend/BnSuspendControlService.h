/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 34506b107801d68c881c2c7368ad4c676aed3e9b -t --min_sdk_version 30 --ninja -d out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging/android/system/suspend/ISuspendControlService.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1 system/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1/android/system/suspend/ISuspendControlService.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/system/suspend/ISuspendControlService.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif
#include "ANDROIDSYSTEMSUSPENDCONTROLV1NDK_EXPORTS_.h"
namespace aidl {
namespace android {
namespace system {
namespace suspend {
class ANDROIDSYSTEMSUSPENDCONTROLV1NDK_API BnSuspendControlService : public ::ndk::BnCInterface<ISuspendControlService> {
public:
  BnSuspendControlService();
  virtual ~BnSuspendControlService();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class ISuspendControlServiceDelegator : public BnSuspendControlService {
public:
  explicit ISuspendControlServiceDelegator(const std::shared_ptr<ISuspendControlService> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != ISuspendControlService::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus registerCallback(const std::shared_ptr<::aidl::android::system::suspend::ISuspendCallback>& in_callback, bool* _aidl_return) override {
    return _impl->registerCallback(in_callback, _aidl_return);
  }
  ::ndk::ScopedAStatus registerWakelockCallback(const std::shared_ptr<::aidl::android::system::suspend::IWakelockCallback>& in_callback, const std::string& in_name, bool* _aidl_return) override {
    return _impl->registerWakelockCallback(in_callback, in_name, _aidl_return);
  }
protected:
private:
  std::shared_ptr<ISuspendControlService> _impl;
};

}  // namespace suspend
}  // namespace system
}  // namespace android
}  // namespace aidl
