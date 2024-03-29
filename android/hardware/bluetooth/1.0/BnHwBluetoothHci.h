#ifndef HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_0_BNHWBLUETOOTHHCI_H
#define HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_0_BNHWBLUETOOTHHCI_H

#include <android/hardware/bluetooth/1.0/IHwBluetoothHci.h>

#include <android/hardware/bluetooth/1.0/ANDROIDHARDWAREBLUETOOTH10_EXPORTS.h>

namespace android {
namespace hardware {
namespace bluetooth {
namespace V1_0 {

struct ANDROIDHARDWAREBLUETOOTH10_API BnHwBluetoothHci : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwBluetoothHci(const ::android::sp<IBluetoothHci> &_hidl_impl);
    explicit BnHwBluetoothHci(const ::android::sp<IBluetoothHci> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwBluetoothHci();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothHci Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IBluetoothHci> getImpl() { return _hidl_mImpl; }
    // Methods from ::android::hardware::bluetooth::V1_0::IBluetoothHci follow.
    static ::android::status_t _hidl_initialize(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_sendHciCommand(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_sendAclData(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_sendScoData(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_close(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::android::hardware::bluetooth::V1_0::IBluetoothHci follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IBluetoothHci> _hidl_mImpl;
};

}  // namespace V1_0
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_0_BNHWBLUETOOTHHCI_H
