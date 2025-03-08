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

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class ANDROIDHARDWARECONTEXTHUBV4NDK_API BpContextHub : public ::ndk::BpCInterface<IContextHub> {
public:
  explicit BpContextHub(const ::ndk::SpAIBinder& binder);
  virtual ~BpContextHub();

  ::ndk::ScopedAStatus getContextHubs(std::vector<::aidl::android::hardware::contexthub::ContextHubInfo>* _aidl_return) override;
  ::ndk::ScopedAStatus loadNanoapp(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::NanoappBinary& in_appBinary, int32_t in_transactionId) override;
  ::ndk::ScopedAStatus unloadNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) override;
  ::ndk::ScopedAStatus disableNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) override;
  ::ndk::ScopedAStatus enableNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) override;
  ::ndk::ScopedAStatus onSettingChanged(::aidl::android::hardware::contexthub::Setting in_setting, bool in_enabled) override;
  ::ndk::ScopedAStatus queryNanoapps(int32_t in_contextHubId) override;
  ::ndk::ScopedAStatus registerCallback(int32_t in_contextHubId, const std::shared_ptr<::aidl::android::hardware::contexthub::IContextHubCallback>& in_cb) override;
  ::ndk::ScopedAStatus sendMessageToHub(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::ContextHubMessage& in_message) override;
  ::ndk::ScopedAStatus onHostEndpointConnected(const ::aidl::android::hardware::contexthub::HostEndpointInfo& in_hostEndpointInfo) override;
  ::ndk::ScopedAStatus onHostEndpointDisconnected(char16_t in_hostEndpointId) override;
  ::ndk::ScopedAStatus getPreloadedNanoappIds(int32_t in_contextHubId, std::vector<int64_t>* _aidl_return) override;
  ::ndk::ScopedAStatus onNanSessionStateChanged(const ::aidl::android::hardware::contexthub::NanSessionStateUpdate& in_update) override;
  ::ndk::ScopedAStatus setTestMode(bool in_enable) override;
  ::ndk::ScopedAStatus sendMessageDeliveryStatusToHub(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_messageDeliveryStatus) override;
  ::ndk::ScopedAStatus getHubs(std::vector<::aidl::android::hardware::contexthub::HubInfo>* _aidl_return) override;
  ::ndk::ScopedAStatus getEndpoints(std::vector<::aidl::android::hardware::contexthub::EndpointInfo>* _aidl_return) override;
  ::ndk::ScopedAStatus registerEndpointHub(const std::shared_ptr<::aidl::android::hardware::contexthub::IEndpointCallback>& in_callback, const ::aidl::android::hardware::contexthub::HubInfo& in_hubInfo, std::shared_ptr<::aidl::android::hardware::contexthub::IEndpointCommunication>* _aidl_return) override;
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
