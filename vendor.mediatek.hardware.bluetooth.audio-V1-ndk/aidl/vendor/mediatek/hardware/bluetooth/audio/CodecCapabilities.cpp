/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 -t --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/CodecCapabilities.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/CodecCapabilities.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#include "aidl/vendor/mediatek/hardware/bluetooth/audio/CodecCapabilities.h"

#include <android/binder_parcel_utils.h>

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
const char* CodecCapabilities::descriptor = "vendor.mediatek.hardware.bluetooth.audio.CodecCapabilities";

binder_status_t CodecCapabilities::readFromParcel(const AParcel* _aidl_parcel) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  int32_t _aidl_start_pos = AParcel_getDataPosition(_aidl_parcel);
  int32_t _aidl_parcelable_size = 0;
  _aidl_ret_status = AParcel_readInt32(_aidl_parcel, &_aidl_parcelable_size);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  if (_aidl_parcelable_size < 4) return STATUS_BAD_VALUE;
  if (_aidl_start_pos > INT32_MAX - _aidl_parcelable_size) return STATUS_BAD_VALUE;
  if (AParcel_getDataPosition(_aidl_parcel) - _aidl_start_pos >= _aidl_parcelable_size) {
    AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  }
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_parcel, &codecType);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  if (AParcel_getDataPosition(_aidl_parcel) - _aidl_start_pos >= _aidl_parcelable_size) {
    AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  }
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_parcel, &capabilities);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
  return _aidl_ret_status;
}
binder_status_t CodecCapabilities::writeToParcel(AParcel* _aidl_parcel) const {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_start_pos = AParcel_getDataPosition(_aidl_parcel);
  _aidl_ret_status = AParcel_writeInt32(_aidl_parcel, 0);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_parcel, codecType);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_parcel, capabilities);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  int32_t _aidl_end_pos = AParcel_getDataPosition(_aidl_parcel);
  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos);
  AParcel_writeInt32(_aidl_parcel, _aidl_end_pos - _aidl_start_pos);
  AParcel_setDataPosition(_aidl_parcel, _aidl_end_pos);
  return _aidl_ret_status;
}

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
const char* CodecCapabilities::VendorCapabilities::descriptor = "vendor.mediatek.hardware.bluetooth.audio.CodecCapabilities.VendorCapabilities";

binder_status_t CodecCapabilities::VendorCapabilities::readFromParcel(const AParcel* _aidl_parcel) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  int32_t _aidl_start_pos = AParcel_getDataPosition(_aidl_parcel);
  int32_t _aidl_parcelable_size = 0;
  _aidl_ret_status = AParcel_readInt32(_aidl_parcel, &_aidl_parcelable_size);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  if (_aidl_parcelable_size < 4) return STATUS_BAD_VALUE;
  if (_aidl_start_pos > INT32_MAX - _aidl_parcelable_size) return STATUS_BAD_VALUE;
  if (AParcel_getDataPosition(_aidl_parcel) - _aidl_start_pos >= _aidl_parcelable_size) {
    AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  }
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_parcel, &extension);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
  return _aidl_ret_status;
}
binder_status_t CodecCapabilities::VendorCapabilities::writeToParcel(AParcel* _aidl_parcel) const {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_start_pos = AParcel_getDataPosition(_aidl_parcel);
  _aidl_ret_status = AParcel_writeInt32(_aidl_parcel, 0);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_parcel, extension);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  int32_t _aidl_end_pos = AParcel_getDataPosition(_aidl_parcel);
  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos);
  AParcel_writeInt32(_aidl_parcel, _aidl_end_pos - _aidl_start_pos);
  AParcel_setDataPosition(_aidl_parcel, _aidl_end_pos);
  return _aidl_ret_status;
}

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
const char* CodecCapabilities::Capabilities::descriptor = "vendor.mediatek.hardware.bluetooth.audio.CodecCapabilities.Capabilities";

binder_status_t CodecCapabilities::Capabilities::readFromParcel(const AParcel* _parcel) {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_tag;
  if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_tag)) != STATUS_OK) return _aidl_ret_status;
  switch (static_cast<Tag>(_aidl_tag)) {
  case sbcCapabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::SbcCapabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::SbcCapabilities>) {
      set<sbcCapabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<sbcCapabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case aacCapabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::AacCapabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::AacCapabilities>) {
      set<aacCapabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<aacCapabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case ldacCapabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::LdacCapabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::LdacCapabilities>) {
      set<ldacCapabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<ldacCapabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case aptxCapabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxCapabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxCapabilities>) {
      set<aptxCapabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<aptxCapabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case aptxAdaptiveCapabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxAdaptiveCapabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::AptxAdaptiveCapabilities>) {
      set<aptxAdaptiveCapabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<aptxAdaptiveCapabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case lc3Capabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lc3Capabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::Lc3Capabilities>) {
      set<lc3Capabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<lc3Capabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case vendorCapabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::CodecCapabilities::VendorCapabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::CodecCapabilities::VendorCapabilities>) {
      set<vendorCapabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<vendorCapabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case lhdcv5Capabilities: {
    ::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Capabilities _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::vendor::mediatek::hardware::bluetooth::audio::Lhdcv5Capabilities>) {
      set<lhdcv5Capabilities>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<lhdcv5Capabilities>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  }
  return STATUS_BAD_VALUE;
}
binder_status_t CodecCapabilities::Capabilities::writeToParcel(AParcel* _parcel) const {
  binder_status_t _aidl_ret_status = ::ndk::AParcel_writeData(_parcel, static_cast<int32_t>(getTag()));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;
  switch (getTag()) {
  case sbcCapabilities: return ::ndk::AParcel_writeData(_parcel, get<sbcCapabilities>());
  case aacCapabilities: return ::ndk::AParcel_writeData(_parcel, get<aacCapabilities>());
  case ldacCapabilities: return ::ndk::AParcel_writeData(_parcel, get<ldacCapabilities>());
  case aptxCapabilities: return ::ndk::AParcel_writeData(_parcel, get<aptxCapabilities>());
  case aptxAdaptiveCapabilities: return ::ndk::AParcel_writeData(_parcel, get<aptxAdaptiveCapabilities>());
  case lc3Capabilities: return ::ndk::AParcel_writeData(_parcel, get<lc3Capabilities>());
  case vendorCapabilities: return ::ndk::AParcel_writeData(_parcel, get<vendorCapabilities>());
  case lhdcv5Capabilities: return ::ndk::AParcel_writeData(_parcel, get<lhdcv5Capabilities>());
  }
  __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "can't reach here");
}

}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
