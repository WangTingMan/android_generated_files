/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash e9accf971a83a7829786ee24780fa7a5583b5dae -t --stability vintf --min_sdk_version 33 --ninja -d out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.cpp.d -h out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/bluetooth/lmp_event/aidl/android.hardware.bluetooth.lmp_event-V1-ndk-source/gen/staging -Nhardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1 hardware/interfaces/bluetooth/lmp_event/aidl/aidl_api/android.hardware.bluetooth.lmp_event/1/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.aidl
 *
 * DO NOT CHECK THIS FILE INTO A CODE TREE (e.g. git, etc..).
 * ALWAYS GENERATE THIS FILE FROM UPDATED AIDL COMPILER
 * AS A BUILD INTERMEDIATE ONLY. THIS IS NOT SOURCE CODE.
 */
#include "aidl/android/hardware/bluetooth/lmp_event/IBluetoothLmpEvent.h"

#include <android/binder_parcel_utils.h>
#include <aidl/android/hardware/bluetooth/lmp_event/BnBluetoothLmpEvent.h>
#include <aidl/android/hardware/bluetooth/lmp_event/BnBluetoothLmpEventCallback.h>
#include <aidl/android/hardware/bluetooth/lmp_event/BpBluetoothLmpEvent.h>
#include <aidl/android/hardware/bluetooth/lmp_event/BpBluetoothLmpEventCallback.h>
#include <aidl/android/hardware/bluetooth/lmp_event/IBluetoothLmpEventCallback.h>

namespace aidl {
namespace android {
namespace hardware {
namespace bluetooth {
namespace lmp_event {
static binder_status_t _aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_onTransact(AIBinder* _aidl_binder, transaction_code_t _aidl_code, const AParcel* _aidl_in, AParcel* _aidl_out) {
  (void)_aidl_in;
  (void)_aidl_out;
  binder_status_t _aidl_ret_status = STATUS_UNKNOWN_TRANSACTION;
  std::shared_ptr<BnBluetoothLmpEvent> _aidl_impl = std::static_pointer_cast<BnBluetoothLmpEvent>(::ndk::ICInterface::asInterface(_aidl_binder));
  switch (_aidl_code) {
    case (FIRST_CALL_TRANSACTION + 0 /*registerForLmpEvents*/): {
      std::shared_ptr<::aidl::android::hardware::bluetooth::lmp_event::IBluetoothLmpEventCallback> in_callback;
      ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType;
      std::array<uint8_t, 6> in_address;
      std::vector<::aidl::android::hardware::bluetooth::lmp_event::LmpEventId> in_lmpEventIds;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_callback);
      if (_aidl_ret_status != STATUS_OK) break;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_addressType);
      if (_aidl_ret_status != STATUS_OK) break;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_address);
      if (_aidl_ret_status != STATUS_OK) break;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_lmpEventIds);
      if (_aidl_ret_status != STATUS_OK) break;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->registerForLmpEvents(in_callback, in_addressType, in_address, in_lmpEventIds);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 1 /*unregisterLmpEvents*/): {
      ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType;
      std::array<uint8_t, 6> in_address;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_addressType);
      if (_aidl_ret_status != STATUS_OK) break;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_address);
      if (_aidl_ret_status != STATUS_OK) break;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->unregisterLmpEvents(in_addressType, in_address);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

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

static const char* _g_aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_clazz_code_to_function[] = { "registerForLmpEvents","unregisterLmpEvents",};
static AIBinder_Class* _g_aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_clazz = ::ndk::ICInterface::defineClass(IBluetoothLmpEvent::descriptor, _aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_onTransact, _g_aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_clazz_code_to_function, 2);

BpBluetoothLmpEvent::BpBluetoothLmpEvent(const ::ndk::SpAIBinder& binder) : BpCInterface(binder) {}
BpBluetoothLmpEvent::~BpBluetoothLmpEvent() {}

::ndk::ScopedAStatus BpBluetoothLmpEvent::registerForLmpEvents(const std::shared_ptr<::aidl::android::hardware::bluetooth::lmp_event::IBluetoothLmpEventCallback>& in_callback, ::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address, const std::vector<::aidl::android::hardware::bluetooth::lmp_event::LmpEventId>& in_lmpEventIds) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinderReference().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_callback);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_addressType);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_address);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_lmpEventIds);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinderReference().get(),
    (FIRST_CALL_TRANSACTION + 0 /*registerForLmpEvents*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | static_cast<int>(FLAG_PRIVATE_LOCAL)
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothLmpEvent::getDefaultImpl()) {
    _aidl_status = IBluetoothLmpEvent::getDefaultImpl()->registerForLmpEvents(in_callback, in_addressType, in_address, in_lmpEventIds);
    goto _aidl_status_return;
  }
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AParcel_readStatusHeader(_aidl_out.get(), _aidl_status.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  if (!AStatus_isOk(_aidl_status.get())) goto _aidl_status_return;
  _aidl_error:
  _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
  _aidl_status_return:
  return _aidl_status;
}
::ndk::ScopedAStatus BpBluetoothLmpEvent::unregisterLmpEvents(::aidl::android::hardware::bluetooth::lmp_event::AddressType in_addressType, const std::array<uint8_t, 6>& in_address) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinderReference().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_addressType);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_address);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinderReference().get(),
    (FIRST_CALL_TRANSACTION + 1 /*unregisterLmpEvents*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | static_cast<int>(FLAG_PRIVATE_LOCAL)
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothLmpEvent::getDefaultImpl()) {
    _aidl_status = IBluetoothLmpEvent::getDefaultImpl()->unregisterLmpEvents(in_addressType, in_address);
    goto _aidl_status_return;
  }
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AParcel_readStatusHeader(_aidl_out.get(), _aidl_status.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  if (!AStatus_isOk(_aidl_status.get())) goto _aidl_status_return;
  _aidl_error:
  _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
  _aidl_status_return:
  return _aidl_status;
}
::ndk::ScopedAStatus BpBluetoothLmpEvent::getInterfaceVersion(int32_t* _aidl_return) {
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
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothLmpEvent::getDefaultImpl()) {
    _aidl_status = IBluetoothLmpEvent::getDefaultImpl()->getInterfaceVersion(_aidl_return);
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
::ndk::ScopedAStatus BpBluetoothLmpEvent::getInterfaceHash(std::string* _aidl_return) {
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
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothLmpEvent::getDefaultImpl()) {
    _aidl_status = IBluetoothLmpEvent::getDefaultImpl()->getInterfaceHash(_aidl_return);
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
// Source for BnBluetoothLmpEvent
BnBluetoothLmpEvent::BnBluetoothLmpEvent() {}
BnBluetoothLmpEvent::~BnBluetoothLmpEvent() {}
::ndk::SpAIBinder BnBluetoothLmpEvent::createBinder() {
  AIBinder* binder = AIBinder_new(_g_aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_clazz, static_cast<void*>(this));
  #ifdef BINDER_STABILITY_SUPPORT
  AIBinder_markVintfStability(binder);
  #endif  // BINDER_STABILITY_SUPPORT
  return ::ndk::SpAIBinder(binder);
}
::ndk::ScopedAStatus BnBluetoothLmpEvent::getInterfaceVersion(int32_t* _aidl_return) {
  *_aidl_return = IBluetoothLmpEvent::version;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::ScopedAStatus BnBluetoothLmpEvent::getInterfaceHash(std::string* _aidl_return) {
  *_aidl_return = IBluetoothLmpEvent::hash;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
// Source for IBluetoothLmpEvent
const char* IBluetoothLmpEvent::descriptor = "android.hardware.bluetooth.lmp_event.IBluetoothLmpEvent";
IBluetoothLmpEvent::IBluetoothLmpEvent() {}
IBluetoothLmpEvent::~IBluetoothLmpEvent() {}


std::shared_ptr<IBluetoothLmpEvent> IBluetoothLmpEvent::fromBinder(const ::ndk::SpAIBinder& binder) {
  if (!AIBinder_associateClass(binder.get(), _g_aidl_android_hardware_bluetooth_lmp_event_IBluetoothLmpEvent_clazz)) {
    #if __ANDROID_API__ >= 31
    const AIBinder_Class* originalClass = AIBinder_getClass(binder.get());
    if (originalClass == nullptr) return nullptr;
    if (0 == strcmp(AIBinder_Class_getDescriptor(originalClass), descriptor)) {
      return ::ndk::SharedRefBase::make<BpBluetoothLmpEvent>(binder);
    }
    #endif
    return nullptr;
  }
  std::shared_ptr<::ndk::ICInterface> interface = ::ndk::ICInterface::asInterface(binder.get());
  if (interface) {
    return std::static_pointer_cast<IBluetoothLmpEvent>(interface);
  }
  return ::ndk::SharedRefBase::make<BpBluetoothLmpEvent>(binder);
}

binder_status_t IBluetoothLmpEvent::writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothLmpEvent>& instance) {
  return AParcel_writeStrongBinder(parcel, instance ? instance->asBinder().get() : nullptr);
}
binder_status_t IBluetoothLmpEvent::readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothLmpEvent>* instance) {
  ::ndk::SpAIBinder binder;
  binder_status_t status = AParcel_readStrongBinder(parcel, binder.getR());
  if (status != STATUS_OK) return status;
  *instance = IBluetoothLmpEvent::fromBinder(binder);
  return STATUS_OK;
}
bool IBluetoothLmpEvent::setDefaultImpl(const std::shared_ptr<IBluetoothLmpEvent>& impl) {
  // Only one user of this interface can use this function
  // at a time. This is a heuristic to detect if two different
  // users in the same process use this function.
  assert(!IBluetoothLmpEvent::default_impl);
  if (impl) {
    IBluetoothLmpEvent::default_impl = impl;
    return true;
  }
  return false;
}
const std::shared_ptr<IBluetoothLmpEvent>& IBluetoothLmpEvent::getDefaultImpl() {
  return IBluetoothLmpEvent::default_impl;
}
std::shared_ptr<IBluetoothLmpEvent> IBluetoothLmpEvent::default_impl = nullptr;
::ndk::ScopedAStatus IBluetoothLmpEventDefault::registerForLmpEvents(const std::shared_ptr<::aidl::android::hardware::bluetooth::lmp_event::IBluetoothLmpEventCallback>& /*in_callback*/, ::aidl::android::hardware::bluetooth::lmp_event::AddressType /*in_addressType*/, const std::array<uint8_t, 6>& /*in_address*/, const std::vector<::aidl::android::hardware::bluetooth::lmp_event::LmpEventId>& /*in_lmpEventIds*/) {
  ::ndk::ScopedAStatus _aidl_status;
  _aidl_status.set(AStatus_fromStatus(STATUS_UNKNOWN_TRANSACTION));
  return _aidl_status;
}
::ndk::ScopedAStatus IBluetoothLmpEventDefault::unregisterLmpEvents(::aidl::android::hardware::bluetooth::lmp_event::AddressType /*in_addressType*/, const std::array<uint8_t, 6>& /*in_address*/) {
  ::ndk::ScopedAStatus _aidl_status;
  _aidl_status.set(AStatus_fromStatus(STATUS_UNKNOWN_TRANSACTION));
  return _aidl_status;
}
::ndk::ScopedAStatus IBluetoothLmpEventDefault::getInterfaceVersion(int32_t* _aidl_return) {
  *_aidl_return = 0;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::ScopedAStatus IBluetoothLmpEventDefault::getInterfaceHash(std::string* _aidl_return) {
  *_aidl_return = "";
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::SpAIBinder IBluetoothLmpEventDefault::asBinder() {
  return ::ndk::SpAIBinder();
}
bool IBluetoothLmpEventDefault::isRemote() {
  return false;
}
}  // namespace lmp_event
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android
}  // namespace aidl
