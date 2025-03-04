/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 2 --hash 1ce66c3f521da97079f169b56452be7371c4a61f -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/ranging/aidl/android.hardware.bluetooth.ranging-V2-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2 hardware/interfaces/bluetooth/ranging/aidl/aidl_api/android.hardware.bluetooth.ranging/2/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/hardware/bluetooth/ranging/IBluetoothChannelSoundingSession.h"

#include <android/binder_ibinder.h>
#include <cassert>

#ifndef __BIONIC__
#ifndef __assert2
#define __assert2(a,b,c,d) ((void)0)
#endif
#endif

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace ranging {
class BnBluetoothChannelSoundingSession : public ::ndk::BnCInterface<IBluetoothChannelSoundingSession> {
public:
  BnBluetoothChannelSoundingSession();
  virtual ~BnBluetoothChannelSoundingSession();
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) final;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) final;
protected:
  ::ndk::SpAIBinder createBinder() override;
private:
};
class IBluetoothChannelSoundingSessionDelegator : public BnBluetoothChannelSoundingSession {
public:
  explicit IBluetoothChannelSoundingSessionDelegator(const std::shared_ptr<IBluetoothChannelSoundingSession> &impl) : _impl(impl) {
     int32_t _impl_ver = 0;
     if (!impl->getInterfaceVersion(&_impl_ver).isOk()) {;
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Delegator failed to get version of the implementation.");
     }
     if (_impl_ver != IBluetoothChannelSoundingSession::version) {
        __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "Mismatched versions of delegator and implementation is not allowed.");
     }
  }

  ::ndk::ScopedAStatus getVendorSpecificReplies(std::optional<std::vector<std::optional<::aidl::android::hardware::bluetooth::ranging::VendorSpecificData>>>* _aidl_return) override {
    return _impl->getVendorSpecificReplies(_aidl_return);
  }
  ::ndk::ScopedAStatus getSupportedResultTypes(std::vector<::aidl::android::hardware::bluetooth::ranging::ResultType>* _aidl_return) override {
    return _impl->getSupportedResultTypes(_aidl_return);
  }
  ::ndk::ScopedAStatus isAbortedProcedureRequired(bool* _aidl_return) override {
    return _impl->isAbortedProcedureRequired(_aidl_return);
  }
  ::ndk::ScopedAStatus writeRawData(const ::aidl::android::hardware::bluetooth::ranging::ChannelSoudingRawData& in_rawData) override {
    return _impl->writeRawData(in_rawData);
  }
  ::ndk::ScopedAStatus close(::aidl::android::hardware::bluetooth::ranging::Reason in_reason) override {
    return _impl->close(in_reason);
  }
  ::ndk::ScopedAStatus writeProcedureData(const ::aidl::android::hardware::bluetooth::ranging::ChannelSoundingProcedureData& in_procedureData) override {
    return _impl->writeProcedureData(in_procedureData);
  }
  ::ndk::ScopedAStatus updateChannelSoundingConfig(const ::aidl::android::hardware::bluetooth::ranging::Config& in_conifg) override {
    return _impl->updateChannelSoundingConfig(in_conifg);
  }
  ::ndk::ScopedAStatus updateProcedureEnableConfig(const ::aidl::android::hardware::bluetooth::ranging::ProcedureEnableConfig& in_procedureEnableConfig) override {
    return _impl->updateProcedureEnableConfig(in_procedureEnableConfig);
  }
  ::ndk::ScopedAStatus updateBleConnInterval(int32_t in_bleConnInterval) override {
    return _impl->updateBleConnInterval(in_bleConnInterval);
  }
protected:
private:
  std::shared_ptr<IBluetoothChannelSoundingSession> _impl;
};

}  // namespace ranging
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
