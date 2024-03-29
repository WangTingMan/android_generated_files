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

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API IBluetoothAudioProviderFactory : public ::ndk::ICInterface {
public:
  static inline const std::string descriptor = "android.hardware.bluetooth.audio.IBluetoothAudioProviderFactory";
  IBluetoothAudioProviderFactory();
  virtual ~IBluetoothAudioProviderFactory();

  static const int32_t version = 2;
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
