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

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ANDROIDHARDWARECONTEXTHUBV4NDK_API BpEndpointCallback : public ::ndk::BpCInterface<IEndpointCallback> {
public:
  explicit BpEndpointCallback(const ::ndk::SpAIBinder& binder);
  virtual ~BpEndpointCallback();

  ::ndk::ScopedAStatus onEndpointStarted(const std::vector<::aidl::android::hardware::contexthub::EndpointInfo>& in_endpointInfos) override;
  ::ndk::ScopedAStatus onEndpointStopped(const std::vector<::aidl::android::hardware::contexthub::EndpointId>& in_endpointIds, ::aidl::android::hardware::contexthub::Reason in_reason) override;
  ::ndk::ScopedAStatus onMessageReceived(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::Message& in_msg) override;
  ::ndk::ScopedAStatus onMessageDeliveryStatusReceived(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_msgStatus) override;
  ::ndk::ScopedAStatus onEndpointSessionOpenRequest(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::EndpointId& in_destination, const ::aidl::android::hardware::contexthub::EndpointId& in_initiator, const std::optional<std::string>& in_serviceDescriptor) override;
  ::ndk::ScopedAStatus onCloseEndpointSession(int32_t in_sessionId, ::aidl::android::hardware::contexthub::Reason in_reason) override;
  ::ndk::ScopedAStatus onEndpointSessionOpenComplete(int32_t in_sessionId) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
