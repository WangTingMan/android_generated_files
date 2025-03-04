/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.aidl
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
#include <aidl/android/hardware/bluetooth/audio/AudioCapabilities.h>
#include <aidl/android/hardware/bluetooth/audio/IBluetoothAudioProvider.h>
#include <aidl/android/hardware/bluetooth/audio/SessionType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl::android::hardware::bluetooth::audio {
class IBluetoothAudioProvider;
}  // namespace aidl::android::hardware::bluetooth::audio
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class IBluetoothAudioProviderFactoryDelegator;

class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API IBluetoothAudioProviderFactory : public ::ndk::ICInterface {
public:
  typedef IBluetoothAudioProviderFactoryDelegator DefaultDelegator;
  static inline const std::string descriptor = "android.hardware.bluetooth.audio.IBluetoothAudioProviderFactory";
  IBluetoothAudioProviderFactory();
  virtual ~IBluetoothAudioProviderFactory();

  static inline const int32_t version = 2;
  static inline const std::string hash = "b82d5b9f717bbf63bef774ee8f72572065ca61ce";
  static constexpr uint32_t TRANSACTION_getProviderCapabilities = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_openProvider = FIRST_CALL_TRANSACTION + 1;

  static std::shared_ptr<IBluetoothAudioProviderFactory> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioProviderFactory>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioProviderFactory>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothAudioProviderFactory>& impl);
  static const std::shared_ptr<IBluetoothAudioProviderFactory>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus getProviderCapabilities(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus openProvider(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;

#ifdef _MSC_VER
  ::ndk::ScopedAStatus invoke_getProviderCapabilities( ::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return )
  {
      if( mInvokeOpenProvider )
      {
          return mGetProviderCapabilities( in_sessionType, _aidl_return );
      }
      return getProviderCapabilities( in_sessionType, _aidl_return );
  }

  ::ndk::ScopedAStatus invoke_openProvider( ::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return )
  {
      if( mInvokeOpenProvider )
      {
          return mInvokeOpenProvider( in_sessionType, _aidl_return );
      }
      return openProvider( in_sessionType, _aidl_return );
  }

  ::ndk::ScopedAStatus invoke_getInterfaceVersion( int32_t* _aidl_return )
  {
      if( mGetInterfaceVersion )
      {
          return mGetInterfaceVersion( _aidl_return );
      }
      return getInterfaceVersion( _aidl_return );
  }

  ::ndk::ScopedAStatus invoke_getInterfaceHash( std::string* _aidl_return )
  {
      if( mGetInterfaceHash )
      {
          return mGetInterfaceHash( _aidl_return );
      }
      return getInterfaceHash( _aidl_return );
  }

protected:

    std::function <::ndk::ScopedAStatus( ::aidl::android::hardware::bluetooth::audio::SessionType,
                                         std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>*
                                       )> mInvokeOpenProvider;
    std::function <::ndk::ScopedAStatus( ::aidl::android::hardware::bluetooth::audio::SessionType,
                                         std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>*
                                       )> mGetProviderCapabilities;
    std::function <::ndk::ScopedAStatus( int32_t* )> mGetInterfaceVersion;
    std::function <::ndk::ScopedAStatus( std::string* )> mGetInterfaceHash;

#endif

private:
  static std::shared_ptr<IBluetoothAudioProviderFactory> default_impl;
};
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API IBluetoothAudioProviderFactoryDefault : public IBluetoothAudioProviderFactory {
public:
  ::ndk::ScopedAStatus getProviderCapabilities(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) override;
  ::ndk::ScopedAStatus openProvider(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
