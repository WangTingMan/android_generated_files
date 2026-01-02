/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 34506b107801d68c881c2c7368ad4c676aed3e9b -t --min_sdk_version 30 --ninja -d out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging/android/system/suspend/ISuspendCallback.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1 system/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1/android/system/suspend/ISuspendCallback.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#pragma once

#include "aidl/android/system/suspend/ISuspendCallback.h"

#include <android/binder_ibinder.h>
#include "ANDROIDSYSTEMSUSPENDCONTROLV1NDK_EXPORTS_.h"
namespace aidl {
namespace android {
namespace system {
namespace suspend {
class ANDROIDSYSTEMSUSPENDCONTROLV1NDK_API BpSuspendCallback : public ::ndk::BpCInterface<ISuspendCallback> {
public:
  explicit BpSuspendCallback(const ::ndk::SpAIBinder& binder);
  virtual ~BpSuspendCallback();

  ::ndk::ScopedAStatus notifyWakeup(bool in_success, const std::vector<std::string>& in_wakeupReasons) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  int32_t _aidl_cached_version = -1;
  std::string _aidl_cached_hash = "-1";
  std::mutex _aidl_cached_hash_mutex;
};
}  // namespace suspend
}  // namespace system
}  // namespace android
}  // namespace aidl
