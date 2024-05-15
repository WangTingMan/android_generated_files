#define LOG_TAG "vendor.mediatek.hardware.bluetooth.audio@2.1::types"

#include <log/log.h>
#include <cutils/trace.h>
#include <hidl/HidlTransportSupport.h>

#include <hidl/Static.h>
#include <hwbinder/ProcessState.h>
#include <utils/Trace.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.1/types.h>
#include <vendor/mediatek/hardware/bluetooth/audio/2.1/hwtypes.h>

namespace vendor {
namespace mediatek {
namespace hardware {
namespace bluetooth {
namespace audio {
namespace V2_1 {

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities() {
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities, hidl_d) == 0, "wrong offset");
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities, hidl_u) == 4, "wrong offset");

    ::std::memset(&hidl_u, 0, sizeof(hidl_u));
    ::std::memset(reinterpret_cast<uint8_t*>(this) + 1, 0, 3);
    // no padding to zero starting at offset 16

    hidl_d = hidl_discriminator::sbcCapabilities;
    new (&hidl_u.sbcCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::~Capabilities() {
    hidl_destructUnion();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(Capabilities&& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities() {
    *this = std::move(other);
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::Capabilities(const Capabilities& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities() {
    *this = other;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::operator=)(Capabilities&& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::sbcCapabilities: {
            sbcCapabilities(std::move(other.hidl_u.sbcCapabilities));
            break;
        }
        case hidl_discriminator::aacCapabilities: {
            aacCapabilities(std::move(other.hidl_u.aacCapabilities));
            break;
        }
        case hidl_discriminator::ldacCapabilities: {
            ldacCapabilities(std::move(other.hidl_u.ldacCapabilities));
            break;
        }
        case hidl_discriminator::aptxCapabilities: {
            aptxCapabilities(std::move(other.hidl_u.aptxCapabilities));
            break;
        }
        case hidl_discriminator::lhdcCapabilities: {
            lhdcCapabilities(std::move(other.hidl_u.lhdcCapabilities));
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

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::operator=)(const Capabilities& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::sbcCapabilities: {
            sbcCapabilities(other.hidl_u.sbcCapabilities);
            break;
        }
        case hidl_discriminator::aacCapabilities: {
            aacCapabilities(other.hidl_u.aacCapabilities);
            break;
        }
        case hidl_discriminator::ldacCapabilities: {
            ldacCapabilities(other.hidl_u.ldacCapabilities);
            break;
        }
        case hidl_discriminator::aptxCapabilities: {
            aptxCapabilities(other.hidl_u.aptxCapabilities);
            break;
        }
        case hidl_discriminator::lhdcCapabilities: {
            lhdcCapabilities(other.hidl_u.lhdcCapabilities);
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

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_destructUnion() {
    switch (hidl_d) {
        case hidl_discriminator::sbcCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.sbcCapabilities));
            break;
        }
        case hidl_discriminator::aacCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.aacCapabilities));
            break;
        }
        case hidl_discriminator::ldacCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.ldacCapabilities));
            break;
        }
        case hidl_discriminator::aptxCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.aptxCapabilities));
            break;
        }
        case hidl_discriminator::lhdcCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.lhdcCapabilities));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(hidl_d)) + ").").c_str());
        }
    }

}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& o) {
    if (hidl_d != hidl_discriminator::sbcCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.sbcCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters(o);
        hidl_d = hidl_discriminator::sbcCapabilities;
    }
    else if (&(hidl_u.sbcCapabilities) != &o) {
        hidl_u.sbcCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&& o) {
    if (hidl_d != hidl_discriminator::sbcCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.sbcCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters(std::move(o));
        hidl_d = hidl_discriminator::sbcCapabilities;
    }
    else if (&(hidl_u.sbcCapabilities) != &o) {
        hidl_u.sbcCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::sbcCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::sbcCapabilities));
    }

    return hidl_u.sbcCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::sbcCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::sbcCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::sbcCapabilities));
    }

    return hidl_u.sbcCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& o) {
    if (hidl_d != hidl_discriminator::aacCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aacCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters(o);
        hidl_d = hidl_discriminator::aacCapabilities;
    }
    else if (&(hidl_u.aacCapabilities) != &o) {
        hidl_u.aacCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&& o) {
    if (hidl_d != hidl_discriminator::aacCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aacCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters(std::move(o));
        hidl_d = hidl_discriminator::aacCapabilities;
    }
    else if (&(hidl_u.aacCapabilities) != &o) {
        hidl_u.aacCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aacCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aacCapabilities));
    }

    return hidl_u.aacCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aacCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aacCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aacCapabilities));
    }

    return hidl_u.aacCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& o) {
    if (hidl_d != hidl_discriminator::ldacCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.ldacCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters(o);
        hidl_d = hidl_discriminator::ldacCapabilities;
    }
    else if (&(hidl_u.ldacCapabilities) != &o) {
        hidl_u.ldacCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&& o) {
    if (hidl_d != hidl_discriminator::ldacCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.ldacCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters(std::move(o));
        hidl_d = hidl_discriminator::ldacCapabilities;
    }
    else if (&(hidl_u.ldacCapabilities) != &o) {
        hidl_u.ldacCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::ldacCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::ldacCapabilities));
    }

    return hidl_u.ldacCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::ldacCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::ldacCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::ldacCapabilities));
    }

    return hidl_u.ldacCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& o) {
    if (hidl_d != hidl_discriminator::aptxCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aptxCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters(o);
        hidl_d = hidl_discriminator::aptxCapabilities;
    }
    else if (&(hidl_u.aptxCapabilities) != &o) {
        hidl_u.aptxCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&& o) {
    if (hidl_d != hidl_discriminator::aptxCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aptxCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters(std::move(o));
        hidl_d = hidl_discriminator::aptxCapabilities;
    }
    else if (&(hidl_u.aptxCapabilities) != &o) {
        hidl_u.aptxCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aptxCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aptxCapabilities));
    }

    return hidl_u.aptxCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::aptxCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aptxCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aptxCapabilities));
    }

    return hidl_u.aptxCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& o) {
    if (hidl_d != hidl_discriminator::lhdcCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.lhdcCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters(o);
        hidl_d = hidl_discriminator::lhdcCapabilities;
    }
    else if (&(hidl_u.lhdcCapabilities) != &o) {
        hidl_u.lhdcCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&& o) {
    if (hidl_d != hidl_discriminator::lhdcCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.lhdcCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters(std::move(o));
        hidl_d = hidl_discriminator::lhdcCapabilities;
    }
    else if (&(hidl_u.lhdcCapabilities) != &o) {
        hidl_u.lhdcCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::lhdcCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::lhdcCapabilities));
    }

    return hidl_u.lhdcCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::lhdcCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::lhdcCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::lhdcCapabilities));
    }

    return hidl_u.lhdcCapabilities;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_union::~hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::hidl_discriminator (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities::Capabilities::getDiscriminator)() const {
    return hidl_d;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities() {
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities, hidl_d) == 0, "wrong offset");
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities, hidl_u) == 4, "wrong offset");

    ::std::memset(&hidl_u, 0, sizeof(hidl_u));
    ::std::memset(reinterpret_cast<uint8_t*>(this) + 1, 0, 3);
    // no padding to zero starting at offset 24

    hidl_d = hidl_discriminator::pcmCapabilities;
    new (&hidl_u.pcmCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::~AudioCapabilities() {
    hidl_destructUnion();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(AudioCapabilities&& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities() {
    *this = std::move(other);
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::AudioCapabilities(const AudioCapabilities& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities() {
    *this = other;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::operator=)(AudioCapabilities&& other) {
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
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::operator=)(const AudioCapabilities& other) {
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
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_destructUnion() {
    switch (hidl_d) {
        case hidl_discriminator::pcmCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.pcmCapabilities));
            break;
        }
        case hidl_discriminator::codecCapabilities: {
            ::android::hardware::details::destructElement(&(hidl_u.codecCapabilities));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(hidl_d)) + ").").c_str());
        }
    }

}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& o) {
    if (hidl_d != hidl_discriminator::pcmCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters(o);
        hidl_d = hidl_discriminator::pcmCapabilities;
    }
    else if (&(hidl_u.pcmCapabilities) != &o) {
        hidl_u.pcmCapabilities = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&& o) {
    if (hidl_d != hidl_discriminator::pcmCapabilities) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmCapabilities) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters(std::move(o));
        hidl_d = hidl_discriminator::pcmCapabilities;
    }
    else if (&(hidl_u.pcmCapabilities) != &o) {
        hidl_u.pcmCapabilities = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmCapabilities));
    }

    return hidl_u.pcmCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::pcmCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmCapabilities));
    }

    return hidl_u.pcmCapabilities;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& o) {
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

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities&& o) {
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

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecCapabilities));
    }

    return hidl_u.codecCapabilities;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecCapabilities& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::codecCapabilities)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecCapabilities)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecCapabilities));
    }

    return hidl_u.codecCapabilities;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_union::~hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::hidl_discriminator (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioCapabilities::getDiscriminator)() const {
    return hidl_d;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific() {
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific, hidl_d) == 0, "wrong offset");
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific, hidl_u) == 4, "wrong offset");

    ::std::memset(&hidl_u, 0, sizeof(hidl_u));
    ::std::memset(reinterpret_cast<uint8_t*>(this) + 1, 0, 3);
    // no padding to zero starting at offset 16

    hidl_d = hidl_discriminator::sbcConfig;
    new (&hidl_u.sbcConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::~CodecSpecific() {
    hidl_destructUnion();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(CodecSpecific&& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific() {
    *this = std::move(other);
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::CodecSpecific(const CodecSpecific& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific() {
    *this = other;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::operator=)(CodecSpecific&& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::sbcConfig: {
            sbcConfig(std::move(other.hidl_u.sbcConfig));
            break;
        }
        case hidl_discriminator::aacConfig: {
            aacConfig(std::move(other.hidl_u.aacConfig));
            break;
        }
        case hidl_discriminator::ldacConfig: {
            ldacConfig(std::move(other.hidl_u.ldacConfig));
            break;
        }
        case hidl_discriminator::aptxConfig: {
            aptxConfig(std::move(other.hidl_u.aptxConfig));
            break;
        }
        case hidl_discriminator::lhdcConfig: {
            lhdcConfig(std::move(other.hidl_u.lhdcConfig));
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

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::operator=)(const CodecSpecific& other) {
    if (this == &other) { return *this; }

    switch (other.hidl_d) {
        case hidl_discriminator::sbcConfig: {
            sbcConfig(other.hidl_u.sbcConfig);
            break;
        }
        case hidl_discriminator::aacConfig: {
            aacConfig(other.hidl_u.aacConfig);
            break;
        }
        case hidl_discriminator::ldacConfig: {
            ldacConfig(other.hidl_u.ldacConfig);
            break;
        }
        case hidl_discriminator::aptxConfig: {
            aptxConfig(other.hidl_u.aptxConfig);
            break;
        }
        case hidl_discriminator::lhdcConfig: {
            lhdcConfig(other.hidl_u.lhdcConfig);
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

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_destructUnion() {
    switch (hidl_d) {
        case hidl_discriminator::sbcConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.sbcConfig));
            break;
        }
        case hidl_discriminator::aacConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.aacConfig));
            break;
        }
        case hidl_discriminator::ldacConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.ldacConfig));
            break;
        }
        case hidl_discriminator::aptxConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.aptxConfig));
            break;
        }
        case hidl_discriminator::lhdcConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.lhdcConfig));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(hidl_d)) + ").").c_str());
        }
    }

}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& o) {
    if (hidl_d != hidl_discriminator::sbcConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.sbcConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters(o);
        hidl_d = hidl_discriminator::sbcConfig;
    }
    else if (&(hidl_u.sbcConfig) != &o) {
        hidl_u.sbcConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters&& o) {
    if (hidl_d != hidl_discriminator::sbcConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.sbcConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters(std::move(o));
        hidl_d = hidl_discriminator::sbcConfig;
    }
    else if (&(hidl_u.sbcConfig) != &o) {
        hidl_u.sbcConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::sbcConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::sbcConfig));
    }

    return hidl_u.sbcConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::SbcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::sbcConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::sbcConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::sbcConfig));
    }

    return hidl_u.sbcConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& o) {
    if (hidl_d != hidl_discriminator::aacConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aacConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters(o);
        hidl_d = hidl_discriminator::aacConfig;
    }
    else if (&(hidl_u.aacConfig) != &o) {
        hidl_u.aacConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters&& o) {
    if (hidl_d != hidl_discriminator::aacConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aacConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters(std::move(o));
        hidl_d = hidl_discriminator::aacConfig;
    }
    else if (&(hidl_u.aacConfig) != &o) {
        hidl_u.aacConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aacConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aacConfig));
    }

    return hidl_u.aacConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aacConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aacConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aacConfig));
    }

    return hidl_u.aacConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& o) {
    if (hidl_d != hidl_discriminator::ldacConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.ldacConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters(o);
        hidl_d = hidl_discriminator::ldacConfig;
    }
    else if (&(hidl_u.ldacConfig) != &o) {
        hidl_u.ldacConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters&& o) {
    if (hidl_d != hidl_discriminator::ldacConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.ldacConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters(std::move(o));
        hidl_d = hidl_discriminator::ldacConfig;
    }
    else if (&(hidl_u.ldacConfig) != &o) {
        hidl_u.ldacConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::ldacConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::ldacConfig));
    }

    return hidl_u.ldacConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LdacParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::ldacConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::ldacConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::ldacConfig));
    }

    return hidl_u.ldacConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& o) {
    if (hidl_d != hidl_discriminator::aptxConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aptxConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters(o);
        hidl_d = hidl_discriminator::aptxConfig;
    }
    else if (&(hidl_u.aptxConfig) != &o) {
        hidl_u.aptxConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters&& o) {
    if (hidl_d != hidl_discriminator::aptxConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.aptxConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters(std::move(o));
        hidl_d = hidl_discriminator::aptxConfig;
    }
    else if (&(hidl_u.aptxConfig) != &o) {
        hidl_u.aptxConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aptxConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aptxConfig));
    }

    return hidl_u.aptxConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AptxParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::aptxConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::aptxConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::aptxConfig));
    }

    return hidl_u.aptxConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& o) {
    if (hidl_d != hidl_discriminator::lhdcConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.lhdcConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters(o);
        hidl_d = hidl_discriminator::lhdcConfig;
    }
    else if (&(hidl_u.lhdcConfig) != &o) {
        hidl_u.lhdcConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters&& o) {
    if (hidl_d != hidl_discriminator::lhdcConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.lhdcConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters(std::move(o));
        hidl_d = hidl_discriminator::lhdcConfig;
    }
    else if (&(hidl_u.lhdcConfig) != &o) {
        hidl_u.lhdcConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::lhdcConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::lhdcConfig));
    }

    return hidl_u.lhdcConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::LhdcParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::lhdcConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::lhdcConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::lhdcConfig));
    }

    return hidl_u.lhdcConfig;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_union::~hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::hidl_discriminator (::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration::CodecSpecific::getDiscriminator)() const {
    return hidl_d;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration() {
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration, hidl_d) == 0, "wrong offset");
    static_assert(offsetof(::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration, hidl_u) == 4, "wrong offset");

    ::std::memset(&hidl_u, 0, sizeof(hidl_u));
    ::std::memset(reinterpret_cast<uint8_t*>(this) + 1, 0, 3);
    // no padding to zero starting at offset 32

    hidl_d = hidl_discriminator::pcmConfig;
    new (&hidl_u.pcmConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::~AudioConfiguration() {
    hidl_destructUnion();
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(AudioConfiguration&& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration() {
    *this = std::move(other);
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::AudioConfiguration(const AudioConfiguration& other) : ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration() {
    *this = other;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::operator=)(AudioConfiguration&& other) {
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
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::operator=)(const AudioConfiguration& other) {
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
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(other.hidl_d)) + ").").c_str());
        }
    }
    return *this;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_destructUnion() {
    switch (hidl_d) {
        case hidl_discriminator::pcmConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.pcmConfig));
            break;
        }
        case hidl_discriminator::codecConfig: {
            ::android::hardware::details::destructElement(&(hidl_u.codecConfig));
            break;
        }
        default: {
            ::android::hardware::details::logAlwaysFatal((
                    "Unknown union discriminator (value: " +
                    std::to_string(static_cast<uint8_t>(hidl_d)) + ").").c_str());
        }
    }

}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& o) {
    if (hidl_d != hidl_discriminator::pcmConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters(o);
        hidl_d = hidl_discriminator::pcmConfig;
    }
    else if (&(hidl_u.pcmConfig) != &o) {
        hidl_u.pcmConfig = o;
    }
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters&& o) {
    if (hidl_d != hidl_discriminator::pcmConfig) {
        hidl_destructUnion();
        ::std::memset(&hidl_u, 0, sizeof(hidl_u));

        new (&hidl_u.pcmConfig) ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters(std::move(o));
        hidl_d = hidl_discriminator::pcmConfig;
    }
    else if (&(hidl_u.pcmConfig) != &o) {
        hidl_u.pcmConfig = std::move(o);
    }
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmConfig));
    }

    return hidl_u.pcmConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::PcmParameters& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::pcmConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::pcmConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::pcmConfig));
    }

    return hidl_u.pcmConfig;
}

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig(const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& o) {
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

void ::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig(::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration&& o) {
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

::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig)() {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecConfig));
    }

    return hidl_u.codecConfig;
}

const ::vendor::mediatek::hardware::bluetooth::audio::V2_1::CodecConfiguration& (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::codecConfig)() const {
    if (CC_UNLIKELY(hidl_d != hidl_discriminator::codecConfig)) {
        LOG_ALWAYS_FATAL("Bad safe_union access: safe_union has discriminator %" PRIu64 " but discriminator %" PRIu64 " was accessed.",
                static_cast<uint64_t>(hidl_d), static_cast<uint64_t>(hidl_discriminator::codecConfig));
    }

    return hidl_u.codecConfig;
}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_union::~hidl_union() {}

::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::hidl_discriminator (::vendor::mediatek::hardware::bluetooth::audio::V2_1::AudioConfiguration::getDiscriminator)() const {
    return hidl_d;
}

static_assert(sizeof(::android::hardware::MQDescriptor<char, ::android::hardware::kSynchronizedReadWrite>) == 32 + sizeof( std::string ), "wrong size");
static_assert(sizeof(::android::hardware::hidl_handle) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_memory) == 40, "wrong size");
static_assert(sizeof(::android::hardware::hidl_string) == 16, "wrong size");
static_assert(sizeof(::android::hardware::hidl_vec<char>) == 16, "wrong size");

}  // namespace V2_1
}  // namespace audio
}  // namespace bluetooth
}  // namespace hardware
}  // namespace mediatek
}  // namespace vendor
