/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 078986eb5ef2dd183974ee4c9a79dc9b71bea088 --stability vintf --min_sdk_version current --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging/android/hardware/bluetooth/finder/IBluetoothFinder.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/finder/aidl/android.hardware.bluetooth.finder-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1 hardware/interfaces/bluetooth/finder/aidl/aidl_api/android.hardware.bluetooth.finder/1/android/hardware/bluetooth/finder/IBluetoothFinder.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/bluetooth/finder/Eid.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHFINDERV1NDK_EXPORTS_.h"

namespace aidl::android::hardware::bluetooth::finder {
class Eid;
}  // namespace aidl::android::hardware::bluetooth::finder
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace finder {
class IBluetoothFinderDelegator;

class ANDROIDHARDWAREBLUETOOTHFINDERV1NDK_API IBluetoothFinder : public ::ndk::ICInterface {
public:
  typedef IBluetoothFinderDelegator DefaultDelegator;
  static inline constexpr const char* descriptor = "android.hardware.bluetooth.finder.IBluetoothFinder";
  IBluetoothFinder();
  virtual ~IBluetoothFinder();

  static inline const int32_t version = 1;
  static inline const std::string hash = "078986eb5ef2dd183974ee4c9a79dc9b71bea088";
  static constexpr uint32_t TRANSACTION_sendEids = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_setPoweredOffFinderMode = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getPoweredOffFinderMode = FIRST_CALL_TRANSACTION + 2;

  static std::shared_ptr<IBluetoothFinder> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothFinder>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothFinder>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothFinder>& impl);
  static const std::shared_ptr<IBluetoothFinder>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus sendEids(const std::vector<::aidl::android::hardware::bluetooth::finder::Eid>& in_eids) = 0;
  virtual ::ndk::ScopedAStatus setPoweredOffFinderMode(bool in_enable) = 0;
  virtual ::ndk::ScopedAStatus getPoweredOffFinderMode(bool* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothFinder> default_impl;
};
class ANDROIDHARDWAREBLUETOOTHFINDERV1NDK_API IBluetoothFinderDefault : public IBluetoothFinder {
public:
  ::ndk::ScopedAStatus sendEids(const std::vector<::aidl::android::hardware::bluetooth::finder::Eid>& in_eids) override;
  ::ndk::ScopedAStatus setPoweredOffFinderMode(bool in_enable) override;
  ::ndk::ScopedAStatus getPoweredOffFinderMode(bool* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace finder
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
