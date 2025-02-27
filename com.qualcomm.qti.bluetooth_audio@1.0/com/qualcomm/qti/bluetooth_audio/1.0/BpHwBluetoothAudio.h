#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIO_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIO_H

#include <hidl/HidlTransportSupport.h>

#include <com/qualcomm/qti/bluetooth_audio/1.0/IHwBluetoothAudio.h>

#include <mutex>
namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

struct BpHwBluetoothAudio : public ::android::hardware::BpInterface<IBluetoothAudio>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothAudio(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    /**
     * The pure class is what this class wraps.
     */
    typedef IBluetoothAudio Pure;

    /**
     * Type tag for use in template logic that indicates this is a 'proxy' class.
     */
    typedef ::android::hardware::details::bphw_tag _hidl_tag;

    virtual bool isRemote() const override { return true; }

    void onLastStrongRef(const void* id) override;

    // Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.
    static ::android::hardware::Return<void>  _hidl_initialize_callbacks(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks>& callback);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_started(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_suspended(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_stopped(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_codec_config(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status, const ::android::hardware::hidl_vec<uint8_t>& codec_cfg);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_check_ready(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_multicast_status(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t state);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_num_connected_devices(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t num_dev);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_connection_status(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, ::com::qualcomm::qti::bluetooth_audio::V1_0::Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_sink_latency(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint16_t sink_latency);
    static ::android::hardware::Return<void>  _hidl_deinitialize_callbacks(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);

    // Methods from ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio follow.
    ::android::hardware::Return<void> initialize_callbacks(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks>& callback) override;
    ::android::hardware::Return<void> a2dp_on_started(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) override;
    ::android::hardware::Return<void> a2dp_on_suspended(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) override;
    ::android::hardware::Return<void> a2dp_on_stopped(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) override;
    ::android::hardware::Return<void> a2dp_on_get_codec_config(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status, const ::android::hardware::hidl_vec<uint8_t>& codec_cfg) override;
    ::android::hardware::Return<void> a2dp_on_check_ready(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) override;
    ::android::hardware::Return<void> a2dp_on_get_multicast_status(uint8_t state) override;
    ::android::hardware::Return<void> a2dp_on_get_num_connected_devices(uint8_t num_dev) override;
    ::android::hardware::Return<void> a2dp_on_get_connection_status(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) override;
    ::android::hardware::Return<void> a2dp_on_get_sink_latency(uint16_t sink_latency) override;
    ::android::hardware::Return<void> deinitialize_callbacks() override;

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
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIO_H
