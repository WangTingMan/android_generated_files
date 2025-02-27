/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.aidl
 */
#pragma once

#include "aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.h"

#include <android/binder_ibinder.h>

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class BpBluetoothAudioPort : public ::ndk::BpCInterface<IBluetoothAudioPort> {
public:
  explicit BpBluetoothAudioPort(const ::ndk::SpAIBinder& binder);
  virtual ~BpBluetoothAudioPort();

  ::ndk::ScopedAStatus getPresentationPosition(::aidl::vendor::mediatek::hardware::bluetooth::audio::PresentationPosition* _aidl_return) override;
  ::ndk::ScopedAStatus startStream(bool in_isLowLatency) override;
  ::ndk::ScopedAStatus stopStream() override;
  ::ndk::ScopedAStatus suspendStream() override;
  ::ndk::ScopedAStatus updateSourceMetadata(const ::aidl::android::hardware::audio::common::SourceMetadata& in_sourceMetadata) override;
  ::ndk::ScopedAStatus updateSinkMetadata(const ::aidl::android::hardware::audio::common::SinkMetadata& in_sinkMetadata) override;
  ::ndk::ScopedAStatus setLatencyMode(::aidl::vendor::mediatek::hardware::bluetooth::audio::LatencyMode in_latencyMode) override;
  ::ndk::ScopedAStatus enterGameMode(int8_t in_enter) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
