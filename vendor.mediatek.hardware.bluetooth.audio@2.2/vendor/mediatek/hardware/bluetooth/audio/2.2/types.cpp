#define LOG_TAG "vendor.mediatek.hardware.bluetooth.audio@2.2::types"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.2/types.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.2/hwtypes.h>

namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_2 {

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::AudioConfiguration() {
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration, hidl_d) == 0, "wrong offset");
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration, hidl_u) == 4, "wrong offset");

    ::std::memset(&hidl_u, 0, sizeof(hidl_u));
    ::std::memset(reinterpret_cast<uint8_t*>(this) + 1, 0, 3);
    // no padding to zero starting at offset 40

    hidl_d = hidl_discriminator::pcmConfig;
    new (&hidl_u.pcmConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::~AudioConfiguration() {
    hidl_destructUnion();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::AudioConfiguration(AudioConfiguration&& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration() {
    *this = std::move(other);
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::AudioConfiguration(const AudioConfiguration& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration() {
    *this = other;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::operator=)(AudioConfiguration&& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::pcmConfig: {
            pcmConfig(std::move(other.hidl_u.pcmConfig));
            break;
        }
        case hidl_discriminator::codecConfig: {
            codecConfig(std::move(other.hidl_u.codecConfig));
            break;
        }
        case hidl_discriminator::leAudioCodecConfig: {
            leAudioCodecConfig(std::move(other.hidl_u.leAudioCodecConfig));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::operator=)(const AudioConfiguration& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::pcmConfig: {
            pcmConfig(other.hidl_u.pcmConfig);
            break;
        }
        case hidl_discriminator::codecConfig: {
            codecConfig(other.hidl_u.codecConfig);
            break;
        }
        case hidl_discriminator::leAudioCodecConfig: {
            leAudioCodecConfig(other.hidl_u.leAudioCodecConfig);
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_destructUnion() {
    switch (hidl_d) {
        case hidl_discriminator::pcmConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.pcmConfig));
            break;
        }
        case hidl_discriminator::codecConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.codecConfig));
            break;
        }
        case hidl_discriminator::leAudioCodecConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.leAudioCodecConfig));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(hidl_d)) + ").").c_str());
        }
    }

}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::pcmConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& o) {
    if (hidl_d != hidl_discriminator::pcmConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters(o);
        hidl_d = hidl_discriminator::pcmConfig;
    }
    else if (&(hidl_u.pcmConfig) != &o) {
        hidl_u.pcmConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::pcmConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters&& o) {
    if (hidl_d != hidl_discriminator::pcmConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters(std::move(o));
        hidl_d = hidl_discriminator::pcmConfig;
    }
    else if (&(hidl_u.pcmConfig) != &o) {
        hidl_u.pcmConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::pcmConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmConfig));
    }

    return hidl_u.pcmConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::pcmConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmConfig));
    }

    return hidl_u.pcmConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::codecConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& o) {
    if (hidl_d != hidl_discriminator::codecConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.codecConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration(o);
        hidl_d = hidl_discriminator::codecConfig;
    }
    else if (&(hidl_u.codecConfig) != &o) {
        hidl_u.codecConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::codecConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&& o) {
    if (hidl_d != hidl_discriminator::codecConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.codecConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration(std::move(o));
        hidl_d = hidl_discriminator::codecConfig;
    }
    else if (&(hidl_u.codecConfig) != &o) {
        hidl_u.codecConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::codecConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecConfig));
    }

    return hidl_u.codecConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::codecConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecConfig));
    }

    return hidl_u.codecConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::leAudioCodecConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& o) {
    if (hidl_d != hidl_discriminator::leAudioCodecConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.leAudioCodecConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration(o);
        hidl_d = hidl_discriminator::leAudioCodecConfig;
    }
    else if (&(hidl_u.leAudioCodecConfig) != &o) {
        hidl_u.leAudioCodecConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::leAudioCodecConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration&& o) {
    if (hidl_d != hidl_discriminator::leAudioCodecConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.leAudioCodecConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration(std::move(o));
        hidl_d = hidl_discriminator::leAudioCodecConfig;
    }
    else if (&(hidl_u.leAudioCodecConfig) != &o) {
        hidl_u.leAudioCodecConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::leAudioCodecConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::leAudioCodecConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::leAudioCodecConfig));
    }

    return hidl_u.leAudioCodecConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::leAudioCodecConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::leAudioCodecConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::leAudioCodecConfig));
    }

    return hidl_u.leAudioCodecConfig;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_union::hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_union::~hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::hidl_discriminator (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioConfiguration::getDiscriminator)() const {
    return hidl_d;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::AudioCapabilities() {
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities, hidl_d) == 0, "wrong offset");
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities, hidl_u) == 4, "wrong offset");

    ::std::memset(&hidl_u, 0, sizeof(hidl_u));
    ::std::memset(reinterpret_cast<uint8_t*>(this) + 1, 0, 3);
    // no padding to zero starting at offset 32

    hidl_d = hidl_discriminator::pcmCapabilities;
    new (&hidl_u.pcmCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::~AudioCapabilities() {
    hidl_destructUnion();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::AudioCapabilities(AudioCapabilities&& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities() {
    *this = std::move(other);
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::AudioCapabilities(const AudioCapabilities& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities() {
    *this = other;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::operator=)(AudioCapabilities&& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::pcmCapabilities: {
            pcmCapabilities(std::move(other.hidl_u.pcmCapabilities));
            break;
        }
        case hidl_discriminator::codecCapabilities: {
            codecCapabilities(std::move(other.hidl_u.codecCapabilities));
            break;
        }
        case hidl_discriminator::leAudioCapabilities: {
            leAudioCapabilities(std::move(other.hidl_u.leAudioCapabilities));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::operator=)(const AudioCapabilities& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::pcmCapabilities: {
            pcmCapabilities(other.hidl_u.pcmCapabilities);
            break;
        }
        case hidl_discriminator::codecCapabilities: {
            codecCapabilities(other.hidl_u.codecCapabilities);
            break;
        }
        case hidl_discriminator::leAudioCapabilities: {
            leAudioCapabilities(other.hidl_u.leAudioCapabilities);
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_destructUnion() {
    switch (hidl_d) {
        case hidl_discriminator::pcmCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.pcmCapabilities));
            break;
        }
        case hidl_discriminator::codecCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.codecCapabilities));
            break;
        }
        case hidl_discriminator::leAudioCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.leAudioCapabilities));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(hidl_d)) + ").").c_str());
        }
    }

}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::pcmCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& o) {
    if (hidl_d != hidl_discriminator::pcmCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters(o);
        hidl_d = hidl_discriminator::pcmCapabilities;
    }
    else if (&(hidl_u.pcmCapabilities) != &o) {
        hidl_u.pcmCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::pcmCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters&& o) {
    if (hidl_d != hidl_discriminator::pcmCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters(std::move(o));
        hidl_d = hidl_discriminator::pcmCapabilities;
    }
    else if (&(hidl_u.pcmCapabilities) != &o) {
        hidl_u.pcmCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::pcmCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmCapabilities));
    }

    return hidl_u.pcmCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::pcmCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmCapabilities));
    }

    return hidl_u.pcmCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::codecCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& o) {
    if (hidl_d != hidl_discriminator::codecCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.codecCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities(o);
        hidl_d = hidl_discriminator::codecCapabilities;
    }
    else if (&(hidl_u.codecCapabilities) != &o) {
        hidl_u.codecCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::codecCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&& o) {
    if (hidl_d != hidl_discriminator::codecCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.codecCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities(std::move(o));
        hidl_d = hidl_discriminator::codecCapabilities;
    }
    else if (&(hidl_u.codecCapabilities) != &o) {
        hidl_u.codecCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::codecCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecCapabilities));
    }

    return hidl_u.codecCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::codecCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecCapabilities));
    }

    return hidl_u.codecCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::leAudioCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& o) {
    if (hidl_d != hidl_discriminator::leAudioCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.leAudioCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities(o);
        hidl_d = hidl_discriminator::leAudioCapabilities;
    }
    else if (&(hidl_u.leAudioCapabilities) != &o) {
        hidl_u.leAudioCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::leAudioCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities&& o) {
    if (hidl_d != hidl_discriminator::leAudioCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.leAudioCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities(std::move(o));
        hidl_d = hidl_discriminator::leAudioCapabilities;
    }
    else if (&(hidl_u.leAudioCapabilities) != &o) {
        hidl_u.leAudioCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::leAudioCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::leAudioCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::leAudioCapabilities));
    }

    return hidl_u.leAudioCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_2::LeAudioCodecCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::leAudioCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::leAudioCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::leAudioCapabilities));
    }

    return hidl_u.leAudioCapabilities;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_union::hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_union::~hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::hidl_discriminator (::vendor::mediatek::hardware::bluetooth::audio::V2_2::AudioCapabilities::getDiscriminator)() const {
    return hidl_d;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32, "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_2
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
