/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/bluetooth/ranging/BluetoothChannelSoundingParameters.h>
#include <aidl/android/hardware/bluetooth/ranging/CsSecurityLevel.h>
#include <aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.h>
#include <aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.h>
#include <aidl/android/hardware/bluetooth/ranging/SessionType.h>
#include <aidl/android/hardware/bluetooth/ranging/VendorSpecificData.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::ranging {
class BluetoothChannelSoundingParameters;
class IBluetoothChannelSoundingSession;
class IBluetoothChannelSoundingSessionCallback;
class VendorSpecificData;
}  // namespace aidl::android::hardware::bluetooth::ranging
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class IBluetoothChannelSoundingDelegator;

class IBluetoothChannelSounding : public ::ndk::ICInterface {
public:
  typedef IBluetoothChannelSoundingDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothChannelSounding();
  virtual ~IBluetoothChannelSounding();

  static inline const int32_t version = 1;
  static inline const std::string hash = "d257bb74ef61a4cbb5854f4663604dd491b4a7bf";
  static constexpr uint32_t TRANSACTION_getVendorSpecificData = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getSupportedSessionTypes = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getMaxSupportedCsSecurityLevel = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_openSession = FIRST_CALL_TRANSACTION + 3;

  static std::shared_ptr<IBluetoothChannelSounding> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothChannelSounding>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothChannelSounding>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothChannelSounding>& impl);
  static const std::shared_ptr<IBluetoothChannelSounding>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus getVendorSpecificData(std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getSupportedSessionTypes(std::optional<std::vector<::aidl::android::hardware::bluetooth::ranging::SessionType>>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getMaxSupportedCsSecurityLevel(::aidl::android::hardware::bluetooth::ranging::CsSecurityLevel* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus openSession(const ::aidl::android::hardware::bluetooth::ranging::BluetoothChannelSoundingParameters& in_params, const std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSessionCallback>& in_callback, std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSession>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothChannelSounding> default_impl;
};
class IBluetoothChannelSoundingDefault : public IBluetoothChannelSounding {
public:
  ::ndk::ScopedAStatus getVendorSpecificData(std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>>* _aidl_return) override;
  ::ndk::ScopedAStatus getSupportedSessionTypes(std::optional<std::vector<::aidl::android::hardware::bluetooth::ranging::SessionType>>* _aidl_return) override;
  ::ndk::ScopedAStatus getMaxSupportedCsSecurityLevel(::aidl::android::hardware::bluetooth::ranging::CsSecurityLevel* _aidl_return) override;
  ::ndk::ScopedAStatus openSession(const ::aidl::android::hardware::bluetooth::ranging::BluetoothChannelSoundingParameters& in_params, const std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSessionCallback>& in_callback, std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSession>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
