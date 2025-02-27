/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSounding.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class BpBluetoothChannelSounding : public ::ndk::BpCInterface<IBluetoothChannelSounding> {
public:
  explicit BpBluetoothChannelSounding(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothChannelSounding();

  ::ndk::ScopedAStatus getVendorSpecificData(std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>>* _aidl_return) override;
  ::ndk::ScopedAStatus getSupportedSessionTypes(std::optional<std::vector<::aidl::android::hardware::bluetooth::ranging::SessionType>>* _aidl_return) override;
  ::ndk::ScopedAStatus getMaxSupportedCsSecurityLevel(::aidl::android::hardware::bluetooth::ranging::CsSecurityLevel* _aidl_return) override;
  ::ndk::ScopedAStatus openSession(const ::aidl::android::hardware::bluetooth::ranging::BluetoothChannelSoundingParameters& in_params, const std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSessionCallback>& in_callback, std::shared_ptr<::aidl::android::hardware::bluetooth::ranging::IBluetoothChannelSoundingSession>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
