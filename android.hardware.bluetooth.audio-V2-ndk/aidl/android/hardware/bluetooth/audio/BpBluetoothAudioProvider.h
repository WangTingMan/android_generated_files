/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/IBluetoothAudioProvider.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/IBluetoothAudioProvider.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/audio/IBluetoothAudioProvider.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API BpBluetoothAudioProvider : public ::ndk::BpCInterface<IBluetoothAudioProvider> {
public:
  explicit BpBluetoothAudioProvider(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothAudioProvider();

  ::ndk::ScopedAStatus endSession() override;
  ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) override;
  ::ndk::ScopedAStatus streamStarted(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus streamSuspended(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) override;
  ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;

#ifdef _MSC_VER
  ::ndk::ScopedAStatus endSession_impl();
  ::ndk::ScopedAStatus startSession_impl
        ( const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf,
          const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig,
          const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes,
          ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t,
          ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return
        );
  ::ndk::ScopedAStatus streamStarted_impl( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status );
  ::ndk::ScopedAStatus streamSuspended_impl( ::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status );
  ::ndk::ScopedAStatus updateAudioConfiguration_impl( const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig );
  ::ndk::ScopedAStatus setLowLatencyModeAllowed_impl( bool in_allowed );
  ::ndk::ScopedAStatus getInterfaceVersion_impl( int32_t* _aidl_return );
  ::ndk::ScopedAStatus getInterfaceHash_impl( std::string* _aidl_return );
#endif

};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
