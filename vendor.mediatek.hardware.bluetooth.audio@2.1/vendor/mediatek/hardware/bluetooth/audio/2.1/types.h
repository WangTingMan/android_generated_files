#ifndef HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_1_TYPES_H
#define HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_1_TYPES_H

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>
#include "VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO21_EXPORTS_.h"

#ifdef _MSC_VER
#ifndef __attribute__
#define __attribute__(...)
#endif
#endif

namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_1 {

// Forward declaration for forward reference support:
struct TimeSpec;
enum class Status : uint8_t;
enum class SessionType : uint8_t;
enum class CodecType : uint32_t;
enum class SampleRate : uint32_t;
enum class BitsPerSample : uint8_t;
enum class ChannelMode : uint8_t;
enum class SbcChannelMode : uint8_t;
enum class SbcBlockLength : uint8_t;
enum class SbcNumSubbands : uint8_t;
enum class SbcAllocMethod : uint8_t;
enum class AacObjectType : uint8_t;
enum class AacVariableBitRate : uint8_t;
enum class LdacChannelMode : uint8_t;
enum class LdacQualityIndex : uint8_t;
enum class LhdcLowLatencySupported : uint8_t;
enum class LhdcLowLatencyEn : uint8_t;
struct PcmParameters;
struct SbcParameters;
struct AacParameters;
struct LdacParameters;
struct LhdcParameters;
struct AptxParameters;
struct CodecCapabilities;
struct AudioCapabilities;
struct CodecConfiguration;
struct AudioConfiguration;

/**
 * The different audio parameter structs are used to provide a method to list
 * all the Capabilities of a codec as well as to configure the codecs. All
 * fields are bitfields unless specified. If used as a configuration, only one
 * bit may be enabled. If used for Capabilities, enable all bits corresponding to
 * supported features.
 *
 *
 * POSIX timespec.
 */
struct TimeSpec final {
    uint64_t tvSec __attribute__ ((aligned(8)));
    uint64_t tvNSec __attribute__ ((aligned(8)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec, tvSec) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec, tvNSec) == 8, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec) == 16, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec) == 8, "wrong alignment");

enum class Status : uint8_t {
    SUCCESS = 0 /* 0x00 */,
    /**
     * Codec configuration not supported by the audio platform
     */
    UNSUPPORTED_CODEC_CONFIGURATION = 1 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status.SUCCESS implicitly + 1 */,
    /**
     * Any other failure
     */
    FAILURE = 2 /* ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status.UNSUPPORTED_CODEC_CONFIGURATION implicitly + 1 */,
};

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
};

enum class CodecType : uint32_t {
    UNKNOWN = 0u /* 0x00 */,
    SBC = 1u /* 0x01 */,
    AAC = 2u /* 0x02 */,
    APTX = 4u /* 0x04 */,
    APTX_HD = 8u /* 0x08 */,
    LDAC = 16u /* 0x10 */,
    LHDC = 32u /* 0x20 */,
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
};

enum class BitsPerSample : uint8_t {
    BITS_UNKNOWN = 0 /* 0x00 */,
    BITS_16 = 1 /* 0x01 */,
    BITS_24 = 2 /* 0x02 */,
    BITS_32 = 4 /* 0x04 */,
};

enum class ChannelMode : uint8_t {
    UNKNOWN = 0 /* 0x00 */,
    MONO = 1 /* 0x01 */,
    STEREO = 2 /* 0x02 */,
};

enum class SbcChannelMode : uint8_t {
    /**
     * Channel Mode: 4 bits
     */
    UNKNOWN = 0 /* 0x00 */,
    JOINT_STEREO = 1 /* 0x01 */,
    STEREO = 2 /* 0x02 */,
    DUAL = 4 /* 0x04 */,
    MONO = 8 /* 0x08 */,
};

enum class SbcBlockLength : uint8_t {
    BLOCKS_4 = 128 /* 0x80 */,
    BLOCKS_8 = 64 /* 0x40 */,
    BLOCKS_12 = 32 /* 0x20 */,
    BLOCKS_16 = 16 /* 0x10 */,
};

enum class SbcNumSubbands : uint8_t {
    SUBBAND_4 = 8 /* 0x08 */,
    SUBBAND_8 = 4 /* 0x04 */,
};

enum class SbcAllocMethod : uint8_t {
    /**
     * SNR
     */
    ALLOC_MD_S = 2 /* 0x02 */,
    /**
     * Loudness
     */
    ALLOC_MD_L = 1 /* 0x01 */,
};

enum class AacObjectType : uint8_t {
    /**
     * MPEG-2 Low Complexity. Support is Mandatory.
     */
    MPEG2_LC = 128 /* 0x80 */,
    /**
     * MPEG-4 Low Complexity. Support is Optional.
     */
    MPEG4_LC = 64 /* 0x40 */,
    /**
     * MPEG-4 Long Term Prediction. Support is Optional.
     */
    MPEG4_LTP = 32 /* 0x20 */,
    /**
     * MPEG-4 Scalable. Support is Optional.
     */
    MPEG4_SCALABLE = 16 /* 0x10 */,
};

enum class AacVariableBitRate : uint8_t {
    ENABLED = 128 /* 0x80 */,
    DISABLED = 0 /* 0x00 */,
};

enum class LdacChannelMode : uint8_t {
    /**
     * Channel Mode: 3 bits
     */
    UNKNOWN = 0 /* 0x00 */,
    STEREO = 1 /* 0x01 */,
    DUAL = 2 /* 0x02 */,
    MONO = 4 /* 0x04 */,
};

enum class LdacQualityIndex : uint8_t {
    QUALITY_HIGH = 0 /* 0x00 */,
    QUALITY_MID = 1 /* 0x01 */,
    QUALITY_LOW = 2 /* 0x02 */,
    QUALITY_ABR = 127 /* 0x7F */,
};

enum class LhdcLowLatencySupported : uint8_t {
    Supported = 1,
    Unsupported = 0,
};

enum class LhdcLowLatencyEn : uint8_t {
    Enabled = 1,
    Disabled = 0,
};

/**
 * Used for Software Encoding audio feed parameters
 */
struct PcmParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn isLowLatencyEnabled __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters, sampleRate) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters, channelMode) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters, bitsPerSample) == 5, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters, isLowLatencyEnabled) == 6, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters) == 8, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters) == 4, "wrong alignment");

/**
 * Used for Hardware Encoding SBC codec parameters.
 * minBitpool and maxBitpool are not bitfields.
 */
struct SbcParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength blockLength __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands numSubbands __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod allocMethod __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
    uint8_t minBitpool __attribute__ ((aligned(1)));
    uint8_t maxBitpool __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, sampleRate) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, channelMode) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, blockLength) == 5, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, numSubbands) == 6, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, allocMethod) == 7, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, bitsPerSample) == 8, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, minBitpool) == 9, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters, maxBitpool) == 10, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters) == 12, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters) == 4, "wrong alignment");

/**
 * Used for Hardware Encoding AAC codec parameters
 */
struct AacParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType objectType __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate variableBitRateEnabled __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters, objectType) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters, sampleRate) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters, channelMode) == 8, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters, variableBitRateEnabled) == 9, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters, bitsPerSample) == 10, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters) == 12, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters) == 4, "wrong alignment");

/**
 * Used for Hardware Encoding LDAC codec parameters
 * Only used when configuring the codec. When Capabilities are requested, this
 * field is left empty since all qualities must be supported. Not a bitfield.
 */
struct LdacParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex qualityIndex __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters, sampleRate) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters, channelMode) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters, qualityIndex) == 5, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters, bitsPerSample) == 6, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters) == 8, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters) == 4, "wrong alignment");

/**
 * LHDC parameters....
 */
struct LhdcParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn isLLEnabled __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported isLLSupported __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters, sampleRate) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters, channelMode) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters, bitsPerSample) == 5, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters, isLLEnabled) == 6, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters, isLLSupported) == 7, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters) == 8, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters) == 4, "wrong alignment");

/**
 * Used for Hardware Encoding AptX and AptX-HD codec parameters
 */
struct AptxParameters final {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate sampleRate __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode channelMode __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample bitsPerSample __attribute__ ((aligned(1)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters, sampleRate) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters, channelMode) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters, bitsPerSample) == 5, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters) == 8, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters) == 4, "wrong alignment");

/**
 * Used to specify the capabilities of the codecs supported by Hardware Encoding.
 * AptX and AptX-HD both use the AptxParameters field.
 */
struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API CodecCapabilities final {
    // Forward declaration for forward reference support:
    struct Capabilities;

    struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API Capabilities final {
        enum class hidl_discriminator : uint8_t {
            sbcCapabilities = 0,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters
            aacCapabilities = 1,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters
            ldacCapabilities = 2,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters
            aptxCapabilities = 3,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters
            lhdcCapabilities = 4,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters
        };

        Capabilities();
        ~Capabilities();
        Capabilities(Capabilities&&);
        Capabilities(const Capabilities&);
        Capabilities& operator=(Capabilities&&);
        Capabilities& operator=(const Capabilities&);

        void sbcCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&);
        void sbcCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& sbcCapabilities();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& sbcCapabilities() const;

        void aacCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&);
        void aacCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& aacCapabilities();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& aacCapabilities() const;

        void ldacCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&);
        void ldacCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& ldacCapabilities();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& ldacCapabilities() const;

        void aptxCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&);
        void aptxCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& aptxCapabilities();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& aptxCapabilities() const;

        void lhdcCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&);
        void lhdcCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhdcCapabilities();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhdcCapabilities() const;

        // Utility methods
        hidl_discriminator getDiscriminator() const;

        constexpr size_t hidl_getUnionOffset() const {
            return offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities, hidl_u);
        }

    private:
        void hidl_destructUnion();

        hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
        union hidl_union final {
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters sbcCapabilities __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters aacCapabilities __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters ldacCapabilities __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters aptxCapabilities __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters lhdcCapabilities __attribute__ ((aligned(4)));

            hidl_union();
            ~hidl_union();
        } hidl_u;

        static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union) == 12, "wrong size");
        static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union) == 4, "wrong alignment");
        static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator) == 1, "wrong size");
        static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator) == 1, "wrong alignment");
    };

    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities) == 16, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities) == 4, "wrong alignment");

    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType codecType __attribute__ ((aligned(4)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities capabilities __attribute__ ((aligned(4)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities, codecType) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities, capabilities) == 4, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities) == 20, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities) == 4, "wrong alignment");

/**
 * Used to specify the capabilities of the different session types.
 */
struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API AudioCapabilities final {
    enum class hidl_discriminator : uint8_t {
        pcmCapabilities = 0,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters
        codecCapabilities = 1,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities
    };

    AudioCapabilities();
    ~AudioCapabilities();
    AudioCapabilities(AudioCapabilities&&);
    AudioCapabilities(const AudioCapabilities&);
    AudioCapabilities& operator=(AudioCapabilities&&);
    AudioCapabilities& operator=(const AudioCapabilities&);

    void pcmCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&);
    void pcmCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& pcmCapabilities();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& pcmCapabilities() const;

    void codecCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&);
    void codecCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& codecCapabilities();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& codecCapabilities() const;

    // Utility methods
    hidl_discriminator getDiscriminator() const;

    constexpr size_t hidl_getUnionOffset() const {
        return offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities, hidl_u);
    }

private:
    void hidl_destructUnion();

    hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
    union hidl_union final {
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters pcmCapabilities __attribute__ ((aligned(4)));
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities codecCapabilities __attribute__ ((aligned(4)));

        hidl_union();
        ~hidl_union();
    } hidl_u;

    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union) == 20, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union) == 4, "wrong alignment");
    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator) == 1, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator) == 1, "wrong alignment");
};

static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities) == 24, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities) == 4, "wrong alignment");

/**
 * Used to configure a Hardware Encoding session.
 * AptX and AptX-HD both use the AptxParameters field.
 */
struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API CodecConfiguration final {
    // Forward declaration for forward reference support:
    struct CodecSpecific;

    struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API CodecSpecific final {
        enum class hidl_discriminator : uint8_t {
            sbcConfig = 0,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters
            aacConfig = 1,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters
            ldacConfig = 2,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters
            aptxConfig = 3,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters
            lhdcConfig = 4,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters
        };

        CodecSpecific();
        ~CodecSpecific();
        CodecSpecific(CodecSpecific&&);
        CodecSpecific(const CodecSpecific&);
        CodecSpecific& operator=(CodecSpecific&&);
        CodecSpecific& operator=(const CodecSpecific&);

        void sbcConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&);
        void sbcConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& sbcConfig();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& sbcConfig() const;

        void aacConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&);
        void aacConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& aacConfig();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& aacConfig() const;

        void ldacConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&);
        void ldacConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& ldacConfig();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& ldacConfig() const;

        void aptxConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&);
        void aptxConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& aptxConfig();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& aptxConfig() const;

        void lhdcConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&);
        void lhdcConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&&);
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhdcConfig();
        const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhdcConfig() const;

        // Utility methods
        hidl_discriminator getDiscriminator() const;

        constexpr size_t hidl_getUnionOffset() const {
            return offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific, hidl_u);
        }

    private:
        void hidl_destructUnion();

        hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
        union hidl_union final {
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters sbcConfig __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters aacConfig __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters ldacConfig __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters aptxConfig __attribute__ ((aligned(4)));
            ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters lhdcConfig __attribute__ ((aligned(4)));

            hidl_union();
            ~hidl_union();
        } hidl_u;

        static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union) == 12, "wrong size");
        static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union) == 4, "wrong alignment");
        static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator) == 1, "wrong size");
        static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator) == 1, "wrong alignment");
    };

    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific) == 16, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific) == 4, "wrong alignment");

    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType codecType __attribute__ ((aligned(4)));
    /**
     * The encoded audio bitrate in bits / second.
     * 0x00000000 - The audio bitrate is not specified / unused
     * 0x00000001 - 0x00FFFFFF - Encoded audio bitrate in bits/second
     * 0x01000000 - 0xFFFFFFFF - Reserved
     *
     * The HAL needs to support all legal bitrates for the selected codec.
     */
    uint32_t encodedAudioBitrate __attribute__ ((aligned(4)));
    /**
     * Peer MTU (in octets)
     */
    uint16_t peerMtu __attribute__ ((aligned(2)));
    /**
     * Content protection by SCMS-T
     */
    bool isScmstEnabled __attribute__ ((aligned(1)));
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific config __attribute__ ((aligned(4)));
};

static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration, codecType) == 0, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration, encodedAudioBitrate) == 4, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration, peerMtu) == 8, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration, isScmstEnabled) == 10, "wrong offset");
static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration, config) == 12, "wrong offset");
static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration) == 28, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration) == 4, "wrong alignment");

/**
 * Used to configure either a Hardware or Software Encoding session based on session type
 */
struct ANDROIDHARDWAREBLUETOOTHAUDIO21_API AudioConfiguration final {
    enum class hidl_discriminator : uint8_t {
        pcmConfig = 0,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters
        codecConfig = 1,  // ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration
    };

    AudioConfiguration();
    ~AudioConfiguration();
    AudioConfiguration(AudioConfiguration&&);
    AudioConfiguration(const AudioConfiguration&);
    AudioConfiguration& operator=(AudioConfiguration&&);
    AudioConfiguration& operator=(const AudioConfiguration&);

    void pcmConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&);
    void pcmConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& pcmConfig();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& pcmConfig() const;

    void codecConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&);
    void codecConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&&);
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& codecConfig();
    const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& codecConfig() const;

    // Utility methods
    hidl_discriminator getDiscriminator() const;

    constexpr size_t hidl_getUnionOffset() const {
        return offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration, hidl_u);
    }

private:
    void hidl_destructUnion();

    hidl_discriminator hidl_d __attribute__ ((aligned(1))) ;
    union hidl_union final {
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters pcmConfig __attribute__ ((aligned(4)));
        ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration codecConfig __attribute__ ((aligned(4)));

        hidl_union();
        ~hidl_union();
    } hidl_u;

    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union) == 28, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union) == 4, "wrong alignment");
    static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator) == 1, "wrong size");
    static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator) == 1, "wrong alignment");
};

static_assert(sizeof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration) == 32, "wrong size");
static_assert(__alignof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration) == 4, "wrong alignment");

//
// type declarations for package
//

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& rhs);

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType o, ::std::ostream* os);
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint32_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate o, ::std::ostream* os);
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate rhs) {
    return static_cast<uint32_t>(lhs | static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) | rhs);
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const uint32_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate rhs) {
    return static_cast<uint32_t>(lhs & static_cast<uint32_t>(rhs));
}
constexpr uint32_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate lhs, const uint32_t rhs) {
    return static_cast<uint32_t>(static_cast<uint32_t>(lhs) & rhs);
}
constexpr uint32_t &operator|=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate e) {
    v |= static_cast<uint32_t>(e);
    return v;
}
constexpr uint32_t &operator&=(uint32_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate e) {
    v &= static_cast<uint32_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn o);
static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn o, ::std::ostream* os);
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& rhs);

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& o);
static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& o, ::std::ostream*);
static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& rhs);
static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& rhs);

//
// type header definitions for package
//

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".tvSec = ";
    os += ::android::hardware::toString(o.tvSec);
    os += ", .tvNSec = ";
    os += ::android::hardware::toString(o.tvNSec);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& rhs) {
    if (lhs.tvSec != rhs.tvSec) {
        return false;
    }
    if (lhs.tvNSec != rhs.tvNSec) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::TimeSpec& rhs){
    return !(lhs == rhs);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::SUCCESS) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::SUCCESS)) {
        os += (first ? "" : " | ");
        os += "SUCCESS";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::SUCCESS;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::UNSUPPORTED_CODEC_CONFIGURATION) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::UNSUPPORTED_CODEC_CONFIGURATION)) {
        os += (first ? "" : " | ");
        os += "UNSUPPORTED_CODEC_CONFIGURATION";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::UNSUPPORTED_CODEC_CONFIGURATION;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::FAILURE) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::FAILURE)) {
        os += (first ? "" : " | ");
        os += "FAILURE";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::FAILURE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::SUCCESS) {
        return "SUCCESS";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::UNSUPPORTED_CODEC_CONFIGURATION) {
        return "UNSUPPORTED_CODEC_CONFIGURATION";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::FAILURE) {
        return "FAILURE";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::UNKNOWN) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "A2DP_SOFTWARE_ENCODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "A2DP_HARDWARE_OFFLOAD_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH)) {
        os += (first ? "" : " | ");
        os += "HEARING_AID_SOFTWARE_ENCODING_DATAPATH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH) {
        return "A2DP_SOFTWARE_ENCODING_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH) {
        return "A2DP_HARDWARE_OFFLOAD_DATAPATH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH) {
        return "HEARING_AID_SOFTWARE_ENCODING_DATAPATH";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::UNKNOWN) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::SBC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::SBC)) {
        os += (first ? "" : " | ");
        os += "SBC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::SBC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::AAC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::AAC)) {
        os += (first ? "" : " | ");
        os += "AAC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::AAC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX)) {
        os += (first ? "" : " | ");
        os += "APTX";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX_HD) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX_HD)) {
        os += (first ? "" : " | ");
        os += "APTX_HD";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX_HD;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LDAC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LDAC)) {
        os += (first ? "" : " | ");
        os += "LDAC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LDAC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LHDC) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LHDC)) {
        os += (first ? "" : " | ");
        os += "LHDC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LHDC;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::SBC) {
        return "SBC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::AAC) {
        return "AAC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX) {
        return "APTX";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX_HD) {
        return "APTX_HD";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LDAC) {
        return "LDAC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LHDC) {
        return "LHDC";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate>(uint32_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_UNKNOWN) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "RATE_UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_44100) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_44100)) {
        os += (first ? "" : " | ");
        os += "RATE_44100";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_44100;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_48000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_48000)) {
        os += (first ? "" : " | ");
        os += "RATE_48000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_48000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_88200) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_88200)) {
        os += (first ? "" : " | ");
        os += "RATE_88200";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_88200;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_96000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_96000)) {
        os += (first ? "" : " | ");
        os += "RATE_96000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_96000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_176400) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_176400)) {
        os += (first ? "" : " | ");
        os += "RATE_176400";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_176400;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_192000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_192000)) {
        os += (first ? "" : " | ");
        os += "RATE_192000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_192000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_16000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_16000)) {
        os += (first ? "" : " | ");
        os += "RATE_16000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_16000;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_24000) == static_cast<uint32_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_24000)) {
        os += (first ? "" : " | ");
        os += "RATE_24000";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_24000;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_UNKNOWN) {
        return "RATE_UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_44100) {
        return "RATE_44100";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_48000) {
        return "RATE_48000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_88200) {
        return "RATE_88200";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_96000) {
        return "RATE_96000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_176400) {
        return "RATE_176400";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_192000) {
        return "RATE_192000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_16000) {
        return "RATE_16000";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_24000) {
        return "RATE_24000";
    }
    std::string os;
    os += toHexString(static_cast<uint32_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_UNKNOWN) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "BITS_UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_16) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_16)) {
        os += (first ? "" : " | ");
        os += "BITS_16";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_16;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_24) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_24)) {
        os += (first ? "" : " | ");
        os += "BITS_24";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_24;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_32) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_32)) {
        os += (first ? "" : " | ");
        os += "BITS_32";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_32;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_UNKNOWN) {
        return "BITS_UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_16) {
        return "BITS_16";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_24) {
        return "BITS_24";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_32) {
        return "BITS_32";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::UNKNOWN) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::MONO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::MONO)) {
        os += (first ? "" : " | ");
        os += "MONO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::MONO;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::STEREO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::STEREO)) {
        os += (first ? "" : " | ");
        os += "STEREO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::STEREO;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::MONO) {
        return "MONO";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::STEREO) {
        return "STEREO";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::UNKNOWN) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::JOINT_STEREO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::JOINT_STEREO)) {
        os += (first ? "" : " | ");
        os += "JOINT_STEREO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::JOINT_STEREO;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::STEREO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::STEREO)) {
        os += (first ? "" : " | ");
        os += "STEREO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::STEREO;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::DUAL) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::DUAL)) {
        os += (first ? "" : " | ");
        os += "DUAL";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::DUAL;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::MONO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::MONO)) {
        os += (first ? "" : " | ");
        os += "MONO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::MONO;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::JOINT_STEREO) {
        return "JOINT_STEREO";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::STEREO) {
        return "STEREO";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::DUAL) {
        return "DUAL";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::MONO) {
        return "MONO";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_4) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_4)) {
        os += (first ? "" : " | ");
        os += "BLOCKS_4";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_4;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_8) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_8)) {
        os += (first ? "" : " | ");
        os += "BLOCKS_8";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_8;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_12) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_12)) {
        os += (first ? "" : " | ");
        os += "BLOCKS_12";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_12;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_16) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_16)) {
        os += (first ? "" : " | ");
        os += "BLOCKS_16";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_16;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_4) {
        return "BLOCKS_4";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_8) {
        return "BLOCKS_8";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_12) {
        return "BLOCKS_12";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_16) {
        return "BLOCKS_16";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_4) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_4)) {
        os += (first ? "" : " | ");
        os += "SUBBAND_4";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_4;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_8) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_8)) {
        os += (first ? "" : " | ");
        os += "SUBBAND_8";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_8;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_4) {
        return "SUBBAND_4";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_8) {
        return "SUBBAND_8";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_S) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_S)) {
        os += (first ? "" : " | ");
        os += "ALLOC_MD_S";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_S;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_L) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_L)) {
        os += (first ? "" : " | ");
        os += "ALLOC_MD_L";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_L;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_S) {
        return "ALLOC_MD_S";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_L) {
        return "ALLOC_MD_L";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG2_LC) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG2_LC)) {
        os += (first ? "" : " | ");
        os += "MPEG2_LC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG2_LC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LC) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LC)) {
        os += (first ? "" : " | ");
        os += "MPEG4_LC";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LC;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LTP) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LTP)) {
        os += (first ? "" : " | ");
        os += "MPEG4_LTP";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LTP;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_SCALABLE) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_SCALABLE)) {
        os += (first ? "" : " | ");
        os += "MPEG4_SCALABLE";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_SCALABLE;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG2_LC) {
        return "MPEG2_LC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LC) {
        return "MPEG4_LC";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LTP) {
        return "MPEG4_LTP";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_SCALABLE) {
        return "MPEG4_SCALABLE";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::ENABLED) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::ENABLED)) {
        os += (first ? "" : " | ");
        os += "ENABLED";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::ENABLED;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::DISABLED) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::DISABLED)) {
        os += (first ? "" : " | ");
        os += "DISABLED";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::DISABLED;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::ENABLED) {
        return "ENABLED";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::DISABLED) {
        return "DISABLED";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::UNKNOWN) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::UNKNOWN)) {
        os += (first ? "" : " | ");
        os += "UNKNOWN";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::UNKNOWN;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::STEREO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::STEREO)) {
        os += (first ? "" : " | ");
        os += "STEREO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::STEREO;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::DUAL) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::DUAL)) {
        os += (first ? "" : " | ");
        os += "DUAL";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::DUAL;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::MONO) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::MONO)) {
        os += (first ? "" : " | ");
        os += "MONO";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::MONO;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::UNKNOWN) {
        return "UNKNOWN";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::STEREO) {
        return "STEREO";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::DUAL) {
        return "DUAL";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::MONO) {
        return "MONO";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_HIGH) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_HIGH)) {
        os += (first ? "" : " | ");
        os += "QUALITY_HIGH";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_HIGH;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_MID) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_MID)) {
        os += (first ? "" : " | ");
        os += "QUALITY_MID";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_MID;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_LOW) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_LOW)) {
        os += (first ? "" : " | ");
        os += "QUALITY_LOW";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_LOW;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_ABR) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_ABR)) {
        os += (first ? "" : " | ");
        os += "QUALITY_ABR";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_ABR;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_HIGH) {
        return "QUALITY_HIGH";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_MID) {
        return "QUALITY_MID";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_LOW) {
        return "QUALITY_LOW";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_ABR) {
        return "QUALITY_ABR";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Supported) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Supported)) {
        os += (first ? "" : " | ");
        os += "Supported";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Supported;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Unsupported) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Unsupported)) {
        os += (first ? "" : " | ");
        os += "Unsupported";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Unsupported;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Supported) {
        return "Supported";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Unsupported) {
        return "Unsupported";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported o, ::std::ostream* os) {
    *os << toString(o);
}

template<>
inline std::string toString<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn> flipped = 0;
    bool first = true;
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Enabled) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Enabled)) {
        os += (first ? "" : " | ");
        os += "Enabled";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Enabled;
    }
    if ((o & ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Disabled) == static_cast<uint8_t>(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Disabled)) {
        os += (first ? "" : " | ");
        os += "Disabled";
        first = false;
        flipped |= ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Disabled;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn o) {
    using ::android::hardware::details::toHexString;
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Enabled) {
        return "Enabled";
    }
    if (o == ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Disabled) {
        return "Disabled";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn o, ::std::ostream* os) {
    *os << toString(o);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += ", .isLowLatencyEnabled = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.isLowLatencyEnabled);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& rhs) {
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
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .blockLength = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.blockLength);
    os += ", .numSubbands = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.numSubbands);
    os += ", .allocMethod = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.allocMethod);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += ", .minBitpool = ";
    os += ::android::hardware::toString(o.minBitpool);
    os += ", .maxBitpool = ";
    os += ::android::hardware::toString(o.maxBitpool);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& rhs) {
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.channelMode != rhs.channelMode) {
        return false;
    }
    if (lhs.blockLength != rhs.blockLength) {
        return false;
    }
    if (lhs.numSubbands != rhs.numSubbands) {
        return false;
    }
    if (lhs.allocMethod != rhs.allocMethod) {
        return false;
    }
    if (lhs.bitsPerSample != rhs.bitsPerSample) {
        return false;
    }
    if (lhs.minBitpool != rhs.minBitpool) {
        return false;
    }
    if (lhs.maxBitpool != rhs.maxBitpool) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".objectType = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.objectType);
    os += ", .sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .variableBitRateEnabled = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.variableBitRateEnabled);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& rhs) {
    if (lhs.objectType != rhs.objectType) {
        return false;
    }
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.channelMode != rhs.channelMode) {
        return false;
    }
    if (lhs.variableBitRateEnabled != rhs.variableBitRateEnabled) {
        return false;
    }
    if (lhs.bitsPerSample != rhs.bitsPerSample) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .qualityIndex = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.qualityIndex);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& rhs) {
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.channelMode != rhs.channelMode) {
        return false;
    }
    if (lhs.qualityIndex != rhs.qualityIndex) {
        return false;
    }
    if (lhs.bitsPerSample != rhs.bitsPerSample) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += ", .isLLEnabled = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.isLLEnabled);
    os += ", .isLLSupported = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.isLLSupported);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& rhs) {
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.channelMode != rhs.channelMode) {
        return false;
    }
    if (lhs.bitsPerSample != rhs.bitsPerSample) {
        return false;
    }
    if (lhs.isLLEnabled != rhs.isLLEnabled) {
        return false;
    }
    if (lhs.isLLSupported != rhs.isLLSupported) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".sampleRate = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.sampleRate);
    os += ", .channelMode = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.channelMode);
    os += ", .bitsPerSample = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.bitsPerSample);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& rhs) {
    if (lhs.sampleRate != rhs.sampleRate) {
        return false;
    }
    if (lhs.channelMode != rhs.channelMode) {
        return false;
    }
    if (lhs.bitsPerSample != rhs.bitsPerSample) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::sbcCapabilities: {
            os += ".sbcCapabilities = ";
            os += toString(o.sbcCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::aacCapabilities: {
            os += ".aacCapabilities = ";
            os += toString(o.aacCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::ldacCapabilities: {
            os += ".ldacCapabilities = ";
            os += toString(o.ldacCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::aptxCapabilities: {
            os += ".aptxCapabilities = ";
            os += toString(o.aptxCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::lhdcCapabilities: {
            os += ".lhdcCapabilities = ";
            os += toString(o.lhdcCapabilities());
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

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::sbcCapabilities: {
            return (lhs.sbcCapabilities() == rhs.sbcCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::aacCapabilities: {
            return (lhs.aacCapabilities() == rhs.aacCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::ldacCapabilities: {
            return (lhs.ldacCapabilities() == rhs.ldacCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::aptxCapabilities: {
            return (lhs.aptxCapabilities() == rhs.aptxCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator::lhdcCapabilities: {
            return (lhs.lhdcCapabilities() == rhs.lhdcCapabilities());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(lhs.getDiscriminator())) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".codecType = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.codecType);
    os += ", .capabilities = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.capabilities);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& rhs) {
    if (lhs.codecType != rhs.codecType) {
        return false;
    }
    if (lhs.capabilities != rhs.capabilities) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator::pcmCapabilities: {
            os += ".pcmCapabilities = ";
            os += toString(o.pcmCapabilities());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator::codecCapabilities: {
            os += ".codecCapabilities = ";
            os += toString(o.codecCapabilities());
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

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator::pcmCapabilities: {
            return (lhs.pcmCapabilities() == rhs.pcmCapabilities());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator::codecCapabilities: {
            return (lhs.codecCapabilities() == rhs.codecCapabilities());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(lhs.getDiscriminator())) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::sbcConfig: {
            os += ".sbcConfig = ";
            os += toString(o.sbcConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::aacConfig: {
            os += ".aacConfig = ";
            os += toString(o.aacConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::ldacConfig: {
            os += ".ldacConfig = ";
            os += toString(o.ldacConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::aptxConfig: {
            os += ".aptxConfig = ";
            os += toString(o.aptxConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::lhdcConfig: {
            os += ".lhdcConfig = ";
            os += toString(o.lhdcConfig());
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

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::sbcConfig: {
            return (lhs.sbcConfig() == rhs.sbcConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::aacConfig: {
            return (lhs.aacConfig() == rhs.aacConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::ldacConfig: {
            return (lhs.ldacConfig() == rhs.ldacConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::aptxConfig: {
            return (lhs.aptxConfig() == rhs.aptxConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator::lhdcConfig: {
            return (lhs.lhdcConfig() == rhs.lhdcConfig());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(lhs.getDiscriminator())) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";
    os += ".codecType = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.codecType);
    os += ", .encodedAudioBitrate = ";
    os += ::android::hardware::toString(o.encodedAudioBitrate);
    os += ", .peerMtu = ";
    os += ::android::hardware::toString(o.peerMtu);
    os += ", .isScmstEnabled = ";
    os += ::android::hardware::toString(o.isScmstEnabled);
    os += ", .config = ";
    os += ::vendor::mediatek::hardware::bluetooth::audio::V2_1::toString(o.config);
    os += "}"; return os;
}

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& rhs) {
    if (lhs.codecType != rhs.codecType) {
        return false;
    }
    if (lhs.encodedAudioBitrate != rhs.encodedAudioBitrate) {
        return false;
    }
    if (lhs.peerMtu != rhs.peerMtu) {
        return false;
    }
    if (lhs.isScmstEnabled != rhs.isScmstEnabled) {
        return false;
    }
    if (lhs.config != rhs.config) {
        return false;
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& rhs){
    return !(lhs == rhs);
}

static inline std::string toString(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& o) {
    using ::android::hardware::toString;
    std::string os;
    os += "{";

    switch (o.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator::pcmConfig: {
            os += ".pcmConfig = ";
            os += toString(o.pcmConfig());
            break;
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator::codecConfig: {
            os += ".codecConfig = ";
            os += toString(o.codecConfig());
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

static inline void PrintTo(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& o, ::std::ostream* os) {
    *os << toString(o);
}

static inline bool operator==(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& rhs) {
    if (lhs.getDiscriminator() != rhs.getDiscriminator()) {
        return false;
    }
    switch (lhs.getDiscriminator()) {
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator::pcmConfig: {
            return (lhs.pcmConfig() == rhs.pcmConfig());
        }
        case ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator::codecConfig: {
            return (lhs.codecConfig() == rhs.codecConfig());
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(lhs.getDiscriminator())) + ").").c_str());
        }
    }
    return true;
}

static inline bool operator!=(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& lhs, const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& rhs){
    return !(lhs == rhs);
}


}  // namespace V2_1
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status, 3> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::SUCCESS,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::UNSUPPORTED_CODEC_CONFIGURATION,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::Status::FAILURE,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType, 4> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_SOFTWARE_ENCODING_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::A2DP_HARDWARE_OFFLOAD_DATAPATH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SessionType::HEARING_AID_SOFTWARE_ENCODING_DATAPATH,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType, 7> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::SBC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::AAC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::APTX_HD,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LDAC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecType::LHDC,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate, 9> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_44100,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_48000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_88200,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_96000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_176400,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_192000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_16000,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SampleRate::RATE_24000,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample, 4> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_16,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_24,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::BitsPerSample::BITS_32,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode, 3> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::MONO,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::ChannelMode::STEREO,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode, 5> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::JOINT_STEREO,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::STEREO,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::DUAL,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcChannelMode::MONO,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength, 4> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_4,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_8,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_12,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcBlockLength::BLOCKS_16,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_4,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcNumSubbands::SUBBAND_8,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_S,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcAllocMethod::ALLOC_MD_L,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType, 4> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG2_LC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LC,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_LTP,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacObjectType::MPEG4_SCALABLE,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::ENABLED,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacVariableBitRate::DISABLED,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode, 4> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::UNKNOWN,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::STEREO,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::DUAL,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacChannelMode::MONO,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex, 4> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_HIGH,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_MID,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_LOW,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacQualityIndex::QUALITY_ABR,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Supported,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencySupported::Unsupported,
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
template<> inline constexpr std::array<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn, 2> hidl_enum_values<::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn> = {
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Enabled,
    ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcLowLatencyEn::Disabled,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android

#ifdef __attribute__
#undef __attribute__
#endif

#endif  // HIDL_GENERATED_VENDOR_MEDIATEK_HARDWARE_BLUETOOTH_AUDIO_V2_1_TYPES_H
