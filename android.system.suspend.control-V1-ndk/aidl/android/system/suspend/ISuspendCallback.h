/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 34506b107801d68c881c2c7368ad4c676aed3e9b -t --min_sdk_version 30 --ninja -d out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging/android/system/suspend/ISuspendCallback.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1 system/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1/android/system/suspend/ISuspendCallback.aidl
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
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace system {
namespace suspend {
class ISuspendCallbackDelegator;

class ISuspendCallback : public ::ndk::ICInterface {
public:
  typedef ISuspendCallbackDelegator DefaultDelegator;
  static const char* descriptor;
  ISuspendCallback();
  virtual ~ISuspendCallback();

  static inline const int32_t version = 1;
  static inline const std::string hash = "34506b107801d68c881c2c7368ad4c676aed3e9b";
  static constexpr uint32_t TRANSACTION_notifyWakeup = FIRST_CALL_TRANSACTION + 0;

  static std::shared_ptr<ISuspendCallback> fromBinder(const ::ndk::SpAIBinder& binder);
  static binder_status_t writeToParcel(AParcel* parcel, const std::shared_ptr<ISuspendCallback>& instance);
  static binder_status_t readFromParcel(const AParcel* parcel, std::shared_ptr<ISuspendCallback>* instance);
  static bool setDefaultImpl(const std::shared_ptr<ISuspendCallback>& impl);
  static const std::shared_ptr<ISuspendCallback>& getDefaultImpl();
  virtual ::ndk::ScopedAStatus notifyWakeup(bool in_success, const std::vector<std::string>& in_wakeupReasons) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) = 0;
  virtual ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) = 0;
private:
  static std::shared_ptr<ISuspendCallback> default_impl;
};
class ISuspendCallbackDefault : public ISuspendCallback {
public:
  ::ndk::ScopedAStatus notifyWakeup(bool in_success, const std::vector<std::string>& in_wakeupReasons) override;
  ::ndk::ScopedAStatus getInterfaceVersion(int32_t* _aidl_return) override;
  ::ndk::ScopedAStatus getInterfaceHash(std::string* _aidl_return) override;
  ::ndk::SpAIBinder asBinder() override;
  bool isRemote() override;
};
}  // namespace suspend
}  // namespace system
}  // namespace android
}  // namespace aidl
