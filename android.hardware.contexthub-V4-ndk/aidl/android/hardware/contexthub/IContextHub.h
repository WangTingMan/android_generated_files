/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IContextHub.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IContextHub.aidl
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
#include <aidl/android/hardware/contexthub/ContextHubInfo.h>
#include <aidl/android/hardware/contexthub/ContextHubMessage.h>
#include <aidl/android/hardware/contexthub/EndpointInfo.h>
#include <aidl/android/hardware/contexthub/HostEndpointInfo.h>
#include <aidl/android/hardware/contexthub/HubInfo.h>
#include <aidl/android/hardware/contexthub/IContextHubCallback.h>
#include <aidl/android/hardware/contexthub/IEndpointCallback.h>
#include <aidl/android/hardware/contexthub/IEndpointCommunication.h>
#include <aidl/android/hardware/contexthub/MessageDeliveryStatus.h>
#include <aidl/android/hardware/contexthub/NanSessionStateUpdate.h>
#include <aidl/android/hardware/contexthub/NanoappBinary.h>
#include <aidl/android/hardware/contexthub/Setting.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

namespace aidl::android::hardware::contexthub {
class ContextHubInfo;
class ContextHubMessage;
class EndpointInfo;
class HostEndpointInfo;
class HubInfo;
class IContextHubCallback;
class IEndpointCallback;
class IEndpointCommunication;
class MessageDeliveryStatus;
class NanSessionStateUpdate;
class NanoappBinary;
}  // namespace aidl::android::hardware::contexthub
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class IContextHubDelegator;

class ANDROIDHARDWARECONTEXTHUBV4NDK_API IContextHub : public ::ndk::ICInterface {
public:
  typedef IContextHubDelegator DefaultDelegator;
  static const char* descriptor;
  IContextHub();
  virtual ~IContextHub();

  enum : int32_t { EX_CONTEXT_HUB_UNSPECIFIED = -1 };
  static inline const int32_t version = 4;
  static inline const std::string hash = "df80fdbb6f95a8a2988bc72b7f08f891847b80eb";
  static constexpr uint32_t TRANSACTION_getContextHubs = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_loadNanoapp = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_unloadNanoapp = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_disableNanoapp = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_enableNanoapp = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_onSettingChanged = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_queryNanoapps = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_registerCallback = FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_sendMessageToHub = FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_onHostEndpointConnected = FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_onHostEndpointDisconnected = FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_getPreloadedNanoappIds = FIRST_CALL_TRANSACTION + 11;
  static constexpr uint32_t TRANSACTION_onNanSessionStateChanged = FIRST_CALL_TRANSACTION + 12;
  static constexpr uint32_t TRANSACTION_setTestMode = FIRST_CALL_TRANSACTION + 13;
  static constexpr uint32_t TRANSACTION_sendMessageDeliveryStatusToHub = FIRST_CALL_TRANSACTION + 14;
  static constexpr uint32_t TRANSACTION_getHubs = FIRST_CALL_TRANSACTION + 15;
  static constexpr uint32_t TRANSACTION_getEndpoints = FIRST_CALL_TRANSACTION + 16;
  static constexpr uint32_t TRANSACTION_registerEndpointHub = FIRST_CALL_TRANSACTION + 17;

  static std::shared_ptr<IContextHub> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IContextHub>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IContextHub>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IContextHub>& impl);
  static const std::shared_ptr<IContextHub>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus getContextHubs(std::vector<::aidl::android::hardware::contexthub::ContextHubInfo>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus loadNanoapp(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::NanoappBinary& in_appBinary, int32_t in_transactionId) = 0;
  virtual ::ndk::ScopedAStatus unloadNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) = 0;
  virtual ::ndk::ScopedAStatus disableNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) = 0;
  virtual ::ndk::ScopedAStatus enableNanoapp(int32_t in_contextHubId, int64_t in_appId, int32_t in_transactionId) = 0;
  virtual ::ndk::ScopedAStatus onSettingChanged(::aidl::android::hardware::contexthub::Setting in_setting, bool in_enabled) = 0;
  virtual ::ndk::ScopedAStatus queryNanoapps(int32_t in_contextHubId) = 0;
  virtual ::ndk::ScopedAStatus registerCallback(int32_t in_contextHubId, const std::shared_ptr<::aidl::android::hardware::contexthub::IContextHubCallback>& in_cb) = 0;
  virtual ::ndk::ScopedAStatus sendMessageToHub(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::ContextHubMessage& in_message) = 0;
  virtual ::ndk::ScopedAStatus onHostEndpointConnected(const ::aidl::android::hardware::contexthub::HostEndpointInfo& in_hostEndpointInfo) = 0;
  virtual ::ndk::ScopedAStatus onHostEndpointDisconnected(char16_t in_hostEndpointId) = 0;
  virtual ::ndk::ScopedAStatus getPreloadedNanoappIds(int32_t in_contextHubId, std::vector<int64_t>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus onNanSessionStateChanged(const ::aidl::android::hardware::contexthub::NanSessionStateUpdate& in_update) = 0;
  virtual ::ndk::ScopedAStatus setTestMode(bool in_enable) = 0;
  virtual ::ndk::ScopedAStatus sendMessageDeliveryStatusToHub(int32_t in_contextHubId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_messageDeliveryStatus) = 0;
  virtual ::ndk::ScopedAStatus getHubs(std::vector<::aidl::android::hardware::contexthub::HubInfo>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getEndpoints(std::vector<::aidl::android::hardware::contexthub::EndpointInfo>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus registerEndpointHub(const std::shared_ptr<::aidl::android::hardware::contexthub::IEndpointCallback>& in_callback, const ::aidl::android::hardware::contexthub::HubInfo& in_hubInfo, std::shared_ptr<::aidl::android::hardware::contexthub::IEndpointCommunication>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IContextHub> default_impl;
};
class ANDROIDHARDWARECONTEXTHUBV4NDK_API IContextHubDefault : public IContextHub {
public:
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
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
