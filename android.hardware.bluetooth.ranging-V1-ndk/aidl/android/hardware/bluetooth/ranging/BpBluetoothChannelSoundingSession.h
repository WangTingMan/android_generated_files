/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class BpBluetoothChannelSoundingSession : public ::ndk::BpCInterface<IBluetoothChannelSoundingSession> {
public:
  explicit BpBluetoothChannelSoundingSession(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothChannelSoundingSession();

  ::ndk::ScopedAStatus getVendorSpecificReplies(std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>>* _aidl_return) override;
  ::ndk::ScopedAStatus getSupportedResultTypes(std::vector<::aidl::android::hardware::bluetooth::ranging::ResultType>* _aidl_return) override;
  ::ndk::ScopedAStatus isAbortedProcedureRequired(bool* _aidl_return) override;
  ::ndk::ScopedAStatus writeRawData(const ::aidl::android::hardware::bluetooth::ranging::ChannelSoudingRawData& in_rawData) override;
  ::ndk::ScopedAStatus close(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override;
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
