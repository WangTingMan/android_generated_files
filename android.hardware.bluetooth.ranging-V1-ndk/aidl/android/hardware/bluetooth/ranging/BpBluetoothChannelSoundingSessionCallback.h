/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSessionCallback.h"

#include <android/binder_ibinder.h>
#include "ANDROIDHARDWAREBLUETOOTHRANGINGV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ANDROIDHARDWAREBLUETOOTHRANGINGV1NDK_API BpBluetoothChannelSoundingSessionCallback : public ::ndk::BpCInterface<IBluetoothChannelSoundingSessionCallback> {
public:
  explicit BpBluetoothChannelSoundingSessionCallback(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothChannelSoundingSessionCallback();

  ::ndk::ScopedAStatus onOpened(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override;
  ::ndk::ScopedAStatus onOpenFailed(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override;
  ::ndk::ScopedAStatus onResult(const ::aidl::android::hardware::bluetooth::ranging::RangingResult& in_result) override;
  ::ndk::ScopedAStatus onClose(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override;
  ::ndk::ScopedAStatus onCloseFailed(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override;
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
