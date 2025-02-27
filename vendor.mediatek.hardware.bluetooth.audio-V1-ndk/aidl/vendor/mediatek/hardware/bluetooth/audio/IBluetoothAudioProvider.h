/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <aidl/android/hardware/common/fmq/MQDescriptor.h>
#include <aidl/android/hardware/common/fmq/SynchronizedReadWrite.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AudioConfiguration.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BluetoothAudioStatus.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/ConnParam.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/LatencyMode.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::common::fmq {
template <typename T, typename Flavor>
class MQDescriptor;
}  // namespace aidl::android::hardware::common::fmq
namespace aidl::vendor::mediatek::hardware::bluetooth::audio {
class ConnParam;
class IBluetoothAudioPort;
}  // namespace aidl::vendor::mediatek::hardware::bluetooth::audio
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class IBluetoothAudioProviderDelegator;

class IBluetoothAudioProvider : public ::ndk::ICInterface {
public:
  typedef IBluetoothAudioProviderDelegator DefaultDelegator;
  static const char* descriptor;
  IBluetoothAudioProvider();
  virtual ~IBluetoothAudioProvider();

  static inline const int32_t version = 1;
  static inline const std::string hash = "d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3";
  static constexpr uint32_t TRANSACTION_endSession = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_startSession = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_streamStarted = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_streamSuspended = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_updateAudioConfiguration = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_setLowLatencyModeAllowed = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_enterGameMode = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_updataConnParam = FIRST_CALL_TRANSACTION + 7;

  static std::shared_ptr<IBluetoothAudioProvider> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioProvider>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioProvider>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IBluetoothAudioProvider>& impl);
  static const std::shared_ptr<IBluetoothAudioProvider>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus endSession() = 0;
  virtual ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus streamStarted(::aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus in_status) = 0;
  virtual ::ndk::ScopedAStatus streamSuspended(::aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus in_status) = 0;
  virtual ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) = 0;
  virtual ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) = 0;
  virtual ::ndk::ScopedAStatus enterGameMode(int8_t in_enter) = 0;
  virtual ::ndk::ScopedAStatus updataConnParam(const ::aidl::vendor::mediatek::hardware::bluetooth::audio::ConnParam& in_connPrameter) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IBluetoothAudioProvider> default_impl;
};
class IBluetoothAudioProviderDefault : public IBluetoothAudioProvider {
public:
  ::ndk::ScopedAStatus endSession() override;
  ::ndk::ScopedAStatus startSession(const std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioPort>& in_hostIf, const ::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig, const std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::LatencyMode>& in_supportedLatencyModes, ::aidl::android::hardware::common::fmq::MQDescriptor<int8_t, ::aidl::android::hardware::common::fmq::SynchronizedReadWrite>* _aidl_return) override;
  ::ndk::ScopedAStatus streamStarted(::aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus streamSuspended(::aidl::vendor::mediatek::hardware::bluetooth::audio::BluetoothAudioStatus in_status) override;
  ::ndk::ScopedAStatus updateAudioConfiguration(const ::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioConfiguration& in_audioConfig) override;
  ::ndk::ScopedAStatus setLowLatencyModeAllowed(bool in_allowed) override;
  ::ndk::ScopedAStatus enterGameMode(int8_t in_enter) override;
  ::ndk::ScopedAStatus updataConnParam(const ::aidl::vendor::mediatek::hardware::bluetooth::audio::ConnParam& in_connPrameter) override;
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
