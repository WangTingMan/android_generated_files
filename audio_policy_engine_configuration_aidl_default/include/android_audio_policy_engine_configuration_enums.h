#ifndef ANDROID_AUDIO_POLICY_ENGINE_CONFIGURATION_ENUMS_H
#define ANDROID_AUDIO_POLICY_ENGINE_CONFIGURATION_ENUMS_H

#include <array>
#include <string>

#include <xsdc/XsdcSupport.h>

namespace android {
    namespace audio {
        namespace policy {
            namespace engine {
                namespace configuration {
                    enum class Version {
                        UNKNOWN = -1,
                        _1_0,
                    };
                    Version stringToVersion(const std::string& value);
                    std::string toString(Version o);

                    enum class Stream {
                        UNKNOWN = -1,
                        AUDIO_STREAM_DEFAULT,
                        AUDIO_STREAM_VOICE_CALL,
                        AUDIO_STREAM_SYSTEM,
                        AUDIO_STREAM_RING,
                        AUDIO_STREAM_MUSIC,
                        AUDIO_STREAM_ALARM,
                        AUDIO_STREAM_NOTIFICATION,
                        AUDIO_STREAM_BLUETOOTH_SCO,
                        AUDIO_STREAM_ENFORCED_AUDIBLE,
                        AUDIO_STREAM_DTMF,
                        AUDIO_STREAM_TTS,
                        AUDIO_STREAM_ACCESSIBILITY,
                        AUDIO_STREAM_ASSISTANT,
                    };
                    Stream stringToStream(const std::string& value);
                    std::string toString(Stream o);

                    enum class DeviceCategory {
                        UNKNOWN = -1,
                        DEVICE_CATEGORY_HEADSET,
                        DEVICE_CATEGORY_SPEAKER,
                        DEVICE_CATEGORY_EARPIECE,
                        DEVICE_CATEGORY_EXT_MEDIA,
                        DEVICE_CATEGORY_HEARING_AID,
                        DEVICE_CATEGORY_A2DP,
                        DEVICE_CATEGORY_USB_HEADSET,
                    };
                    DeviceCategory stringToDeviceCategory(const std::string& value);
                    std::string toString(DeviceCategory o);

                    enum class ContentType {
                        UNKNOWN = -1,
                        AUDIO_CONTENT_TYPE_UNKNOWN,
                        AUDIO_CONTENT_TYPE_SPEECH,
                        AUDIO_CONTENT_TYPE_MUSIC,
                        AUDIO_CONTENT_TYPE_MOVIE,
                        AUDIO_CONTENT_TYPE_SONIFICATION,
                    };
                    ContentType stringToContentType(const std::string& value);
                    std::string toString(ContentType o);

                    enum class UsageEnumType {
                        UNKNOWN = -1,
                        AUDIO_USAGE_UNKNOWN,
                        AUDIO_USAGE_MEDIA,
                        AUDIO_USAGE_VOICE_COMMUNICATION,
                        AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING,
                        AUDIO_USAGE_ALARM,
                        AUDIO_USAGE_NOTIFICATION,
                        AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE,
                        AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST,
                        AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT,
                        AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED,
                        AUDIO_USAGE_NOTIFICATION_EVENT,
                        AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY,
                        AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE,
                        AUDIO_USAGE_ASSISTANCE_SONIFICATION,
                        AUDIO_USAGE_GAME,
                        AUDIO_USAGE_VIRTUAL_SOURCE,
                        AUDIO_USAGE_ASSISTANT,
                        AUDIO_USAGE_CALL_ASSISTANT,
                        AUDIO_USAGE_EMERGENCY,
                        AUDIO_USAGE_SAFETY,
                        AUDIO_USAGE_VEHICLE_STATUS,
                        AUDIO_USAGE_ANNOUNCEMENT,
                    };
                    UsageEnumType stringToUsageEnumType(const std::string& value);
                    std::string toString(UsageEnumType o);

                    enum class FlagType {
                        UNKNOWN = -1,
                        AUDIO_FLAG_NONE,
                        AUDIO_FLAG_AUDIBILITY_ENFORCED,
                        AUDIO_FLAG_SECURE,
                        AUDIO_FLAG_SCO,
                        AUDIO_FLAG_BEACON,
                        AUDIO_FLAG_HW_AV_SYNC,
                        AUDIO_FLAG_HW_HOTWORD,
                        AUDIO_FLAG_BYPASS_INTERRUPTION_POLICY,
                        AUDIO_FLAG_BYPASS_MUTE,
                        AUDIO_FLAG_LOW_LATENCY,
                        AUDIO_FLAG_DEEP_BUFFER,
                        AUDIO_FLAG_NO_MEDIA_PROJECTION,
                        AUDIO_FLAG_MUTE_HAPTIC,
                        AUDIO_FLAG_NO_SYSTEM_CAPTURE,
                        AUDIO_FLAG_CAPTURE_PRIVATE,
                    };
                    FlagType stringToFlagType(const std::string& value);
                    std::string toString(FlagType o);

                    enum class SourceEnumType {
                        UNKNOWN = -1,
                        AUDIO_SOURCE_DEFAULT,
                        AUDIO_SOURCE_MIC,
                        AUDIO_SOURCE_VOICE_UPLINK,
                        AUDIO_SOURCE_VOICE_DOWNLINK,
                        AUDIO_SOURCE_VOICE_CALL,
                        AUDIO_SOURCE_CAMCORDER,
                        AUDIO_SOURCE_VOICE_RECOGNITION,
                        AUDIO_SOURCE_VOICE_COMMUNICATION,
                        AUDIO_SOURCE_REMOTE_SUBMIX,
                        AUDIO_SOURCE_UNPROCESSED,
                        AUDIO_SOURCE_VOICE_PERFORMANCE,
                        AUDIO_SOURCE_ECHO_REFERENCE,
                        AUDIO_SOURCE_FM_TUNER,
                    };
                    SourceEnumType stringToSourceEnumType(const std::string& value);
                    std::string toString(SourceEnumType o);

                    enum class PfwCriterionTypeEnum {
                        UNKNOWN = -1,
                        inclusive,
                        exclusive,
                    };
                    PfwCriterionTypeEnum stringToPfwCriterionTypeEnum(const std::string& value);
                    std::string toString(PfwCriterionTypeEnum o);

                } // configuration
            } // engine
        } // policy
    } // audio
} // android

//
// global type declarations for package
//

namespace android {
    namespace details {
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::Version, 1> xsdc_enum_values<::android::audio::policy::engine::configuration::Version> = {
            ::android::audio::policy::engine::configuration::Version::_1_0,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::Stream, 13> xsdc_enum_values<::android::audio::policy::engine::configuration::Stream> = {
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_DEFAULT,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_VOICE_CALL,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_SYSTEM,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_RING,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_MUSIC,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_ALARM,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_NOTIFICATION,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_BLUETOOTH_SCO,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_ENFORCED_AUDIBLE,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_DTMF,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_TTS,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_ACCESSIBILITY,
            ::android::audio::policy::engine::configuration::Stream::AUDIO_STREAM_ASSISTANT,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::DeviceCategory, 7> xsdc_enum_values<::android::audio::policy::engine::configuration::DeviceCategory> = {
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_HEADSET,
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_SPEAKER,
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_EARPIECE,
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_EXT_MEDIA,
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_HEARING_AID,
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_A2DP,
            ::android::audio::policy::engine::configuration::DeviceCategory::DEVICE_CATEGORY_USB_HEADSET,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::ContentType, 5> xsdc_enum_values<::android::audio::policy::engine::configuration::ContentType> = {
            ::android::audio::policy::engine::configuration::ContentType::AUDIO_CONTENT_TYPE_UNKNOWN,
            ::android::audio::policy::engine::configuration::ContentType::AUDIO_CONTENT_TYPE_SPEECH,
            ::android::audio::policy::engine::configuration::ContentType::AUDIO_CONTENT_TYPE_MUSIC,
            ::android::audio::policy::engine::configuration::ContentType::AUDIO_CONTENT_TYPE_MOVIE,
            ::android::audio::policy::engine::configuration::ContentType::AUDIO_CONTENT_TYPE_SONIFICATION,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::UsageEnumType, 22> xsdc_enum_values<::android::audio::policy::engine::configuration::UsageEnumType> = {
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_UNKNOWN,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_MEDIA,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_VOICE_COMMUNICATION,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_ALARM,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_NOTIFICATION,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_NOTIFICATION_EVENT,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_ASSISTANCE_SONIFICATION,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_GAME,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_VIRTUAL_SOURCE,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_ASSISTANT,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_CALL_ASSISTANT,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_EMERGENCY,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_SAFETY,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_VEHICLE_STATUS,
            ::android::audio::policy::engine::configuration::UsageEnumType::AUDIO_USAGE_ANNOUNCEMENT,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::FlagType, 15> xsdc_enum_values<::android::audio::policy::engine::configuration::FlagType> = {
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_NONE,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_AUDIBILITY_ENFORCED,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_SECURE,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_SCO,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_BEACON,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_HW_AV_SYNC,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_HW_HOTWORD,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_BYPASS_INTERRUPTION_POLICY,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_BYPASS_MUTE,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_LOW_LATENCY,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_DEEP_BUFFER,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_NO_MEDIA_PROJECTION,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_MUTE_HAPTIC,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_NO_SYSTEM_CAPTURE,
            ::android::audio::policy::engine::configuration::FlagType::AUDIO_FLAG_CAPTURE_PRIVATE,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::SourceEnumType, 13> xsdc_enum_values<::android::audio::policy::engine::configuration::SourceEnumType> = {
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_DEFAULT,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_MIC,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_VOICE_UPLINK,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_VOICE_DOWNLINK,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_VOICE_CALL,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_CAMCORDER,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_VOICE_RECOGNITION,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_VOICE_COMMUNICATION,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_REMOTE_SUBMIX,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_UNPROCESSED,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_VOICE_PERFORMANCE,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_ECHO_REFERENCE,
            ::android::audio::policy::engine::configuration::SourceEnumType::AUDIO_SOURCE_FM_TUNER,
        };
        template<> inline constexpr std::array<::android::audio::policy::engine::configuration::PfwCriterionTypeEnum, 2> xsdc_enum_values<::android::audio::policy::engine::configuration::PfwCriterionTypeEnum> = {
            ::android::audio::policy::engine::configuration::PfwCriterionTypeEnum::inclusive,
            ::android::audio::policy::engine::configuration::PfwCriterionTypeEnum::exclusive,
        };
    }  // namespace details
}  // namespace android

#endif // ANDROID_AUDIO_POLICY_ENGINE_CONFIGURATION_ENUMS_H
