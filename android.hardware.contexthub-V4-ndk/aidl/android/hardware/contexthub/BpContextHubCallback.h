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

namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class BpContextHubCallback : public ::ndk::BpCInterface<IContextHubCallback> {
public:
  explicit BpContextHubCallback(const ::ndk::SpAIBinder& binder);
  virtual ~BpContextHubCallback();

  ::ndk::ScopedAStatus handleNanoappInfo(const std::vector<::aidl::android::hardware::contexthub::NanoappInfo>& in_appInfo) override;
  ::ndk::ScopedAStatus handleContextHubMessage(const ::aidl::android::hardware::contexthub::ContextHubMessage& in_msg, const std::vector<std::string>& in_msgContentPerms) override;
  ::ndk::ScopedAStatus handleContextHubAsyncEvent(::aidl::android::hardware::contexthub::AsyncEventType in_evt) override;
  ::ndk::ScopedAStatus handleTransactionResult(int32_t in_transactionId, bool in_success) override;
  ::ndk::ScopedAStatus handleNanSessionRequest(const ::aidl::android::hardware::contexthub::NanSessionRequest& in_request) override;
  ::ndk::ScopedAStatus handleMessageDeliveryStatus(char16_t in_hostEndpointId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_messageDeliveryStatus) override;
  ::ndk::ScopedAStatus getUuid(std::array<uint8_t, 16>* _aidl_return) override;
  ::ndk::ScopedAStatus getName(std::string* _aidl_return) override;
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
