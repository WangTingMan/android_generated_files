#ifndef HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_BNHWBLUETOOTHAUDIOPROVIDER_H
#define HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_BNHWBLUETOOTHAUDIOPROVIDER_H

#include <vendor/mediatek/hardware/bluetooth/audio/2.2/IHwBluetoothAudioProvider.h>

namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_2 {

struct BnHwBluetoothAudioProvider : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwBluetoothAudioProvider(const ::android::sp<IBluetoothAudioProvider> &_hidl_impl);
    explicit BnHwBluetoothAudioProvider(const ::android::sp<IBluetoothAudioProvider> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwBluetoothAudioProvider();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudioProvider Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IBluetoothAudioProvider> getImpl() { return _hidl_mImpl; }
    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.
    static ::android::status_t _hidl_startSession_2_1(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_updataConnParam(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_1::IBluetoothAudioProvider follow.

    // Methods from ::vendor::mediatek::hardware::bluetooth::audio::V2_2::IBluetoothAudioProvider follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IBluetoothAudioProvider> _hidl_mImpl;
};

}  // namespace V2_2
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_BNHWBLUETOOTHAUDIOPROVIDER_H
