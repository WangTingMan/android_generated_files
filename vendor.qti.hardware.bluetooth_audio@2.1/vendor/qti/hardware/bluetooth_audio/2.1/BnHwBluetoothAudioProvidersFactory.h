#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BNHWBLUETOOTHAUDIOPROVIDERSFACTORY_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BNHWBLUETOOTHAUDIOPROVIDERSFACTORY_H

#include <vendor/qti/hardware/bluetooth_audio/2.1/IHwBluetoothAudioProvidersFactory.h>

#include "VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS_.h"

namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth_audio {
namespace V2_1 {

struct VENDORQTIHARDWAREBLUETOOTHAUDIO21_API BnHwBluetoothAudioProvidersFactory : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwBluetoothAudioProvidersFactory(const ::android::sp<IBluetoothAudioProvidersFactory> &_hidl_impl);
    explicit BnHwBluetoothAudioProvidersFactory(const ::android::sp<IBluetoothAudioProvidersFactory> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwBluetoothAudioProvidersFactory();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudioProvidersFactory Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IBluetoothAudioProvidersFactory> getImpl() { return _hidl_mImpl; }
    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_1::IBluetoothAudioProvidersFactory follow.
    static ::android::status_t _hidl_openProvider_2_1(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_getProviderCapabilities_2_1(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioProvidersFactory follow.

    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_1::IBluetoothAudioProvidersFactory follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IBluetoothAudioProvidersFactory> _hidl_mImpl;
};

}  // namespace V2_1
}  // namespace bluetooth_audio
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BNHWBLUETOOTHAUDIOPROVIDERSFACTORY_H
