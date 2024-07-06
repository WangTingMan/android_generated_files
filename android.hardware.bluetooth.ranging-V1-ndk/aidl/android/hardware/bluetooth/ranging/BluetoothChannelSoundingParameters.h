/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d257bb74ef61a4cbb5854f4663604dd491b4a7bf --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging/android/hardware/bluetooth/ranging/BluetoothChannelSoundingParameters.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/1/android/hardware/bluetooth/ranging/BluetoothChannelSoundingParameters.aidl
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
#include <aidl/android/hardware/bluetooth/ranging/Config.h>
#include <aidl/android/hardware/bluetooth/ranging/DeviceAddress.h>
#include <aidl/android/hardware/bluetooth/ranging/LocationType.h>
#include <aidl/android/hardware/bluetooth/ranging/Role.h>
#include <aidl/android/hardware/bluetooth/ranging/SessionType.h>
#include <aidl/android/hardware/bluetooth/ranging/SightType.h>
#include <aidl/android/hardware/bluetooth/ranging/VendorSpecificData.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

#include "ANDROIDHARDWAREBLUETOOTHRANGINGV1NDK_EXPORTS_.h"

namespace aidl::android::hardware::bluetooth::ranging {
class Config;
class DeviceAddress;
class VendorSpecificData;
}  // namespace aidl::android::hardware::bluetooth::ranging
namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class ANDROIDHARDWAREBLUETOOTHRANGINGV1NDK_API BluetoothChannelSoundingParameters {
public:
  typedef std::false_type fixed_size;
  static inline constexpr const char* descriptor = "android.hardware.bluetooth.ranging.BluetoothChannelSoundingParameters";

  ::aidl::android::hardware::bluetooth::ranging::SessionType sessionType = ::aidl::android::hardware::bluetooth::ranging::SessionType(0);
  int32_t aclHandle = 0;
  int32_t l2capCid = 0;
  int32_t realTimeProcedureDataAttHandle = 0;
  ::aidl::android::hardware::bluetooth::ranging::Role role = ::aidl::android::hardware::bluetooth::ranging::Role(0);
  bool localSupportsSoundingPhaseBasedRanging = false;
  bool remoteSupportsSoundingPhaseBaseRanging = false;
  ::aidl::android::hardware::bluetooth::ranging::Config config;
  ::aidl::android::hardware::bluetooth::ranging::DeviceAddress address;
  std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>> vendorSpecificData;
  ::aidl::android::hardware::bluetooth::ranging::LocationType locationType = ::aidl::android::hardware::bluetooth::ranging::LocationType(0);
  ::aidl::android::hardware::bluetooth::ranging::SightType sightType = ::aidl::android::hardware::bluetooth::ranging::SightType(0);

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const BluetoothChannelSoundingParameters& _rhs) const {
    return std::tie(sessionType, aclHandle, l2capCid, realTimeProcedureDataAttHandle, role, localSupportsSoundingPhaseBasedRanging, remoteSupportsSoundingPhaseBaseRanging, config, address, vendorSpecificData, locationType, sightType) == std::tie(_rhs.sessionType, _rhs.aclHandle, _rhs.l2capCid, _rhs.realTimeProcedureDataAttHandle, _rhs.role, _rhs.localSupportsSoundingPhaseBasedRanging, _rhs.remoteSupportsSoundingPhaseBaseRanging, _rhs.config, _rhs.address, _rhs.vendorSpecificData, _rhs.locationType, _rhs.sightType);
  }
  inline bool operator<(const BluetoothChannelSoundingParameters& _rhs) const {
    return std::tie(sessionType, aclHandle, l2capCid, realTimeProcedureDataAttHandle, role, localSupportsSoundingPhaseBasedRanging, remoteSupportsSoundingPhaseBaseRanging, config, address, vendorSpecificData, locationType, sightType) < std::tie(_rhs.sessionType, _rhs.aclHandle, _rhs.l2capCid, _rhs.realTimeProcedureDataAttHandle, _rhs.role, _rhs.localSupportsSoundingPhaseBasedRanging, _rhs.remoteSupportsSoundingPhaseBaseRanging, _rhs.config, _rhs.address, _rhs.vendorSpecificData, _rhs.locationType, _rhs.sightType);
  }
  inline bool operator!=(const BluetoothChannelSoundingParameters& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const BluetoothChannelSoundingParameters& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const BluetoothChannelSoundingParameters& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const BluetoothChannelSoundingParameters& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "BluetoothChannelSoundingParameters{";
    _aidl_os << "sessionType: " << ::android::internal::ToString(sessionType);
    _aidl_os << ", aclHandle: " << ::android::internal::ToString(aclHandle);
    _aidl_os << ", l2capCid: " << ::android::internal::ToString(l2capCid);
    _aidl_os << ", realTimeProcedureDataAttHandle: " << ::android::internal::ToString(realTimeProcedureDataAttHandle);
    _aidl_os << ", role: " << ::android::internal::ToString(role);
    _aidl_os << ", localSupportsSoundingPhaseBasedRanging: " << ::android::internal::ToString(localSupportsSoundingPhaseBasedRanging);
    _aidl_os << ", remoteSupportsSoundingPhaseBaseRanging: " << ::android::internal::ToString(remoteSupportsSoundingPhaseBaseRanging);
    _aidl_os << ", config: " << ::android::internal::ToString(config);
    _aidl_os << ", address: " << ::android::internal::ToString(address);
    _aidl_os << ", vendorSpecificData: " << ::android::internal::ToString(vendorSpecificData);
    _aidl_os << ", locationType: " << ::android::internal::ToString(locationType);
    _aidl_os << ", sightType: " << ::android::internal::ToString(sightType);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
