/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.h"

#include <android/binder_ibinder.h>

#include "ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS.h"

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API BpBluetoothAudioProviderFactory : public ::ndk::BpCInterface<IBluetoothAudioProviderFactory> {
public:
  explicit BpBluetoothAudioProviderFactory(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothAudioProviderFactory();

  ::ndk::ScopedAStatus getProviderCapabilities(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) override;
  ::ndk::ScopedAStatus openProvider(::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;

#ifdef _MSC_VER
  ::ndk::ScopedAStatus getProviderCapabilities_impl
        (
        ::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType,
        std::vector<::aidl::android::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return
        );
  ::ndk::ScopedAStatus openProvider_impl
        (
        ::aidl::android::hardware::bluetooth::audio::SessionType in_sessionType,
        std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return
        );
  ::ndk::ScopedAStatus getInterfaceVersion_impl( int32_t* _aidl_return );
  ::ndk::ScopedAStatus getInterfaceHash_impl( std::string* _aidl_return );
#endif

};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
