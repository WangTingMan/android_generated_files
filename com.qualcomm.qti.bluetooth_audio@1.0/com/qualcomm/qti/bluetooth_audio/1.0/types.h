#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_TYPES_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_TYPES_H

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

// Forward declaration for forward reference support:
enum class Status : uint8_t;

enum class Status : uint8_t {
    SUCCESS = 0,
    FAILURE = 1 /* ::com::qualcomm::qti::bluetooth_audio::V1_0::Status.SUCCESS implicitly + 1 */,
    INCALL_FAILURE = 2 /* ::com::qualcomm::qti::bluetooth_audio::V1_0::Status.FAILURE implicitly + 1 */,
    UNSUPPORTED = 3 /* ::com::qualcomm::qti::bluetooth_audio::V1_0::Status.INCALL_FAILURE implicitly + 1 */,
    PENDING = 4 /* ::com::qualcomm::qti::bluetooth_audio::V1_0::Status.UNSUPPORTED implicitly + 1 */,
    DISCONNECTING = 5 /* ::com::qualcomm::qti::bluetooth_audio::V1_0::Status.PENDING implicitly + 1 */,
};

/**
 * Codec config are transmitted as a vector of type uint8_t.
 */
typedef ::android::hardware::hidl_vec<uint8_t> CodecCfg;

//
// type declarations for package
//

template<typename>
static inline std::string toString(uint8_t o);
static inline std::string toString(::com::qualcomm::qti::bluetooth_audio::V1_0::Status o);
static inline void PrintTo(::com::qualcomm::qti::bluetooth_audio::V1_0::Status o, ::std::ostream* os);
constexpr uint8_t operator|(const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status lhs, const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const uint8_t lhs, const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator|(const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}
constexpr uint8_t operator&(const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status lhs, const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const uint8_t lhs, const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}
constexpr uint8_t operator&(const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}
constexpr uint8_t &operator|=(uint8_t& v, const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status e) {
    v |= static_cast<uint8_t>(e);
    return v;
}
constexpr uint8_t &operator&=(uint8_t& v, const ::com::qualcomm::qti::bluetooth_audio::V1_0::Status e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

//
// type header definitions for package
//

template<>
inline std::string toString<::com::qualcomm::qti::bluetooth_audio::V1_0::Status>(uint8_t o) {
    using ::android::hardware::details::toHexString;
    std::string os;
    ::android::hardware::hidl_bitfield<::com::qualcomm::qti::bluetooth_audio::V1_0::Status> flipped = 0;
    bool first = true;
    if ((o & ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::SUCCESS) == static_cast<uint8_t>(::com::qualcomm::qti::bluetooth_audio::V1_0::Status::SUCCESS)) {
        os += (first ? "" : " | ");
        os += "SUCCESS";
        first = false;
        flipped |= ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::SUCCESS;
    }
    if ((o & ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::FAILURE) == static_cast<uint8_t>(::com::qualcomm::qti::bluetooth_audio::V1_0::Status::FAILURE)) {
        os += (first ? "" : " | ");
        os += "FAILURE";
        first = false;
        flipped |= ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::FAILURE;
    }
    if ((o & ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::INCALL_FAILURE) == static_cast<uint8_t>(::com::qualcomm::qti::bluetooth_audio::V1_0::Status::INCALL_FAILURE)) {
        os += (first ? "" : " | ");
        os += "INCALL_FAILURE";
        first = false;
        flipped |= ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::INCALL_FAILURE;
    }
    if ((o & ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::UNSUPPORTED) == static_cast<uint8_t>(::com::qualcomm::qti::bluetooth_audio::V1_0::Status::UNSUPPORTED)) {
        os += (first ? "" : " | ");
        os += "UNSUPPORTED";
        first = false;
        flipped |= ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::UNSUPPORTED;
    }
    if ((o & ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::PENDING) == static_cast<uint8_t>(::com::qualcomm::qti::bluetooth_audio::V1_0::Status::PENDING)) {
        os += (first ? "" : " | ");
        os += "PENDING";
        first = false;
        flipped |= ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::PENDING;
    }
    if ((o & ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::DISCONNECTING) == static_cast<uint8_t>(::com::qualcomm::qti::bluetooth_audio::V1_0::Status::DISCONNECTING)) {
        os += (first ? "" : " | ");
        os += "DISCONNECTING";
        first = false;
        flipped |= ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::DISCONNECTING;
    }
    if (o != flipped) {
        os += (first ? "" : " | ");
        os += toHexString(o & (~flipped));
    }os += " (";
    os += toHexString(o);
    os += ")";
    return os;
}

static inline std::string toString(::com::qualcomm::qti::bluetooth_audio::V1_0::Status o) {
    using ::android::hardware::details::toHexString;
    if (o == ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::SUCCESS) {
        return "SUCCESS";
    }
    if (o == ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::FAILURE) {
        return "FAILURE";
    }
    if (o == ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::INCALL_FAILURE) {
        return "INCALL_FAILURE";
    }
    if (o == ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::UNSUPPORTED) {
        return "UNSUPPORTED";
    }
    if (o == ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::PENDING) {
        return "PENDING";
    }
    if (o == ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::DISCONNECTING) {
        return "DISCONNECTING";
    }
    std::string os;
    os += toHexString(static_cast<uint8_t>(o));
    return os;
}

static inline void PrintTo(::com::qualcomm::qti::bluetooth_audio::V1_0::Status o, ::std::ostream* os) {
    *os << toString(o);
}


}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

//
// global type declarations for package
//

namespace android {
namespace hardware {
namespace details {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template<> inline constexpr std::array<::com::qualcomm::qti::bluetooth_audio::V1_0::Status, 6> hidl_enum_values<::com::qualcomm::qti::bluetooth_audio::V1_0::Status> = {
    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::SUCCESS,
    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::FAILURE,
    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::INCALL_FAILURE,
    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::UNSUPPORTED,
    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::PENDING,
    ::com::qualcomm::qti::bluetooth_audio::V1_0::Status::DISCONNECTING,
};
#pragma clang diagnostic pop
}  // namespace details
}  // namespace hardware
}  // namespace android


#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_TYPES_H
