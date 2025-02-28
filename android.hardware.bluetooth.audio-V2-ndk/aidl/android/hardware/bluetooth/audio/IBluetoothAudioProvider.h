/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/IBluetoothAudioProvider.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/IBluetoothAudioProvider.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/bluetooth/audio/AudioConfiguration.h>
#include <aidl/android/hardware/bluetooth/audio/BluetoothAudioStatus.h>
#include <aidl/android/hardware/bluetooth/audio/IBluetoothAudioPort.h>
#include <aidl/android/hardware/bluetooth/audio/LatencyMode.h>
#include <aidl/android/hardware/common/fmq/MQDescriptor.h>
#include <aidl/android/hardware/common/fmq/SynchronizedReadWrite.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::audio {
class IBluetoothAudioPort;
}  // namespace aidl::android::hardware::bluetooth::audio
namespace aidl::android::hardware::common::fmq {
template <typename T, typename Flavor>
class MQDescriptor;
}  // namespace aidl::android::hardware::common::fmq
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class IBluetoothAudioProviderDelegator;

class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API IBluetoothAudioProvider : public ::ndk::ICInterface {
public:
  typedef IBluetoothAudioProviderDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothAudioProvider();
  virtual ~IBluetoothAudioProvider();

  static inline const int32_t version = 2;
  static inline const std::string hash = "b82d5b9f717bbf63bef774ee8f72572065ca61ce";
  static constexpr uint32_t TRANSACTION_endSession = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_startSession = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_streamStarted = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_streamSuspended = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_updateAudioConfiguration = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_setLowLatencyModeAllowed = FIRST_CALL_TRANSACTION + 5;

  static std::shared_ptr<IBluetoothAudioProvider> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioProvider>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioProvider>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothAudioProvider>& impl);
  static const std::shared_ptr<IBluetoothAudioProvider>& getDefaultImpl();

protected:

  /**
  * MSVC cannot route right virtual function here( Maybe a BUG? )
  * So please invoke function with prefix invoke_
  */
  virtual ::ndk::ScopedAStatus endSession() = 0;
  virtual ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus streamStarted(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) = 0;
  virtual ::ndk::ScopedAStatus streamSuspended(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) = 0;
  virtual ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) = 0;
  virtual ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;

public:

#ifdef _MSC_VER
  ::ndk::ScopedAStatus invoke_endSession()
  {
      return endSession();
  }

  ::ndk::ScopedAStatus invoke_startSession( const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf,
                                            const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig,
                                            const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes,
                                            ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return
                                          )
  {
      if( m_startSession )
      {
          return m_startSession( in_hostIf, in_audioConfig, in_supportedLatencyModes, _aidl_return );
      }

      return startSession( in_hostIf, in_audioConfig, in_supportedLatencyModes, _aidl_return );
  }

  ::ndk::ScopedAStatus invoke_streamStarted( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status )
  {
      if( m_streamStarted )
      {
          return m_streamStarted( in_status );
      }
      return streamStarted( in_status );
  }

  ::ndk::ScopedAStatus invoke_streamSuspended( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status )
  {
      if( m_streamSuspended )
      {
          return m_streamSuspended( in_status );
      }
      return streamSuspended( in_status );
  }

  ::ndk::ScopedAStatus invoke_updateAudioConfiguration( const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig )
  {
      if( m_updateAudioConfiguration )
      {
          return m_updateAudioConfiguration( in_audioConfig );
      }
      return updateAudioConfiguration( in_audioConfig );
  }

  ::ndk::ScopedAStatus invoke_setLowLatencyModeAllowed( bool in_allowed )
  {
      if( m_setLowLatencyModeAllowed )
      {
          return m_setLowLatencyModeAllowed( in_allowed );
      }
      return setLowLatencyModeAllowed( in_allowed );
  }

  ::ndk::ScopedAStatus invoke_getInterfaceVersion( int32_t* _aidl_return )
  {
      if( m_getInterfaceVersion )
      {
          return m_getInterfaceVersion( _aidl_return );
      }
      return getInterfaceVersion( _aidl_return );
  }

  ::ndk::ScopedAStatus invoke_getInterfaceHash( std::string* _aidl_return )
  {
      if( m_getInterfaceHash )
      {
          return m_getInterfaceHash( _aidl_return );
      }
      return getInterfaceHash( _aidl_return );
  }

protected:

    std::function<::ndk::ScopedAStatus()> m_endSession;
    std::function<::ndk::ScopedAStatus(
        const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>&,
        const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration&,
        const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>&,
        ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>*
        )> m_startSession;
    std::function<::ndk::ScopedAStatus( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus )> m_streamStarted;
    std::function<::ndk::ScopedAStatus( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus )> m_streamSuspended;
    std::function<::ndk::ScopedAStatus( const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& )> m_updateAudioConfiguration;
    std::function<::ndk::ScopedAStatus( bool )> m_setLowLatencyModeAllowed;
    std::function<::ndk::ScopedAStatus( int32_t* )> m_getInterfaceVersion;
    std::function<::ndk::ScopedAStatus( std::string* )> m_getInterfaceHash;
#endif

private:
  static std::shared_ptr<IBluetoothAudioProvider> default_impl;
};
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API IBluetoothAudioProviderDefault : public IBluetoothAudioProvider {
public:
  ::ndk::ScopedAStatus endSession() override;
  ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) override;
  ::ndk::ScopedAStatus streamStarted(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus streamSuspended(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) override;
  ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) override;
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
