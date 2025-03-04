/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash e9accf971a83a7829786ee24780fa7a5583b5dae -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging/android/hardware/bluetooth/lmp_event/Timestamp.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1 hardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1/android/hardware/bluetooth/lmp_event/Timestamp.aidl
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
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace lmp_event {
class Timestamp {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int64_t systemTimeUs = 0L;
  int64_t bluetoothTimeUs = 0L;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Timestamp& _rhs) const {
    return std::tie(systemTimeUs, bluetoothTimeUs) == std::tie(_rhs.systemTimeUs, _rhs.bluetoothTimeUs);
  }
  inline bool operator<(const Timestamp& _rhs) const {
    return std::tie(systemTimeUs, bluetoothTimeUs) < std::tie(_rhs.systemTimeUs, _rhs.bluetoothTimeUs);
  }
  inline bool operator!=(const Timestamp& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Timestamp& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Timestamp& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Timestamp& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Timestamp{";
    _aidl_os << "systemTimeUs: " << ::android::internal::ToString(systemTimeUs);
    _aidl_os << ", bluetoothTimeUs: " << ::android::internal::ToString(bluetoothTimeUs);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
