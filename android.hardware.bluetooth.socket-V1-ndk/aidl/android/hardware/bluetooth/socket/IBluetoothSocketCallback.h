/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/IBluetoothSocketCallback.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/IBluetoothSocketCallback.aidl
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
#include <aidl/android/hardware/bluetooth/socket/Status.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_EXPORTS_.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class IBluetoothSocketCallbackDelegator;

class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API IBluetoothSocketCallback : public ::ndk::ICInterface {
public:
  typedef IBluetoothSocketCallbackDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothSocketCallback();
  virtual ~IBluetoothSocketCallback();

  static inline const int32_t version = 1;
  static inline const std::string hash = "7a80d8ba1c4d0e64556f17ed848ce49c28f6f299";
  static constexpr uint32_t TRANSACTION_openedComplete = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_close = FIRST_CALL_TRANSACTION + 1;

  static std::shared_ptr<IBluetoothSocketCallback> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothSocketCallback>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothSocketCallback>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothSocketCallback>& impl);
  static const std::shared_ptr<IBluetoothSocketCallback>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus openedComplete(int64_t in_socketId, ::aidl::android::hardware::bluetooth::socket::Status in_status, const std::string& in_reason) = 0;
  virtual ::ndk::ScopedAStatus close(int64_t in_socketId, const std::string& in_reason) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothSocketCallback> default_impl;
};
class ANDROIDHARDWAREBLUETOOTHSOCKETV1NDK_API IBluetoothSocketCallbackDefault : public IBluetoothSocketCallback {
public:
  ::ndk::ScopedAStatus openedComplete(int64_t in_socketId, ::aidl::android::hardware::bluetooth::socket::Status in_status, const std::string& in_reason) override;
  ::ndk::ScopedAStatus close(int64_t in_socketId, const std::string& in_reason) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
