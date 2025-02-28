/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/AptxAdaptiveCapabilities.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/AptxAdaptiveCapabilities.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AptxAdaptiveChannelMode.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AptxAdaptiveInputMode.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AptxAdaptiveTimeToPlay.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AptxMode.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/AptxSinkBuffering.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::vendor::mediatek::hardware::bluetooth::audio {
class AptxAdaptiveTimeToPlay;
class AptxSinkBuffering;
}  // namespace aidl::vendor::mediatek::hardware::bluetooth::audio
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class AptxAdaptiveCapabilities {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  std::vector<int32_t> sampleRateHz;
  std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxAdaptiveChannelMode> channelMode;
  std::vector<uint8_t> bitsPerSample;
  std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxMode> aptxMode;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxSinkBuffering sinkBufferingMs;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxAdaptiveTimeToPlay ttp;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxAdaptiveInputMode inputMode = ::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxAdaptiveInputMode(0);
  int32_t inputFadeDurationMs = 0;
  std::vector<uint8_t> aptxAdaptiveConfigStream;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AptxAdaptiveCapabilities& _rhs) const {
    return std::tie(sampleRateHz, channelMode, bitsPerSample, aptxMode, sinkBufferingMs, ttp, inputMode, inputFadeDurationMs, aptxAdaptiveConfigStream) == std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.bitsPerSample, _rhs.aptxMode, _rhs.sinkBufferingMs, _rhs.ttp, _rhs.inputMode, _rhs.inputFadeDurationMs, _rhs.aptxAdaptiveConfigStream);
  }
  inline bool operator<(const AptxAdaptiveCapabilities& _rhs) const {
    return std::tie(sampleRateHz, channelMode, bitsPerSample, aptxMode, sinkBufferingMs, ttp, inputMode, inputFadeDurationMs, aptxAdaptiveConfigStream) < std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.bitsPerSample, _rhs.aptxMode, _rhs.sinkBufferingMs, _rhs.ttp, _rhs.inputMode, _rhs.inputFadeDurationMs, _rhs.aptxAdaptiveConfigStream);
  }
  inline bool operator!=(const AptxAdaptiveCapabilities& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AptxAdaptiveCapabilities& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AptxAdaptiveCapabilities& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AptxAdaptiveCapabilities& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AptxAdaptiveCapabilities{";
    _aidl_os << "sampleRateHz: " << ::android::internal::ToString(sampleRateHz);
    _aidl_os << ", channelMode: " << ::android::internal::ToString(channelMode);
    _aidl_os << ", bitsPerSample: " << ::android::internal::ToString(bitsPerSample);
    _aidl_os << ", aptxMode: " << ::android::internal::ToString(aptxMode);
    _aidl_os << ", sinkBufferingMs: " << ::android::internal::ToString(sinkBufferingMs);
    _aidl_os << ", ttp: " << ::android::internal::ToString(ttp);
    _aidl_os << ", inputMode: " << ::android::internal::ToString(inputMode);
    _aidl_os << ", inputFadeDurationMs: " << ::android::internal::ToString(inputFadeDurationMs);
    _aidl_os << ", aptxAdaptiveConfigStream: " << ::android::internal::ToString(aptxAdaptiveConfigStream);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
