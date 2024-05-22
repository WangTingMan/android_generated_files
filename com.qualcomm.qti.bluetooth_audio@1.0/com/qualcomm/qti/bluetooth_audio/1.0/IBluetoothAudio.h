#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_IBLUETOOTHAUDIO_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_IBLUETOOTHAUDIO_H

#include <android/hidl/base/1.0/IBase.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/IBluetoothAudioCallbacks.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/types.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

#include "COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS.h"

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

/*
 * Bluetooth audio interface for split a2dp feature. This interface is defined
 * to communicate between audio primary hal and BT host stack to send stream
 * start, stop, suspend request and fetch codec configuration.
 */
struct COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS_API IBluetoothAudio : public ::android::hidl::base::V1_0::IBase {
    /**
     * Type tag for use in template logic that indicates this is a 'pure' class.
     */
    typedef ::android::hardware::details::i_tag _hidl_tag;

    /**
     * Fully qualified interface name: "com.qualcomm.qti.bluetooth_audio@1.0::IBluetoothAudio"
     */
    static inline constexpr const char* descriptor = "com.qualcomm.qti.bluetooth_audio@1.0::IBluetoothAudio";

    /**
     * Returns whether this object's implementation is outside of the current process.
     */
    virtual bool isRemote() const override { return false; }

    /**
     * Register callbacks
     *
     * This method should be used by BT stack to register callbacks.
     * Callbacks are invoked when the stream control commands are called
     * from the audio primary hal.
     *
     * @param callback implements IBluetoothAudioCallbacks which will
     *    receive callbacks when audio primary hal calls stream control
     *    commands.
     */
    virtual ::android::hardware::Return<void> initialize_callbacks(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudioCallbacks>& callback) = 0;

    /**
     * Update Stream start status for stream start request
     *
     * @param Status
     */
    virtual ::android::hardware::Return<void> a2dp_on_started(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) = 0;

    /**
     * Update Stream suspend status for suspend start request
     *
     * @param Status
     */
    virtual ::android::hardware::Return<void> a2dp_on_suspended(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) = 0;

    /**
     * Update Stream stop status for stream stop request
     *
     * @param Status
     */
    virtual ::android::hardware::Return<void> a2dp_on_stopped(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) = 0;

    /**
     * Update codec config for get codec config request
     *
     * @param Status, vec<uint8_t>
     */
    virtual ::android::hardware::Return<void> a2dp_on_get_codec_config(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status, const ::android::hardware::hidl_vec<uint8_t>& codec_cfg) = 0;

    /**
     * Update check a2dp status for check a2dp ready request
     *
     * @param Status
     */
    virtual ::android::hardware::Return<void> a2dp_on_check_ready(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) = 0;

    /**
     * Update multicast status
     *
     * @param uint8_t
     */
    virtual ::android::hardware::Return<void> a2dp_on_get_multicast_status(uint8_t state) = 0;

    /**
     * Update number of connected devices
     *
     * @param uint8_t
     */
    virtual ::android::hardware::Return<void> a2dp_on_get_num_connected_devices(uint8_t num_dev) = 0;

    /**
     * Update connection status for get connection status request
     *
     * @param Status
     */
    virtual ::android::hardware::Return<void> a2dp_on_get_connection_status(::com::qualcomm::qti::bluetooth_audio::V1_0::Status status) = 0;

    /**
     * Update sink latency value for get sink latency request
     *
     * @param uint16_t
     */
    virtual ::android::hardware::Return<void> a2dp_on_get_sink_latency(uint16_t sink_latency) = 0;

    /**
     * Deregister callbacks
     */
    virtual ::android::hardware::Return<void> deinitialize_callbacks() = 0;

    /**
     * Return callback for interfaceChain
     */
    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     ["android.hardware.foo@1.0::IChild",
     *      "android.hardware.foo@1.0::IParent"
     *      "android.hidl.base@1.0::IBase"]
     *
     * @return descriptors a vector of descriptors of the run-time type of the
     *         object.
     */
    virtual ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;

    /*
     * Emit diagnostic information to the given file.
     *
     * Optionally overriden.
     *
     * @param fd      File descriptor to dump data to.
     *                Must only be used for the duration of this call.
     * @param options Arguments for debugging.
     *                Must support empty for default debug information.
     */
    virtual ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;

    /**
     * Return callback for interfaceDescriptor
     */
    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    /*
     * Provides run-time type information for this object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceDescriptor on an IChild object must yield
     *     "android.hardware.foo@1.0::IChild"
     *
     * @return descriptor a descriptor of the run-time type of the
     *         object (the first element of the vector returned by
     *         interfaceChain())
     */
    virtual ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;

    /**
     * Return callback for getHashChain
     */
    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    /*
     * Returns hashes of the source HAL files that define the interfaces of the
     * runtime type information on the object.
     * For example, for the following interface definition:
     *     package android.hardware.foo@1.0;
     *     interface IParent {};
     *     interface IChild extends IParent {};
     * Calling interfaceChain on an IChild object must yield the following:
     *     [(hash of IChild.hal),
     *      (hash of IParent.hal)
     *      (hash of IBase.hal)].
     *
     * SHA-256 is used as the hashing algorithm. Each hash has 32 bytes
     * according to SHA-256 standard.
     *
     * @return hashchain a vector of SHA-1 digests
     */
    virtual ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;

    /*
     * This method trigger the interface to enable/disable instrumentation based
     * on system property hal.instrumentation.enable.
     */
    virtual ::android::hardware::Return<void> setHALInstrumentation() override;

    /*
     * Registers a death recipient, to be called when the process hosting this
     * interface dies.
     *
     * @param recipient a hidl_death_recipient callback object
     * @param cookie a cookie that must be returned with the callback
     * @return success whether the death recipient was registered successfully.
     */
    virtual ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;

    /*
     * Provides way to determine if interface is running without requesting
     * any functionality.
     */
    virtual ::android::hardware::Return<void> ping() override;

    /**
     * Return callback for getDebugInfo
     */
    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    /*
     * Get debug information on references on this interface.
     * @return info debugging information. See comments of DebugInfo.
     */
    virtual ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;

    /*
     * This method notifies the interface that one or more system properties
     * have changed. The default implementation calls
     * (C++)  report_sysprop_change() in libcutils or
     * (Java) android.os.SystemProperties.reportSyspropChanged,
     * which in turn calls a set of registered callbacks (eg to update trace
     * tags).
     */
    virtual ::android::hardware::Return<void> notifySyspropsChanged() override;

    /*
     * Unregisters the registered death recipient. If this service was registered
     * multiple times with the same exact death recipient, this unlinks the most
     * recently registered one.
     *
     * @param recipient a previously registered hidl_death_recipient callback
     * @return success whether the death recipient was unregistered successfully.
     */
    virtual ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

    // cast static functions
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>> castFrom(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>& parent, bool emitError = false);
    /**
     * This performs a checked cast based on what the underlying implementation actually is.
     */
    static ::android::hardware::Return<::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

    // helper methods for interactions with the hwservicemanager
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is currently not available or not in the VINTF manifest on a Trebilized
     * device, this will return nullptr. This is useful when you don't want to block
     * during device boot. If getStub is true, this will try to return an unwrapped
     * passthrough implementation in the same process. This is useful when getting an
     * implementation from the same partition/compilation group.
     *
     * In general, prefer getService(std::string,bool)
     */
    static ::android::sp<IBluetoothAudio> tryGetService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudio> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    /**
     * Deprecated. See tryGetService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudio> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    /**
     * Calls tryGetService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IBluetoothAudio> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    /**
     * This gets the service of this type with the specified instance name. If the
     * service is not in the VINTF manifest on a Trebilized device, this will return
     * nullptr. If the service is not available, this will wait for the service to
     * become available. If the service is a lazy service, this will start the service
     * and return when it becomes available. If getStub is true, this will try to
     * return an unwrapped passthrough implementation in the same process. This is
     * useful when getting an implementation from the same partition/compilation group.
     */
    static ::android::sp<IBluetoothAudio> getService(const std::string &serviceName="default", bool getStub=false);
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudio> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    /**
     * Deprecated. See getService(std::string, bool)
     */
    static ::android::sp<IBluetoothAudio> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    /**
     * Calls getService("default", bool). This is the recommended instance name for singleton services.
     */
    static ::android::sp<IBluetoothAudio> getService(bool getStub) { return getService("default", getStub); }
    /**
     * Registers a service with the service manager. For Trebilized devices, the service
     * must also be in the VINTF manifest.
     */
    __attribute__ ((warn_unused_result))::android::status_t registerAsService(const std::string &serviceName="default");
    /**
     * Registers for notifications for when a service is registered.
     */
    static bool registerForNotifications(
            const std::string &serviceName,
            const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification);
};

//
// type declarations for package
//

static inline std::string toString(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>& o);

//
// type header definitions for package
//

static inline std::string toString(const ::android::sp<::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio>& o) {
    std::string os = "[class or subclass of ";
    os += ::com::qualcomm::qti::bluetooth_audio::V1_0::IBluetoothAudio::descriptor;
    os += "]";
    os += o->isRemote() ? "@remote" : "@local";
    return os;
}


}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

//
// global type declarations for package
//


#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_IBLUETOOTHAUDIO_H
