#ifndef HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_1_BPHWBLUETOOTHHCI_H
#define HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_1_BPHWBLUETOOTHHCI_H

#include <hidl/HidlTransportSupport.h>

#include <android/hardware/bluetooth/1.1/IHwBluetoothHci.h>

#include <android/hardware/bluetooth/1.1/ANDROIDHARDWAREBLUETOOTH11_EXPORTS.h>

namespace android {
namespace hardware {
namespace bluetooth {
namespace V1_1 {

struct ANDROIDHARDWAREBLUETOOTH11_API BpHwBluetoothHci : public ::android::hardware::BpInterface<IBluetoothHci>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothHci(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothHci Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hardware::bluetooth::V1_1::IBluetoothHci follow.
    static ::android::hardware::Return<void>  _hidl_initialize_1_1(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::android::hardware::bluetooth::V1_1::IBluetoothHciCallbacks>& callback);
    static ::android::hardware::Return<void>  _hidl_sendIsoData(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<uint8_t>& data);

    // Methods from ::android::hardware::bluetooth::V1_0::IBluetoothHci follow.
    ::android::hardware::Return<void> initialize(const ::android::sp<::android::hardware::bluetooth::V1_0::IBluetoothHciCallbacks>& callback) override;
    ::android::hardware::Return<void> sendHciCommand(const ::android::hardware::hidl_vec<uint8_t>& command) override;
    ::android::hardware::Return<void> sendAclData(const ::android::hardware::hidl_vec<uint8_t>& data) override;
    ::android::hardware::Return<void> sendScoData(const ::android::hardware::hidl_vec<uint8_t>& data) override;
    ::android::hardware::Return<void> close() override;

    // Methods from ::android::hardware::bluetooth::V1_1::IBluetoothHci follow.
    ::android::hardware::Return<void> initialize_1_1(const ::android::sp<::android::hardware::bluetooth::V1_1::IBluetoothHciCallbacks>& callback) override;
    ::android::hardware::Return<void> sendIsoData(const ::android::hardware::hidl_vec<uint8_t>& data) override;

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

}  // namespace V1_1
}  // namespace bluetooth
}  // namespace hardware
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HARDWARE_BLUETOOTH_V1_1_BPHWBLUETOOTHHCI_H
