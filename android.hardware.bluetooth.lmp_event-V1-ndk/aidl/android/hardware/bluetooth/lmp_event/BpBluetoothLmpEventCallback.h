/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash e9accf971a83a7829786ee24780fa7a5583b5dae -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging/android/hardware/bluetooth/lmp_event/IBluetoothLmpEventCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1 hardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1/android/hardware/bluetooth/lmp_event/IBluetoothLmpEventCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/lmp_event/IBluetoothLmpEventCallback.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHLMPEVENTV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace lmp_event {
class ANDROIDHARDWAREBLUETOOTHLMPEVENTV1NDK_API BpBluetoothLmpEventCallback : public ::ndk::BpCInterface<IBluetoothLmpEventCallback> {
public:
  explicit BpBluetoothLmpEventCallback(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothLmpEventCallback();

  ::ndk::ScopedAStatus onEventGenerated(const ::aidl::android::hardware::bluetooth::lmp_event::Timestamp& in_timestamp, ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address, ::aidl::android::hardware::bluetooth::lmp_event::Direction in_direction, ::aidl::android::hardware::bluetooth::lmp_event::LmpEventId in_lmpEventId, char16_t in_connEventCounter) override;
  ::ndk::ScopedAStatus onRegistered(bool in_status) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
