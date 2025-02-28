/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash b82d5b9f717bbf63bef774ee8f72572065ca61ce --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging/android/hardware/bluetooth/audio/IBluetoothAudioProvider.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/2/android/hardware/bluetooth/audio/IBluetoothAudioProvider.aidl
 */
#pragma once

#include "aidl/android/hardware/bluetooth/audio/IBluetoothAudioProvider.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API BnBluetoothAudioProvider : public ::ndk::BnCInterface<IBluetoothAudioProvider> {
public:
  BnBluetoothAudioProvider();
  virtual ~BnBluetoothAudioProvider();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
#ifdef _MSC_VER
  ::ndk::SpAIBinder createBinder_impl();
#endif
private:
};
class ANDROIDHARDWAREBLUETOOTHAUDIOV2NDK_EXPORTS_API IBluetoothAudioProviderDelegator : public BnBluetoothAudioProvider {
public:
  explicit IBluetoothAudioProviderDelegator(const std::shared_ptr<IBluetoothAudioProvider> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->invoke_getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothAudioProvider::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus endSession() override {
    return _impl->invoke_endSession();
  }
  ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::android::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::android::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) override {
    return _impl->invoke_startSession(in_hostIf, in_audioConfig, in_supportedLatencyModes, _aidl_return);
  }
  ::ndk::ScopedAStatus streamStarted(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override {
    return _impl->invoke_streamStarted(in_status);
  }
  ::ndk::ScopedAStatus streamSuspended(::aidl::android::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override {
    return _impl->invoke_streamSuspended(in_status);
  }
  ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::android::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) override {
    return _impl->invoke_updateAudioConfiguration(in_audioConfig);
  }
  ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) override {
    return _impl->invoke_setLowLatencyModeAllowed(in_allowed);
  }
protected:
private:
  std::shared_ptr<IBluetoothAudioProvider> _impl;
};

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
