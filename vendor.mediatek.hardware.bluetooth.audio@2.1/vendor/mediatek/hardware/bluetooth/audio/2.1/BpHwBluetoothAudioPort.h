#ifndef HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_1_BPHWBLUETOOTHAUDIOPORT_H
#define HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_1_BPHWBLUETOOTHAUDIOPORT_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/mediatek/hardware/bluetooth/audio/2.1/IHwBluetoothAudioPort.h>
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO21_EXPORTS_.h"

#include <mutex>
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_1 {

struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API BpHwBluetoothAudioPort : public ::android::hardware::BpInterface<IBluetoothAudioPort>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothAudioPort(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudioPort Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort follow.
    static ::android::hardware::Return<void>  _hidl_startStream(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_suspendStream(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_stopStream(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_getPresentationPosition(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, getPresentationPosition_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_updateMetadata(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::audio::common::V5_0::SourceMetadata& sourceMetadata);
    static ::android::hardware::Return<void>  _hidl_enterGameMode(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t enter);

    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort follow.
    ::android::hardware::Return<void> startStream() override;
    ::android::hardware::Return<void> suspendStream() override;
    ::android::hardware::Return<void> stopStream() override;
    ::android::hardware::Return<void> getPresentationPosition(getPresentationPosition_cb _hidl_cb) override;
    ::android::hardware::Return<void> updateMetadata(const ::android::hardware::audio::common::V5_0::SourceMetadata& sourceMetadata) override;
    ::android::hardware::Return<void> enterGameMode(uint8_t enter) override;

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

}  // namespace V2_1
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_1_BPHWBLUETOOTHAUDIOPORT_H
