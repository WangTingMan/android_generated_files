#ifndef HIDL_GENERATED_ANDROID_HIDL_TOKEN_V1_0_BPHWTOKENMANAGER_H
#define HIDL_GENERATED_ANDROID_HIDL_TOKEN_V1_0_BPHWTOKENMANAGER_H

#include <hidl/HidlTransportSupport.h>

#include <android/hidl/token/1.0/IHwTokenManager.h> 
#include <android/hidl/token/1.0/ANDROIDHIDLTOKEN10_EXPORTS.h>

namespace android {
namespace hidl {
namespace token {
namespace V1_0 {

struct ANDROIDHIDLTOKEN10_API BpHwTokenManager : public ::android::hardware::BpInterface<ITokenManager>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwTokenManager(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef ITokenManager Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::android::hidl::token::V1_0::ITokenManager follow.
    static ::android::hardware::Return<void>  _hidl_createToken(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::android::hidl::base::V1_0::IBase>& store, createToken_cb _hidl_cb);
    static ::android::hardware::Return<bool>  _hidl_unregister(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<uint8_t>& token);
    static ::android::hardware::Return<::android::sp<::android::hidl::base::V1_0::IBase>>  _hidl_get(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<uint8_t>& token);

    // Methods from ::android::hidl::token::V1_0::ITokenManager follow.
    ::android::hardware::Return<void> createToken(const ::android::sp<::android::hidl::base::V1_0::IBase>& store, createToken_cb _hidl_cb) override;
    ::android::hardware::Return<bool> unregister(const ::android::hardware::hidl_vec<uint8_t>& token) override;
    ::android::hardware::Return<::android::sp<::android::hidl::base::V1_0::IBase>> get(const ::android::hardware::hidl_vec<uint8_t>& token) override;

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

}  // namespace V1_0
}  // namespace token
}  // namespace hidl
}  // namespace android

#endif  // HIDL_GENERATED_ANDROID_HIDL_TOKEN_V1_0_BPHWTOKENMANAGER_H
