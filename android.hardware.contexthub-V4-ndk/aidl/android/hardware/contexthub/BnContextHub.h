/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IContextHub.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IContextHub.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/contexthub/IContextHub.h"

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
class BnContextHub : public ::ndk::BnCInterface<IContextHub> {
public:
  BnContextHub();
  virtual ~BnContextHub();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IContextHubDelegator : public BnContextHub {
public:
  explicit IContextHubDelegator(const std::shared_ptr<IContextHub> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IContextHub::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus getContextHubs(std::vector<::aidl::android::hardware::contexthub::ContextHubInfo>* _aidl_return) override {
    return _impl->getContextHubs(_aidl_return);
  }
  ::ndk::ScopedAStatus loadNanoapp(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::NanoappBinary& in_appBinary, int32_t in_transactionId) override {
    return _impl->loadNanoapp(in_contextHubId, in_appBinary, in_transactionId);
  }
  ::ndk::ScopedAStatus unloadNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) override {
    return _impl->unloadNanoapp(in_contextHubId, in_appId, in_transactionId);
  }
  ::ndk::ScopedAStatus disableNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) override {
    return _impl->disableNanoapp(in_contextHubId, in_appId, in_transactionId);
  }
  ::ndk::ScopedAStatus enableNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) override {
    return _impl->enableNanoapp(in_contextHubId, in_appId, in_transactionId);
  }
  ::ndk::ScopedAStatus onSettingChanged(::aidl::android::hardware::contexthub::Setting in_setting, bool in_enabled) override {
    return _impl->onSettingChanged(in_setting, in_enabled);
  }
  ::ndk::ScopedAStatus queryNanoapps(int32_t in_contextHubId) override {
    return _impl->queryNanoapps(in_contextHubId);
  }
  ::ndk::ScopedAStatus registerCallback(int32_t in_contextHubId, const std::shared_ptr<::aidl::android::hardware::contexthub::IContextHubCallback>& in_cb) override {
    return _impl->registerCallback(in_contextHubId, in_cb);
  }
  ::ndk::ScopedAStatus sendMessageToHub(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::ContextHubMessage& in_message) override {
    return _impl->sendMessageToHub(in_contextHubId, in_message);
  }
  ::ndk::ScopedAStatus onHostEndpointConnected(const ::aidl::android::hardware::contexthub::HostEndpointInfo& in_hostEndpointInfo) override {
    return _impl->onHostEndpointConnected(in_hostEndpointInfo);
  }
  ::ndk::ScopedAStatus onHostEndpointDisconnected(char16_t in_hostEndpointId) override {
    return _impl->onHostEndpointDisconnected(in_hostEndpointId);
  }
  ::ndk::ScopedAStatus getPreloadedNanoappIds(int32_t in_contextHubId, std::vector<int64_t>* _aidl_return) override {
    return _impl->getPreloadedNanoappIds(in_contextHubId, _aidl_return);
  }
  ::ndk::ScopedAStatus onNanSessionStateChanged(const ::aidl::android::hardware::contexthub::NanSessionStateUpdate& in_update) override {
    return _impl->onNanSessionStateChanged(in_update);
  }
  ::ndk::ScopedAStatus setTestMode(bool in_enable) override {
    return _impl->setTestMode(in_enable);
  }
  ::ndk::ScopedAStatus sendMessageDeliveryStatusToHub(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_messageDeliveryStatus) override {
    return _impl->sendMessageDeliveryStatusToHub(in_contextHubId, in_messageDeliveryStatus);
  }
  ::ndk::ScopedAStatus getHubs(std::vector<::aidl::android::hardware::contexthub::HubInfo>* _aidl_return) override {
    return _impl->getHubs(_aidl_return);
  }
  ::ndk::ScopedAStatus getEndpoints(std::vector<::aidl::android::hardware::contexthub::EndpointInfo>* _aidl_return) override {
    return _impl->getEndpoints(_aidl_return);
  }
  ::ndk::ScopedAStatus registerEndpointHub(const std::shared_ptr<::aidl::android::hardware::contexthub::IEndpointCallback>& in_callback, const ::aidl::android::hardware::contexthub::HubInfo& in_hubInfo, std::shared_ptr<::aidl::android::hardware::contexthub::IEndpointCommunication>* _aidl_return) override {
    return _impl->registerEndpointHub(in_callback, in_hubInfo, _aidl_return);
  }
protected:
private:
  std::shared_ptr<IContextHub> _impl;
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
