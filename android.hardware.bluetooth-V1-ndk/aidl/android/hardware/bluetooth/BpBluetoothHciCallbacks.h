/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119 --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging/android/hardware/bluetooth/IBluetoothHciCallbacks.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1 hardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1/android/hardware/bluetooth/IBluetoothHciCallbacks.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/IBluetoothHciCallbacks.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
class ANDROIDHARDWAREBLUETOOTHV1NDK_API BpBluetoothHciCallbacks : public ::ndk::BpCInterface<IBluetoothHciCallbacks> {
public:
  explicit BpBluetoothHciCallbacks(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothHciCallbacks();

  ::ndk::ScopedAStatus aclDataReceived(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus hciEventReceived(const std::vector<uint8_t>& in_event) override;
  ::ndk::ScopedAStatus initializationComplete(::aidl::android::hardware::bluetooth::Status in_status) override;
  ::ndk::ScopedAStatus isoDataReceived(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus scoDataReceived(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
