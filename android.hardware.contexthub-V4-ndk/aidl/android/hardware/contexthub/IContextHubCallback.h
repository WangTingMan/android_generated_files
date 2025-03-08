/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IContextHubCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IContextHubCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/contexthub/AsyncEventType.h>
#include <aidl/android/hardware/contexthub/ContextHubMessage.h>
#include <aidl/android/hardware/contexthub/MessageDeliveryStatus.h>
#include <aidl/android/hardware/contexthub/NanSessionRequest.h>
#include <aidl/android/hardware/contexthub/NanoappInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::contexthub {
class ContextHubMessage;
class MessageDeliveryStatus;
class NanSessionRequest;
class NanoappInfo;
}  // namespace aidl::android::hardware::contexthub
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class IContextHubCallbackDelegator;

class IContextHubCallback : public ::ndk::ICInterface {
public:
  typedef IContextHubCallbackDelegator DefaultDelegator;
  static const char* descriptor;
  IContextHubCallback();
  virtual ~IContextHubCallback();

  enum : int32_t { CONTEXTHUB_NAN_TRANSACTION_TIMEOUT_MS = 10000 };
  static inline const int32_t version = 4;
  static inline const std::string hash = "df80fdbb6f95a8a2988bc72b7f08f891847b80eb";
  static constexpr uint32_t TRANSACTION_handleNanoappInfo = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_handleContextHubMessage = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_handleContextHubAsyncEvent = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_handleTransactionResult = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_handleNanSessionRequest = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_handleMessageDeliveryStatus = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_getUuid = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_getName = FIRST_CALL_TRANSACTION + 7;

  static std::shared_ptr<IContextHubCallback> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IContextHubCallback>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IContextHubCallback>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IContextHubCallback>& impl);
  static const std::shared_ptr<IContextHubCallback>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus handleNanoappInfo(const std::vector<::aidl::android::hardware::contexthub::NanoappInfo>& in_appInfo) = 0;
  virtual ::ndk::ScopedAStatus handleContextHubMessage(const ::aidl::android::hardware::contexthub::ContextHubMessage& in_msg, const std::vector<std::string>& in_msgContentPerms) = 0;
  virtual ::ndk::ScopedAStatus handleContextHubAsyncEvent(::aidl::android::hardware::contexthub::AsyncEventType in_evt) = 0;
  virtual ::ndk::ScopedAStatus handleTransactionResult(int32_t in_transactionId, bool in_success) = 0;
  virtual ::ndk::ScopedAStatus handleNanSessionRequest(const ::aidl::android::hardware::contexthub::NanSessionRequest& in_request) = 0;
  virtual ::ndk::ScopedAStatus handleMessageDeliveryStatus(char16_t in_hostEndpointId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_messageDeliveryStatus) = 0;
  virtual ::ndk::ScopedAStatus getUuid(std::array<uint8_t, 16>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getName(std::string* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IContextHubCallback> default_impl;
};
class IContextHubCallbackDefault : public IContextHubCallback {
public:
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
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
