#ifndef HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_BPHWBLUETOOTHAUDIOPROVIDER_H
#define HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_BPHWBLUETOOTHAUDIOPROVIDER_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/mediatek/hardware/bluetooth/audio/2.2/IHwBluetoothAudioProvider.h>
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO22_EXPORTS_.h"

#include <mutex>
namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_2 {

struct ANDROIDHARDWAREBLUETOOTHAUDIO22_API BpHwBluetoothAudioProvider : public ::android::hardware::BpInterface<IBluetoothAudioProvider>, public ::android::hardware::details::HidlInstrumentor {
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

    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
    static ::android::hardware::Return<void>  _hidl_startSession_2_1(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& audioConfig, startSession_2_1_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_updataConnParam(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& connPrameter);

    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider follow.
    ::android::hardware::Return<void> startSession(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& audioConfig, startSession_cb _hidl_cb) override;
    ::android::hardware::Return<void> streamStarted(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status status) override;
    ::android::hardware::Return<void> streamSuspended(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status status) override;
    ::android::hardware::Return<void> endSession() override;
    ::android::hardware::Return<void> enterGameMode(uint8_t enter) override;

    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
    ::android::hardware::Return<void> startSession_2_1(const ::android::sp<::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioPort>& hostIf, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& audioConfig, startSession_2_1_cb _hidl_cb) override;
    ::android::hardware::Return<void> updataConnParam(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& connPrameter) override;

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

}  // namespace V2_2
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_BPHWBLUETOOTHAUDIOPROVIDER_H
