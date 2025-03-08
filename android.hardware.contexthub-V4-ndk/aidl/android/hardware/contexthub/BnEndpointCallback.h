/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IEndpointCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IEndpointCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/contexthub/IEndpointCallback.h"

#include <android/binder_ibinder.h>
#include <cassert>

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ANDROIDHARDWARECONTEXTHUBV4NDK_API BnEndpointCallback : public ::ndk::BnCInterface<IEndpointCallback> {
public:
  BnEndpointCallback();
  virtual ~BnEndpointCallback();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IEndpointCallbackDelegator : public BnEndpointCallback {
public:
  explicit IEndpointCallbackDelegator(const std::shared_ptr<IEndpointCallback> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IEndpointCallback::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus onEndpointStarted(const std::vector<::aidl::android::hardware::contexthub::EndpointInfo>& in_endpointInfos) override {
    return _impl->onEndpointStarted(in_endpointInfos);
  }
  ::ndk::ScopedAStatus onEndpointStopped(const std::vector<::aidl::android::hardware::contexthub::EndpointId>& in_endpointIds, ::aidl::android::hardware::contexthub::Reason in_reason) override {
    return _impl->onEndpointStopped(in_endpointIds, in_reason);
  }
  ::ndk::ScopedAStatus onMessageReceived(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::Message& in_msg) override {
    return _impl->onMessageReceived(in_sessionId, in_msg);
  }
  ::ndk::ScopedAStatus onMessageDeliveryStatusReceived(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_msgStatus) override {
    return _impl->onMessageDeliveryStatusReceived(in_sessionId, in_msgStatus);
  }
  ::ndk::ScopedAStatus onEndpointSessionOpenRequest(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::EndpointId& in_destination, const ::aidl::android::hardware::contexthub::EndpointId& in_initiator, const std::optional<std::string>& in_serviceDescriptor) override {
    return _impl->onEndpointSessionOpenRequest(in_sessionId, in_destination, in_initiator, in_serviceDescriptor);
  }
  ::ndk::ScopedAStatus onCloseEndpointSession(int32_t in_sessionId, ::aidl::android::hardware::contexthub::Reason in_reason) override {
    return _impl->onCloseEndpointSession(in_sessionId, in_reason);
  }
  ::ndk::ScopedAStatus onEndpointSessionOpenComplete(int32_t in_sessionId) override {
    return _impl->onEndpointSessionOpenComplete(in_sessionId);
  }
protected:
private:
  std::shared_ptr<IEndpointCallback> _impl;
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
