/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 4 --hash ac25616dda1c45dc2915d3f5ac82687a1a6f6e46 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging/android/hardware/bluetooth/audio/LeAudioBisConfiguration.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/audio/aidl/android.hardware.bluetooth.audio-V4-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4 hardware/interfaces/bluetooth/audio/aidl/aidl_api/android.hardware.bluetooth.audio/4/android/hardware/bluetooth/audio/LeAudioBisConfiguration.aidl
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
#include <aidl/android/hardware/bluetooth/audio/CodecId.h>
#include <aidl/android/hardware/bluetooth/audio/CodecSpecificConfigurationLtv.h>
#include <aidl/android/hardware/bluetooth/audio/MetadataLtv.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace audio {
class LeAudioBisConfiguration {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  ::aidl::android::hardware::bluetooth::audio::CodecId codecId;
  std::vector<::aidl::android::hardware::bluetooth::audio::CodecSpecificConfigurationLtv> codecConfiguration;
  std::vector<uint8_t> vendorCodecConfiguration;
  std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::audio::MetadataLtv>>> metadata;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const LeAudioBisConfiguration& _rhs) const {
    return std::tie(codecId, codecConfiguration, vendorCodecConfiguration, metadata) == std::tie(_rhs.codecId, _rhs.codecConfiguration, _rhs.vendorCodecConfiguration, _rhs.metadata);
  }
  inline bool operator<(const LeAudioBisConfiguration& _rhs) const {
    return std::tie(codecId, codecConfiguration, vendorCodecConfiguration, metadata) < std::tie(_rhs.codecId, _rhs.codecConfiguration, _rhs.vendorCodecConfiguration, _rhs.metadata);
  }
  inline bool operator!=(const LeAudioBisConfiguration& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const LeAudioBisConfiguration& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const LeAudioBisConfiguration& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const LeAudioBisConfiguration& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "LeAudioBisConfiguration{";
    _aidl_os << "codecId: " << ::android::internal::ToString(codecId);
    _aidl_os << ", codecConfiguration: " << ::android::internal::ToString(codecConfiguration);
    _aidl_os << ", vendorCodecConfiguration: " << ::android::internal::ToString(vendorCodecConfiguration);
    _aidl_os << ", metadata: " << ::android::internal::ToString(metadata);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
