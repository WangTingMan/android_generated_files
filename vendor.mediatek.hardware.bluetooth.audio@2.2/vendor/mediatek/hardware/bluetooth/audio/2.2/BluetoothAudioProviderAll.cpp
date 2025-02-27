#define LOG_TAG "vendor.mediatek.hardware.bluetooth.audio@2.2::BluetoothAudioProvider"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.2/BpHwBluetoothAudioProvider.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.2/BnHwBluetoothAudioProvider.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.2/BsBluetoothAudioProvider.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.1/BpHwBluetoothAudioProvider.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_2 {

const char* IBluetoothAudioProvider::descriptor("vendor.mediatek.hardware.bluetooth.audio@2.2::IBluetoothAudioProvider");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IBluetoothAudioProvider::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwBluetoothAudioProvider(static_cast<IBluetoothAudioProvider *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IBluetoothAudioProvider::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsBluetoothAudioProvider(static_cast<IBluetoothAudioProvider *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IBluetoothAudioProvider::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IBluetoothAudioProvider::descriptor);
}

// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider follow.
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::startSession(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& audioConfig, startSession_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::streamStarted(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::streamSuspended(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::endSession()
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::enterGameMode(uint8_t enter)

// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::startSession_2_1(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& audioConfig, startSession_2_1_cb _hidl_cb)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudioProvider::updataConnParam(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& connPrameter)

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IBluetoothAudioProvider::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider::descriptor,
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudioProvider::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudioProvider::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudioProvider::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){222,110,179,161,130,47,31,217,129,110,86,97,11,16,211,234,199,42,54,220,165,175,1,58,48,187,54,196,221,28,24,69} /* de6eb3a1822f1fd9816e56610b10d3eac72a36dca5af013a30bb36c4dd1c1845 */,
        (uint8_t[32]){201,144,191,138,228,94,59,243,193,132,129,107,5,55,196,119,189,161,163,18,174,197,50,235,219,19,236,25,218,164,25,245} /* c990bf8ae45e3bf3c184816b0537c477bda1a312aec532ebdb13ec19daa419f5 */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudioProvider::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IBluetoothAudioProvider::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IBluetoothAudioProvider::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudioProvider::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hidl::base::V1_0::DebugInfo info = {};
    info.pid = -1;
    info.ptr = 0;
    info.arch = 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    ;
    _hidl_cb(info);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudioProvider::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IBluetoothAudioProvider::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider>> IBluetoothAudioProvider::castFrom(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider>> IBluetoothAudioProvider::castFrom(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IBluetoothAudioProvider, ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider, BpHwBluetoothAudioProvider>(
            parent, "vendor.mediatek.hardware.bluetooth.audio@2.2::IBluetoothAudioProvider", emitError);
}

::android::hardware::Return<::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider>> IBluetoothAudioProvider::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IBluetoothAudioProvider, ::android::hidl::base::V1_0::IBase, BpHwBluetoothAudioProvider>(
            parent, "vendor.mediatek.hardware.bluetooth.audio@2.2::IBluetoothAudioProvider", emitError);
}

BpHwBluetoothAudioProvider::BpHwBluetoothAudioProvider(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IBluetoothAudioProvider>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("vendor.mediatek.hardware.bluetooth.audio@2.2", "IBluetoothAudioProvider") {
}

void BpHwBluetoothAudioProvider::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IBluetoothAudioProvider>::onLastStrongRef(id);
}
// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
::android::hardware::Return<void> BpHwBluetoothAudioProvider::_hidl_startSession_2_1(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& audioConfig, startSession_2_1_cb _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudioProvider::startSession_2_1::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&hostIf);
        _hidl_args.push_back((void *)&audioConfig);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "startSession_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudioProvider::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (hostIf == nullptr) {
        _hidl_err = _hidl_data.writeStrongBinder(nullptr);
    } else {
        ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::getOrCreateCachedBinder(hostIf.get());
        if (_hidl_binder.get() != nullptr) {
            _hidl_err = _hidl_data.writeStrongBinder(_hidl_binder);
        } else {
            _hidl_err = ::android::UNKNOWN_ERROR;
        }
    }
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_audioConfig_parent;

    _hidl_err = _hidl_data.writeBuffer(&audioConfig, sizeof(audioConfig), &_hidl_audioConfig_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    ::android::hardware::ProcessState::self()->startThreadPool();
    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(6 /* startSession_2_1 */, _hidl_data, &_hidl_reply, 0 /* flags */, [&] (::android::hardware::Parcel& _hidl_reply) {
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status _hidl_out_status;
        const ::android::hardware::MQDescriptorSync<uint8_t>* _hidl_out_dataMQ;


        _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
        if (_hidl_err != ::android::OK) { return; }

        if (!_hidl_status.isOk()) { return; }

        _hidl_err = _hidl_reply.readUint8((uint8_t *)&_hidl_out_status);
        if (_hidl_err != ::android::OK) { return; }

        size_t _hidl__hidl_out_dataMQ_parent;

        _hidl_err = _hidl_reply.readBuffer(sizeof(*_hidl_out_dataMQ), &_hidl__hidl_out_dataMQ_parent,  reinterpret_cast<const void **>(&_hidl_out_dataMQ));

        if (_hidl_err != ::android::OK) { return; }

        _hidl_err = ::android::hardware::readEmbeddedFromParcel(
                const_cast<::android::hardware::MQDescriptorSync<uint8_t> &>(*_hidl_out_dataMQ),
                _hidl_reply,
                _hidl__hidl_out_dataMQ_parent,
                0 /* parentOffset */);

        if (_hidl_err != ::android::OK) { return; }

        _hidl_cb(_hidl_out_status, *_hidl_out_dataMQ);

        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            _hidl_args.push_back((void *)_hidl_out_dataMQ);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::CLIENT_API_EXIT, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "startSession_2_1", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

    });
    if (_hidl_transact_err != ::android::OK) {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    if (!_hidl_status.isOk()) { return _hidl_status; }
    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::_hidl_updataConnParam(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& connPrameter) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudioProvider::updataConnParam::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&connPrameter);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "updataConnParam", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudioProvider::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_connPrameter_parent;

    _hidl_err = _hidl_data.writeBuffer(&connPrameter, sizeof(connPrameter), &_hidl_connPrameter_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(7 /* updataConnParam */, _hidl_data, &_hidl_reply, 0 /* flags */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    _hidl_err = ::android::hardware::readFromParcel(&_hidl_status, _hidl_reply);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (!_hidl_status.isOk()) { return _hidl_status; }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "updataConnParam", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}


// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider follow.
::android::hardware::Return<void> BpHwBluetoothAudioProvider::startSession(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& audioConfig, startSession_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_startSession(this, this, hostIf, audioConfig, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::streamStarted(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_streamStarted(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::streamSuspended(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_streamSuspended(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::endSession(){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_endSession(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::enterGameMode(uint8_t enter){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioProvider::_hidl_enterGameMode(this, this, enter);

    return _hidl_out;
}


// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
::android::hardware::Return<void> BpHwBluetoothAudioProvider::startSession_2_1(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& audioConfig, startSession_2_1_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_2::BpHwBluetoothAudioProvider::_hidl_startSession_2_1(this, this, hostIf, audioConfig, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::updataConnParam(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& connPrameter){
    ::android::hardware::Return<void>  _hidl_out = ::vendor::mediatek::hardware::bluetooth::audio::V2_2::BpHwBluetoothAudioProvider::_hidl_updataConnParam(this, this, connPrameter);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwBluetoothAudioProvider::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwBluetoothAudioProvider::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudioProvider::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwBluetoothAudioProvider::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    for (auto it = _hidl_mDeathRecipients.rbegin();it != _hidl_mDeathRecipients.rend();++it) {
        if ((*it)->getRecipient() == recipient) {
            ::android::status_t status = remote()->unlinkToDeath(*it);
            _hidl_mDeathRecipients.erase(it.base()-1);
            return status == ::android::OK;
        }
    }
    return false;
}


BnHwBluetoothAudioProvider::BnHwBluetoothAudioProvider(const ::android::sp<IBluetoothAudioProvider> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "vendor.mediatek.hardware.bluetooth.audio@2.2", "IBluetoothAudioProvider") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwBluetoothAudioProvider::~BnHwBluetoothAudioProvider() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
::android::status_t BnHwBluetoothAudioProvider::_hidl_startSession_2_1(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudioProvider::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort> hostIf;
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration* audioConfig;

    {
        ::android::sp<::android::hardware::IBinder> _hidl_binder;
        _hidl_err = _hidl_data.readNullableStrongBinder(&_hidl_binder);
        if (_hidl_err != ::android::OK) { return _hidl_err; }

        hostIf = ::android::hardware::fromBinder<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort,::vendor::mediatek::hardware::bluetooth::audio::V2_1::BpHwBluetoothAudioPort,::vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioPort>(_hidl_binder);
    }

    size_t _hidl_audioConfig_parent;

    _hidl_err = _hidl_data.readBuffer(sizeof(*audioConfig), &_hidl_audioConfig_parent,  const_cast<const void**>(reinterpret_cast<void **>(&audioConfig)));
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioProvider::startSession_2_1::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&hostIf);
        _hidl_args.push_back((void *)audioConfig);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "startSession_2_1", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    bool _hidl_callbackCalled = false;

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudioProvider*>(_hidl_this->getImpl().get())->startSession_2_1(hostIf, *audioConfig, [&](const auto &_hidl_out_status, const auto &_hidl_out_dataMQ) {
        if (_hidl_callbackCalled) {
            LOG_ALWAYS_FATAL("startSession_2_1: _hidl_cb called a second time, but must be called once.");
        }
        _hidl_callbackCalled = true;

        ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

        _hidl_err = _hidl_reply->writeUint8((uint8_t)_hidl_out_status);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        size_t _hidl__hidl_out_dataMQ_parent;

        _hidl_err = _hidl_reply->writeBuffer(&_hidl_out_dataMQ, sizeof(_hidl_out_dataMQ), &_hidl__hidl_out_dataMQ_parent);
        if (_hidl_err != ::android::OK) { goto _hidl_error; }

        _hidl_err = ::android::hardware::writeEmbeddedToParcel(
                _hidl_out_dataMQ,
                _hidl_reply,
                _hidl__hidl_out_dataMQ_parent,
                0 /* parentOffset */);

        if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_error:
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_status);
            _hidl_args.push_back((void *)&_hidl_out_dataMQ);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::SERVER_API_EXIT, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "startSession_2_1", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        if (_hidl_err != ::android::OK) { return; }
        _hidl_cb(*_hidl_reply);
    });

    _hidl_ret.assertOk();
    if (!_hidl_callbackCalled) {
        LOG_ALWAYS_FATAL("startSession_2_1: _hidl_cb not called, but must be called once.");
    }

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudioProvider::_hidl_updataConnParam(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudioProvider::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam* connPrameter;

    size_t _hidl_connPrameter_parent;

    _hidl_err = _hidl_data.readBuffer(sizeof(*connPrameter), &_hidl_connPrameter_parent,  const_cast<const void**>(reinterpret_cast<void **>(&connPrameter)));
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioProvider::updataConnParam::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)connPrameter);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "updataConnParam", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudioProvider*>(_hidl_this->getImpl().get())->updataConnParam(*connPrameter);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "vendor.mediatek.hardware.bluetooth.audio", "2.2", "IBluetoothAudioProvider", "updataConnParam", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}


// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider follow.

// Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwBluetoothAudioProvider::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwBluetoothAudioProvider::getDebugInfo(getDebugInfo_cb _hidl_cb) {
    ::android::hidl::base::V1_0::DebugInfo info = {};
    info.pid = ::android::hardware::details::getPidIfSharable();
    info.ptr = ::android::hardware::details::debuggable()? reinterpret_cast<uint64_t>(this) : 0;
    info.arch = 
    #if defined(__LP64__)
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_64BIT
    #else
    ::android::hidl::base::V1_0::DebugInfo::Architecture::IS_32BIT
    #endif
    ;
    _hidl_cb(info);
    return ::android::hardware::Void();
}

::android::status_t BnHwBluetoothAudioProvider::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* startSession */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_startSession(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* streamStarted */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_streamStarted(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* streamSuspended */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_streamSuspended(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* endSession */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_endSession(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* enterGameMode */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BnHwBluetoothAudioProvider::_hidl_enterGameMode(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* startSession_2_1 */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_2::BnHwBluetoothAudioProvider::_hidl_startSession_2_1(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* updataConnParam */:
        {
            _hidl_err = ::vendor::mediatek::hardware::bluetooth::audio::V2_2::BnHwBluetoothAudioProvider::_hidl_updataConnParam(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        default:
        {
            return ::android::hidl::base::V1_0::BnHwBase::onTransact(
                    _hidl_code, _hidl_data, _hidl_reply, _hidl_flags, _hidl_cb);
        }
    }

    if (_hidl_err == ::android::UNEXPECTED_NULL) {
        _hidl_err = ::android::hardware::writeToParcel(
                ::android::hardware::Status::fromExceptionCode(::android::hardware::Status::EX_NULL_POINTER),
                _hidl_reply);
    }return _hidl_err;
}

BsBluetoothAudioProvider::BsBluetoothAudioProvider(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider> impl) : ::android::hardware::details::HidlInstrumentor("vendor.mediatek.hardware.bluetooth.audio@2.2", "IBluetoothAudioProvider"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsBluetoothAudioProvider::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IBluetoothAudioProvider> IBluetoothAudioProvider::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwBluetoothAudioProvider>(serviceName, false, getStub);
}

::android::sp<IBluetoothAudioProvider> IBluetoothAudioProvider::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwBluetoothAudioProvider>(serviceName, true, getStub);
}

::android::status_t IBluetoothAudioProvider::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IBluetoothAudioProvider::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("vendor.mediatek.hardware.bluetooth.audio@2.2::IBluetoothAudioProvider",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_2
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
