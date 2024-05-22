#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BNHWBLUETOOTHAUDIOPORT_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BNHWBLUETOOTHAUDIOPORT_H

#include <vendor/qti/hardware/bluetooth_audio/2.1/IHwBluetoothAudioPort.h>

#include "VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS_.h"

namespace vendor {
namespace qti {
namespace hardware {
namespace bluetooth_audio {
namespace V2_1 {

struct VENDORQTIHARDWAREBLUETOOTHAUDIO21_API BnHwBluetoothAudioPort : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwBluetoothAudioPort(const ::android::sp<IBluetoothAudioPort> &_hidl_impl);
    explicit BnHwBluetoothAudioPort(const ::android::sp<IBluetoothAudioPort> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwBluetoothAudioPort();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudioPort Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IBluetoothAudioPort> getImpl() { return _hidl_mImpl; }

private:
    // Methods from ::vendor::qti::hardware::bluetooth_audio::V2_0::IBluetoothAudioPort follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IBluetoothAudioPort> _hidl_mImpl;
};

}  // namespace V2_1
}  // namespace bluetooth_audio
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_BLUETOOTH_AUDIO_V2_1_BNHWBLUETOOTHAUDIOPORT_H
