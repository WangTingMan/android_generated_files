/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 1ce66c3f521da97079f169b56452be7371c4a61f -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging/android/hardware/bluetooth/ranging/ModeData.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2/android/hardware/bluetooth/ranging/ModeData.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#include "aidl/android/hardware/bluetooth/ranging/ModeData.h"

#include <android/binder_parcel_utils.h>

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
const char* ModeData::descriptor = "android.hardware.bluetooth.ranging.ModeData";

binder_status_t ModeData::readFromParcel(const AParcel* _parcel) {
  binder_status_t _aidl_ret_status;
  int32_t _aidl_tag;
  if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_tag)) != STATUS_OK) return _aidl_ret_status;
  switch (static_cast<Tag>(_aidl_tag)) {
  case modeZeroData: {
    ::aidl::android::hardware::bluetooth::ranging::ModeZeroData _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::hardware::bluetooth::ranging::ModeZeroData>) {
      set<modeZeroData>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<modeZeroData>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case modeOneData: {
    ::aidl::android::hardware::bluetooth::ranging::ModeOneData _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::hardware::bluetooth::ranging::ModeOneData>) {
      set<modeOneData>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<modeOneData>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case modeTwoData: {
    ::aidl::android::hardware::bluetooth::ranging::ModeTwoData _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::hardware::bluetooth::ranging::ModeTwoData>) {
      set<modeTwoData>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<modeTwoData>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  case modeThreeData: {
    ::aidl::android::hardware::bluetooth::ranging::ModeThreeData _aidl_value;
    if ((_aidl_ret_status = ::ndk::AParcel_readData(_parcel, &_aidl_value)) != STATUS_OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::aidl::android::hardware::bluetooth::ranging::ModeThreeData>) {
      set<modeThreeData>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<modeThreeData>(std::move(_aidl_value));
    }
    return STATUS_OK; }
  }
  return STATUS_BAD_VALUE;
}
binder_status_t ModeData::writeToParcel(AParcel* _parcel) const {
  binder_status_t _aidl_ret_status = ::ndk::AParcel_writeData(_parcel, static_cast<int32_t>(getTag()));
  if (_aidl_ret_status != STATUS_OK) return _aidl_ret_status;
  switch (getTag()) {
  case modeZeroData: return ::ndk::AParcel_writeData(_parcel, get<modeZeroData>());
  case modeOneData: return ::ndk::AParcel_writeData(_parcel, get<modeOneData>());
  case modeTwoData: return ::ndk::AParcel_writeData(_parcel, get<modeTwoData>());
  case modeThreeData: return ::ndk::AParcel_writeData(_parcel, get<modeThreeData>());
  }
  __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "can't reach here");
}

}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
