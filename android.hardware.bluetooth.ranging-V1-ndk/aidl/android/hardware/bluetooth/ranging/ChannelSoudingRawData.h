/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/ChannelSoudingRawData.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/ChannelSoudingRawData.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/ChannelSoundingSingleSideData.h>
#include <aidl/android/hardware/bluetooth/ranging/ModeType.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl::android::hardware::bluetooth::ranging {
class ChannelSoundingSingleSideData;
}  // namespace aidl::android::hardware::bluetooth::ranging
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ChannelSoudingRawData {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t procedureCounter = 0;
  std::vector<int32_t> frequencyCompensation;
  bool aborted = false;
  ::aidl::android::hardware::bluetooth::ranging::ChannelSoundingSingleSideData initiatorData;
  ::aidl::android::hardware::bluetooth::ranging::ChannelSoundingSingleSideData reflectorData;
  std::vector<uint8_t> stepChannels;
  std::optional<std::vector<int32_t>> toaTodInitiator;
  std::optional<std::vector<int32_t>> todToaReflector;
  std::vector<::aidl::android::hardware::bluetooth::ranging::ModeType> stepMode;
  int8_t numAntennaPaths = 0;
  int64_t timestampMs = 0L;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const ChannelSoudingRawData& _rhs) const {
    return std::tie(procedureCounter, frequencyCompensation, aborted, initiatorData, reflectorData, stepChannels, toaTodInitiator, todToaReflector, stepMode, numAntennaPaths, timestampMs) == std::tie(_rhs.procedureCounter, _rhs.frequencyCompensation, _rhs.aborted, _rhs.initiatorData, _rhs.reflectorData, _rhs.stepChannels, _rhs.toaTodInitiator, _rhs.todToaReflector, _rhs.stepMode, _rhs.numAntennaPaths, _rhs.timestampMs);
  }
  inline bool operator<(const ChannelSoudingRawData& _rhs) const {
    return std::tie(procedureCounter, frequencyCompensation, aborted, initiatorData, reflectorData, stepChannels, toaTodInitiator, todToaReflector, stepMode, numAntennaPaths, timestampMs) < std::tie(_rhs.procedureCounter, _rhs.frequencyCompensation, _rhs.aborted, _rhs.initiatorData, _rhs.reflectorData, _rhs.stepChannels, _rhs.toaTodInitiator, _rhs.todToaReflector, _rhs.stepMode, _rhs.numAntennaPaths, _rhs.timestampMs);
  }
  inline bool operator!=(const ChannelSoudingRawData& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ChannelSoudingRawData& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ChannelSoudingRawData& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ChannelSoudingRawData& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ChannelSoudingRawData{";
    _aidl_os << "procedureCounter: " << ::android::internal::ToString(procedureCounter);
    _aidl_os << ", frequencyCompensation: " << ::android::internal::ToString(frequencyCompensation);
    _aidl_os << ", aborted: " << ::android::internal::ToString(aborted);
    _aidl_os << ", initiatorData: " << ::android::internal::ToString(initiatorData);
    _aidl_os << ", reflectorData: " << ::android::internal::ToString(reflectorData);
    _aidl_os << ", stepChannels: " << ::android::internal::ToString(stepChannels);
    _aidl_os << ", toaTodInitiator: " << ::android::internal::ToString(toaTodInitiator);
    _aidl_os << ", todToaReflector: " << ::android::internal::ToString(todToaReflector);
    _aidl_os << ", stepMode: " << ::android::internal::ToString(stepMode);
    _aidl_os << ", numAntennaPaths: " << ::android::internal::ToString(numAntennaPaths);
    _aidl_os << ", timestampMs: " << ::android::internal::ToString(timestampMs);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
