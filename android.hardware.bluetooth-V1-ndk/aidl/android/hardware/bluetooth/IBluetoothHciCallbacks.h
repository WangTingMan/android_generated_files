/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119 -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging/android/hardware/bluetooth/IBluetoothHciCallbacks.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1 hardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1/android/hardware/bluetooth/IBluetoothHciCallbacks.aidl
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
#include <aidl/android/hardware/bluetooth/Status.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
class IBluetoothHciCallbacksDelegator;

class IBluetoothHciCallbacks : public ::ndk::ICInterface {
public:
  typedef IBluetoothHciCallbacksDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothHciCallbacks();
  virtual ~IBluetoothHciCallbacks();

  static inline const int32_t version = 1;
  static inline const std::string hash = "f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119";
  static constexpr uint32_t TRANSACTION_aclDataReceived = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_hciEventReceived = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_initializationComplete = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_isoDataReceived = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_scoDataReceived = FIRST_CALL_TRANSACTION + 4;

  static std::shared_ptr<IBluetoothHciCallbacks> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothHciCallbacks>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothHciCallbacks>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothHciCallbacks>& impl);
  static const std::shared_ptr<IBluetoothHciCallbacks>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus aclDataReceived(const std::vector<uint8_t>& in_data) = 0;
  virtual ::ndk::ScopedAStatus hciEventReceived(const std::vector<uint8_t>& in_event) = 0;
  virtual ::ndk::ScopedAStatus initializationComplete(::aidl::android::hardware::bluetooth::Status in_status) = 0;
  virtual ::ndk::ScopedAStatus isoDataReceived(const std::vector<uint8_t>& in_data) = 0;
  virtual ::ndk::ScopedAStatus scoDataReceived(const std::vector<uint8_t>& in_data) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothHciCallbacks> default_impl;
};
class IBluetoothHciCallbacksDefault : public IBluetoothHciCallbacks {
public:
  ::ndk::ScopedAStatus aclDataReceived(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus hciEventReceived(const std::vector<uint8_t>& in_event) override;
  ::ndk::ScopedAStatus initializationComplete(::aidl::android::hardware::bluetooth::Status in_status) override;
  ::ndk::ScopedAStatus isoDataReceived(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus scoDataReceived(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
