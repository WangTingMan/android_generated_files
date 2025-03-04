/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.h"

#include <android/binder_ibinder.h>
#include <cassert>
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API BnBluetoothAudioProvider : public ::ndk::BnCInterface<IBluetoothAudioProvider> {
public:
  BnBluetoothAudioProvider();
  virtual ~BnBluetoothAudioProvider();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
#ifdef _MSC_VER
  ::ndk::SpAIBinder createBinderDetail();
#endif
private:
};
class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API IBluetoothAudioProviderDelegator : public BnBluetoothAudioProvider {
public:
  explicit IBluetoothAudioProviderDelegator(const std::shared_ptr<IBluetoothAudioProvider> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothAudioProvider::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus endSession() override {
    return _impl->endSession();
  }
  ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) override {
    return _impl->startSession(in_hostIf, in_audioConfig, in_supportedLatencyModes, _aidl_return);
  }
  ::ndk::ScopedAStatus streamStarted(::aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override {
    return _impl->streamStarted(in_status);
  }
  ::ndk::ScopedAStatus streamSuspended(::aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override {
    return _impl->streamSuspended(in_status);
  }
  ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) override {
    return _impl->updateAudioConfiguration(in_audioConfig);
  }
  ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) override {
    return _impl->setLowLatencyModeAllowed(in_allowed);
  }
  ::ndk::ScopedAStatus enterGameMode(int8_t in_enter) override {
    return _impl->enterGameMode(in_enter);
  }
  ::ndk::ScopedAStatus updataConnParam(const ::aidl::vendor::mediatek::hardware::bluetooth::audio::ConnParam& in_connPrameter) override {
    return _impl->updataConnParam(in_connPrameter);
  }
protected:
private:
  std::shared_ptr<IBluetoothAudioProvider> _impl;
};

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
