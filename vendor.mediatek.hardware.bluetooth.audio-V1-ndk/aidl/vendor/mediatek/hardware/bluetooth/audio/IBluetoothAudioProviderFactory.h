/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.aidl
 */
#pragma once

#include <cstdint>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AudioCapabilities.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/SessionType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

namespace aidl::vendor::mediatek::hardware::bluetooth::audio {
class IBluetoothAudioProvider;
}  // namespace aidl::vendor::mediatek::hardware::bluetooth::audio
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class IBluetoothAudioProviderFactoryDelegator;

class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API IBluetoothAudioProviderFactory : public ::ndk::ICInterface {
public:
  typedef IBluetoothAudioProviderFactoryDelegator DefaultDelegator;
  static inline constexpr const char* descriptor = "vendor.mediatek.hardware.bluetooth.audio.IBluetoothAudioProviderFactory";
  IBluetoothAudioProviderFactory();
  virtual ~IBluetoothAudioProviderFactory();

  static inline const int32_t version = 1;
  static inline const std::string hash = "d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3";
  static constexpr uint32_t TRANSACTION_getProviderCapabilities = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_openProvider = FIRST_CALL_TRANSACTION + 1;

#ifdef _MSC_VER
  ::ndk::ScopedAStatus getProviderCapabilitiesDetail( ::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return )
  {
      return m_getProviderCapabilitiesFun( in_sessionType, _aidl_return );
  }
  ::ndk::ScopedAStatus openProviderDetail( ::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return )
  {
      return m_openProviderFun( in_sessionType, _aidl_return );
  }
  ::ndk::ScopedAStatus getInterfaceVersionDetail( int32_t* _aidl_return )
  {
      return getInterfaceVersionDetailFun( _aidl_return );
  }
  ::ndk::ScopedAStatus getInterfaceHashDetail( std::string* _aidl_return )
  {
      return getInterfaceHashDetailFun( _aidl_return );
  }
  std::function<::ndk::ScopedAStatus(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType, std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities>*)> m_getProviderCapabilitiesFun;
  std::function<::ndk::ScopedAStatus(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType, std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider>*)> m_openProviderFun;
  std::function<::ndk::ScopedAStatus(int32_t*)> getInterfaceVersionDetailFun;
  std::function<::ndk::ScopedAStatus(std::string*)> getInterfaceHashDetailFun;
#endif

  static std::shared_ptr<IBluetoothAudioProviderFactory> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioProviderFactory>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioProviderFactory>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothAudioProviderFactory>& impl);
  static const std::shared_ptr<IBluetoothAudioProviderFactory>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus getProviderCapabilities(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus openProvider(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothAudioProviderFactory> default_impl;
};
class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API IBluetoothAudioProviderFactoryDefault : public IBluetoothAudioProviderFactory {
public:
  ::ndk::ScopedAStatus getProviderCapabilities(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) override;
  ::ndk::ScopedAStatus openProvider(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
