/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 3 --hash eb5f1f5af402830af56b50eb66bdd60fd8cc774e -t --stability vintf --min_sdk_version current -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/4/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.effect_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core.sounddose_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core-V3-ndk-source/gen/staging/android/hardware/audio/core/IModule.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core-V3-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.core-V3-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.core/3 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.core/3/android/hardware/audio/core/IModule.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <array>
#include <cstdint>
#include <functional>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_enums.h>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/android/hardware/audio/common/SinkMetadata.h>
#include <aidl/android/hardware/audio/common/SourceMetadata.h>
#include <aidl/android/hardware/audio/core/AudioPatch.h>
#include <aidl/android/hardware/audio/core/AudioRoute.h>
#include <aidl/android/hardware/audio/core/IBluetooth.h>
#include <aidl/android/hardware/audio/core/IBluetoothA2dp.h>
#include <aidl/android/hardware/audio/core/IBluetoothLe.h>
#include <aidl/android/hardware/audio/core/IModule.h>
#include <aidl/android/hardware/audio/core/IStreamCallback.h>
#include <aidl/android/hardware/audio/core/IStreamIn.h>
#include <aidl/android/hardware/audio/core/IStreamOut.h>
#include <aidl/android/hardware/audio/core/IStreamOutEventCallback.h>
#include <aidl/android/hardware/audio/core/ITelephony.h>
#include <aidl/android/hardware/audio/core/ModuleDebug.h>
#include <aidl/android/hardware/audio/core/StreamDescriptor.h>
#include <aidl/android/hardware/audio/core/VendorParameter.h>
#include <aidl/android/hardware/audio/core/sounddose/ISoundDose.h>
#include <aidl/android/hardware/audio/effect/IEffect.h>
#include <aidl/android/media/audio/common/AudioMMapPolicyInfo.h>
#include <aidl/android/media/audio/common/AudioMMapPolicyType.h>
#include <aidl/android/media/audio/common/AudioMode.h>
#include <aidl/android/media/audio/common/AudioOffloadInfo.h>
#include <aidl/android/media/audio/common/AudioPort.h>
#include <aidl/android/media/audio/common/AudioPortConfig.h>
#include <aidl/android/media/audio/common/MicrophoneInfo.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREAUDIOCOREV3NDK_EXPORTS_.h"

namespace aidl::android::hardware::audio::common {
class SinkMetadata;
class SourceMetadata;
}  // namespace aidl::android::hardware::audio::common
namespace aidl::android::hardware::audio::core {
class AudioPatch;
class AudioRoute;
class IBluetooth;
class IBluetoothA2dp;
class IBluetoothLe;
class IStreamCallback;
class IStreamIn;
class IStreamOut;
class IStreamOutEventCallback;
class ITelephony;
class ModuleDebug;
class StreamDescriptor;
class VendorParameter;
}  // namespace aidl::android::hardware::audio::core
namespace aidl::android::hardware::audio::core::sounddose {
class ISoundDose;
}  // namespace aidl::android::hardware::audio::core::sounddose
namespace aidl::android::hardware::audio::effect {
class IEffect;
}  // namespace aidl::android::hardware::audio::effect
namespace aidl::android::media::audio::common {
class AudioMMapPolicyInfo;
class AudioOffloadInfo;
class AudioPort;
class AudioPortConfig;
class MicrophoneInfo;
}  // namespace aidl::android::media::audio::common
namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace core {
class IModuleDelegator;

/**
 * Each instance of IModule corresponds to a separate audio module. The system
 * (the term "system" as used here applies to the entire device running Android)
 * may have multiple modules due to the physical architecture, for example, it
 * can have multiple DSPs or other audio I/O units which are not interconnected
 * in hardware directly. Usually there is at least one audio module which is
 * responsible for the "main" (or "built-in") audio functionality of the
 * system. Even if the system lacks any physical audio I/O capabilities, there
 * will be a "null" audio module.
 *
 * On a typical mobile phone there is usually a main DSP module which handles
 * most of the phone's audio I/O via the built-in speakers and microphones. USB
 * audio can exist as a separate module. Some audio modules can be implemented
 * purely in software, for example, the remote submix module.
 */
class ANDROIDHARDWAREAUDIOCOREV3NDK_API IModule : public ::ndk::ICInterface {
public:
  typedef IModuleDelegator DefaultDelegator;
  static const char* descriptor;
  IModule();
  virtual ~IModule();

  class ANDROIDHARDWAREAUDIOCOREV3NDK_API OpenInputStreamArguments {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    int32_t portConfigId = 0;
    ::aidl::android::hardware::audio::common::SinkMetadata sinkMetadata;
    int64_t bufferSizeFrames = 0L;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const OpenInputStreamArguments& _rhs) const {
      return std::tie(portConfigId, sinkMetadata, bufferSizeFrames) == std::tie(_rhs.portConfigId, _rhs.sinkMetadata, _rhs.bufferSizeFrames);
    }
    inline bool operator<(const OpenInputStreamArguments& _rhs) const {
      return std::tie(portConfigId, sinkMetadata, bufferSizeFrames) < std::tie(_rhs.portConfigId, _rhs.sinkMetadata, _rhs.bufferSizeFrames);
    }
    inline bool operator!=(const OpenInputStreamArguments& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const OpenInputStreamArguments& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const OpenInputStreamArguments& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const OpenInputStreamArguments& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "OpenInputStreamArguments{";
      _aidl_os << "portConfigId: " << ::android::internal::ToString(portConfigId);
      _aidl_os << ", sinkMetadata: " << ::android::internal::ToString(sinkMetadata);
      _aidl_os << ", bufferSizeFrames: " << ::android::internal::ToString(bufferSizeFrames);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDHARDWAREAUDIOCOREV3NDK_API OpenInputStreamReturn {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    std::shared_ptr<::aidl::android::hardware::audio::core::IStreamIn> stream;
    ::aidl::android::hardware::audio::core::StreamDescriptor desc;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const OpenInputStreamReturn& _rhs) const {
      return std::tie(stream, desc) == std::tie(_rhs.stream, _rhs.desc);
    }
    inline bool operator<(const OpenInputStreamReturn& _rhs) const {
      return std::tie(stream, desc) < std::tie(_rhs.stream, _rhs.desc);
    }
    inline bool operator!=(const OpenInputStreamReturn& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const OpenInputStreamReturn& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const OpenInputStreamReturn& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const OpenInputStreamReturn& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "OpenInputStreamReturn{";
      _aidl_os << "stream: " << ::android::internal::ToString(stream);
      _aidl_os << ", desc: " << ::android::internal::ToString(desc);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDHARDWAREAUDIOCOREV3NDK_API OpenOutputStreamArguments {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    int32_t portConfigId = 0;
    ::aidl::android::hardware::audio::common::SourceMetadata sourceMetadata;
    std::optional<::aidl::android::media::audio::common::AudioOffloadInfo> offloadInfo;
    int64_t bufferSizeFrames = 0L;
    std::shared_ptr<::aidl::android::hardware::audio::core::IStreamCallback> callback;
    std::shared_ptr<::aidl::android::hardware::audio::core::IStreamOutEventCallback> eventCallback;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const OpenOutputStreamArguments& _rhs) const {
      return std::tie(portConfigId, sourceMetadata, offloadInfo, bufferSizeFrames, callback, eventCallback) == std::tie(_rhs.portConfigId, _rhs.sourceMetadata, _rhs.offloadInfo, _rhs.bufferSizeFrames, _rhs.callback, _rhs.eventCallback);
    }
    inline bool operator<(const OpenOutputStreamArguments& _rhs) const {
      return std::tie(portConfigId, sourceMetadata, offloadInfo, bufferSizeFrames, callback, eventCallback) < std::tie(_rhs.portConfigId, _rhs.sourceMetadata, _rhs.offloadInfo, _rhs.bufferSizeFrames, _rhs.callback, _rhs.eventCallback);
    }
    inline bool operator!=(const OpenOutputStreamArguments& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const OpenOutputStreamArguments& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const OpenOutputStreamArguments& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const OpenOutputStreamArguments& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "OpenOutputStreamArguments{";
      _aidl_os << "portConfigId: " << ::android::internal::ToString(portConfigId);
      _aidl_os << ", sourceMetadata: " << ::android::internal::ToString(sourceMetadata);
      _aidl_os << ", offloadInfo: " << ::android::internal::ToString(offloadInfo);
      _aidl_os << ", bufferSizeFrames: " << ::android::internal::ToString(bufferSizeFrames);
      _aidl_os << ", callback: " << ::android::internal::ToString(callback);
      _aidl_os << ", eventCallback: " << ::android::internal::ToString(eventCallback);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDHARDWAREAUDIOCOREV3NDK_API OpenOutputStreamReturn {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    std::shared_ptr<::aidl::android::hardware::audio::core::IStreamOut> stream;
    ::aidl::android::hardware::audio::core::StreamDescriptor desc;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const OpenOutputStreamReturn& _rhs) const {
      return std::tie(stream, desc) == std::tie(_rhs.stream, _rhs.desc);
    }
    inline bool operator<(const OpenOutputStreamReturn& _rhs) const {
      return std::tie(stream, desc) < std::tie(_rhs.stream, _rhs.desc);
    }
    inline bool operator!=(const OpenOutputStreamReturn& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const OpenOutputStreamReturn& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const OpenOutputStreamReturn& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const OpenOutputStreamReturn& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "OpenOutputStreamReturn{";
      _aidl_os << "stream: " << ::android::internal::ToString(stream);
      _aidl_os << ", desc: " << ::android::internal::ToString(desc);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  class ANDROIDHARDWAREAUDIOCOREV3NDK_API SupportedPlaybackRateFactors {
  public:
    typedef std::false_type fixed_size;
    static const char* descriptor;

    float minSpeed = 0.000000f;
    float maxSpeed = 0.000000f;
    float minPitch = 0.000000f;
    float maxPitch = 0.000000f;

    binder_status_t readFromParcel(const AParcel* parcel);
    binder_status_t writeToParcel(AParcel* parcel) const;

    inline bool operator==(const SupportedPlaybackRateFactors& _rhs) const {
      return std::tie(minSpeed, maxSpeed, minPitch, maxPitch) == std::tie(_rhs.minSpeed, _rhs.maxSpeed, _rhs.minPitch, _rhs.maxPitch);
    }
    inline bool operator<(const SupportedPlaybackRateFactors& _rhs) const {
      return std::tie(minSpeed, maxSpeed, minPitch, maxPitch) < std::tie(_rhs.minSpeed, _rhs.maxSpeed, _rhs.minPitch, _rhs.maxPitch);
    }
    inline bool operator!=(const SupportedPlaybackRateFactors& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const SupportedPlaybackRateFactors& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const SupportedPlaybackRateFactors& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const SupportedPlaybackRateFactors& _rhs) const {
      return !(_rhs < *this);
    }

    static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "SupportedPlaybackRateFactors{";
      _aidl_os << "minSpeed: " << ::android::internal::ToString(minSpeed);
      _aidl_os << ", maxSpeed: " << ::android::internal::ToString(maxSpeed);
      _aidl_os << ", minPitch: " << ::android::internal::ToString(minPitch);
      _aidl_os << ", maxPitch: " << ::android::internal::ToString(maxPitch);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };
  enum class ScreenRotation : int32_t {
    DEG_0 = 0,
    DEG_90 = 1,
    DEG_180 = 2,
    DEG_270 = 3,
  };

  enum : int32_t { DEFAULT_AAUDIO_MIXER_BURST_COUNT = 2 };
  enum : int32_t { DEFAULT_AAUDIO_HARDWARE_BURST_MIN_DURATION_US = 1000 };
  static inline const int32_t version = 3;
  static inline const std::string hash = "eb5f1f5af402830af56b50eb66bdd60fd8cc774e";
  static constexpr uint32_t TRANSACTION_setModuleDebug = FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_getTelephony = FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_getBluetooth = FIRST_CALL_TRANSACTION + 2;
  static constexpr uint32_t TRANSACTION_getBluetoothA2dp = FIRST_CALL_TRANSACTION + 3;
  static constexpr uint32_t TRANSACTION_getBluetoothLe = FIRST_CALL_TRANSACTION + 4;
  static constexpr uint32_t TRANSACTION_connectExternalDevice = FIRST_CALL_TRANSACTION + 5;
  static constexpr uint32_t TRANSACTION_disconnectExternalDevice = FIRST_CALL_TRANSACTION + 6;
  static constexpr uint32_t TRANSACTION_getAudioPatches = FIRST_CALL_TRANSACTION + 7;
  static constexpr uint32_t TRANSACTION_getAudioPort = FIRST_CALL_TRANSACTION + 8;
  static constexpr uint32_t TRANSACTION_getAudioPortConfigs = FIRST_CALL_TRANSACTION + 9;
  static constexpr uint32_t TRANSACTION_getAudioPorts = FIRST_CALL_TRANSACTION + 10;
  static constexpr uint32_t TRANSACTION_getAudioRoutes = FIRST_CALL_TRANSACTION + 11;
  static constexpr uint32_t TRANSACTION_getAudioRoutesForAudioPort = FIRST_CALL_TRANSACTION + 12;
  static constexpr uint32_t TRANSACTION_openInputStream = FIRST_CALL_TRANSACTION + 13;
  static constexpr uint32_t TRANSACTION_openOutputStream = FIRST_CALL_TRANSACTION + 14;
  static constexpr uint32_t TRANSACTION_getSupportedPlaybackRateFactors = FIRST_CALL_TRANSACTION + 15;
  static constexpr uint32_t TRANSACTION_setAudioPatch = FIRST_CALL_TRANSACTION + 16;
  static constexpr uint32_t TRANSACTION_setAudioPortConfig = FIRST_CALL_TRANSACTION + 17;
  static constexpr uint32_t TRANSACTION_resetAudioPatch = FIRST_CALL_TRANSACTION + 18;
  static constexpr uint32_t TRANSACTION_resetAudioPortConfig = FIRST_CALL_TRANSACTION + 19;
  static constexpr uint32_t TRANSACTION_getMasterMute = FIRST_CALL_TRANSACTION + 20;
  static constexpr uint32_t TRANSACTION_setMasterMute = FIRST_CALL_TRANSACTION + 21;
  static constexpr uint32_t TRANSACTION_getMasterVolume = FIRST_CALL_TRANSACTION + 22;
  static constexpr uint32_t TRANSACTION_setMasterVolume = FIRST_CALL_TRANSACTION + 23;
  static constexpr uint32_t TRANSACTION_getMicMute = FIRST_CALL_TRANSACTION + 24;
  static constexpr uint32_t TRANSACTION_setMicMute = FIRST_CALL_TRANSACTION + 25;
  static constexpr uint32_t TRANSACTION_getMicrophones = FIRST_CALL_TRANSACTION + 26;
  static constexpr uint32_t TRANSACTION_updateAudioMode = FIRST_CALL_TRANSACTION + 27;
  static constexpr uint32_t TRANSACTION_updateScreenRotation = FIRST_CALL_TRANSACTION + 28;
  static constexpr uint32_t TRANSACTION_updateScreenState = FIRST_CALL_TRANSACTION + 29;
  static constexpr uint32_t TRANSACTION_getSoundDose = FIRST_CALL_TRANSACTION + 30;
  static constexpr uint32_t TRANSACTION_generateHwAvSyncId = FIRST_CALL_TRANSACTION + 31;
  static constexpr uint32_t TRANSACTION_getVendorParameters = FIRST_CALL_TRANSACTION + 32;
  static constexpr uint32_t TRANSACTION_setVendorParameters = FIRST_CALL_TRANSACTION + 33;
  static constexpr uint32_t TRANSACTION_addDeviceEffect = FIRST_CALL_TRANSACTION + 34;
  static constexpr uint32_t TRANSACTION_removeDeviceEffect = FIRST_CALL_TRANSACTION + 35;
  static constexpr uint32_t TRANSACTION_getMmapPolicyInfos = FIRST_CALL_TRANSACTION + 36;
  static constexpr uint32_t TRANSACTION_supportsVariableLatency = FIRST_CALL_TRANSACTION + 37;
  static constexpr uint32_t TRANSACTION_getAAudioMixerBurstCount = FIRST_CALL_TRANSACTION + 38;
  static constexpr uint32_t TRANSACTION_getAAudioHardwareBurstMinUsec = FIRST_CALL_TRANSACTION + 39;
  static constexpr uint32_t TRANSACTION_prepareToDisconnectExternalDevice = FIRST_CALL_TRANSACTION + 40;

#ifdef _MSC_VER
  std::function<::ndk::ScopedAStatus(const ::aidl::android::hardware::audio::core::ModuleDebug& in_debug)> m_setModuleDebug = 0;
  std::function<::ndk::ScopedAStatus(std::shared_ptr<::aidl::android::hardware::audio::core::ITelephony>* _aidl_return)> m_getTelephony = 0;
  std::function<::ndk::ScopedAStatus(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetooth>* _aidl_return)> m_getBluetooth = 0;
  std::function<::ndk::ScopedAStatus(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetoothA2dp>* _aidl_return)> m_getBluetoothA2dp = 0;
  std::function<::ndk::ScopedAStatus(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetoothLe>* _aidl_return)> m_getBluetoothLe = 0;
  std::function<::ndk::ScopedAStatus(const ::aidl::android::media::audio::common::AudioPort& in_templateIdAndAdditionalData, ::aidl::android::media::audio::common::AudioPort* _aidl_return)> m_connectExternalDevice = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portId)> m_disconnectExternalDevice = 0;
  std::function<::ndk::ScopedAStatus(std::vector<::aidl::android::hardware::audio::core::AudioPatch>* _aidl_return)> m_getAudioPatches = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portId, ::aidl::android::media::audio::common::AudioPort* _aidl_return)> m_getAudioPort = 0;
  std::function<::ndk::ScopedAStatus(std::vector<::aidl::android::media::audio::common::AudioPortConfig>* _aidl_return)> m_getAudioPortConfigs = 0;
  std::function<::ndk::ScopedAStatus(std::vector<::aidl::android::media::audio::common::AudioPort>* _aidl_return)> m_getAudioPorts = 0;
  std::function<::ndk::ScopedAStatus(std::vector<::aidl::android::hardware::audio::core::AudioRoute>* _aidl_return)> m_getAudioRoutes = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portId, std::vector<::aidl::android::hardware::audio::core::AudioRoute>* _aidl_return)> m_getAudioRoutesForAudioPort = 0;
  std::function<::ndk::ScopedAStatus(const ::aidl::android::hardware::audio::core::IModule::OpenInputStreamArguments& in_args, ::aidl::android::hardware::audio::core::IModule::OpenInputStreamReturn* _aidl_return)> m_openInputStream = 0;
  std::function<::ndk::ScopedAStatus(const ::aidl::android::hardware::audio::core::IModule::OpenOutputStreamArguments& in_args, ::aidl::android::hardware::audio::core::IModule::OpenOutputStreamReturn* _aidl_return)> m_openOutputStream = 0;
  std::function<::ndk::ScopedAStatus(::aidl::android::hardware::audio::core::IModule::SupportedPlaybackRateFactors* _aidl_return)> m_getSupportedPlaybackRateFactors = 0;
  std::function<::ndk::ScopedAStatus(const ::aidl::android::hardware::audio::core::AudioPatch& in_requested, ::aidl::android::hardware::audio::core::AudioPatch* _aidl_return)> m_setAudioPatch = 0;
  std::function<::ndk::ScopedAStatus(const ::aidl::android::media::audio::common::AudioPortConfig& in_requested, ::aidl::android::media::audio::common::AudioPortConfig* out_suggested, bool* _aidl_return)> m_setAudioPortConfig = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_patchId)> m_resetAudioPatch = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portConfigId)> m_resetAudioPortConfig = 0;
  std::function<::ndk::ScopedAStatus(bool* _aidl_return)> m_getMasterMute = 0;
  std::function<::ndk::ScopedAStatus(bool in_mute)> m_setMasterMute = 0;
  std::function<::ndk::ScopedAStatus(float* _aidl_return)> m_getMasterVolume = 0;
  std::function<::ndk::ScopedAStatus(float in_volume)> m_setMasterVolume = 0;
  std::function<::ndk::ScopedAStatus(bool* _aidl_return)> m_getMicMute = 0;
  std::function<::ndk::ScopedAStatus(bool in_mute)> m_setMicMute = 0;
  std::function<::ndk::ScopedAStatus(std::vector<::aidl::android::media::audio::common::MicrophoneInfo>* _aidl_return)> m_getMicrophones = 0;
  std::function<::ndk::ScopedAStatus(::aidl::android::media::audio::common::AudioMode in_mode)> m_updateAudioMode = 0;
  std::function<::ndk::ScopedAStatus(::aidl::android::hardware::audio::core::IModule::ScreenRotation in_rotation)> m_updateScreenRotation = 0;
  std::function<::ndk::ScopedAStatus(bool in_isTurnedOn)> m_updateScreenState = 0;
  std::function<::ndk::ScopedAStatus(std::shared_ptr<::aidl::android::hardware::audio::core::sounddose::ISoundDose>* _aidl_return)> m_getSoundDose = 0;
  std::function<::ndk::ScopedAStatus(int32_t* _aidl_return)> m_generateHwAvSyncId = 0;
  std::function<::ndk::ScopedAStatus(const std::vector<std::string>& in_ids, std::vector<::aidl::android::hardware::audio::core::VendorParameter>* _aidl_return)> m_getVendorParameters = 0;
  std::function<::ndk::ScopedAStatus(const std::vector<::aidl::android::hardware::audio::core::VendorParameter>& in_parameters, bool in_async)> m_setVendorParameters = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portConfigId, const std::shared_ptr<::aidl::android::hardware::audio::effect::IEffect>& in_effect)> m_addDeviceEffect = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portConfigId, const std::shared_ptr<::aidl::android::hardware::audio::effect::IEffect>& in_effect)> m_removeDeviceEffect = 0;
  std::function<::ndk::ScopedAStatus(::aidl::android::media::audio::common::AudioMMapPolicyType in_mmapPolicyType, std::vector<::aidl::android::media::audio::common::AudioMMapPolicyInfo>* _aidl_return)> m_getMmapPolicyInfos = 0;
  std::function<::ndk::ScopedAStatus(bool* _aidl_return)> m_supportsVariableLatency = 0;
  std::function<::ndk::ScopedAStatus(int32_t* _aidl_return)> m_getAAudioMixerBurstCount = 0;
  std::function<::ndk::ScopedAStatus(int32_t* _aidl_return)> m_getAAudioHardwareBurstMinUsec = 0;
  std::function<::ndk::ScopedAStatus(int32_t in_portId)> m_prepareToDisconnectExternalDevice = 0;
  std::function<::ndk::ScopedAStatus(int32_t* _aidl_return)> m_getInterfaceVersion = 0;
  std::function<::ndk::ScopedAStatus(std::string* _aidl_return)> m_getInterfaceHash = 0;
#endif

  static std::shared_ptr<IModule> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<IModule>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<IModule>* instance);
  static bool setDefaultImpl(const std::shared_ptr<IModule>& impl);
  static const std::shared_ptr<IModule>& getDefaultImpl();
    /**
    * Sets debugging configuration for the HAL module. This method is only
    * called during xTS testing and is intended for validating the aspects of
    * the HAL module behavior that would otherwise require human intervention.
    *
    * The HAL module must throw an error if there is an attempt to change
    * the debug behavior for the aspect which is currently in use, or when
    * the value of any of the debug flags is invalid. See 'ModuleDebug' for
    * the full list of constraints.
    *
    * @param debug The debug options.
    * @throws EX_ILLEGAL_ARGUMENT If some of the configuration parameters are
    *                             invalid.
    * @throws EX_ILLEGAL_STATE If the flag(s) being changed affect functionality
    *                          which is currently in use.
    */
  virtual ::ndk::ScopedAStatus setModuleDebug(const ::aidl::android::hardware::audio::core::ModuleDebug& in_debug) = 0;
  /**
   * Retrieve the interface to control telephony audio.
   *
   * If the HAL module supports telephony functions, it must return an
   * instance of the ITelephony interface. The same instance must be returned
   * during the lifetime of the HAL module. If the HAL module does not support
   * telephony, a null must be returned, without throwing any errors.
   *
   * @return An instance of the ITelephony interface implementation.
   * @throws EX_ILLEGAL_STATE If there was an error creating an instance.
   */
  virtual ::ndk::ScopedAStatus getTelephony(std::shared_ptr<::aidl::android::hardware::audio::core::ITelephony>* _aidl_return) = 0;
  /**
   * Retrieve the interface to control Bluetooth SCO and HFP.
   *
   * If the HAL module supports either the SCO Link or Hands-Free Profile
   * functionality (or both) for Bluetooth, it must return an instance of the
   * IBluetooth interface. The same instance must be returned during the
   * lifetime of the HAL module. If the HAL module does not support BT SCO and
   * HFP, a null must be returned, without throwing any errors.
   *
   * @return An instance of the IBluetooth interface implementation.
   * @throws EX_ILLEGAL_STATE If there was an error creating an instance.
   */
  virtual ::ndk::ScopedAStatus getBluetooth(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetooth>* _aidl_return) = 0;
  /**
   * Retrieve the interface to control Bluetooth A2DP.
   *
   * If the HAL module supports A2DP Profile functionality for Bluetooth, it
   * must return an instance of the IBluetoothA2dp interface. The same
   * instance must be returned during the lifetime of the HAL module. If the
   * HAL module does not support BT A2DP, a null must be returned, without
   * throwing any errors.
   *
   * @return An instance of the IBluetoothA2dp interface implementation.
   * @throws EX_ILLEGAL_STATE If there was an error creating an instance.
   */
  virtual ::ndk::ScopedAStatus getBluetoothA2dp(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetoothA2dp>* _aidl_return) = 0;
  /**
   * Retrieve the interface to control Bluetooth LE.
   *
   * If the HAL module supports LE Profile functionality for Bluetooth, it
   * must return an instance of the IBluetoothLe interface. The same
   * instance must be returned during the lifetime of the HAL module. If the
   * HAL module does not support BT LE, a null must be returned, without
   * throwing any errors.
   *
   * @return An instance of the IBluetoothLe interface implementation.
   * @throws EX_ILLEGAL_STATE If there was an error creating an instance.
   */
  virtual ::ndk::ScopedAStatus getBluetoothLe(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetoothLe>* _aidl_return) = 0;
  /**
   * Set a device port of an external device into connected state.
   *
   * This method is used to inform the HAL module that an external device has
   * been connected to a device port selected using the 'id' field of the
   * input AudioPort parameter. This device port must have dynamic profiles
   * (an empty list of profiles). This port is further referenced to as "port
   * template" because it acts as a template for creating a new instance of a
   * "connected" device port which gets returned from this method.
   *
   * The input AudioPort parameter may contain any additional data obtained by
   * the system side from other subsystems. The nature of data depends on the
   * type of the connection. For example, for point-to-multipoint external
   * device connections, the input parameter may contain the address of the
   * connected external device. Another example is EDID information for HDMI
   * connections (ExtraAudioDescriptor), which can be provided by the HDMI-CEC
   * HAL module.
   *
   * It is the responsibility of the HAL module to query audio profiles
   * supported by the connected device and return them as part of the returned
   * AudioPort instance. In the case when the HAL is unable to query the
   * external device, an error must be thrown.
   *
   * Thus, the returned audio port instance is the result of combining the
   * following information:
   *  - a unique port ID generated by the HAL module;
   *  - static information from the port template;
   *  - list of audio profiles supported by the connected device;
   *  - additional data from the input AudioPort parameter.
   *
   * The HAL module must also update the list of audio routes to include the
   * ID of the instantiated connected device port. Normally, the connected
   * port allows the same routing as the port template.
   *
   * Also see notes on 'ModuleDebug.simulateDeviceConnections'.
   *
   * The following protocol is used by HAL module client for handling
   * connection of an external device:
   *  1. Obtain the list of device ports and their IDs via 'getAudioPorts'
   *     method. Select the appropriate port template using
   *     AudioDeviceDescription ('ext.device' field of AudioPort).
   *  2. Combine the ID of the port template with any additional data and call
   *     'connectExternalDevice'. The HAL module returns a new instance of
   *     AudioPort created using the rules explained above. Both
   *     'getAudioPort' and 'getAudioPorts' methods will be returning the same
   *     information for this port until disconnection.
   *  3. Configure the connected port with one of supported profiles using
   *     'setAudioPortConfig'.
   *  4. Query the list of AudioRoutes for the new AudioPort using
   *     'getAudioRoutesForAudioPort' or 'getAudioRoutes' methods.
   *
   * External devices are distinguished by the connection type and device
   * address. Calling this method multiple times to inform about connection of
   * the same external device without disconnecting it first is an error.
   *
   * The HAL module must perform validation of the input parameter and throw
   * an error if it is lacking required information, for example, when no
   * device address is specified for a point-to-multipoint external device
   * connection.
   *
   * Since not all modules have a DSP that could perform sample rate and
   * format conversions, behavior related to mix port configurations may vary.
   * For modules with a DSP, mix ports can be pre-configured and have a fixed
   * set of audio profiles supported by the DSP. For modules without a DSP,
   * audio profiles of mix ports may change after connecting an external
   * device. The typical case is that the mix port has an empty set of
   * profiles when no external devices are connected, and after external
   * device connection it receives the same set of profiles as the device
   * ports that they can be routed to. The client will re-query current port
   * configurations using 'getAudioPorts'. All mix ports that can be routed to
   * the connected device port must have a non-empty set of audio profiles
   * after successful connection of an external device.
   *
   * Handling of a disconnect is done in a reverse order:
   *  1. Notify the HAL module to prepare for device disconnection using
   *     'prepareToDisconnectExternalDevice' method.
   *  2. Reset port configuration using the 'resetAudioPortConfig' method.
   *  3. Release the connected device port by calling the 'disconnectExternalDevice'
   *     method. This also removes the audio routes associated with this
   *     device port.
   *
   * @return New instance of an audio port for the connected external device.
   * @param templateIdAndAdditionalData Specifies port template ID and any
   *                                    additional data.
   * @throws EX_ILLEGAL_ARGUMENT In the following cases:
   *                             - If the template port can not be found by the ID.
   *                             - If the template is not a device port, or
   *                               it does not have dynamic profiles.
   *                             - If the input parameter is lacking required
   *                               information.
   * @throws EX_ILLEGAL_STATE In the following cases:
   *                          - If the HAL module is unable to query audio profiles.
   *                          - If the external device has already been connected.
   */
  virtual ::ndk::ScopedAStatus connectExternalDevice(const ::aidl::android::media::audio::common::AudioPort& in_templateIdAndAdditionalData, ::aidl::android::media::audio::common::AudioPort* _aidl_return) = 0;
  /**
   * Set a device port of a an external device into disconnected state.
   *
   * This method is used to inform the HAL module that an external device has
   * been disconnected. The 'portId' must be of a connected device port
   * instance previously instantiated using the 'connectExternalDevice'
   * method.
   *
   * On AIDL HAL v1, the framework will call this method before closing streams
   * and resetting patches. This call can be used by the HAL module to prepare
   * itself to device disconnection. If the HAL module indicates an error after
   * the first call, the framework will call this method once again after closing
   * associated streams and patches.
   *
   * On AIDL HAL v2 and later, the framework will call 'prepareToDisconnectExternalDevice'
   * method to notify the HAL module to prepare itself for device disconnection. The
   * framework will only call this method after closing associated streams and patches.
   *
   * @throws EX_ILLEGAL_ARGUMENT In the following cases:
   *                             - If the port can not be found by the ID.
   *                             - If this is not a connected device port.
   * @throws EX_ILLEGAL_STATE If the port has active configurations.
   */
  virtual ::ndk::ScopedAStatus disconnectExternalDevice(int32_t in_portId) = 0;
  /**
   * Return all audio patches of this module.
   *
   * Returns a list of audio patches, that is, established connections between
   * audio port configurations.
   *
   * @return The list of audio patches.
   */
  virtual ::ndk::ScopedAStatus getAudioPatches(std::vector<::aidl::android::hardware::audio::core::AudioPatch>* _aidl_return) = 0;
  /**
   * Return the current state of the audio port.
   *
   * Using the port ID provided on input, returns the current state of the
   * audio port. The values of the AudioPort structure must be the same as
   * currently returned by the 'getAudioPorts' method. The 'getAudioPort'
   * method is provided to reduce overhead in the case when the client needs
   * to check the state of one port only.
   *
   * @return The current state of an audio port.
   * @param portId The ID of the audio port.
   * @throws EX_ILLEGAL_ARGUMENT If the port can not be found by the ID.
   */
  virtual ::ndk::ScopedAStatus getAudioPort(int32_t in_portId, ::aidl::android::media::audio::common::AudioPort* _aidl_return) = 0;
  /**
   * Return all active audio port configurations of this module.
   *
   * Returns a list of active configurations that are currently set for mix
   * ports and device ports. Each returned configuration must have an unique
   * ID within this module ('AudioPortConfig.id' field), which can coincide
   * with an ID of an audio port, if the port only supports a single active
   * configuration. Each returned configuration must also have a reference to
   * an existing port ('AudioPortConfig.portId' field). All optional
   * (nullable) fields of the configurations must be initialized by the HAL
   * module.
   *
   * @return The list of active audio port configurations.
   */
  virtual ::ndk::ScopedAStatus getAudioPortConfigs(std::vector<::aidl::android::media::audio::common::AudioPortConfig>* _aidl_return) = 0;
  /**
   * Return the current state of all audio ports provided by this module.
   *
   * Returns a list of all mix ports and device ports provided by this HAL
   * module, reflecting their current states. Each returned port must have a
   * unique ID within this module ('AudioPort.id' field). The list also
   * includes "connected" ports created using 'connectExternalDevice' method.
   *
   * @return The list of audio ports.
   */
  virtual ::ndk::ScopedAStatus getAudioPorts(std::vector<::aidl::android::media::audio::common::AudioPort>* _aidl_return) = 0;
  /**
   * Return all current audio routes of this module.
   *
   * Returns the current list of audio routes, that is, allowed connections
   * between audio ports. The list can change when new device audio ports
   * get created as a result of connecting or disconnecting of external
   * devices.
   *
   * @return The list of audio routes.
   */
  virtual ::ndk::ScopedAStatus getAudioRoutes(std::vector<::aidl::android::hardware::audio::core::AudioRoute>* _aidl_return) = 0;
  /**
   * Return audio routes related to the specified audio port.
   *
   * Returns the list of audio routes that include the specified port ID
   * as a source or as a sink. The returned list is a subset of the result
   * returned by the 'getAudioRoutes' method, filtered by the port ID.
   * An empty list can be returned, indicating that the audio port can not
   * be used for creating audio patches.
   *
   * @return The list of audio routes.
   * @param portId The ID of the audio port.
   * @throws EX_ILLEGAL_ARGUMENT If the port can not be found by the ID.
   */
  virtual ::ndk::ScopedAStatus getAudioRoutesForAudioPort(int32_t in_portId, std::vector<::aidl::android::hardware::audio::core::AudioRoute>* _aidl_return) = 0;
  /**
   * Open an input stream using an existing audio mix port configuration.
   *
   * The audio port configuration ID must be obtained by calling
   * 'setAudioPortConfig' method. Existence of an audio patch involving this
   * port configuration is not required for successful opening of a stream.
   *
   * The requested buffer size is expressed in frames, thus the actual size
   * in bytes depends on the audio port configuration. Also, the HAL module
   * may end up providing a larger buffer, thus the requested size is treated
   * as the minimum size that the client needs. The minimum buffer size
   * suggested by the HAL is in the 'AudioPatch.minimumStreamBufferSizeFrames'
   * field, returned as a result of calling the 'setAudioPatch' method.
   *
   * Only one stream is allowed per audio port configuration. HAL module can
   * also set a limit on how many output streams can be opened for a particular
   * mix port by using its 'AudioPortMixExt.maxOpenStreamCount' field.
   *
   * Note that although it's not prohibited to open a stream on a mix port
   * configuration which is not connected (using a patch) to any device port,
   * and set up a patch afterwards, this sequence of calls is not recommended,
   * because setting up of a patch might fail due to an insufficient stream
   * buffer size. Another consequence of having a stream on an unconnected mix
   * port is that capture positions can not be determined because there is no
   * "external observer," thus read operations done via StreamDescriptor will
   * be completing with an error, although data (zero filled) will still be
   * provided.
   *
   * After the stream has been opened, it remains in the STANDBY state, see
   * StreamDescriptor for more details.
   *
   * @return An opened input stream and the associated descriptor.
   * @param args The pack of arguments, see 'OpenInputStreamArguments' parcelable.
   * @throws EX_ILLEGAL_ARGUMENT In the following cases:
   *                             - If the port config can not be found by the ID.
   *                             - If the port config is not of an input mix port.
   *                             - If a buffer of the requested size can not be provided.
   * @throws EX_ILLEGAL_STATE In the following cases:
   *                          - If the port config already has a stream opened on it.
   *                          - If the limit on the open stream count for the port has
   *                            been reached.
   *                          - If the HAL module failed to initialize the stream.
   */
  virtual ::ndk::ScopedAStatus openInputStream(const ::aidl::android::hardware::audio::core::IModule::OpenInputStreamArguments& in_args, ::aidl::android::hardware::audio::core::IModule::OpenInputStreamReturn* _aidl_return) = 0;
  /**
   * Open an output stream using an existing audio mix port configuration.
   *
   * The audio port configuration ID must be obtained by calling
   * 'setAudioPortConfig' method. Existence of an audio patch involving this
   * port configuration is not required for successful opening of a stream.
   *
   * If the port configuration has the 'COMPRESS_OFFLOAD' output flag set,
   * the client must provide additional information about the encoded
   * audio stream in the 'offloadInfo' argument.
   *
   * If the port configuration has the 'NON_BLOCKING' output flag set,
   * the client must provide a callback for asynchronous notifications
   * in the 'callback' argument.
   *
   * The requested buffer size is expressed in frames, thus the actual size
   * in bytes depends on the audio port configuration. Also, the HAL module
   * may end up providing a larger buffer, thus the requested size is treated
   * as the minimum size that the client needs. The minimum buffer size
   * suggested by the HAL is in the 'AudioPatch.minimumStreamBufferSizeFrames'
   * field, returned as a result of calling the 'setAudioPatch' method.
   *
   * Only one stream is allowed per audio port configuration. HAL module can
   * also set a limit on how many output streams can be opened for a particular
   * mix port by using its 'AudioPortMixExt.maxOpenStreamCount' field.
   * Only one stream can be opened on the audio port with 'PRIMARY' output
   * flag. This rule can not be overridden with 'maxOpenStreamCount' field.
   *
   * Note that although it's not prohibited to open a stream on a mix port
   * configuration which is not connected (using a patch) to any device port,
   * and set up a patch afterwards, this sequence of calls is not recommended,
   * because setting up of a patch might fail due to an insufficient stream
   * buffer size. Another consequence of having a stream on an unconnected mix
   * port is that presentation positions can not be determined because there
   * is no "external observer," thus write operations done via
   * StreamDescriptor will be completing with an error, although the data
   * will still be accepted and immediately discarded.
   *
   * After the stream has been opened, it remains in the STANDBY state, see
   * StreamDescriptor for more details.
   *
   * @return An opened output stream and the associated descriptor.
   * @param args The pack of arguments, see 'OpenOutputStreamArguments' parcelable.
   * @throws EX_ILLEGAL_ARGUMENT In the following cases:
   *                             - If the port config can not be found by the ID.
   *                             - If the port config is not of an output mix port.
   *                             - If the offload info is not provided for an offload
   *                               port configuration.
   *                             - If a buffer of the requested size can not be provided.
   *                             - If the callback is not provided for a non-blocking
   *                               port configuration.
   * @throws EX_ILLEGAL_STATE In the following cases:
   *                          - If the port config already has a stream opened on it.
   *                          - If the limit on the open stream count for the port has
   *                            been reached.
   *                          - If another opened stream already exists for the 'PRIMARY'
   *                            output port.
   *                          - If the HAL module failed to initialize the stream.
   */
  virtual ::ndk::ScopedAStatus openOutputStream(const ::aidl::android::hardware::audio::core::IModule::OpenOutputStreamArguments& in_args, ::aidl::android::hardware::audio::core::IModule::OpenOutputStreamReturn* _aidl_return) = 0;
  /**
   * Get supported ranges of playback rate factors.
   *
   * See 'PlaybackRate' for the information on the playback rate parameters.
   * This method provides supported ranges (inclusive) for the speed factor
   * and the pitch factor.
   *
   * If the HAL module supports setting the playback rate, it is recommended
   * to support speed and pitch factor values at least in the range from 0.5f
   * to 2.0f.
   *
   * @throws EX_UNSUPPORTED_OPERATION If setting of playback rate parameters
   *                                  is not supported by the module.
   */
  virtual ::ndk::ScopedAStatus getSupportedPlaybackRateFactors(::aidl::android::hardware::audio::core::IModule::SupportedPlaybackRateFactors* _aidl_return) = 0;
  /**
     * Set an audio patch.
     *
     * This method creates new or updates an existing audio patch. If the
     * requested audio patch does not have a specified id, then a new patch is
     * created and an ID is allocated for it by the HAL module. Otherwise an
     * attempt to update an existing patch is made.
     *
     * The operation of updating an existing audio patch must not change
     * playback state of audio streams opened on the audio port configurations
     * of the patch. That is, the HAL module must still be able to consume or
     * to provide data from / to streams continuously during the patch
     * switching. Natural intermittent audible loss of some audio frames due to
     * switching between device ports which does not affect stream playback is
     * allowed. If the HAL module is unable to avoid playback or recording
     * state change when updating a certain patch, it must return an error. In
     * that case, the client must take care of changing port configurations,
     * patches, and recreating streams in a way which provides an acceptable
     * user experience.
     *
     * Audio port configurations specified in the patch must be obtained by
     * calling 'setAudioPortConfig' method. There must be an audio route which
     * allows connection between the audio ports whose configurations are used.
     *
     * When updating an existing audio patch, nominal latency values may change
     * and must be provided by the HAL module in the returned 'AudioPatch'
     * structure.
     *
     * @return Resulting audio patch.
     * @param requested Requested audio patch.
     * @throws EX_ILLEGAL_ARGUMENT In the following cases:
     *                             - If the patch is invalid (see AudioPatch).
     *                             - If a port config can not be found from the specified IDs.
     *                             - If there are no routes satisfying the patch.
     *                             - If an existing patch can not be found by the ID.
     * @throws EX_ILLEGAL_STATE In the following cases:
     *                          - If application of the patch can only use a route with an
     *                            exclusive use the sink port, and it is already patched.
     *                          - If updating an existing patch will cause interruption
     *                            of audio, or requires re-opening of streams due to
     *                            change of minimum audio I/O buffer size.
     * @throws EX_UNSUPPORTED_OPERATION If the patch can not be established because
     *                                  the HAL module does not support this otherwise valid
     *                                  patch configuration. For example, if it's a patch
     *                                  between multiple sources and sinks, and the HAL module
     *                                  does not support this.
     */
  virtual ::ndk::ScopedAStatus setAudioPatch(const ::aidl::android::hardware::audio::core::AudioPatch& in_requested, ::aidl::android::hardware::audio::core::AudioPatch* _aidl_return) = 0;
  /**
   * Set the active configuration of an audio port.
   *
   * This method is used to create or update an active configuration for a mix
   * port or a device port. The port is specified using the
   * 'AudioPortConfig.portId' field. If the requested audio port
   * configuration does not have a specified id in the 'AudioPortConfig.id'
   * field, then a new configuration is created and an ID is allocated for it
   * by the HAL module. Otherwise an attempt to update an existing port
   * configuration is made. The HAL module returns the resulting audio port
   * configuration. Depending on the port and on the capabilities of the HAL
   * module, it can either update an existing port configuration (same port
   * configuration ID remains), or create a new one. The resulting port
   * configuration ID is returned in the 'id' field of the 'suggested'
   * argument.
   *
   * If the specified port configuration can not be set, this method must
   * return 'false' and provide its own suggestion in the output
   * parameter. The framework can then set the suggested configuration on a
   * subsequent retry call to this method.
   *
   * Device ports with dynamic audio profiles (an empty list of profiles)
   * can not be used with this method. The list of profiles must be filled in
   * as a result of calling 'connectExternalDevice' method.
   *
   * @return Whether the requested configuration has been applied.
   * @param requested Requested audio port configuration.
   * @param suggested Same as requested configuration, if it was applied.
   *                  Suggested audio port configuration if the requested
   *                  configuration can't be applied.
   * @throws EX_ILLEGAL_ARGUMENT In the following cases:
   *                             - If neither port config ID, nor port ID are specified.
   *                             - If an existing port config can not be found by the ID.
   *                             - If the port can not be found by the port ID.
   *                             - If it is not possible to generate a suggested port
   *                               configuration, for example, if the port only has dynamic
   *                               profiles.
   */
  virtual ::ndk::ScopedAStatus setAudioPortConfig(const ::aidl::android::media::audio::common::AudioPortConfig& in_requested, ::aidl::android::media::audio::common::AudioPortConfig* out_suggested, bool* _aidl_return) = 0;
    /**
     * Reset the audio patch.
     *
     * Resets previously created audio patch using its ID ('AudioPatch.id').  It
     * is allowed to reset a patch which uses audio port configurations having
     * associated streams. In this case the mix port becomes disconnected from
     * the hardware, but the stream does not close.
     *
     * @param patchId The ID of the audio patch.
     * @throws EX_ILLEGAL_ARGUMENT If an existing patch can not be found by the ID.
     */
  virtual ::ndk::ScopedAStatus resetAudioPatch(int32_t in_patchId) = 0;
    /**
     * Reset the audio port configuration.
     *
     * Resets the specified audio port configuration, discarding all changes
     * previously done by the framework. That means, if a call to this method is
     * a success, the effect of all previous calls to 'setAudioPortConfig' which
     * used or initially have generated the provided 'portConfigId', since the
     * module start, or since the last call to this method, has been canceled.
     *
     * Audio port configurations of mix ports with streams opened on them can
     * not be reset. Also can not be reset port configurations currently used by
     * any patches.
     *
     * @param portConfigId The ID of the audio port config.
     * @throws EX_ILLEGAL_ARGUMENT If the port config can not be found by the ID.
     * @throws EX_ILLEGAL_STATE In the following cases:
     *                          - If the port config has a stream opened on it;
     *                          - If the port config is used by a patch;
     *                          - If the port config has an audio effect on it.
     */
  virtual ::ndk::ScopedAStatus resetAudioPortConfig(int32_t in_portConfigId) = 0;
    /**
     * Get the current state of audio output muting.
     *
     * If the HAL module supports muting its combined output completely,
     * this method returns whether muting is currently enabled.
     *
     * Note that muting operates independently from the master volume.
     *
     * @return Whether the output from the module is muted.
     * @throws EX_UNSUPPORTED_OPERATION If muting of combined output
     *                                  is not supported by the module.
     */
  virtual ::ndk::ScopedAStatus getMasterMute(bool* _aidl_return) = 0;
  /**
   * Set the current value of the audio output muting.
   *
   * If the HAL module supports muting its combined output completely, this
   * method controls the mute. Note that for modules supporting telephony,
   * muting does not affect the voice call.
   *
   * For HAL modules not supporting this operation, it's functionality is
   * typically emulated by the client, in the digital domain.
   *
   * @param mute Whether the output from the module is muted.
   * @throws EX_UNSUPPORTED_OPERATION If muting of combined output
   *                                  is not supported by the module.
   * @throws EX_ILLEGAL_STATE If any error happens while muting of combined output.
   */
  virtual ::ndk::ScopedAStatus setMasterMute(bool in_mute) = 0;
    /**
     * Get the current value of the audio output attenuation.
     *
     * If the HAL module supports attenuating the level its combined output,
     * this method returns the current attenuation value.
     *
     * @return Volume 1.0f means no attenuation (unity), 0.0f is mute.
     * @throws EX_UNSUPPORTED_OPERATION If attenuation of combined output
     *                                  is not supported by the module.
     */
  virtual ::ndk::ScopedAStatus getMasterVolume(float* _aidl_return) = 0;
  /**
   * Set the current value of the audio output attenuation.
   *
   * If the HAL module supports attenuating the level its combined output,
   * this method sets the attenuation value. Note that for modules supporting
   * telephony, the attenuation of the voice call volume is set separately
   * via ITelephony interface.
   *
   * For HAL modules not supporting this operation, it's functionality is
   * typically emulated by the client, in the digital domain.
   *
   * @param volume The new value, 1.0f means no attenuation (unity), 0.0f is mute.
   * @throws EX_ILLEGAL_ARGUMENT If the value of the volume is outside of
   *                             accepted range.
   * @throws EX_UNSUPPORTED_OPERATION If attenuation of combined output
   *                                  is not supported by the module.
   * @throws EX_ILLEGAL_STATE If any error happens while updating attenuation of
                              combined output.
   */
  virtual ::ndk::ScopedAStatus setMasterVolume(float in_volume) = 0;
  /**
   * Get the current state of audio input muting.
   *
   * If the HAL module supports muting its external input, this method returns
   * whether muting is currently enabled.
   *
   * @return Whether the input is muted.
   * @throws EX_UNSUPPORTED_OPERATION If muting of input is not supported by
   *                                  the module.
   */
  virtual ::ndk::ScopedAStatus getMicMute(bool* _aidl_return) = 0;
    /**
     * Set the current value of the audio input muting.
     *
     * If the HAL module supports muting its external input, this method
     * controls the mute.
     *
     * For HAL modules not supporting this operation, it's functionality is
     * emulated by the client.
     *
     * @param mute Whether input is muted.
     * @throws EX_UNSUPPORTED_OPERATION If muting of input is not supported by
     *                                  the module.
     */
  virtual ::ndk::ScopedAStatus setMicMute(bool in_mute) = 0;
    /**
     * Provide information describing built-in microphones of the HAL module.
     *
     * If there are no built-in microphones in the HAL module, it must return an
     * empty vector. If there are microphones, but the HAL module does not
     * possess the required information about them, EX_UNSUPPORTED_OPERATION
     * must be thrown.
     *
     * If this method is supported by the HAL module, it must also support
     * 'IStreamIn.getActiveMicrophones' method.
     *
     * @return The vector with information about each microphone.
     * @throws EX_UNSUPPORTED_OPERATION If the information is unavailable.
     */
  virtual ::ndk::ScopedAStatus getMicrophones(std::vector<::aidl::android::media::audio::common::MicrophoneInfo>* _aidl_return) = 0;
  /**
   * Notify the HAL module on the change of the current audio mode.
   *
   * The current audio mode is always controlled by the client. This is an
   * informative notification sent to all modules, no reply is needed. The HAL
   * module should silently ignore this notification if it does not need to
   * be aware of the current audio mode.
   *
   * The client sends this notification to all HAL modules after successfully
   * switching the telephony module by calling the 'ITelephony.switchAudioMode'
   * method.
   *
   * @param mode The current mode.
   * @throws EX_ILLEGAL_ARGUMENT If the mode is out of range of valid values.
   */
  virtual ::ndk::ScopedAStatus updateAudioMode(::aidl::android::media::audio::common::AudioMode in_mode) = 0;
    /**
     * Notify the HAL module on the change of the screen rotation.
     *
     * Informs the HAL of the current orientation of the device screen. This
     * information can be used to optimize the output of built-in speakers.
     * This is an informative notification sent to all modules, no reply is
     * needed.
     *
     * @param rotation The current rotation.
     */
  virtual ::ndk::ScopedAStatus updateScreenRotation(::aidl::android::hardware::audio::core::IModule::ScreenRotation in_rotation) = 0;
  /**
   * Notify the HAL module on the change of the screen state.
   *
   * Informs the HAL whether the screen of the device is turned on. This is an
   * informative notification sent to all modules, no reply is needed.
   *
   * @param isTurnedOn True if the screen is turned on.
   */
  virtual ::ndk::ScopedAStatus updateScreenState(bool in_isTurnedOn) = 0;
  /**
   * Retrieve the sound dose interface.
   *
   * If a device must comply to IEC62368-1 3rd edition audio safety requirements and is
   * implementing audio offload decoding or other direct playback paths where volume control
   * happens below the audio HAL, it must return an instance of the ISoundDose interface.
   * The same instance must be returned during the lifetime of the HAL module.
   * If the HAL module does not support sound dose, null must be returned, without throwing
   * any errors.
   *
   * @return An instance of the ISoundDose interface implementation.
   * @throws EX_ILLEGAL_STATE If there was an error creating an instance.
   */
  virtual ::ndk::ScopedAStatus getSoundDose(std::shared_ptr<::aidl::android::hardware::audio::core::sounddose::ISoundDose>* _aidl_return) = 0;
  /**
   * Generate a HW AV Sync identifier for a new audio session.
   *
   * Creates a new unique identifier which can be further used by the client
   * for tagging input / output streams that belong to the same audio
   * session and thus must use the same HW AV Sync timestamps sequence.
   *
   * HW AV Sync timestamps are used for "tunneled" I/O modes and thus
   * are not mandatory.
   *
   * @throws EX_ILLEGAL_STATE If the identifier can not be provided at the moment.
   * @throws EX_UNSUPPORTED_OPERATION If synchronization with HW AV Sync markers
   *                                  is not supported.
   */
  virtual ::ndk::ScopedAStatus generateHwAvSyncId(int32_t* _aidl_return) = 0;
  /**
   * Get current values of vendor parameters.
   *
   * Return current values for the parameters corresponding to the provided ids.
   *
   * @param ids Ids of the parameters to retrieve values of.
   * @return Current values of parameters, one per each id.
   * @throws EX_ILLEGAL_ARGUMENT If the module does not recognize provided ids.
   * @throws EX_ILLEGAL_STATE If parameter values can not be retrieved at the moment.
   * @throws EX_UNSUPPORTED_OPERATION If the module does not support vendor parameters.
   */
  virtual ::ndk::ScopedAStatus getVendorParameters(const std::vector<std::string>& in_ids, std::vector<::aidl::android::hardware::audio::core::VendorParameter>* _aidl_return) = 0;
  /**
   * Set vendor parameters.
   *
   * Update values for provided vendor parameters. If the 'async' parameter
   * is set to 'true', the implementation must return the control back without
   * waiting for the application of parameters to complete.
   *
   * @param parameters Ids and values of parameters to set.
   * @param async Whether to return from the method as early as possible.
   * @throws EX_ILLEGAL_ARGUMENT If the module does not recognize provided parameters.
   * @throws EX_ILLEGAL_STATE If parameters can not be set at the moment.
   * @throws EX_UNSUPPORTED_OPERATION If the module does not support vendor parameters.
   */
  virtual ::ndk::ScopedAStatus setVendorParameters(const std::vector<::aidl::android::hardware::audio::core::VendorParameter>& in_parameters, bool in_async) = 0;
  /**
   * Apply an audio effect to a device port.
   *
   * The audio effect applies to all audio input or output on the specific
   * configuration of the device audio port. The effect is inserted according
   * to its insertion preference specified by the 'flags.insert' field of the
   * EffectDescriptor.
   *
   * @param portConfigId The ID of the audio port config.
   * @param effect The effect instance.
   * @throws EX_ILLEGAL_ARGUMENT If the device port config can not be found by the ID,
   *                             or the effect reference is invalid.
   * @throws EX_UNSUPPORTED_OPERATION If the module does not support device port effects.
   */
  virtual ::ndk::ScopedAStatus addDeviceEffect(int32_t in_portConfigId, const std::shared_ptr<::aidl::android::hardware::audio::effect::IEffect>& in_effect) = 0;
  /**
   * Stop applying an audio effect to a device port.
   *
   * Undo the action of the 'addDeviceEffect' method.
   *
   * @param portConfigId The ID of the audio port config.
   * @param effect The effect instance.
   * @throws EX_ILLEGAL_ARGUMENT If the device port config can not be found by the ID,
   *                             or the effect reference is invalid, or the effect is
   *                             not currently applied to the port config.
   * @throws EX_UNSUPPORTED_OPERATION If the module does not support device port effects.
   */
  virtual ::ndk::ScopedAStatus removeDeviceEffect(int32_t in_portConfigId, const std::shared_ptr<::aidl::android::hardware::audio::effect::IEffect>& in_effect) = 0;
  /**
   * Provide information describing how aaudio MMAP is supported per queried aaudio
   * MMAP policy type.
   *
   * If there are no devices that support aaudio MMAP for the queried aaudio MMAP policy
   * type in the HAL module, it must return an empty vector. Otherwise, return a vector
   * describing how the devices support aaudio MMAP.
   *
   * @param mmapPolicyType the aaudio mmap policy type to query.
   * @return The vector with mmap policy information.
   */
  virtual ::ndk::ScopedAStatus getMmapPolicyInfos(::aidl::android::media::audio::common::AudioMMapPolicyType in_mmapPolicyType, std::vector<::aidl::android::media::audio::common::AudioMMapPolicyInfo>* _aidl_return) = 0;
  /**
   * Indicates if this module supports variable latency control, for instance,
   * over Bluetooth A2DP or LE Audio links.
   *
   * If supported, all instances of IStreamOut interface returned by this module must
   * implement getRecommendedLatencyModes() and setLatencyMode() APIs.
   *
   * @return Whether the module supports variable latency control.
   */
  virtual ::ndk::ScopedAStatus supportsVariableLatency(bool* _aidl_return) = 0;
  /**
   * Get the number of bursts per aaudio mixer cycle.
   *
   * @return The number of burst per aaudio mixer cycle.
   * @throw EX_UNSUPPORTED_OPERATION If the module does not support aaudio MMAP.
   */
  virtual ::ndk::ScopedAStatus getAAudioMixerBurstCount(int32_t* _aidl_return) = 0;
  /**
   * Get the minimum duration in microseconds for a MMAP hardware burst.
   *
   * @return The minimum number of microseconds for a MMAP hardware burst.
   * @throw EX_UNSUPPORTED_OPERATION If the module does not support aaudio MMAP.
   */
  virtual ::ndk::ScopedAStatus getAAudioHardwareBurstMinUsec(int32_t* _aidl_return) = 0;
    /**
     * Notify the HAL module to prepare for disconnecting an external device.
     *
     * This method is used to inform the HAL module that 'disconnectExternalDevice' will be
     * called soon. The HAL module can rely on this method to abort active data operations
     * early. The 'portId' must be of a connected device Port instance previously instantiated
     * using 'connectExternalDevice' method. 'disconnectExternalDevice' method will be called
     * soon after this method with the same 'portId'.
     *
     * Note: This method is called after the external device is disconnected. The system does
     * not try to predict the disconnection event.
     *
     * @param portId The ID of the audio port corresponding to the disconnected device
     * @throws EX_ILLEGAL_ARGUMENT In the following cases:
     *                             - If the port can not be found by the ID.
     *                             - If this is not a connected device port.
     */
  virtual ::ndk::ScopedAStatus prepareToDisconnectExternalDevice(int32_t in_portId) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<IModule> default_impl;
};
class ANDROIDHARDWAREAUDIOCOREV3NDK_API IModuleDefault : public IModule {
public:
  ::ndk::ScopedAStatus setModuleDebug(const ::aidl::android::hardware::audio::core::ModuleDebug& in_debug) override;
  ::ndk::ScopedAStatus getTelephony(std::shared_ptr<::aidl::android::hardware::audio::core::ITelephony>* _aidl_return) override;
  ::ndk::ScopedAStatus getBluetooth(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetooth>* _aidl_return) override;
  ::ndk::ScopedAStatus getBluetoothA2dp(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetoothA2dp>* _aidl_return) override;
  ::ndk::ScopedAStatus getBluetoothLe(std::shared_ptr<::aidl::android::hardware::audio::core::IBluetoothLe>* _aidl_return) override;
  ::ndk::ScopedAStatus connectExternalDevice(const ::aidl::android::media::audio::common::AudioPort& in_templateIdAndAdditionalData, ::aidl::android::media::audio::common::AudioPort* _aidl_return) override;
  ::ndk::ScopedAStatus disconnectExternalDevice(int32_t in_portId) override;
  ::ndk::ScopedAStatus getAudioPatches(std::vector<::aidl::android::hardware::audio::core::AudioPatch>* _aidl_return) override;
  ::ndk::ScopedAStatus getAudioPort(int32_t in_portId, ::aidl::android::media::audio::common::AudioPort* _aidl_return) override;
  ::ndk::ScopedAStatus getAudioPortConfigs(std::vector<::aidl::android::media::audio::common::AudioPortConfig>* _aidl_return) override;
  ::ndk::ScopedAStatus getAudioPorts(std::vector<::aidl::android::media::audio::common::AudioPort>* _aidl_return) override;
  ::ndk::ScopedAStatus getAudioRoutes(std::vector<::aidl::android::hardware::audio::core::AudioRoute>* _aidl_return) override;
  ::ndk::ScopedAStatus getAudioRoutesForAudioPort(int32_t in_portId, std::vector<::aidl::android::hardware::audio::core::AudioRoute>* _aidl_return) override;
  ::ndk::ScopedAStatus openInputStream(const ::aidl::android::hardware::audio::core::IModule::OpenInputStreamArguments& in_args, ::aidl::android::hardware::audio::core::IModule::OpenInputStreamReturn* _aidl_return) override;
  ::ndk::ScopedAStatus openOutputStream(const ::aidl::android::hardware::audio::core::IModule::OpenOutputStreamArguments& in_args, ::aidl::android::hardware::audio::core::IModule::OpenOutputStreamReturn* _aidl_return) override;
  ::ndk::ScopedAStatus getSupportedPlaybackRateFactors(::aidl::android::hardware::audio::core::IModule::SupportedPlaybackRateFactors* _aidl_return) override;
  ::ndk::ScopedAStatus setAudioPatch(const ::aidl::android::hardware::audio::core::AudioPatch& in_requested, ::aidl::android::hardware::audio::core::AudioPatch* _aidl_return) override;
  ::ndk::ScopedAStatus setAudioPortConfig(const ::aidl::android::media::audio::common::AudioPortConfig& in_requested, ::aidl::android::media::audio::common::AudioPortConfig* out_suggested, bool* _aidl_return) override;
  ::ndk::ScopedAStatus resetAudioPatch(int32_t in_patchId) override;
  ::ndk::ScopedAStatus resetAudioPortConfig(int32_t in_portConfigId) override;
  ::ndk::ScopedAStatus getMasterMute(bool* _aidl_return) override;
  ::ndk::ScopedAStatus setMasterMute(bool in_mute) override;
  ::ndk::ScopedAStatus getMasterVolume(float* _aidl_return) override;
  ::ndk::ScopedAStatus setMasterVolume(float in_volume) override;
  ::ndk::ScopedAStatus getMicMute(bool* _aidl_return) override;
  ::ndk::ScopedAStatus setMicMute(bool in_mute) override;
  ::ndk::ScopedAStatus getMicrophones(std::vector<::aidl::android::media::audio::common::MicrophoneInfo>* _aidl_return) override;
  ::ndk::ScopedAStatus updateAudioMode(::aidl::android::media::audio::common::AudioMode in_mode) override;
  ::ndk::ScopedAStatus updateScreenRotation(::aidl::android::hardware::audio::core::IModule::ScreenRotation in_rotation) override;
  ::ndk::ScopedAStatus updateScreenState(bool in_isTurnedOn) override;
  ::ndk::ScopedAStatus getSoundDose(std::shared_ptr<::aidl::android::hardware::audio::core::sounddose::ISoundDose>* _aidl_return) override;
  ::ndk::ScopedAStatus generateHwAvSyncId(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getVendorParameters(const std::vector<std::string>& in_ids, std::vector<::aidl::android::hardware::audio::core::VendorParameter>* _aidl_return) override;
  ::ndk::ScopedAStatus setVendorParameters(const std::vector<::aidl::android::hardware::audio::core::VendorParameter>& in_parameters, bool in_async) override;
  ::ndk::ScopedAStatus addDeviceEffect(int32_t in_portConfigId, const std::shared_ptr<::aidl::android::hardware::audio::effect::IEffect>& in_effect) override;
  ::ndk::ScopedAStatus removeDeviceEffect(int32_t in_portConfigId, const std::shared_ptr<::aidl::android::hardware::audio::effect::IEffect>& in_effect) override;
  ::ndk::ScopedAStatus getMmapPolicyInfos(::aidl::android::media::audio::common::AudioMMapPolicyType in_mmapPolicyType, std::vector<::aidl::android::media::audio::common::AudioMMapPolicyInfo>* _aidl_return) override;
  ::ndk::ScopedAStatus supportsVariableLatency(bool* _aidl_return) override;
  ::ndk::ScopedAStatus getAAudioMixerBurstCount(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getAAudioHardwareBurstMinUsec(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus prepareToDisconnectExternalDevice(int32_t in_portId) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace core
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace core {
[[nodiscard]] static inline std::string toString(IModule::ScreenRotation val) {
  switch(val) {
  case IModule::ScreenRotation::DEG_0:
    return "DEG_0";
  case IModule::ScreenRotation::DEG_90:
    return "DEG_90";
  case IModule::ScreenRotation::DEG_180:
    return "DEG_180";
  case IModule::ScreenRotation::DEG_270:
    return "DEG_270";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace core
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::audio::core::IModule::ScreenRotation, 4> enum_values<aidl::android::hardware::audio::core::IModule::ScreenRotation> = {
  aidl::android::hardware::audio::core::IModule::ScreenRotation::DEG_0,
  aidl::android::hardware::audio::core::IModule::ScreenRotation::DEG_90,
  aidl::android::hardware::audio::core::IModule::ScreenRotation::DEG_180,
  aidl::android::hardware::audio::core::IModule::ScreenRotation::DEG_270,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
