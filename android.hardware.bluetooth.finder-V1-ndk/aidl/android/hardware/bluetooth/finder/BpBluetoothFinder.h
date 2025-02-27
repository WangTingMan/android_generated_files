/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 078986eb5ef2dd183974ee4c9a79dc9b71bea088 --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging/android/hardware/bluetooth/finder/IBluetoothFinder.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1 hardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1/android/hardware/bluetooth/finder/IBluetoothFinder.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/finder/IBluetoothFinder.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace finder {
class BpBluetoothFinder : public ::ndk::BpCInterface<IBluetoothFinder> {
public:
  explicit BpBluetoothFinder(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothFinder();

  ::ndk::ScopedAStatus sendEids(const std::vector<::aidl::android::hardware::bluetooth::finder::Eid>& in_eids) override;
  ::ndk::ScopedAStatus setPoweredOffFinderMode(bool in_enable) override;
  ::ndk::ScopedAStatus getPoweredOffFinderMode(bool* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace finder
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
