/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 7a80d8ba1c4d0e64556f17ed848ce49c28f6f299 -t --stability vintf --min_sdk_version 33 -pout/soong/.intermediates/hardware/interfaces/contexthub/aidl/android.hardware.contexthub_interface/4/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging/android/hardware/bluetooth/socket/ChannelInfo.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/socket/aidl/android.hardware.bluetooth.socket-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1 hardware/interfaces/bluetooth/socket/aidl/aidl_api/android.hardware.bluetooth.socket/1/android/hardware/bluetooth/socket/ChannelInfo.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#include "aidl/android/hardware/bluetooth/socket/ChannelInfo.h"

#include <android/binder_parcel_utils.h>
#include <aidl/android/hardware/contexthub/BnContextHub.h>
#include <aidl/android/hardware/contexthub/BnContextHubCallback.h>
#include <aidl/android/hardware/contexthub/BnEndpointCallback.h>
#include <aidl/android/hardware/contexthub/BnEndpointCommunication.h>
#include <aidl/android/hardware/contexthub/BpContextHub.h>
#include <aidl/android/hardware/contexthub/BpContextHubCallback.h>
#include <aidl/android/hardware/contexthub/BpEndpointCallback.h>
#include <aidl/android/hardware/contexthub/BpEndpointCommunication.h>
#include <aidl/android/hardware/contexthub/IContextHub.h>
#include <aidl/android/hardware/contexthub/IContextHubCallback.h>
#include <aidl/android/hardware/contexthub/IEndpointCallback.h>
#include <aidl/android/hardware/contexthub/IEndpointCommunication.h>

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace socket {
const char* ChannelInfo::descriptor = "android.hardware.bluetooth.socket.ChannelInfo";

binder_status_t ChannelInfo::readFromParcel(const AParcel* _parcel) {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_tag;
  if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_tag)) != STATUS_OK) return _aidl_ret_status;
  switch (static_cast<Tag>(_aidl_tag)) {
  case leCocChannelInfo: {
    ::aidl::android::hardware::bluetooth::socket::LeCocChannelInfo _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::hardware::bluetooth::socket::LeCocChannelInfo>) {
      set<leCocChannelInfo>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<leCocChannelInfo>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case rfcommChannelInfo: {
    ::aidl::android::hardware::bluetooth::socket::RfcommChannelInfo _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::hardware::bluetooth::socket::RfcommChannelInfo>) {
      set<rfcommChannelInfo>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<rfcommChannelInfo>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  }
  return STATUS_BAD_VALUE;
}
binder_status_t ChannelInfo::writeToParcel(AParcel* _parcel) const {
  binder_status_t _aidl_ret_status = ::ndk::AParcel_writeData(_parcel, static_cast<int32_t>(getTag()));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;
  switch (getTag()) {
  case leCocChannelInfo: return ::ndk::AParcel_writeData(_parcel, get<leCocChannelInfo>());
  case rfcommChannelInfo: return ::ndk::AParcel_writeData(_parcel, get<rfcommChannelInfo>());
  }
  __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "can't reach here");
}

}  // namespace socket
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
