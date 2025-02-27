/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5Configuration.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5Configuration.aidl
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
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/ChannelMode.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5DataInterval.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5FrameDuration.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5QualityIndex.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5Specific.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/Lhdcv5Version.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
class Lhdcv5Configuration {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t sampleRateHz = 0;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::ChannelMode channelMode = ::aidl::vendor::mediatek::hardware::bluetooth::audio::ChannelMode(0);
  int8_t bitsPerSample = 0;
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Version codecVersion = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Version(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex qualityIndex = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex maxQualityIndex = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex minQualityIndex = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5QualityIndex(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5FrameDuration frameDuration = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5FrameDuration(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5DataInterval dataInterval = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5DataInterval(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific codecSpecific_1 = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific(0);
  ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific codecSpecific_2 = ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Specific(0);
  std::vector<uint8_t> metaData;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Lhdcv5Configuration& _rhs) const {
    return std::tie(sampleRateHz, channelMode, bitsPerSample, codecVersion, qualityIndex, maxQualityIndex, minQualityIndex, frameDuration, dataInterval, codecSpecific_1, codecSpecific_2, metaData) == std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.bitsPerSample, _rhs.codecVersion, _rhs.qualityIndex, _rhs.maxQualityIndex, _rhs.minQualityIndex, _rhs.frameDuration, _rhs.dataInterval, _rhs.codecSpecific_1, _rhs.codecSpecific_2, _rhs.metaData);
  }
  inline bool operator<(const Lhdcv5Configuration& _rhs) const {
    return std::tie(sampleRateHz, channelMode, bitsPerSample, codecVersion, qualityIndex, maxQualityIndex, minQualityIndex, frameDuration, dataInterval, codecSpecific_1, codecSpecific_2, metaData) < std::tie(_rhs.sampleRateHz, _rhs.channelMode, _rhs.bitsPerSample, _rhs.codecVersion, _rhs.qualityIndex, _rhs.maxQualityIndex, _rhs.minQualityIndex, _rhs.frameDuration, _rhs.dataInterval, _rhs.codecSpecific_1, _rhs.codecSpecific_2, _rhs.metaData);
  }
  inline bool operator!=(const Lhdcv5Configuration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Lhdcv5Configuration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Lhdcv5Configuration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Lhdcv5Configuration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Lhdcv5Configuration{";
    _aidl_os << "sampleRateHz: " << ::android::internal::ToString(sampleRateHz);
    _aidl_os << ", channelMode: " << ::android::internal::ToString(channelMode);
    _aidl_os << ", bitsPerSample: " << ::android::internal::ToString(bitsPerSample);
    _aidl_os << ", codecVersion: " << ::android::internal::ToString(codecVersion);
    _aidl_os << ", qualityIndex: " << ::android::internal::ToString(qualityIndex);
    _aidl_os << ", maxQualityIndex: " << ::android::internal::ToString(maxQualityIndex);
    _aidl_os << ", minQualityIndex: " << ::android::internal::ToString(minQualityIndex);
    _aidl_os << ", frameDuration: " << ::android::internal::ToString(frameDuration);
    _aidl_os << ", dataInterval: " << ::android::internal::ToString(dataInterval);
    _aidl_os << ", codecSpecific_1: " << ::android::internal::ToString(codecSpecific_1);
    _aidl_os << ", codecSpecific_2: " << ::android::internal::ToString(codecSpecific_2);
    _aidl_os << ", metaData: " << ::android::internal::ToString(metaData);
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
