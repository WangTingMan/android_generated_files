/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119 -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging/android/hardware/bluetooth/IBluetoothHci.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/aidl/android.hardware.bluetooth-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1 hardware/interfaces/bluetooth/aidl/aidl_api/android.hardware.bluetooth/1/android/hardware/bluetooth/IBluetoothHci.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/bluetooth/IBluetoothHciCallbacks.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS_.h"

namespace aidl::android::hardware::bluetooth {
class IBluetoothHciCallbacks;
}  // namespace aidl::android::hardware::bluetooth
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
class IBluetoothHciDelegator;

class ANDROIDHARDWAREBLUETOOTHV1NDK_API IBluetoothHci : public ::ndk::ICInterface {
public:
  typedef IBluetoothHciDelegator DefaultDelegator;
  static inline constexpr const char* descriptor = "android.hardware.bluetooth.IBluetoothHci";
  IBluetoothHci();
  virtual ~IBluetoothHci();

  static inline const int32_t version = 1;
  static inline const std::string hash = "f0eb2eb6d3b970cef8fb1b6e22c4ec39a4da5119";
  static constexpr uint32_t TRANSACTION_close = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_initialize = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_sendAclData = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_sendHciCommand = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_sendIsoData = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_sendScoData = FIRST_CALL_TRANSACTION + 5;

#ifdef _MSC_VER
  /**
   * There is an unexpected bug with MSVC compiler here..We cannot invoke right virtual function here.
   */
  ::ndk::ScopedAStatus closeDetail()
  {
      return m_closer();
  }
  ::ndk::ScopedAStatus initializeDetail( const std::shared_ptr<::aidl::android::hardware::bluetooth::IBluetoothHciCallbacks>& in_callback )
  {
      return m_initializer( in_callback );
  }
  ::ndk::ScopedAStatus sendAclDataDetail( const std::vector<uint8_t>& in_data )
  {
      return m_acldataSender( in_data );
  }
  ::ndk::ScopedAStatus sendHciCommandDetail( const std::vector<uint8_t>& in_command )
  {
      return m_cmddataSender( in_command );
  }
  ::ndk::ScopedAStatus sendIsoDataDetail( const std::vector<uint8_t>& in_data )
  {
      return m_isodataSender( in_data );
  }
  ::ndk::ScopedAStatus sendScoDataDetail( const std::vector<uint8_t>& in_data )
  {
      return m_scodataSender( in_data );
  }
  ::ndk::ScopedAStatus getInterfaceVersionDetail( int32_t* _aidl_return )
  {
      return m_interfaceVersionGetter( _aidl_return );
  }
  ::ndk::ScopedAStatus getInterfaceHashDetail( std::string* _aidl_return )
  {
      return m_InterfaceHashGetter( _aidl_return );
  }
  std::function<::ndk::ScopedAStatus( const std::shared_ptr<::aidl::android::hardware::bluetooth::IBluetoothHciCallbacks>&)> m_initializer;
  std::function<::ndk::ScopedAStatus()> m_closer;
  std::function<::ndk::ScopedAStatus( const std::vector<uint8_t>& )> m_acldataSender;
  std::function<::ndk::ScopedAStatus( const std::vector<uint8_t>& )> m_cmddataSender;
  std::function<::ndk::ScopedAStatus( const std::vector<uint8_t>& )> m_isodataSender;
  std::function<::ndk::ScopedAStatus( const std::vector<uint8_t>& )> m_scodataSender;
  std::function<::ndk::ScopedAStatus( int32_t* )> m_interfaceVersionGetter;
  std::function<::ndk::ScopedAStatus( std::string* )> m_InterfaceHashGetter;
#endif

  static std::shared_ptr<IBluetoothHci> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothHci>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothHci>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothHci>& impl);
  static const std::shared_ptr<IBluetoothHci>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus close() = 0;
  virtual ::ndk::ScopedAStatus initialize(const std::shared_ptr<::aidl::android::hardware::bluetooth::IBluetoothHciCallbacks>& in_callback) = 0;
  virtual ::ndk::ScopedAStatus sendAclData(const std::vector<uint8_t>& in_data) = 0;
  virtual ::ndk::ScopedAStatus sendHciCommand(const std::vector<uint8_t>& in_command) = 0;
  virtual ::ndk::ScopedAStatus sendIsoData(const std::vector<uint8_t>& in_data) = 0;
  virtual ::ndk::ScopedAStatus sendScoData(const std::vector<uint8_t>& in_data) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothHci> default_impl;
};
class ANDROIDHARDWAREBLUETOOTHV1NDK_API IBluetoothHciDefault : public IBluetoothHci {
public:
  ::ndk::ScopedAStatus close() override;
  ::ndk::ScopedAStatus initialize(const std::shared_ptr<::aidl::android::hardware::bluetooth::IBluetoothHciCallbacks>& in_callback) override;
  ::ndk::ScopedAStatus sendAclData(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus sendHciCommand(const std::vector<uint8_t>& in_command) override;
  ::ndk::ScopedAStatus sendIsoData(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus sendScoData(const std::vector<uint8_t>& in_data) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
