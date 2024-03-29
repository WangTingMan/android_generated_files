#ifndef HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_0_BNHWBLUETOOTHHCICALLBACKS_H
#define HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_0_BNHWBLUETOOTHHCICALLBACKS_H

#include <android/hardware/bluetooth/1.0/IHwBluetoothHciCallbacks.h>

#include <android/hardware/bluetooth/1.0/ANDROIDHARDWAREBLUETOOTH10_EXPORTS.h>

namespace android {
namespace hardware {
namespace bluetooth {
namespace V1_0 {

struct ANDROIDHARDWAREBLUETOOTH10_API BnHwBluetoothHciCallbacks : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwBluetoothHciCallbacks(const ::android::sp<IBluetoothHciCallbacks> &_hidl_impl);
    explicit BnHwBluetoothHciCallbacks(const ::android::sp<IBluetoothHciCallbacks> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwBluetoothHciCallbacks();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothHciCallbacks Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'native' class.
     */
    typedef ::android::hardware::details::bnhw_tag _hidl_tag;

    ::android::sp<IBluetoothHciCallbacks> getImpl() { return _hidl_mImpl; }
    // Methods from ::android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks follow.
    static ::android::status_t _hidl_initializationComplete(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_hciEventReceived(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_aclDataReceived(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_scoDataReceived(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from ::android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IBluetoothHciCallbacks> _hidl_mImpl;
};

}  // namespace V1_0
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_0_BNHWBLUETOOTHHCICALLBACKS_H
