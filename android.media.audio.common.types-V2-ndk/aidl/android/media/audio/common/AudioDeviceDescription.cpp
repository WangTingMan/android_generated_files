/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 79bbabfe33e09450c7fc6120bd45f5339f3c7584 -t --stability vintf --min_sdk_version 29 --ninja -d out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging/android/media/audio/common/AudioDeviceDescription.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/media/android.media.audio.common.types-V2-ndk-source/gen/staging -Nsystem/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2 system/hardware/interfaces/media/aidl_api/android.media.audio.common.types/2/android/media/audio/common/AudioDeviceDescription.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#include "aidl/android/media/audio/common/AudioDeviceDescription.h"

#include <android/binder_parcel_utils.h>

namespace aidl {
namespace android {
namespace media {
namespace audio {
namespace common {
const char* AudioDeviceDescription::descriptor = "android.media.audio.common.AudioDeviceDescription";

const char* AudioDeviceDescription::CONNECTION_ANALOG = "analog";
const char* AudioDeviceDescription::CONNECTION_BT_A2DP = "bt-a2dp";
const char* AudioDeviceDescription::CONNECTION_BT_LE = "bt-le";
const char* AudioDeviceDescription::CONNECTION_BT_SCO = "bt-sco";
const char* AudioDeviceDescription::CONNECTION_BUS = "bus";
const char* AudioDeviceDescription::CONNECTION_HDMI = "hdmi";
const char* AudioDeviceDescription::CONNECTION_HDMI_ARC = "hdmi-arc";
const char* AudioDeviceDescription::CONNECTION_HDMI_EARC = "hdmi-earc";
const char* AudioDeviceDescription::CONNECTION_IP_V4 = "ip-v4";
const char* AudioDeviceDescription::CONNECTION_SPDIF = "spdif";
const char* AudioDeviceDescription::CONNECTION_WIRELESS = "wireless";
const char* AudioDeviceDescription::CONNECTION_USB = "usb";
const char* AudioDeviceDescription::CONNECTION_VIRTUAL = "virtual";
binder_status_t AudioDeviceDescription::readFromParcel(const AParcel* _aidl_parcel) {
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
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_parcel, &type);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  if (AParcel_getDataPosition(_aidl_parcel) - _aidl_start_pos >= _aidl_parcelable_size) {
    AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
    return _aidl_ret_status;
  }
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_parcel, &connection);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos + _aidl_parcelable_size);
  return _aidl_ret_status;
}
binder_status_t AudioDeviceDescription::writeToParcel(AParcel* _aidl_parcel) const {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_start_pos = AParcel_getDataPosition(_aidl_parcel);
  _aidl_ret_status = AParcel_writeInt32(_aidl_parcel, 0);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_parcel, type);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_parcel, connection);
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;

  int32_t _aidl_end_pos = AParcel_getDataPosition(_aidl_parcel);
  AParcel_setDataPosition(_aidl_parcel, _aidl_start_pos);
  AParcel_writeInt32(_aidl_parcel, _aidl_end_pos - _aidl_start_pos);
  AParcel_setDataPosition(_aidl_parcel, _aidl_end_pos);
  return _aidl_ret_status;
}

}  // namespace common
}  // namespace audio
}  // namespace media
}  // namespace android
}  // namespace aidl
