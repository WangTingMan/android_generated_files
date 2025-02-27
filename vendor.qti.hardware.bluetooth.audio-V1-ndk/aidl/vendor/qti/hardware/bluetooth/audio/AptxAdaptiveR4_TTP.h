/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash be7f6f90eb88c54a08b4bd98ba130b87a3a467c4 --stability vintf --min_sdk_version 31 --ninja -d out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4_TTP.cpp.d -h out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/vendor.qti.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1 vendor/qcom/opensource/interfaces/bluetooth_audio/aidl/aidl_api/vendor.qti.hardware.bluetooth.audio/1/vendor/qti/hardware/bluetooth/audio/AptxAdaptiveR4_TTP.aidl
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
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth {
namespace audio {
class AptxAdaptiveR4_TTP {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  int32_t ttp_ll = 0;
  int32_t ttp_hq = 0;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const AptxAdaptiveR4_TTP& _rhs) const {
    return std::tie(ttp_ll, ttp_hq) == std::tie(_rhs.ttp_ll, _rhs.ttp_hq);
  }
  inline bool operator<(const AptxAdaptiveR4_TTP& _rhs) const {
    return std::tie(ttp_ll, ttp_hq) < std::tie(_rhs.ttp_ll, _rhs.ttp_hq);
  }
  inline bool operator!=(const AptxAdaptiveR4_TTP& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const AptxAdaptiveR4_TTP& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const AptxAdaptiveR4_TTP& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const AptxAdaptiveR4_TTP& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "AptxAdaptiveR4_TTP{";
    _aidl_os << "ttp_ll: " << ::android::internal::ToString(ttp_ll);
    _aidl_os << ", ttp_hq: " << ::android::internal::ToString(ttp_hq);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace qti
}  // namespace vendor
}  // namespace aidl
