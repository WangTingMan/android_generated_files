/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash 34506b107801d68c881c2c7368ad4c676aed3e9b -t --min_sdk_version 30 --ninja -d out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging/android/system/suspend/ISuspendControlService.cpp.d -h out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/system/hardware/interfaces/suspend/aidl/android.system.suspend.control-V1-ndk-source/gen/staging -Nsystem/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1 system/hardware/interfaces/suspend/aidl/aidl_api/android.system.suspend.control/1/android/system/suspend/ISuspendControlService.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#include "aidl/android/system/suspend/ISuspendControlService.h"

#include <android/binder_parcel_utils.h>
#include <aidl/android/system/suspend/BnSuspendCallback.h>
#include <aidl/android/system/suspend/BnSuspendControlService.h>
#include <aidl/android/system/suspend/BnWakelockCallback.h>
#include <aidl/android/system/suspend/BpSuspendCallback.h>
#include <aidl/android/system/suspend/BpSuspendControlService.h>
#include <aidl/android/system/suspend/BpWakelockCallback.h>
#include <aidl/android/system/suspend/ISuspendCallback.h>
#include <aidl/android/system/suspend/IWakelockCallback.h>

namespace aidl {
namespace android {
namespace system {
namespace suspend {
static binder_status_t _aidl_android_system_suspend_ISuspendControlService_onTransact(AIBinder* _aidl_binder, transaction_code_t _aidl_code, const AParcel* _aidl_in, AParcel* _aidl_out) {
  (void)_aidl_in;
  (void)_aidl_out;
  binder_status_t _aidl_ret_status = STATUS_UNKNOWN_TRANSACTION;
  std::shared_ptr<BnSuspendControlService> _aidl_impl = std::static_pointer_cast<BnSuspendControlService>(::ndk::ICInterface::asInterface(_aidl_binder));
  switch (_aidl_code) {
    case (FIRST_CALL_TRANSACTION + 0 /*registerCallback*/): {
      std::shared_ptr<::aidl::android::system::suspend::ISuspendCallback> in_callback;
      bool _aidl_return;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_callback);
      if (_aidl_ret_status != STATUS_OK) break;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->registerCallback(in_callback, &_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 1 /*registerWakelockCallback*/): {
      std::shared_ptr<::aidl::android::system::suspend::IWakelockCallback> in_callback;
      std::string in_name;
      bool _aidl_return;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_callback);
      if (_aidl_ret_status != STATUS_OK) break;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_name);
      if (_aidl_ret_status != STATUS_OK) break;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->registerWakelockCallback(in_callback, in_name, &_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 16777214 /*getInterfaceVersion*/): {
      int32_t _aidl_return;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->getInterfaceVersion(&_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 16777213 /*getInterfaceHash*/): {
      std::string _aidl_return;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->getInterfaceHash(&_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
  }
  return _aidl_ret_status;
}

static const char* _g_aidl_android_system_suspend_ISuspendControlService_clazz_code_to_function[] = { "registerCallback","registerWakelockCallback",};
static AIBinder_Class* _g_aidl_android_system_suspend_ISuspendControlService_clazz = ::ndk::ICInterface::defineClass(ISuspendControlService::descriptor, _aidl_android_system_suspend_ISuspendControlService_onTransact, _g_aidl_android_system_suspend_ISuspendControlService_clazz_code_to_function, 2);

BpSuspendControlService::BpSuspendControlService(const ::ndk::SpAIBinder& binder) : BpCInterface(binder) {}
BpSuspendControlService::~BpSuspendControlService() {}

::ndk::ScopedAStatus BpSuspendControlService::registerCallback(const std::shared_ptr<::aidl::android::system::suspend::ISuspendCallback>& in_callback, bool* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinderReference().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_callback);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinderReference().get(),
    (FIRST_CALL_TRANSACTION + 0 /*registerCallback*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | static_cast<int>(FLAG_PRIVATE_LOCAL)
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && ISuspendControlService::getDefaultImpl()) {
    _aidl_status = ISuspendControlService::getDefaultImpl()->registerCallback(in_callback, _aidl_return);
    goto _aidl_status_return;
  }
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AParcel_readStatusHeader(_aidl_out.get(), _aidl_status.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  if (!AStatus_isOk(_aidl_status.get())) goto _aidl_status_return;
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_out.get(), _aidl_return);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_error:
  _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
  _aidl_status_return:
  return _aidl_status;
}
::ndk::ScopedAStatus BpSuspendControlService::registerWakelockCallback(const std::shared_ptr<::aidl::android::system::suspend::IWakelockCallback>& in_callback, const std::string& in_name, bool* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinderReference().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_callback);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_name);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinderReference().get(),
    (FIRST_CALL_TRANSACTION + 1 /*registerWakelockCallback*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | static_cast<int>(FLAG_PRIVATE_LOCAL)
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && ISuspendControlService::getDefaultImpl()) {
    _aidl_status = ISuspendControlService::getDefaultImpl()->registerWakelockCallback(in_callback, in_name, _aidl_return);
    goto _aidl_status_return;
  }
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AParcel_readStatusHeader(_aidl_out.get(), _aidl_status.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  if (!AStatus_isOk(_aidl_status.get())) goto _aidl_status_return;
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_out.get(), _aidl_return);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_error:
  _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
  _aidl_status_return:
  return _aidl_status;
}
::ndk::ScopedAStatus BpSuspendControlService::getInterfaceVersion(int32_t* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  if (_aidl_cached_version != -1) {
    *_aidl_return = _aidl_cached_version;
    _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
    return _aidl_status;
  }
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinderReference().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinderReference().get(),
    (FIRST_CALL_TRANSACTION + 16777214 /*getInterfaceVersion*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | static_cast<int>(FLAG_PRIVATE_LOCAL)
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && ISuspendControlService::getDefaultImpl()) {
    _aidl_status = ISuspendControlService::getDefaultImpl()->getInterfaceVersion(_aidl_return);
    goto _aidl_status_return;
  }
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AParcel_readStatusHeader(_aidl_out.get(), _aidl_status.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  if (!AStatus_isOk(_aidl_status.get())) goto _aidl_status_return;
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_out.get(), _aidl_return);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_cached_version = *_aidl_return;
  _aidl_error:
  _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
  _aidl_status_return:
  return _aidl_status;
}
::ndk::ScopedAStatus BpSuspendControlService::getInterfaceHash(std::string* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  const std::lock_guard<std::mutex> lock(_aidl_cached_hash_mutex);
  if (_aidl_cached_hash != "-1") {
    *_aidl_return = _aidl_cached_hash;
    _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
    return _aidl_status;
  }
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinderReference().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinderReference().get(),
    (FIRST_CALL_TRANSACTION + 16777213 /*getInterfaceHash*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | static_cast<int>(FLAG_PRIVATE_LOCAL)
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && ISuspendControlService::getDefaultImpl()) {
    _aidl_status = ISuspendControlService::getDefaultImpl()->getInterfaceHash(_aidl_return);
    goto _aidl_status_return;
  }
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AParcel_readStatusHeader(_aidl_out.get(), _aidl_status.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  if (!AStatus_isOk(_aidl_status.get())) goto _aidl_status_return;
  _aidl_ret_status = ::ndk::AParcel_readData(_aidl_out.get(), _aidl_return);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_cached_hash = *_aidl_return;
  _aidl_error:
  _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
  _aidl_status_return:
  return _aidl_status;
}
// Source for BnSuspendControlService
BnSuspendControlService::BnSuspendControlService() {}
BnSuspendControlService::~BnSuspendControlService() {}
::ndk::SpAIBinder BnSuspendControlService::createBinder() {
  AIBinder* binder = AIBinder_new(_g_aidl_android_system_suspend_ISuspendControlService_clazz, static_cast<void*>(this));
  #ifdef BINDER_STABILITY_SUPPORT
  AIBinder_markCompilationUnitStability(binder);
  #endif  // BINDER_STABILITY_SUPPORT
  return ::ndk::SpAIBinder(binder);
}
::ndk::ScopedAStatus BnSuspendControlService::getInterfaceVersion(int32_t* _aidl_return) {
  *_aidl_return = ISuspendControlService::version;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::ScopedAStatus BnSuspendControlService::getInterfaceHash(std::string* _aidl_return) {
  *_aidl_return = ISuspendControlService::hash;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
// Source for ISuspendControlService
const char* ISuspendControlService::descriptor = "android.system.suspend.ISuspendControlService";
ISuspendControlService::ISuspendControlService() {}
ISuspendControlService::~ISuspendControlService() {}


std::shared_ptr<ISuspendControlService> ISuspendControlService::fromBinder(const ::ndk::SpAIBinder& binder) {
  if (!AIBinder_associateClass(binder.get(), _g_aidl_android_system_suspend_ISuspendControlService_clazz)) {
    #if __ANDROID_API__ >= 31
    const AIBinder_Class* originalClass = AIBinder_getClass(binder.get());
    if (originalClass == nullptr) return nullptr;
    if (0 == strcmp(AIBinder_Class_getDescriptor(originalClass), descriptor)) {
      return ::ndk::SharedRefBase::make<BpSuspendControlService>(binder);
    }
    #endif
    return nullptr;
  }
  std::shared_ptr<::ndk::ICInterface> interface = ::ndk::ICInterface::asInterface(binder.get());
  if (interface) {
    return std::static_pointer_cast<ISuspendControlService>(interface);
  }
  return ::ndk::SharedRefBase::make<BpSuspendControlService>(binder);
}

binder_status_t ISuspendControlService::writeToParcel(AParcel* parcel, const std::shared_ptr<ISuspendControlService>& instance) {
  return AParcel_writeStrongBinder(parcel, instance ? instance->asBinder().get() : nullptr);
}
binder_status_t ISuspendControlService::readFromParcel(const AParcel* parcel, std::shared_ptr<ISuspendControlService>* instance) {
  ::ndk::SpAIBinder binder;
  binder_status_t status = AParcel_readStrongBinder(parcel, binder.getR());
  if (status != STATUS_OK) return status;
  *instance = ISuspendControlService::fromBinder(binder);
  return STATUS_OK;
}
bool ISuspendControlService::setDefaultImpl(const std::shared_ptr<ISuspendControlService>& impl) {
  // Only one user of this interface can use this function
  // at a time. This is a heuristic to detect if two different
  // users in the same process use this function.
  assert(!ISuspendControlService::default_impl);
  if (impl) {
    ISuspendControlService::default_impl = impl;
    return true;
  }
  return false;
}
const std::shared_ptr<ISuspendControlService>& ISuspendControlService::getDefaultImpl() {
  return ISuspendControlService::default_impl;
}
std::shared_ptr<ISuspendControlService> ISuspendControlService::default_impl = nullptr;
::ndk::ScopedAStatus ISuspendControlServiceDefault::registerCallback(const std::shared_ptr<::aidl::android::system::suspend::ISuspendCallback>& /*in_callback*/, bool* /*_aidl_return*/) {
  ::ndk::ScopedAStatus _aidl_status;
  _aidl_status.set(AStatus_fromStatus(STATUS_UNKNOWN_TRANSACTION));
  return _aidl_status;
}
::ndk::ScopedAStatus ISuspendControlServiceDefault::registerWakelockCallback(const std::shared_ptr<::aidl::android::system::suspend::IWakelockCallback>& /*in_callback*/, const std::string& /*in_name*/, bool* /*_aidl_return*/) {
  ::ndk::ScopedAStatus _aidl_status;
  _aidl_status.set(AStatus_fromStatus(STATUS_UNKNOWN_TRANSACTION));
  return _aidl_status;
}
::ndk::ScopedAStatus ISuspendControlServiceDefault::getInterfaceVersion(int32_t* _aidl_return) {
  *_aidl_return = 0;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::ScopedAStatus ISuspendControlServiceDefault::getInterfaceHash(std::string* _aidl_return) {
  *_aidl_return = "";
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::SpAIBinder ISuspendControlServiceDefault::asBinder() {
  return ::ndk::SpAIBinder();
}
bool ISuspendControlServiceDefault::isRemote() {
  return false;
}
}  // namespace suspend
}  // namespace system
}  // namespace android
}  // namespace aidl
