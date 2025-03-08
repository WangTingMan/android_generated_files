/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IEndpointCommunication.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IEndpointCommunication.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/contexthub/IEndpointCommunication.h"

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
class BnEndpointCommunication : public ::ndk::BnCInterface<IEndpointCommunication> {
public:
  BnEndpointCommunication();
  virtual ~BnEndpointCommunication();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IEndpointCommunicationDelegator : public BnEndpointCommunication {
public:
  explicit IEndpointCommunicationDelegator(const std::shared_ptr<IEndpointCommunication> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IEndpointCommunication::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus registerEndpoint(const ::aidl::android::hardware::contexthub::EndpointInfo& in_endpoint) override {
    return _impl->registerEndpoint(in_endpoint);
  }
  ::ndk::ScopedAStatus unregisterEndpoint(const ::aidl::android::hardware::contexthub::EndpointInfo& in_endpoint) override {
    return _impl->unregisterEndpoint(in_endpoint);
  }
  ::ndk::ScopedAStatus requestSessionIdRange(int32_t in_size, std::array<int32_t, 2>* _aidl_return) override {
    return _impl->requestSessionIdRange(in_size, _aidl_return);
  }
  ::ndk::ScopedAStatus openEndpointSession(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::EndpointId& in_destination, const ::aidl::android::hardware::contexthub::EndpointId& in_initiator, const std::optional<std::string>& in_serviceDescriptor) override {
    return _impl->openEndpointSession(in_sessionId, in_destination, in_initiator, in_serviceDescriptor);
  }
  ::ndk::ScopedAStatus sendMessageToEndpoint(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::Message& in_msg) override {
    return _impl->sendMessageToEndpoint(in_sessionId, in_msg);
  }
  ::ndk::ScopedAStatus sendMessageDeliveryStatusToEndpoint(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_msgStatus) override {
    return _impl->sendMessageDeliveryStatusToEndpoint(in_sessionId, in_msgStatus);
  }
  ::ndk::ScopedAStatus closeEndpointSession(int32_t in_sessionId, ::aidl::android::hardware::contexthub::Reason in_reason) override {
    return _impl->closeEndpointSession(in_sessionId, in_reason);
  }
  ::ndk::ScopedAStatus endpointSessionOpenComplete(int32_t in_sessionId) override {
    return _impl->endpointSessionOpenComplete(in_sessionId);
  }
  ::ndk::ScopedAStatus unregister() override {
    return _impl->unregister();
  }
protected:
private:
  std::shared_ptr<IEndpointCommunication> _impl;
};

}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
