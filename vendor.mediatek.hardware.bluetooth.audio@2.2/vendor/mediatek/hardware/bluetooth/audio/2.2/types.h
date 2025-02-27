#ifndef HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_TYPES_H
#define HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_TYPES_H

#include <vendor/mediatek/hardware/bluetooth/audio/2.1/types.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_2 {

// Forward declaration for forward reference support:
enum class SessionType : uint8_t;
enum class SampleRate : uint32_t;
enum class CodecType : uint32_t;
struct PcmParameters;
enum class Lc3FrameDuration : uint8_t;
struct Lc3Parameters;
enum class PlcMethod : uint8_t;
struct LeAudioCodecConfiguration;
struct ConnParam;
struct AudioConfiguration;
struct LeAudioCodecCapabilities;
struct AudioCapabilities;

enum class SessionType : uint8_t {
    UNKNOWN = 0,
    /**
     * A2DP legacy that AVDTP media is encoded by Bluetooth Stack
     */
    A2DP_SOFTWARE_ENCODING_DATAPATH = 1 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType.UNKNOWN implicitly + 1 */,
    /**
     * The encoding of AVDTP media is done by HW and there is control only
     */
    A2DP_HARDWARE_OFFLOAD_DATAPATH = 2 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType.A2DP_SOFTWARE_ENCODING_DATAPATH implicitly + 1 */,
    /**
     * Used when encoded by Bluetooth Stack and streaming to Hearing Aid
     */
    HEARING_AID_SOFTWARE_ENCODING_DATAPATH = 3 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType.A2DP_HARDWARE_OFFLOAD_DATAPATH implicitly + 1 */,
    /**
     * Used when encoded by Bluetooth Stack and streaming to LE Audio device
     */
    LE_AUDIO_SOFTWARE_ENCODING_DATAPATH = 4 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType.HEARING_AID_SOFTWARE_ENCODING_DATAPATH implicitly + 1 */,
    /**
     * Used when decoded by Bluetooth Stack and streaming to audio framework
     */
    LE_AUDIO_SOFTWARE_DECODED_DATAPATH = 5 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType.LE_AUDIO_SOFTWARE_ENCODING_DATAPATH implicitly + 1 */,
    /**
     * Encoding is done by HW an there is control only
     */
    LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH = 6 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType.LE_AUDIO_SOFTWARE_DECODED_DATAPATH implicitly + 1 */,
    /**
     * Decoding is done by HW an there is control only
     */
    LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH = 7 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType.LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH implicitly + 1 */,
};

enum class SampleRate : uint32_t {
    RATE_UNKNOWN = 0u /* 0x00 */,
    RATE_44100 = 1u /* 0x01 */,
    RATE_48000 = 2u /* 0x02 */,
    RATE_88200 = 4u /* 0x04 */,
    RATE_96000 = 8u /* 0x08 */,
    RATE_176400 = 16u /* 0x10 */,
    RATE_192000 = 32u /* 0x20 */,
    RATE_16000 = 64u /* 0x40 */,
    RATE_24000 = 128u /* 0x80 */,
    RATE_8000 = 256u /* 0x100 */,
    RATE_32000 = 512u /* 0x200 */,
};

enum class CodecType : uint32_t {
    UNKNOWN = 0u /* 0x00 */,
    SBC = 1u /* 0x01 */,
    AAC = 2u /* 0x02 */,
    APTX = 4u /* 0x04 */,
    APTX_HD = 8u /* 0x08 */,
    LDAC = 16u /* 0x10 */,
    LHDC = 32u /* 0x20 */,
    LC3 = 64u /* 0x40 */,
};

/**
 * Used for Software Encoding audio feed parameters
 */
struct PcmParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn isLowLatencyEnabled __attribute__ ((aligned(1)));
    /**
     * Data interval for data transfer
     */
    uint32_t dataIntervalUs __attribute__ ((aligned(4)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters, sampleRate) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters, channelMode) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters, bitsPerSample) == 5, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters, isLowLatencyEnabled) == 6, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters, dataIntervalUs) == 8, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters) == 12, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters) == 4, "wrong alignment");

enum class Lc3FrameDuration : uint8_t {
    DURATION_10000US = 0 /* 0x00 */,
    DURATION_7500US = 1 /* 0x01 */,
};

/**
 * Used for Hardware Encoding/Decoding LC3 codec parameters.
 */
struct Lc3Parameters final {
    /*
     * PCM is Input for encoder, Output for decoder
     */
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample pcmBitDepth __attribute__ ((aligned(1)));
    /*
     * codec-specific parameters
     */
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate samplingFrequency __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration frameDuration __attribute__ ((aligned(1)));
    /*
     * length in octets of a codec frame
     */
    uint32_t octetsPerFrame __attribute__ ((aligned(4)));
    /*
     * Number of blocks of codec frames per single SDU (Service Data Unit)
     */
    uint8_t blocksPerSdu __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters, pcmBitDepth) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters, samplingFrequency) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters, frameDuration) == 8, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters, octetsPerFrame) == 12, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters, blocksPerSdu) == 16, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters) == 20, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters) == 4, "wrong alignment");

enum class PlcMethod : uint8_t {
    STANDARD_PLC = 0 /* 0x00 */,
    ENHANCED_PLC = 1 /* 0x01 */,
};

/**
 * Used to configure a LC3 Hardware Encoding session.
 */
struct LeAudioCodecConfiguration final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType codecType __attribute__ ((aligned(4)));
    /*
     * This is also bitfield, specifying how the channels are ordered in the outgoing media packet.
     * Bit meaning is defined in Bluetooth Assigned Numbers.
     */
    uint32_t audioChannelAllocation __attribute__ ((aligned(4)));
    uint32_t encodedAudioBitrate __attribute__ ((aligned(4)));
    bool bfi_ext __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod plc_method __attribute__ ((aligned(1)));
    uint8_t le_audio_type __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters lc3Config __attribute__ ((aligned(4)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, codecType) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, audioChannelAllocation) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, encodedAudioBitrate) == 8, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, bfi_ext) == 12, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, plc_method) == 13, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, le_audio_type) == 14, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration, lc3Config) == 16, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration) == 36, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration) == 4, "wrong alignment");

struct ConnParam final {
    uint32_t conn_handle_R __attribute__ ((aligned(4)));
    uint32_t conn_handle_L __attribute__ ((aligned(4)));
    uint8_t bn __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam, conn_handle_R) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam, conn_handle_L) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam, bn) == 8, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam) == 12, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam) == 4, "wrong alignment");

/**
 * Used to configure either a Hardware or Software Encoding session based on session type
 */
struct AudioConfiguration final {
    enum class hidl_discriminator : uint8_t {
        pcmConfig = 0,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters
        codecConfig = 1,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration
        leAudioCodecConfig = 2,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration
    };

    AudioConfiguration();
    ~AudioConfiguration();
    AudioConfiguration(AudioConfiguration&&);
    AudioConfiguration(const AudioConfiguration&);
    AudioConfiguration& operator=(AudioConfiguration&&);
    AudioConfiguration& operator=(const AudioConfiguration&);

    void pcmConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters&);
    void pcmConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& pcmConfig();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& pcmConfig() const;

    void codecConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&);
    void codecConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& codecConfig();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& codecConfig() const;

    void leAudioCodecConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration&);
    void leAudioCodecConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& leAudioCodecConfig();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& leAudioCodecConfig() const;

    // Utility methods
    hidl_discriminator getDiscriminator() const;

    constexpr size_t hidl_getUnionOffset() const {
        return offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration, hidl_u);
    }

private:
    void hidl_destructUnion();

    hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
    union hidl_union final {
        ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters pcmConfig __attribute__ ((aligned(4)));
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration codecConfig __attribute__ ((aligned(4)));
        ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration leAudioCodecConfig __attribute__ ((aligned(4)));

        hidl_union();
        ~hidl_union();
    } hidl_u;

    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_union) == 36, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_union) == 4, "wrong alignment");
    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator) == 1, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator) == 1, "wrong alignment");
};

static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration) == 40, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration) == 4, "wrong alignment");

/**
 * Used to specify the capabilities of the LC3 codecs supported by Hardware Encoding.
 */
struct LeAudioCodecCapabilities final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType codecType __attribute__ ((aligned(4)));
    /*
     * This is bitfield, if bit N is set, HW Offloader supports N+1 channels at the same time.
     * Example: 0x27 = 0b00100111: One, two, three or six channels supported.
     */
    uint8_t supportedChannelCounts __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters lc3Capabilities __attribute__ ((aligned(4)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities, codecType) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities, supportedChannelCounts) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities, lc3Capabilities) == 8, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities) == 28, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities) == 4, "wrong alignment");

/**
 * Used to specify the capabilities of the different session types
 */
struct AudioCapabilities final {
    enum class hidl_discriminator : uint8_t {
        pcmCapabilities = 0,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters
        codecCapabilities = 1,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities
        leAudioCapabilities = 2,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities
    };

    AudioCapabilities();
    ~AudioCapabilities();
    AudioCapabilities(AudioCapabilities&&);
    AudioCapabilities(const AudioCapabilities&);
    AudioCapabilities& operator=(AudioCapabilities&&);
    AudioCapabilities& operator=(const AudioCapabilities&);

    void pcmCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters&);
    void pcmCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& pcmCapabilities();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& pcmCapabilities() const;

    void codecCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&);
    void codecCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& codecCapabilities();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& codecCapabilities() const;

    void leAudioCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities&);
    void leAudioCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& leAudioCapabilities();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& leAudioCapabilities() const;

    // Utility methods
    hidl_discriminator getDiscriminator() const;

    constexpr size_t hidl_getUnionOffset() const {
        return offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities, hidl_u);
    }

private:
    void hidl_destructUnion();

    hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
    union hidl_union final {
        ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters pcmCapabilities __attribute__ ((aligned(4)));
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities codecCapabilities __attribute__ ((aligned(4)));
        ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities leAudioCapabilities __attribute__ ((aligned(4)));

        hidl_union();
        ~hidl_union();
    } hidl_u;

    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_union) == 28, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_union) == 4, "wrong alignment");
    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator) == 1, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator) == 1, "wrong alignment");
};

static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities) == 32, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities) == 4, "wrong alignment");

//
// type declarations for package
//

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate o, ::std::ostream* os);
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType o, ::std::ostream* os);
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& rhs);

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& rhs);

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& rhs);

//
// type header definitions for package
//

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::UNKNOWN) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "A2DP_SOFTWARE_ENCODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "A2DP_HARDWARE_OFFLOAD_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "HEARING_AID_SOFTWARE_ENCODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "LE_AUDIO_SOFTWARE_ENCODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_DECODED_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_DECODED_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "LE_AUDIO_SOFTWARE_DECODED_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_DECODED_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH) {
        return "A2DP_SOFTWARE_ENCODING_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH) {
        return "A2DP_HARDWARE_OFFLOAD_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH) {
        return "HEARING_AID_SOFTWARE_ENCODING_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH) {
        return "LE_AUDIO_SOFTWARE_ENCODING_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_DECODED_DATAPATH) {
        return "LE_AUDIO_SOFTWARE_DECODED_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH) {
        return "LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH) {
        return "LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_UNKNOWN) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "RATE_UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_44100) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_44100)) {
        os += (first ? "" : " | ");
        os += "RATE_44100";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_44100;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_48000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_48000)) {
        os += (first ? "" : " | ");
        os += "RATE_48000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_48000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_88200) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_88200)) {
        os += (first ? "" : " | ");
        os += "RATE_88200";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_88200;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_96000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_96000)) {
        os += (first ? "" : " | ");
        os += "RATE_96000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_96000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_176400) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_176400)) {
        os += (first ? "" : " | ");
        os += "RATE_176400";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_176400;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_192000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_192000)) {
        os += (first ? "" : " | ");
        os += "RATE_192000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_192000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_16000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_16000)) {
        os += (first ? "" : " | ");
        os += "RATE_16000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_16000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_24000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_24000)) {
        os += (first ? "" : " | ");
        os += "RATE_24000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_24000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_8000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_8000)) {
        os += (first ? "" : " | ");
        os += "RATE_8000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_8000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_32000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_32000)) {
        os += (first ? "" : " | ");
        os += "RATE_32000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_32000;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_UNKNOWN) {
        return "RATE_UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_44100) {
        return "RATE_44100";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_48000) {
        return "RATE_48000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_88200) {
        return "RATE_88200";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_96000) {
        return "RATE_96000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_176400) {
        return "RATE_176400";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_192000) {
        return "RATE_192000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_16000) {
        return "RATE_16000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_24000) {
        return "RATE_24000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_8000) {
        return "RATE_8000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_32000) {
        return "RATE_32000";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::UNKNOWN) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::SBC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::SBC)) {
        os += (first ? "" : " | ");
        os += "SBC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::SBC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::AAC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::AAC)) {
        os += (first ? "" : " | ");
        os += "AAC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::AAC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX)) {
        os += (first ? "" : " | ");
        os += "APTX";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX_HD) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX_HD)) {
        os += (first ? "" : " | ");
        os += "APTX_HD";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX_HD;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LDAC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LDAC)) {
        os += (first ? "" : " | ");
        os += "LDAC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LDAC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LHDC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LHDC)) {
        os += (first ? "" : " | ");
        os += "LHDC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LHDC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LC3) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LC3)) {
        os += (first ? "" : " | ");
        os += "LC3";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LC3;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::SBC) {
        return "SBC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::AAC) {
        return "AAC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX) {
        return "APTX";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX_HD) {
        return "APTX_HD";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LDAC) {
        return "LDAC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LHDC) {
        return "LHDC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LC3) {
        return "LC3";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += ", .isLowLatencyEnabled = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.isLowLatencyEnabled);
    os += ", .dataIntervalUs = ";
    os += ::android::hardware::toString(o.dataIntervalUs);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& rhs) {
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.channelMode != rhs.channelMode) {
        return false;
    }
    if (lhs.bitsPerSample != rhs.bitsPerSample) {
        return false;
    }
    if (lhs.isLowLatencyEnabled != rhs.isLowLatencyEnabled) {
        return false;
    }
    if (lhs.dataIntervalUs != rhs.dataIntervalUs) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& rhs){
    return !(lhs == rhs);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_10000US) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_10000US)) {
        os += (first ? "" : " | ");
        os += "DURATION_10000US";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_10000US;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_7500US) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_7500US)) {
        os += (first ? "" : " | ");
        os += "DURATION_7500US";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_7500US;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_10000US) {
        return "DURATION_10000US";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_7500US) {
        return "DURATION_7500US";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".pcmBitDepth = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.pcmBitDepth);
    os += ", .samplingFrequency = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.samplingFrequency);
    os += ", .frameDuration = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.frameDuration);
    os += ", .octetsPerFrame = ";
    os += ::android::hardware::toString(o.octetsPerFrame);
    os += ", .blocksPerSdu = ";
    os += ::android::hardware::toString(o.blocksPerSdu);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& rhs) {
    if (lhs.pcmBitDepth != rhs.pcmBitDepth) {
        return false;
    }
    if (lhs.samplingFrequency != rhs.samplingFrequency) {
        return false;
    }
    if (lhs.frameDuration != rhs.frameDuration) {
        return false;
    }
    if (lhs.octetsPerFrame != rhs.octetsPerFrame) {
        return false;
    }
    if (lhs.blocksPerSdu != rhs.blocksPerSdu) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3Parameters& rhs){
    return !(lhs == rhs);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::STANDARD_PLC) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::STANDARD_PLC)) {
        os += (first ? "" : " | ");
        os += "STANDARD_PLC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::STANDARD_PLC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::ENHANCED_PLC) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::ENHANCED_PLC)) {
        os += (first ? "" : " | ");
        os += "ENHANCED_PLC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::ENHANCED_PLC;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::STANDARD_PLC) {
        return "STANDARD_PLC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::ENHANCED_PLC) {
        return "ENHANCED_PLC";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".codecType = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.codecType);
    os += ", .audioChannelAllocation = ";
    os += ::android::hardware::toString(o.audioChannelAllocation);
    os += ", .encodedAudioBitrate = ";
    os += ::android::hardware::toString(o.encodedAudioBitrate);
    os += ", .bfi_ext = ";
    os += ::android::hardware::toString(o.bfi_ext);
    os += ", .plc_method = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.plc_method);
    os += ", .le_audio_type = ";
    os += ::android::hardware::toString(o.le_audio_type);
    os += ", .lc3Config = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.lc3Config);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& rhs) {
    if (lhs.codecType != rhs.codecType) {
        return false;
    }
    if (lhs.audioChannelAllocation != rhs.audioChannelAllocation) {
        return false;
    }
    if (lhs.encodedAudioBitrate != rhs.encodedAudioBitrate) {
        return false;
    }
    if (lhs.bfi_ext != rhs.bfi_ext) {
        return false;
    }
    if (lhs.plc_method != rhs.plc_method) {
        return false;
    }
    if (lhs.le_audio_type != rhs.le_audio_type) {
        return false;
    }
    if (lhs.lc3Config != rhs.lc3Config) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".conn_handle_R = ";
    os += ::android::hardware::toString(o.conn_handle_R);
    os += ", .conn_handle_L = ";
    os += ::android::hardware::toString(o.conn_handle_L);
    os += ", .bn = ";
    os += ::android::hardware::toString(o.bn);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& rhs) {
    if (lhs.conn_handle_R != rhs.conn_handle_R) {
        return false;
    }
    if (lhs.conn_handle_L != rhs.conn_handle_L) {
        return false;
    }
    if (lhs.bn != rhs.bn) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::ConnParam& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator::pcmConfig: {
            os += ".pcmConfig = ";
            os += toString(o.pcmConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator::codecConfig: {
            os += ".codecConfig = ";
            os += toString(o.codecConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator::leAudioCodecConfig: {
            os += ".leAudioCodecConfig = ";
            os += toString(o.leAudioCodecConfig());
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(o.getDiscriminator())) + ").").c_str());
        }
    }
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator::pcmConfig: {
            return (lhs.pcmConfig() == rhs.pcmConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator::codecConfig: {
            return (lhs.codecConfig() == rhs.codecConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator::leAudioCodecConfig: {
            return (lhs.leAudioCodecConfig() == rhs.leAudioCodecConfig());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(lhs.getDiscriminator())) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".codecType = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.codecType);
    os += ", .supportedChannelCounts = ";
    os += ::android::hardware::toString(o.supportedChannelCounts);
    os += ", .lc3Capabilities = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_2::toString(o.lc3Capabilities);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& rhs) {
    if (lhs.codecType != rhs.codecType) {
        return false;
    }
    if (lhs.supportedChannelCounts != rhs.supportedChannelCounts) {
        return false;
    }
    if (lhs.lc3Capabilities != rhs.lc3Capabilities) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator::pcmCapabilities: {
            os += ".pcmCapabilities = ";
            os += toString(o.pcmCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator::codecCapabilities: {
            os += ".codecCapabilities = ";
            os += toString(o.codecCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator::leAudioCapabilities: {
            os += ".leAudioCapabilities = ";
            os += toString(o.leAudioCapabilities());
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(o.getDiscriminator())) + ").").c_str());
        }
    }
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator::pcmCapabilities: {
            return (lhs.pcmCapabilities() == rhs.pcmCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator::codecCapabilities: {
            return (lhs.codecCapabilities() == rhs.codecCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator::leAudioCapabilities: {
            return (lhs.leAudioCapabilities() == rhs.leAudioCapabilities());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(lhs.getDiscriminator())) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& rhs){
    return !(lhs == rhs);
}


}  // namespace V2_2
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor

//
// global type declarations for package
//

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType, 8> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_ENCODING_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_SOFTWARE_DECODED_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_ENCODING_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SessionType::LE_AUDIO_HARDWARE_OFFLOAD_DECODING_DATAPATH,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate, 11> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_44100,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_48000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_88200,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_96000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_176400,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_192000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_16000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_24000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_8000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::SampleRate::RATE_32000,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType, 8> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::SBC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::AAC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::APTX_HD,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LDAC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LHDC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::CodecType::LC3,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_10000US,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::Lc3FrameDuration::DURATION_7500US,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::STANDARD_PLC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PlcMethod::ENHANCED_PLC,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_2_TYPES_H
