/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash e9accf971a83a7829786ee24780fa7a5583b5dae -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1 hardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.aidl
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
#include <aidl/android/hardware/bluetooth/lmp_event/AddressType.h>
#include <aidl/android/hardware/bluetooth/lmp_event/IBluetoothLmpEventCallback.h>
#include <aidl/android/hardware/bluetooth/lmp_event/LmpEventId.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::lmp_event {
class IBluetoothLmpEventCallback;
}  // namespace aidl::android::hardware::bluetooth::lmp_event
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace lmp_event {
class IBluetoothLmpEventDelegator;

class IBluetoothLmpEvent : public ::ndk::ICInterface {
public:
  typedef IBluetoothLmpEventDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothLmpEvent();
  virtual ~IBluetoothLmpEvent();

  static inline const int32_t version = 1;
  static inline const std::string hash = "e9accf971a83a7829786ee24780fa7a5583b5dae";
  static constexpr uint32_t TRANSACTION_registerForLmpEvents = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_unregisterLmpEvents = FIRST_CALL_TRANSACTION + 1;

  static std::shared_ptr<IBluetoothLmpEvent> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothLmpEvent>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothLmpEvent>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothLmpEvent>& impl);
  static const std::shared_ptr<IBluetoothLmpEvent>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus registerForLmpEvents(const std::shared_ptr<::aidl::android::hardware::bluetooth::lmp_event::IBluetoothLmpEventCallback>& in_callback, ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address, const std::vector<::aidl::android::hardware::bluetooth::lmp_event::LmpEventId>& in_lmpEventIds) = 0;
  virtual ::ndk::ScopedAStatus unregisterLmpEvents(::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothLmpEvent> default_impl;
};
class IBluetoothLmpEventDefault : public IBluetoothLmpEvent {
public:
  ::ndk::ScopedAStatus registerForLmpEvents(const std::shared_ptr<::aidl::android::hardware::bluetooth::lmp_event::IBluetoothLmpEventCallback>& in_callback, ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address, const std::vector<::aidl::android::hardware::bluetooth::lmp_event::LmpEventId>& in_lmpEventIds) override;
  ::ndk::ScopedAStatus unregisterLmpEvents(::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
