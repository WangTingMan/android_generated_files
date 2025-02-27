#define LOG_TAG "com.qualcomm.qti.bluetooth_audio@1.0::BluetoothAudio"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <android/hidl/manager/1.0/IServiceManager.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/BpHwBluetoothAudio.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/BnHwBluetoothAudio.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/BsBluetoothAudio.h>
#include <android/hidl/base/1.0/BpHwBase.h>
#include <hidl/ServiceManagement.h>

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

const char* IBluetoothAudio::descriptor("com.qualcomm.qti.bluetooth_audio@1.0::IBluetoothAudio");

__attribute__((constructor)) static void static_constructor() {
    ::android::hardware::details::getBnConstructorMap().set(IBluetoothAudio::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hardware::IBinder> {
                return new BnHwBluetoothAudio(static_cast<IBluetoothAudio *>(iIntf));
            });
    ::android::hardware::details::getBsConstructorMap().set(IBluetoothAudio::descriptor,
            [](void *iIntf) -> ::android::sp<::android::hidl::base::V1_0::IBase> {
                return new BsBluetoothAudio(static_cast<IBluetoothAudio *>(iIntf));
            });
}

__attribute__((destructor))static void static_destructor() {
    ::android::hardware::details::getBnConstructorMap().erase(IBluetoothAudio::descriptor);
    ::android::hardware::details::getBsConstructorMap().erase(IBluetoothAudio::descriptor);
}

// Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::initialize_callbacks(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks>& callback)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_started(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_suspended(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_stopped(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_get_codec_config(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status, const ::android::hardware::hidl_vec<uint8_t>& codec_cfg)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_check_ready(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_get_multicast_status(uint8_t state)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_get_num_connected_devices(uint8_t num_dev)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_get_connection_status(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::a2dp_on_get_sink_latency(uint16_t sink_latency)
// no default implementation for: ::android::hardware::Return<void> IBluetoothAudio::deinitialize_callbacks()

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> IBluetoothAudio::interfaceChain(interfaceChain_cb _hidl_cb){
    _hidl_cb({
        ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio::descriptor,
        ::android::hidl::base::V1_0::IBase::descriptor,
    });
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudio::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    (void)fd;
    (void)options;
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudio::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    _hidl_cb(::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio::descriptor);
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudio::getHashChain(getHashChain_cb _hidl_cb){
    _hidl_cb({
        (uint8_t[32]){165,198,93,233,242,200,7,191,61,192,119,226,59,165,64,203,115,122,250,116,55,233,44,207,27,218,129,13,86,88,106,231} /* a5c65de9f2c807bf3dc077e23ba540cb737afa7437e92ccf1bda810d56586ae7 */,
        (uint8_t[32]){236,127,215,158,208,45,250,133,188,73,148,38,173,174,62,190,35,239,5,36,243,205,105,87,19,147,36,184,59,24,202,76} /* ec7fd79ed02dfa85bc499426adae3ebe23ef0524f3cd6957139324b83b18ca4c */});
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudio::setHALInstrumentation(){
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IBluetoothAudio::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    (void)cookie;
    return (recipient != nullptr);
}

::android::hardware::Return<void> IBluetoothAudio::ping(){
    return ::android::hardware::Void();
}

::android::hardware::Return<void> IBluetoothAudio::getDebugInfo(getDebugInfo_cb _hidl_cb){
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

::android::hardware::Return<void> IBluetoothAudio::notifySyspropsChanged(){
    ::android::report_sysprop_change();
    return ::android::hardware::Void();
}

::android::hardware::Return<bool> IBluetoothAudio::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
    return (recipient != nullptr);
}


::android::hardware::Return<::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>> IBluetoothAudio::castFrom(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>& parent, bool /* emitError */) {
    return parent;
}

::android::hardware::Return<::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>> IBluetoothAudio::castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError) {
    return ::android::hardware::details::castInterface<IBluetoothAudio, ::android::hidl::base::V1_0::IBase, BpHwBluetoothAudio>(
            parent, "com.qualcomm.qti.bluetooth_audio@1.0::IBluetoothAudio", emitError);
}

BpHwBluetoothAudio::BpHwBluetoothAudio(const ::android::sp<::android::hardware::IBinder> &_hidl_impl)
        : BpInterface<IBluetoothAudio>(_hidl_impl),
          ::android::hardware::details::HidlInstrumentor("com.qualcomm.qti.bluetooth_audio@1.0", "IBluetoothAudio") {
}

void BpHwBluetoothAudio::onLastStrongRef(const void* id) {
    {
        std::unique_lock<std::mutex> lock(_hidl_mMutex);
        _hidl_mDeathRecipients.clear();
    }

    BpInterface<IBluetoothAudio>::onLastStrongRef(id);
}
// Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.
::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_initialize_callbacks(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks>& callback) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::initialize_callbacks::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&callback);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "initialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    if (callback == nullptr) {
        _hidl_err = _hidl_data.writeStrongBinder(nullptr);
    } else {
        ::android::sp<::android::hardware::IBinder> _hidl_binder = ::android::hardware::getOrCreateCachedBinder(callback.get());
        if (_hidl_binder.get() != nullptr) {
            _hidl_err = _hidl_data.writeStrongBinder(_hidl_binder);
        } else {
            _hidl_err = ::android::UNKNOWN_ERROR;
        }
    }
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    ::android::hardware::ProcessState::self()->startThreadPool();
    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(1 /* initialize_callbacks */, _hidl_data, &_hidl_reply, 0 /* flags */);
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
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "initialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_started(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_started::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_started", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(2 /* a2dp_on_started */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_started", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_suspended(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_suspended::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_suspended", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(3 /* a2dp_on_suspended */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_suspended", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_stopped(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_stopped::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_stopped", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(4 /* a2dp_on_stopped */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_stopped", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_get_codec_config(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status, const ::android::hardware::hidl_vec<uint8_t>& codec_cfg) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_codec_config::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        _hidl_args.push_back((void *)&codec_cfg);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_codec_config", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_codec_cfg_parent;

    _hidl_err = _hidl_data.writeBuffer(&codec_cfg, sizeof(codec_cfg), &_hidl_codec_cfg_parent);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    size_t _hidl_codec_cfg_child;

    _hidl_err = ::android::hardware::writeEmbeddedToParcel(
            codec_cfg,
            &_hidl_data,
            _hidl_codec_cfg_parent,
            0 /* parentOffset */, &_hidl_codec_cfg_child);

    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(5 /* a2dp_on_get_codec_config */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_codec_config", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_check_ready(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_check_ready::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_check_ready", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(6 /* a2dp_on_check_ready */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_check_ready", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_get_multicast_status(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t state) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_multicast_status::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&state);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_multicast_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8(state);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(7 /* a2dp_on_get_multicast_status */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_multicast_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_get_num_connected_devices(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t num_dev) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_num_connected_devices::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&num_dev);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_num_connected_devices", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8(num_dev);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(8 /* a2dp_on_get_num_connected_devices */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_num_connected_devices", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_get_connection_status(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_connection_status::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_connection_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint8((uint8_t)status);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(9 /* a2dp_on_get_connection_status */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_connection_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_a2dp_on_get_sink_latency(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint16_t sink_latency) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_sink_latency::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&sink_latency);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_sink_latency", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_err = _hidl_data.writeUint16(sink_latency);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(10 /* a2dp_on_get_sink_latency */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_sink_latency", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}

::android::hardware::Return<void> BpHwBluetoothAudio::_hidl_deinitialize_callbacks(::android::hardware::IInterface *_hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this_instrumentor->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this_instrumentor->getInstrumentationCallbacks();
    #else
    (void) _hidl_this_instrumentor;
    #endif // __ANDROID_DEBUGGABLE__
    ::android::ScopedTrace PASTE(___tracer, __LINE__) (ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::deinitialize_callbacks::client");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "deinitialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Parcel _hidl_data;
    ::android::hardware::Parcel _hidl_reply;
    ::android::status_t _hidl_err;
    ::android::status_t _hidl_transact_err;
    ::android::hardware::Status _hidl_status;

    _hidl_err = _hidl_data.writeInterfaceToken(BpHwBluetoothAudio::descriptor);
    if (_hidl_err != ::android::OK) { goto _hidl_error; }

    _hidl_transact_err = ::android::hardware::IInterface::asBinder(_hidl_this)->transact(11 /* deinitialize_callbacks */, _hidl_data, &_hidl_reply, 0 /* flags */ | 1u /* oneway */);
    if (_hidl_transact_err != ::android::OK) 
    {
        _hidl_err = _hidl_transact_err;
        goto _hidl_error;
    }

    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::CLIENT_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "deinitialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    return ::android::hardware::Return<void>();

_hidl_error:
    _hidl_status.setFromStatusT(_hidl_err);
    return ::android::hardware::Return<void>(_hidl_status);
}


// Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.
::android::hardware::Return<void> BpHwBluetoothAudio::initialize_callbacks(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks>& callback){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_initialize_callbacks(this, this, callback);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_started(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_started(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_suspended(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_suspended(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_stopped(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_stopped(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_get_codec_config(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status, const ::android::hardware::hidl_vec<uint8_t>& codec_cfg){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_get_codec_config(this, this, status, codec_cfg);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_check_ready(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_check_ready(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_get_multicast_status(uint8_t state){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_get_multicast_status(this, this, state);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_get_num_connected_devices(uint8_t num_dev){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_get_num_connected_devices(this, this, num_dev);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_get_connection_status(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_get_connection_status(this, this, status);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::a2dp_on_get_sink_latency(uint16_t sink_latency){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_a2dp_on_get_sink_latency(this, this, sink_latency);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::deinitialize_callbacks(){
    ::android::hardware::Return<void>  _hidl_out = ::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudio::_hidl_deinitialize_callbacks(this, this);

    return _hidl_out;
}


// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BpHwBluetoothAudio::interfaceChain(interfaceChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_debug(this, this, fd, options);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::interfaceDescriptor(interfaceDescriptor_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_interfaceDescriptor(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::getHashChain(getHashChain_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getHashChain(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::setHALInstrumentation(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_setHALInstrumentation(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwBluetoothAudio::linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie){
    ::android::hardware::ProcessState::self()->startThreadPool();
    ::android::hardware::hidl_binder_death_recipient *binder_recipient = new ::android::hardware::hidl_binder_death_recipient(recipient, cookie, this);
    std::unique_lock<std::mutex> lock(_hidl_mMutex);
    _hidl_mDeathRecipients.push_back(binder_recipient);
    return (remote()->linkToDeath(binder_recipient) == ::android::OK);
}

::android::hardware::Return<void> BpHwBluetoothAudio::ping(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_ping(this, this);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::getDebugInfo(getDebugInfo_cb _hidl_cb){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_getDebugInfo(this, this, _hidl_cb);

    return _hidl_out;
}

::android::hardware::Return<void> BpHwBluetoothAudio::notifySyspropsChanged(){
    ::android::hardware::Return<void>  _hidl_out = ::android::hidl::base::V1_0::BpHwBase::_hidl_notifySyspropsChanged(this, this);

    return _hidl_out;
}

::android::hardware::Return<bool> BpHwBluetoothAudio::unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient){
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


BnHwBluetoothAudio::BnHwBluetoothAudio(const ::android::sp<IBluetoothAudio> &_hidl_impl)
        : ::android::hidl::base::V1_0::BnHwBase(_hidl_impl, "com.qualcomm.qti.bluetooth_audio@1.0", "IBluetoothAudio") { 
            _hidl_mImpl = _hidl_impl;
            auto prio = ::android::hardware::getMinSchedulerPolicy(_hidl_impl);
            mSchedPolicy = prio.sched_policy;
            mSchedPriority = prio.prio;
            setRequestingSid(::android::hardware::getRequestingSid(_hidl_impl));
}

BnHwBluetoothAudio::~BnHwBluetoothAudio() {
    ::android::hardware::details::gBnMap->eraseIfEqual(_hidl_mImpl.get(), this);
}

// Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.
::android::status_t BnHwBluetoothAudio::_hidl_initialize_callbacks(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks> callback;

    {
        ::android::sp<::android::hardware::IBinder> _hidl_binder;
        _hidl_err = _hidl_data.readNullableStrongBinder(&_hidl_binder);
        if (_hidl_err != ::android::OK) { return _hidl_err; }

        callback = ::android::hardware::fromBinder<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks,::com::qualcomm::qti::bluetooth_audio::V1_0::BpHwBluetoothAudioCallbacks,::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudioCallbacks>(_hidl_binder);
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::initialize_callbacks::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&callback);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "initialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->initialize_callbacks(callback);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "initialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_started(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status;

    _hidl_err = _hidl_data.readUint8((uint8_t *)&status);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_started::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_started", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_started(status);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_started", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_suspended(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status;

    _hidl_err = _hidl_data.readUint8((uint8_t *)&status);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_suspended::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_suspended", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_suspended(status);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_suspended", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_stopped(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status;

    _hidl_err = _hidl_data.readUint8((uint8_t *)&status);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_stopped::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_stopped", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_stopped(status);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_stopped", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_get_codec_config(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status;
    const ::android::hardware::hidl_vec<uint8_t>* codec_cfg;

    _hidl_err = _hidl_data.readUint8((uint8_t *)&status);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_codec_cfg_parent;

    _hidl_err = _hidl_data.readBuffer(sizeof(*codec_cfg), &_hidl_codec_cfg_parent,  reinterpret_cast<const void **>(&codec_cfg));

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    size_t _hidl_codec_cfg_child;

    _hidl_err = ::android::hardware::readEmbeddedFromParcel(
            const_cast<::android::hardware::hidl_vec<uint8_t> &>(*codec_cfg),
            _hidl_data,
            _hidl_codec_cfg_parent,
            0 /* parentOffset */, &_hidl_codec_cfg_child);

    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_codec_config::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        _hidl_args.push_back((void *)codec_cfg);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_codec_config", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_get_codec_config(status, *codec_cfg);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_codec_config", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_check_ready(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status;

    _hidl_err = _hidl_data.readUint8((uint8_t *)&status);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_check_ready::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_check_ready", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_check_ready(status);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_check_ready", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_get_multicast_status(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint8_t state;

    _hidl_err = _hidl_data.readUint8(&state);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_multicast_status::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&state);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_multicast_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_get_multicast_status(state);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_multicast_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_get_num_connected_devices(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint8_t num_dev;

    _hidl_err = _hidl_data.readUint8(&num_dev);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_num_connected_devices::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&num_dev);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_num_connected_devices", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_get_num_connected_devices(num_dev);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_num_connected_devices", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_get_connection_status(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status;

    _hidl_err = _hidl_data.readUint8((uint8_t *)&status);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_connection_status::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&status);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_connection_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_get_connection_status(status);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_connection_status", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_a2dp_on_get_sink_latency(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    uint16_t sink_latency;

    _hidl_err = _hidl_data.readUint16(&sink_latency);
    if (_hidl_err != ::android::OK) { return _hidl_err; }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::a2dp_on_get_sink_latency::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        _hidl_args.push_back((void *)&sink_latency);
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_sink_latency", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->a2dp_on_get_sink_latency(sink_latency);

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "a2dp_on_get_sink_latency", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}

::android::status_t BnHwBluetoothAudio::_hidl_deinitialize_callbacks(
        ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        TransactCallback _hidl_cb) {
    #ifdef __ANDROID_DEBUGGABLE__
    bool mEnableInstrumentation = _hidl_this->isInstrumentationEnabled();
    const auto &mInstrumentationCallbacks = _hidl_this->getInstrumentationCallbacks();
    #endif // __ANDROID_DEBUGGABLE__

    ::android::status_t _hidl_err = ::android::OK;
    if (!_hidl_data.enforceInterface(BnHwBluetoothAudio::Pure::descriptor)) {
        _hidl_err = ::android::BAD_TYPE;
        return _hidl_err;
    }

    atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudio::deinitialize_callbacks::server");
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "deinitialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    ::android::hardware::Return<void> _hidl_ret = static_cast<IBluetoothAudio*>(_hidl_this->getImpl().get())->deinitialize_callbacks();

    (void) _hidl_cb;

    atrace_end(ATRACE_TAG_HAL);
    #ifdef __ANDROID_DEBUGGABLE__
    if (UNLIKELY(mEnableInstrumentation)) {
        std::vector<void *> _hidl_args;
        for (const auto &callback: mInstrumentationCallbacks) {
            callback(InstrumentationEvent::SERVER_API_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudio", "deinitialize_callbacks", &_hidl_args);
        }
    }
    #endif // __ANDROID_DEBUGGABLE__

    _hidl_ret.assertOk();
    ::android::hardware::writeToParcel(::android::hardware::Status::ok(), _hidl_reply);

    return _hidl_err;
}


// Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.

// Methods from ::android::hidl::base::V1_0::IBase follow.
::android::hardware::Return<void> BnHwBluetoothAudio::ping() {
    return ::android::hardware::Void();
}
::android::hardware::Return<void> BnHwBluetoothAudio::getDebugInfo(getDebugInfo_cb _hidl_cb) {
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

::android::status_t BnHwBluetoothAudio::onTransact(
        uint32_t _hidl_code,
        const ::android::hardware::Parcel &_hidl_data,
        ::android::hardware::Parcel *_hidl_reply,
        uint32_t _hidl_flags,
        TransactCallback _hidl_cb) {
    ::android::status_t _hidl_err = ::android::OK;

    switch (_hidl_code) {
        case 1 /* initialize_callbacks */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_initialize_callbacks(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 2 /* a2dp_on_started */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_started(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 3 /* a2dp_on_suspended */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_suspended(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 4 /* a2dp_on_stopped */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_stopped(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 5 /* a2dp_on_get_codec_config */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_get_codec_config(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 6 /* a2dp_on_check_ready */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_check_ready(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 7 /* a2dp_on_get_multicast_status */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_get_multicast_status(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 8 /* a2dp_on_get_num_connected_devices */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_get_num_connected_devices(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 9 /* a2dp_on_get_connection_status */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_get_connection_status(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 10 /* a2dp_on_get_sink_latency */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_a2dp_on_get_sink_latency(this, _hidl_data, _hidl_reply, _hidl_cb);
            break;
        }

        case 11 /* deinitialize_callbacks */:
        {
            _hidl_err = ::com::qualcomm::qti::bluetooth_audio::V1_0::BnHwBluetoothAudio::_hidl_deinitialize_callbacks(this, _hidl_data, _hidl_reply, _hidl_cb);
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

BsBluetoothAudio::BsBluetoothAudio(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio> impl) : ::android::hardware::details::HidlInstrumentor("com.qualcomm.qti.bluetooth_audio@1.0", "IBluetoothAudio"), mImpl(impl) {
    mOnewayQueue.start(3000 /* similar limit to binderized */);
}

::android::hardware::Return<void> BsBluetoothAudio::addOnewayTask(std::function<void(void)> fun) {
    if (!mOnewayQueue.push(fun)) {
        return ::android::hardware::Status::fromExceptionCode(
                ::android::hardware::Status::EX_TRANSACTION_FAILED,
                "Passthrough oneway function queue exceeds maximum size.");
    }
    return ::android::hardware::Status();
}

::android::sp<IBluetoothAudio> IBluetoothAudio::tryGetService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwBluetoothAudio>(serviceName, false, getStub);
}

::android::sp<IBluetoothAudio> IBluetoothAudio::getService(const std::string &serviceName, const bool getStub) {
    return ::android::hardware::details::getServiceInternal<BpHwBluetoothAudio>(serviceName, true, getStub);
}

::android::status_t IBluetoothAudio::registerAsService(const std::string &serviceName) {
    return ::android::hardware::details::registerAsServiceInternal(this, serviceName);
}

bool IBluetoothAudio::registerForNotifications(
        const std::string &serviceName,
        const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification) {
    const ::android::sp<::android::hidl::manager::V1_0::IServiceManager> sm
            = ::android::hardware::defaultServiceManager();
    if (sm == nullptr) {
        return false;
    }
    ::android::hardware::Return<bool> success =
            sm->registerForNotifications("com.qualcomm.qti.bluetooth_audio@1.0::IBluetoothAudio",
                    serviceName, notification);
    return success.isOk() && success;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com
