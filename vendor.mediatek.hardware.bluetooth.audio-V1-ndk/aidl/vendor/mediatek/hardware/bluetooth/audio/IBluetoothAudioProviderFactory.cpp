/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 1 --hash d20fbfdf5a8fd5ffa178a1169e7fd7dad4a6e0a3 --stability vintf --min_sdk_version 31 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/common/fmq/aidl/android.hardware.common.fmq_interface/1/preprocessed.aidl -pout/soong/.intermediates/hardware/interfaces/audio/aidl/android.hardware.audio.common_interface/3/preprocessed.aidl --ninja -d out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.cpp.d -h out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/include/staging -o out/soong/.intermediates/vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/vendor.mediatek.hardware.bluetooth.audio-V1-ndk-source/gen/staging -Nvendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1 vendor/mediatek/proprietary/hardware/interfaces/bluetooth/audio/aidl/aidl_api/vendor.mediatek.hardware.bluetooth.audio/1/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.aidl
 */
#include "aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProviderFactory.h"

#include <android/binder_parcel_utils.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BnBluetoothAudioPort.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BnBluetoothAudioProvider.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BnBluetoothAudioProviderFactory.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BpBluetoothAudioPort.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BpBluetoothAudioProvider.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/BpBluetoothAudioProviderFactory.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioPort.h>
#include <aidl/vendor/mediatek/hardware/bluetooth/audio/IBluetoothAudioProvider.h>

namespace aidl {
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
static binder_status_t _aidl_vendor_mediatek_hardware_bluetooth_audio_IBluetoothAudioProviderFactory_onTransact(AIBinder* _aidl_binder, transaction_code_t _aidl_code, const AParcel* _aidl_in, AParcel* _aidl_out) {
  (void)_aidl_in;
  (void)_aidl_out;
  binder_status_t _aidl_ret_status = STATUS_UNKNOWN_TRANSACTION;
  std::shared_ptr<BnBluetoothAudioProviderFactory> _aidl_impl = std::static_pointer_cast<BnBluetoothAudioProviderFactory>(::ndk::ICInterface::asInterface(_aidl_binder));
  switch (_aidl_code) {
    case (FIRST_CALL_TRANSACTION + 0 /*getProviderCapabilities*/): {
      ::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType;
      std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities> _aidl_return;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_sessionType);
      if (_aidl_ret_status != STATUS_OK) break;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->getProviderCapabilitiesDetail(in_sessionType, &_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 1 /*openProvider*/): {
      ::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType;
      std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider> _aidl_return;

      _aidl_ret_status = ::ndk::AParcel_readData(_aidl_in, &in_sessionType);
      if (_aidl_ret_status != STATUS_OK) break;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->openProviderDetail(in_sessionType, &_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 16777214 /*getInterfaceVersion*/): {
      int32_t _aidl_return;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->getInterfaceVersionDetail(&_aidl_return);
      _aidl_ret_status = AParcel_writeStatusHeader(_aidl_out, _aidl_status.get());
      if (_aidl_ret_status != STATUS_OK) break;

      if (!AStatus_isOk(_aidl_status.get())) break;

      _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_out, _aidl_return);
      if (_aidl_ret_status != STATUS_OK) break;

      break;
    }
    case (FIRST_CALL_TRANSACTION + 16777213 /*getInterfaceHash*/): {
      std::string _aidl_return;

      ::ndk::ScopedAStatus _aidl_status = _aidl_impl->getInterfaceHashDetail(&_aidl_return);
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

static AIBinder_Class* _g_aidl_vendor_mediatek_hardware_bluetooth_audio_IBluetoothAudioProviderFactory_clazz = ::ndk::ICInterface::defineClass(IBluetoothAudioProviderFactory::descriptor, _aidl_vendor_mediatek_hardware_bluetooth_audio_IBluetoothAudioProviderFactory_onTransact);

BpBluetoothAudioProviderFactory::BpBluetoothAudioProviderFactory(const ::ndk::SpAIBinder& binder) : BpCInterface(binder) {
#ifdef _MSC_VER
    getInterfaceVersionDetailFun = std::bind( &BpBluetoothAudioProviderFactory::getInterfaceVersion, this, std::placeholders::_1 );
    getInterfaceHashDetailFun = std::bind( &BpBluetoothAudioProviderFactory::getInterfaceHash, this, std::placeholders::_1 );
    m_getProviderCapabilitiesFun = std::bind( &BpBluetoothAudioProviderFactory::getProviderCapabilities, this, std::placeholders::_1, std::placeholders::_2 );
    m_openProviderFun = std::bind( &BpBluetoothAudioProviderFactory::openProvider, this, std::placeholders::_1, std::placeholders::_2 );
#endif
}
BpBluetoothAudioProviderFactory::~BpBluetoothAudioProviderFactory() {}

::ndk::ScopedAStatus BpBluetoothAudioProviderFactory::getProviderCapabilities(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities>* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinder().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_sessionType);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinder().get(),
    (FIRST_CALL_TRANSACTION + 0 /*getProviderCapabilities*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | FLAG_PRIVATE_LOCAL
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothAudioProviderFactory::getDefaultImpl()) {
    _aidl_status = IBluetoothAudioProviderFactory::getDefaultImpl()->getProviderCapabilities(in_sessionType, _aidl_return);
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
::ndk::ScopedAStatus BpBluetoothAudioProviderFactory::openProvider(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType in_sessionType, std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider>* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinder().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = ::ndk::AParcel_writeData(_aidl_in.get(), in_sessionType);
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinder().get(),
    (FIRST_CALL_TRANSACTION + 1 /*openProvider*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | FLAG_PRIVATE_LOCAL
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothAudioProviderFactory::getDefaultImpl()) {
    _aidl_status = IBluetoothAudioProviderFactory::getDefaultImpl()->openProvider(in_sessionType, _aidl_return);
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
::ndk::ScopedAStatus BpBluetoothAudioProviderFactory::getInterfaceVersion(int32_t* _aidl_return) {
  binder_status_t _aidl_ret_status = STATUS_OK;
  ::ndk::ScopedAStatus _aidl_status;
  if (_aidl_cached_version != -1) {
    *_aidl_return = _aidl_cached_version;
    _aidl_status.set(AStatus_fromStatus(_aidl_ret_status));
    return _aidl_status;
  }
  ::ndk::ScopedAParcel _aidl_in;
  ::ndk::ScopedAParcel _aidl_out;

  _aidl_ret_status = AIBinder_prepareTransaction(asBinder().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinder().get(),
    (FIRST_CALL_TRANSACTION + 16777214 /*getInterfaceVersion*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | FLAG_PRIVATE_LOCAL
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothAudioProviderFactory::getDefaultImpl()) {
    _aidl_status = IBluetoothAudioProviderFactory::getDefaultImpl()->getInterfaceVersion(_aidl_return);
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
::ndk::ScopedAStatus BpBluetoothAudioProviderFactory::getInterfaceHash(std::string* _aidl_return) {
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

  _aidl_ret_status = AIBinder_prepareTransaction(asBinder().get(), _aidl_in.getR());
  if (_aidl_ret_status != STATUS_OK) goto _aidl_error;

  _aidl_ret_status = AIBinder_transact(
    asBinder().get(),
    (FIRST_CALL_TRANSACTION + 16777213 /*getInterfaceHash*/),
    _aidl_in.getR(),
    _aidl_out.getR(),
    0
    #ifdef BINDER_STABILITY_SUPPORT
    | FLAG_PRIVATE_LOCAL
    #endif  // BINDER_STABILITY_SUPPORT
    );
  if (_aidl_ret_status == STATUS_UNKNOWN_TRANSACTION && IBluetoothAudioProviderFactory::getDefaultImpl()) {
    _aidl_status = IBluetoothAudioProviderFactory::getDefaultImpl()->getInterfaceHash(_aidl_return);
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
// Source for BnBluetoothAudioProviderFactory
BnBluetoothAudioProviderFactory::BnBluetoothAudioProviderFactory() {
#ifdef _MSC_VER
    setBinderCreater( std::bind(&BnBluetoothAudioProviderFactory::createBinder, this) );
    getInterfaceVersionDetailFun = std::bind( &BnBluetoothAudioProviderFactory::getInterfaceVersion, this, std::placeholders::_1 );
    getInterfaceHashDetailFun = std::bind( &BnBluetoothAudioProviderFactory::getInterfaceHash, this, std::placeholders::_1 );
#endif
}

BnBluetoothAudioProviderFactory::~BnBluetoothAudioProviderFactory() {}
::ndk::SpAIBinder BnBluetoothAudioProviderFactory::createBinder() {
  AIBinder* binder = AIBinder_new(_g_aidl_vendor_mediatek_hardware_bluetooth_audio_IBluetoothAudioProviderFactory_clazz, static_cast<void*>(this));
  #ifdef BINDER_STABILITY_SUPPORT
  AIBinder_markVintfStability(binder);
  #endif  // BINDER_STABILITY_SUPPORT
  return ::ndk::SpAIBinder(binder);
}
::ndk::ScopedAStatus BnBluetoothAudioProviderFactory::getInterfaceVersion(int32_t* _aidl_return) {
  *_aidl_return = IBluetoothAudioProviderFactory::version;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::ScopedAStatus BnBluetoothAudioProviderFactory::getInterfaceHash(std::string* _aidl_return) {
  *_aidl_return = IBluetoothAudioProviderFactory::hash;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
// Source for IBluetoothAudioProviderFactory
IBluetoothAudioProviderFactory::IBluetoothAudioProviderFactory() {}
IBluetoothAudioProviderFactory::~IBluetoothAudioProviderFactory() {}


std::shared_ptr<IBluetoothAudioProviderFactory> IBluetoothAudioProviderFactory::fromBinder(const ::ndk::SpAIBinder& binder) {
  if (!AIBinder_associateClass(binder.get(), _g_aidl_vendor_mediatek_hardware_bluetooth_audio_IBluetoothAudioProviderFactory_clazz)) {
    #if __ANDROID_API__ >= 31
    const AIBinder_Class* originalClass = AIBinder_getClass(binder.get());
    if (originalClass == nullptr) return nullptr;
    if (0 == strcmp(AIBinder_Class_getDescriptor(originalClass), descriptor)) {
      return ::ndk::SharedRefBase::make<BpBluetoothAudioProviderFactory>(binder);
    }
    #endif
    return nullptr;
  }
  std::shared_ptr<::ndk::ICInterface> interface = ::ndk::ICInterface::asInterface(binder.get());
  if (interface) {
    return std::static_pointer_cast<IBluetoothAudioProviderFactory>(interface);
  }
  return ::ndk::SharedRefBase::make<BpBluetoothAudioProviderFactory>(binder);
}

binder_status_t IBluetoothAudioProviderFactory::writeToParcel(AParcel* parcel, const std::shared_ptr<IBluetoothAudioProviderFactory>& instance) {
  return AParcel_writeStrongBinder(parcel, instance ? instance->asBinder().get() : nullptr);
}
binder_status_t IBluetoothAudioProviderFactory::readFromParcel(const AParcel* parcel, std::shared_ptr<IBluetoothAudioProviderFactory>* instance) {
  ::ndk::SpAIBinder binder;
  binder_status_t status = AParcel_readStrongBinder(parcel, binder.getR());
  if (status != STATUS_OK) return status;
  *instance = IBluetoothAudioProviderFactory::fromBinder(binder);
  return STATUS_OK;
}
bool IBluetoothAudioProviderFactory::setDefaultImpl(const std::shared_ptr<IBluetoothAudioProviderFactory>& impl) {
  // Only one user of this interface can use this function
  // at a time. This is a heuristic to detect if two different
  // users in the same process use this function.
  assert(!IBluetoothAudioProviderFactory::default_impl);
  if (impl) {
    IBluetoothAudioProviderFactory::default_impl = impl;
    return true;
  }
  return false;
}
const std::shared_ptr<IBluetoothAudioProviderFactory>& IBluetoothAudioProviderFactory::getDefaultImpl() {
  return IBluetoothAudioProviderFactory::default_impl;
}
std::shared_ptr<IBluetoothAudioProviderFactory> IBluetoothAudioProviderFactory::default_impl = nullptr;
::ndk::ScopedAStatus IBluetoothAudioProviderFactoryDefault::getProviderCapabilities(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType /*in_sessionType*/, std::vector<::aidl::vendor::mediatek::hardware::bluetooth::audio::AudioCapabilities>* /*_aidl_return*/) {
  ::ndk::ScopedAStatus _aidl_status;
  _aidl_status.set(AStatus_fromStatus(STATUS_UNKNOWN_TRANSACTION));
  return _aidl_status;
}
::ndk::ScopedAStatus IBluetoothAudioProviderFactoryDefault::openProvider(::aidl::vendor::mediatek::hardware::bluetooth::audio::SessionType /*in_sessionType*/, std::shared_ptr<::aidl::vendor::mediatek::hardware::bluetooth::audio::IBluetoothAudioProvider>* /*_aidl_return*/) {
  ::ndk::ScopedAStatus _aidl_status;
  _aidl_status.set(AStatus_fromStatus(STATUS_UNKNOWN_TRANSACTION));
  return _aidl_status;
}
::ndk::ScopedAStatus IBluetoothAudioProviderFactoryDefault::getInterfaceVersion(int32_t* _aidl_return) {
  *_aidl_return = 0;
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::ScopedAStatus IBluetoothAudioProviderFactoryDefault::getInterfaceHash(std::string* _aidl_return) {
  *_aidl_return = "";
  return ::ndk::ScopedAStatus(AStatus_newOk());
}
::ndk::SpAIBinder IBluetoothAudioProviderFactoryDefault::asBinder() {
  return ::ndk::SpAIBinder();
}
bool IBluetoothAudioProviderFactoryDefault::isRemote() {
  return false;
}
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
}  // namespace aidl
