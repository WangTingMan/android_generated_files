/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash df80fdbb6f95a8a2988bc72b7f08f891847b80eb -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging/android/hardware/contexthub/IEndpointCommunication.cpp.d -h out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub-V4-ndk-source/gen/staging -Nhardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4 hardware/interfaces/contexthub/aidl/aidl_api/android.hardware.contexthub/4/android/hardware/contexthub/IEndpointCommunication.aidl
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
#include <aidl/android/hardware/contexthub/EndpointId.h>
#include <aidl/android/hardware/contexthub/EndpointInfo.h>
#include <aidl/android/hardware/contexthub/Message.h>
#include <aidl/android/hardware/contexthub/MessageDeliveryStatus.h>
#include <aidl/android/hardware/contexthub/Reason.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_.h"

namespace aidl::android::hardware::contexthub {
class EndpointId;
class EndpointInfo;
class Message;
class MessageDeliveryStatus;
}  // namespace aidl::android::hardware::contexthub
namespace aidl {
namespace android {
namespace hardware {
namespace contexthub {
class IEndpointCommunicationDelegator;

class ANDROIDHARDWARECONTEXTHUBV4NDK_API IEndpointCommunication : public ::ndk::ICInterface {
public:
  typedef IEndpointCommunicationDelegator DefaultDelegator;
  static const char* descriptor;
  IEndpointCommunication();
  virtual ~IEndpointCommunication();

  static inline const int32_t version = 4;
  static inline const std::string hash = "df80fdbb6f95a8a2988bc72b7f08f891847b80eb";
  static constexpr uint32_t TRANSACTION_registerEndpoint = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_unregisterEndpoint = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_requestSessionIdRange = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_openEndpointSession = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_sendMessageToEndpoint = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_sendMessageDeliveryStatusToEndpoint = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_closeEndpointSession = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_endpointSessionOpenComplete = FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_unregister = FIRST_CALL_TRANSACTION + 8;

  static std::shared_ptr<IEndpointCommunication> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IEndpointCommunication>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IEndpointCommunication>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IEndpointCommunication>& impl);
  static const std::shared_ptr<IEndpointCommunication>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus registerEndpoint(const ::aidl::android::hardware::contexthub::EndpointInfo& in_endpoint) = 0;
  virtual ::ndk::ScopedAStatus unregisterEndpoint(const ::aidl::android::hardware::contexthub::EndpointInfo& in_endpoint) = 0;
  virtual ::ndk::ScopedAStatus requestSessionIdRange(int32_t in_size, std::array<int32_t, 2>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus openEndpointSession(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::EndpointId& in_destination, const ::aidl::android::hardware::contexthub::EndpointId& in_initiator, const std::optional<std::string>& in_serviceDescriptor) = 0;
  virtual ::ndk::ScopedAStatus sendMessageToEndpoint(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::Message& in_msg) = 0;
  virtual ::ndk::ScopedAStatus sendMessageDeliveryStatusToEndpoint(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_msgStatus) = 0;
  virtual ::ndk::ScopedAStatus closeEndpointSession(int32_t in_sessionId, ::aidl::android::hardware::contexthub::Reason in_reason) = 0;
  virtual ::ndk::ScopedAStatus endpointSessionOpenComplete(int32_t in_sessionId) = 0;
  virtual ::ndk::ScopedAStatus unregister() = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IEndpointCommunication> default_impl;
};
class ANDROIDHARDWARECONTEXTHUBV4NDK_API IEndpointCommunicationDefault : public IEndpointCommunication {
public:
  ::ndk::ScopedAStatus registerEndpoint(const ::aidl::android::hardware::contexthub::EndpointInfo& in_endpoint) override;
  ::ndk::ScopedAStatus unregisterEndpoint(const ::aidl::android::hardware::contexthub::EndpointInfo& in_endpoint) override;
  ::ndk::ScopedAStatus requestSessionIdRange(int32_t in_size, std::array<int32_t, 2>* _aidl_return) override;
  ::ndk::ScopedAStatus openEndpointSession(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::EndpointId& in_destination, const ::aidl::android::hardware::contexthub::EndpointId& in_initiator, const std::optional<std::string>& in_serviceDescriptor) override;
  ::ndk::ScopedAStatus sendMessageToEndpoint(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::Message& in_msg) override;
  ::ndk::ScopedAStatus sendMessageDeliveryStatusToEndpoint(int32_t in_sessionId, const ::aidl::android::hardware::contexthub::MessageDeliveryStatus& in_msgStatus) override;
  ::ndk::ScopedAStatus closeEndpointSession(int32_t in_sessionId, ::aidl::android::hardware::contexthub::Reason in_reason) override;
  ::ndk::ScopedAStatus endpointSessionOpenComplete(int32_t in_sessionId) override;
  ::ndk::ScopedAStatus unregister() override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace contexthub
}  // namespace hardware
}  // namespace android
}  // namespace aidl
