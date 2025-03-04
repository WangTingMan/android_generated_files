/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/IBluetoothSocket.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/IBluetoothSocket.aidl
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
#include <aidl/android/hardware/bluetooth/socket/IBluetoothSocketCallback.h>
#include <aidl/android/hardware/bluetooth/socket/SocketCapabilities.h>
#include <aidl/android/hardware/bluetooth/socket/SocketContext.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::socket {
class IBluetoothSocketCallback;
class SocketCapabilities;
class SocketContext;
}  // namespace aidl::android::hardware::bluetooth::socket
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
class IBluetoothSocketDelegator;

class IBluetoothSocket : public ::ndk::ICInterface {
public:
  typedef IBluetoothSocketDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothSocket();
  virtual ~IBluetoothSocket();

  static inline const int32_t version = 1;
  static inline const std::string hash = "7a80d8ba1c4d0e64556f17ed848ce49c28f6f299";
  static constexpr uint32_t TRANSACTION_registerCallback = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getSocketCapabilities = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_opened = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_closed = FIRST_CALL_TRANSACTION + 3;

  static std::shared_ptr<IBluetoothSocket> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothSocket>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothSocket>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothSocket>& impl);
  static const std::shared_ptr<IBluetoothSocket>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus registerCallback(const std::shared_ptr<::aidl::android::hardware::bluetooth::socket::IBluetoothSocketCallback>& in_callback) = 0;
  virtual ::ndk::ScopedAStatus getSocketCapabilities(::aidl::android::hardware::bluetooth::socket::SocketCapabilities* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus opened(const ::aidl::android::hardware::bluetooth::socket::SocketContext& in_context) = 0;
  virtual ::ndk::ScopedAStatus closed(int64_t in_socketId) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothSocket> default_impl;
};
class IBluetoothSocketDefault : public IBluetoothSocket {
public:
  ::ndk::ScopedAStatus registerCallback(const std::shared_ptr<::aidl::android::hardware::bluetooth::socket::IBluetoothSocketCallback>& in_callback) override;
  ::ndk::ScopedAStatus getSocketCapabilities(::aidl::android::hardware::bluetooth::socket::SocketCapabilities* _aidl_return) override;
  ::ndk::ScopedAStatus opened(const ::aidl::android::hardware::bluetooth::socket::SocketContext& in_context) override;
  ::ndk::ScopedAStatus closed(int64_t in_socketId) override;
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
