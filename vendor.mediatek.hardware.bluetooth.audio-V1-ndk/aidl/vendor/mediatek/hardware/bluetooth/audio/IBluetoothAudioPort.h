/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/audio/common/SinkMetadata.h>
#include <aidl/android/hardware/audio/common/SourceMetadata.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LatencyMode.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/PresentationPosition.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_EXPORTS_.h"

namespace aidl::android::hardware::audio::common {
class SinkMetadata;
class SourceMetadata;
}  // namespace aidl::android::hardware::audio::common
namespace aidl::vendor::mediatek::hardware::bluetooth::audio {
class PresentationPosition;
}  // namespace aidl::vendor::mediatek::hardware::bluetooth::audio
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class IBluetoothAudioPortDelegator;

class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API IBluetoothAudioPort : public ::ndk::ICInterface {
public:
  typedef IBluetoothAudioPortDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothAudioPort();
  virtual ~IBluetoothAudioPort();

  static inline const int32_t version = 1;
  static inline const std::string hash = "d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3";
  static constexpr uint32_t TRANSACTION_getPresentationPosition = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_startStream = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_stopStream = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_suspendStream = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_updateSourceMetadata = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_updateSinkMetadata = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_setLatencyMode = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_enterGameMode = FIRST_CALL_TRANSACTION + 7;

  static std::shared_ptr<IBluetoothAudioPort> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioPort>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioPort>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothAudioPort>& impl);
  static const std::shared_ptr<IBluetoothAudioPort>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus getPresentationPosition(::aidl::vendor::mediatek::hardware::bluetooth::audio::PresentationPosition* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus startStream(bool in_isLowLatency) = 0;
  virtual ::ndk::ScopedAStatus stopStream() = 0;
  virtual ::ndk::ScopedAStatus suspendStream() = 0;
  virtual ::ndk::ScopedAStatus updateSourceMetadata(const ::aidl::android::hardware::audio::common::SourceMetadata& in_sourceMetadata) = 0;
  virtual ::ndk::ScopedAStatus updateSinkMetadata(const ::aidl::android::hardware::audio::common::SinkMetadata& in_sinkMetadata) = 0;
  virtual ::ndk::ScopedAStatus setLatencyMode(::aidl::vendor::mediatek::hardware::bluetooth::audio::LatencyMode in_latencyMode) = 0;
  virtual ::ndk::ScopedAStatus enterGameMode(int8_t in_enter) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothAudioPort> default_impl;
};
class VENDORMEDIATEKHARDWAREBLUETOOTHAUDIOV1NDK_API IBluetoothAudioPortDefault : public IBluetoothAudioPort {
public:
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
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
