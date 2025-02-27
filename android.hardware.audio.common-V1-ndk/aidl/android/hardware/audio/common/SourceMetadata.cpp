/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 90d0a7ea5cee4579d33066885d8648f180387f55 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V1-ndk-source/gen/staging/android/hardware/audio/common/SourceMetadata.cpp.d -h out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common-V1-ndk-source/gen/staging -Nhardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/1 hardware/interfaces/audio/aidl/aidl_api/android.hardware.audio.common/1/android/hardware/audio/common/SourceMetadata.aidl
 */
#include "aidl/android/hardware/audio/common/SourceMetadata.h"

#include <android/binder_parcel_utils.h>

namespace aidl {
namespace android {
namespace hardware {
namespace audio {
namespace common {
const char* SourceMetadata::descriptor = "android.hardware.audio.common.SourceMetadata";

binder_status_t SourceMetadata::readFromParcel(const AParcel* _aidl_parcel) {
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
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_parcel, &tracks);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
  return _aidl_ret_status;
}
binder_status_t SourceMetadata::writeToParcel(AParcel* _aidl_parcel) const {
  binder_status_t _aidl_ret_status;
  size_t _aidl_start_pos = AParcel_getDataPosition(_aidl_parcel);
  _aidl_ret_status = AParcel_writeInt32(_aidl_parcel, 0);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_parcel, tracks);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  size_t _aidl_end_pos = AParcel_getDataPosition(_aidl_parcel);
  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos);
  AParcel_writeInt32(_aidl_parcel, _aidl_end_pos - _aidl_start_pos);
  AParcel_setDataPosition(_aidl_parcel, _aidl_end_pos);
  return _aidl_ret_status;
}

}  // namespace common
}  // namespace audio
}  // namespace hardware
}  // namespace android
}  // namespace aidl
