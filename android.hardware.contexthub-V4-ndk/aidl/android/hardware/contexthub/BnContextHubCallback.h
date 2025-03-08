/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IContextHubCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IContextHubCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/contexthub/IContextHubCallback.h"

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
namespace contexthub {
class BnContextHubCallback : public ::ndk::BnCInterface<IContextHubCallback> {
public:
  BnContextHubCallback();
  virtual ~BnContextHubCallback();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IContextHubCallbackDelegator : public BnContextHubCallback {
public:
  explicit IContextHubCallbackDelegator(const std::shared_ptr<IContextHubCallback> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IContextHubCallback::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus handleNanoappInfo(const std::vector<::aidl::android::hardware::contexthub::NanoappInfo>& in_appInfo) override {
    return _impl->handleNanoappInfo(in_appInfo);
  }
  ::ndk::ScopedAStatus handleContextHubMessage(const ::aidl::android::hardware::contexthub::ContextHubMessage& in_msg, const std::vector<std::string>& in_msgContentPerms) override {
    return _impl->handleContextHubMessage(in_msg, in_msgContentPerms);
  }
  ::ndk::ScopedAStatus handleContextHubAsyncEvent(::aidl::android::hardware::contexthub::AsyncEventType in_evt) override {
    return _impl->handleContextHubAsyncEvent(in_evt);
  }
  ::ndk::ScopedAStatus handleTransactionResult(int32_t in_transactionId, bool in_success) override {
    return _impl->handleTransactionResult(in_transactionId, in_success);
  }
  ::ndk::ScopedAStatus handleNanSessionRequest(const ::aidl::android::hardware::contexthub::NanSessionRequest& in_request) override {
    return _impl->handleNanSessionRequest(in_request);
  }
  ::ndk::ScopedAStatus handleMessageDeliveryStatus(char16_t in_hostEndpointId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_messageDeliveryStatus) override {
    return _impl->handleMessageDeliveryStatus(in_hostEndpointId, in_messageDeliveryStatus);
  }
  ::ndk::ScopedAStatus getUuid(std::array<uint8_t, 16>* _aidl_return) override {
    return _impl->getUuid(_aidl_return);
  }
  ::ndk::ScopedAStatus getName(std::string* _aidl_return) override {
    return _impl->getName(_aidl_return);
  }
protected:
private:
  std::shared_ptr<IContextHubCallback> _impl;
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
