#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_0_BPHWBLUETOOTHAUDIOPROVIDER_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_0_BPHWBLUETOOTHAUDIOPROVIDER_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/qti/hardware/bluetooth_audio/2.0/IHwBluetoothAudioProvider.h>

#include <mutex>
namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth_audio {
namespace V2_0 {

struct VENDORQTIHARDWAREBLUETOOTHAUDIO20_API BpHwBluetoothAudioProvider : public ::android::hardware::BpInterface<IBluetoothAudioProvider>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothAudioProvider(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudioProvider Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioProvider follow.
    static ::android::hardware::Return<void>  _hidl_startSession(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioPort>& hostIf, const ::vendor::qti::hardware::bluetooth_audio::V2_0::AudioConfiguration& audioConfig, startSession_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_streamStarted(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::vendor::qti::hardware::bluetooth_audio::V2_0::Status status);
    static ::android::hardware::Return<void>  _hidl_streamSuspended(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::vendor::qti::hardware::bluetooth_audio::V2_0::Status status);
    static ::android::hardware::Return<void>  _hidl_updateSessionParams(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::vendor::qti::hardware::bluetooth_audio::V2_0::SessionParams& sessionParams);
    static ::android::hardware::Return<void>  _hidl_endSession(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);

    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioProvider follow.
    ::android::hardware::Return<void> startSession(const ::android::sp<::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioPort>& hostIf, const ::vendor::qti::hardware::bluetooth_audio::V2_0::AudioConfiguration& audioConfig, startSession_cb _hidl_cb) override;
    ::android::hardware::Return<void> streamStarted(::vendor::qti::hardware::bluetooth_audio::V2_0::Status status) override;
    ::android::hardware::Return<void> streamSuspended(::vendor::qti::hardware::bluetooth_audio::V2_0::Status status) override;
    ::android::hardware::Return<void> updateSessionParams(const ::vendor::qti::hardware::bluetooth_audio::V2_0::SessionParams& sessionParams) override;
    ::android::hardware::Return<void> endSession() override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> setHALInstrumentation() override;
    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;
    ::android::hardware::Return<void> ping() override;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;
    ::android::hardware::Return<void> notifySyspropsChanged() override;
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

private:
    std::mutex _hidl_mMutex;
    std::vector<::android::sp<::android::hardware::hidl_binder_death_recipient>> _hidl_mDeathRecipients;
};

}  // namespace V2_0
}  // namespace bluetooth_audio
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_0_BPHWBLUETOOTHAUDIOPROVIDER_H
