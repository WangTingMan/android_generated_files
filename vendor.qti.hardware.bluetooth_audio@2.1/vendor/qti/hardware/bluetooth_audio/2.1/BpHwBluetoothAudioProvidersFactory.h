#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BPHWBLUETOOTHAUDIOPROVIDERSFACTORY_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BPHWBLUETOOTHAUDIOPROVIDERSFACTORY_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/qti/hardware/bluetooth_audio/2.1/IHwBluetoothAudioProvidersFactory.h>

#include <mutex> 
#include "VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS_.h"

namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth_audio {
namespace V2_1 {

struct VENDORQTIHARDWAREBLUETOOTHAUDIO21_API BpHwBluetoothAudioProvidersFactory : public ::android::hardware::BpInterface<IBluetoothAudioProvidersFactory>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothAudioProvidersFactory(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudioProvidersFactory Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_1::IBluetoothAudioProvidersFactory follow.
    static ::android::hardware::Return<void>  _hidl_openProvider_2_1(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::vendor::qti::hardware::bluetooth_audio::V2_0::SessionType sessionType, openProvider_2_1_cb _hidl_cb);
    static ::android::hardware::Return<void>  _hidl_getProviderCapabilities_2_1(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::vendor::qti::hardware::bluetooth_audio::V2_0::SessionType sessionType, getProviderCapabilities_2_1_cb _hidl_cb);

    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioProvidersFactory follow.
    ::android::hardware::Return<void> openProvider(::vendor::qti::hardware::bluetooth_audio::V2_0::SessionType sessionType, openProvider_cb _hidl_cb) override;
    ::android::hardware::Return<void> getProviderCapabilities(::vendor::qti::hardware::bluetooth_audio::V2_0::SessionType sessionType, getProviderCapabilities_cb _hidl_cb) override;

    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_1::IBluetoothAudioProvidersFactory follow.
    ::android::hardware::Return<void> openProvider_2_1(::vendor::qti::hardware::bluetooth_audio::V2_0::SessionType sessionType, openProvider_2_1_cb _hidl_cb) override;
    ::android::hardware::Return<void> getProviderCapabilities_2_1(::vendor::qti::hardware::bluetooth_audio::V2_0::SessionType sessionType, getProviderCapabilities_2_1_cb _hidl_cb) override;

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
}  // namespace bluetooth_audio
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BPHWBLUETOOTHAUDIOPROVIDERSFACTORY_H
