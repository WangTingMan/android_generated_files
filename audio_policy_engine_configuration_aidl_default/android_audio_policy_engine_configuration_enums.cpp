#include <map>

#include "android_audio_policy_engine_configuration_enums.h"

namespace android {
    namespace audio {
        namespace policy {
            namespace engine {
                namespace configuration {
                    const std::map<std::string, Version> VersionString {
                        { "1.0", Version::_1_0 },
                    };

                    Version stringToVersion(const std::string& value) {
                        auto enumValue = VersionString.find(value);
                        return enumValue != VersionString.end() ? enumValue->second : Version::UNKNOWN;
                    }

                    std::string toString(Version o) {
                        switch (o) {
                            case Version::_1_0: return "1.0";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, Stream> StreamString {
                        { "AUDIO_STREAM_DEFAULT", Stream::AUDIO_STREAM_DEFAULT },
                        { "AUDIO_STREAM_VOICE_CALL", Stream::AUDIO_STREAM_VOICE_CALL },
                        { "AUDIO_STREAM_SYSTEM", Stream::AUDIO_STREAM_SYSTEM },
                        { "AUDIO_STREAM_RING", Stream::AUDIO_STREAM_RING },
                        { "AUDIO_STREAM_MUSIC", Stream::AUDIO_STREAM_MUSIC },
                        { "AUDIO_STREAM_ALARM", Stream::AUDIO_STREAM_ALARM },
                        { "AUDIO_STREAM_NOTIFICATION", Stream::AUDIO_STREAM_NOTIFICATION },
                        { "AUDIO_STREAM_BLUETOOTH_SCO", Stream::AUDIO_STREAM_BLUETOOTH_SCO },
                        { "AUDIO_STREAM_ENFORCED_AUDIBLE", Stream::AUDIO_STREAM_ENFORCED_AUDIBLE },
                        { "AUDIO_STREAM_DTMF", Stream::AUDIO_STREAM_DTMF },
                        { "AUDIO_STREAM_TTS", Stream::AUDIO_STREAM_TTS },
                        { "AUDIO_STREAM_ACCESSIBILITY", Stream::AUDIO_STREAM_ACCESSIBILITY },
                        { "AUDIO_STREAM_ASSISTANT", Stream::AUDIO_STREAM_ASSISTANT },
                    };

                    Stream stringToStream(const std::string& value) {
                        auto enumValue = StreamString.find(value);
                        return enumValue != StreamString.end() ? enumValue->second : Stream::UNKNOWN;
                    }

                    std::string toString(Stream o) {
                        switch (o) {
                            case Stream::AUDIO_STREAM_DEFAULT: return "AUDIO_STREAM_DEFAULT";
                            case Stream::AUDIO_STREAM_VOICE_CALL: return "AUDIO_STREAM_VOICE_CALL";
                            case Stream::AUDIO_STREAM_SYSTEM: return "AUDIO_STREAM_SYSTEM";
                            case Stream::AUDIO_STREAM_RING: return "AUDIO_STREAM_RING";
                            case Stream::AUDIO_STREAM_MUSIC: return "AUDIO_STREAM_MUSIC";
                            case Stream::AUDIO_STREAM_ALARM: return "AUDIO_STREAM_ALARM";
                            case Stream::AUDIO_STREAM_NOTIFICATION: return "AUDIO_STREAM_NOTIFICATION";
                            case Stream::AUDIO_STREAM_BLUETOOTH_SCO: return "AUDIO_STREAM_BLUETOOTH_SCO";
                            case Stream::AUDIO_STREAM_ENFORCED_AUDIBLE: return "AUDIO_STREAM_ENFORCED_AUDIBLE";
                            case Stream::AUDIO_STREAM_DTMF: return "AUDIO_STREAM_DTMF";
                            case Stream::AUDIO_STREAM_TTS: return "AUDIO_STREAM_TTS";
                            case Stream::AUDIO_STREAM_ACCESSIBILITY: return "AUDIO_STREAM_ACCESSIBILITY";
                            case Stream::AUDIO_STREAM_ASSISTANT: return "AUDIO_STREAM_ASSISTANT";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, DeviceCategory> DeviceCategoryString {
                        { "DEVICE_CATEGORY_HEADSET", DeviceCategory::DEVICE_CATEGORY_HEADSET },
                        { "DEVICE_CATEGORY_SPEAKER", DeviceCategory::DEVICE_CATEGORY_SPEAKER },
                        { "DEVICE_CATEGORY_EARPIECE", DeviceCategory::DEVICE_CATEGORY_EARPIECE },
                        { "DEVICE_CATEGORY_EXT_MEDIA", DeviceCategory::DEVICE_CATEGORY_EXT_MEDIA },
                        { "DEVICE_CATEGORY_HEARING_AID", DeviceCategory::DEVICE_CATEGORY_HEARING_AID },
                        { "DEVICE_CATEGORY_A2DP", DeviceCategory::DEVICE_CATEGORY_A2DP },
                        { "DEVICE_CATEGORY_USB_HEADSET", DeviceCategory::DEVICE_CATEGORY_USB_HEADSET },
                    };

                    DeviceCategory stringToDeviceCategory(const std::string& value) {
                        auto enumValue = DeviceCategoryString.find(value);
                        return enumValue != DeviceCategoryString.end() ? enumValue->second : DeviceCategory::UNKNOWN;
                    }

                    std::string toString(DeviceCategory o) {
                        switch (o) {
                            case DeviceCategory::DEVICE_CATEGORY_HEADSET: return "DEVICE_CATEGORY_HEADSET";
                            case DeviceCategory::DEVICE_CATEGORY_SPEAKER: return "DEVICE_CATEGORY_SPEAKER";
                            case DeviceCategory::DEVICE_CATEGORY_EARPIECE: return "DEVICE_CATEGORY_EARPIECE";
                            case DeviceCategory::DEVICE_CATEGORY_EXT_MEDIA: return "DEVICE_CATEGORY_EXT_MEDIA";
                            case DeviceCategory::DEVICE_CATEGORY_HEARING_AID: return "DEVICE_CATEGORY_HEARING_AID";
                            case DeviceCategory::DEVICE_CATEGORY_A2DP: return "DEVICE_CATEGORY_A2DP";
                            case DeviceCategory::DEVICE_CATEGORY_USB_HEADSET: return "DEVICE_CATEGORY_USB_HEADSET";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, ContentType> ContentTypeString {
                        { "AUDIO_CONTENT_TYPE_UNKNOWN", ContentType::AUDIO_CONTENT_TYPE_UNKNOWN },
                        { "AUDIO_CONTENT_TYPE_SPEECH", ContentType::AUDIO_CONTENT_TYPE_SPEECH },
                        { "AUDIO_CONTENT_TYPE_MUSIC", ContentType::AUDIO_CONTENT_TYPE_MUSIC },
                        { "AUDIO_CONTENT_TYPE_MOVIE", ContentType::AUDIO_CONTENT_TYPE_MOVIE },
                        { "AUDIO_CONTENT_TYPE_SONIFICATION", ContentType::AUDIO_CONTENT_TYPE_SONIFICATION },
                    };

                    ContentType stringToContentType(const std::string& value) {
                        auto enumValue = ContentTypeString.find(value);
                        return enumValue != ContentTypeString.end() ? enumValue->second : ContentType::UNKNOWN;
                    }

                    std::string toString(ContentType o) {
                        switch (o) {
                            case ContentType::AUDIO_CONTENT_TYPE_UNKNOWN: return "AUDIO_CONTENT_TYPE_UNKNOWN";
                            case ContentType::AUDIO_CONTENT_TYPE_SPEECH: return "AUDIO_CONTENT_TYPE_SPEECH";
                            case ContentType::AUDIO_CONTENT_TYPE_MUSIC: return "AUDIO_CONTENT_TYPE_MUSIC";
                            case ContentType::AUDIO_CONTENT_TYPE_MOVIE: return "AUDIO_CONTENT_TYPE_MOVIE";
                            case ContentType::AUDIO_CONTENT_TYPE_SONIFICATION: return "AUDIO_CONTENT_TYPE_SONIFICATION";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, UsageEnumType> UsageEnumTypeString {
                        { "AUDIO_USAGE_UNKNOWN", UsageEnumType::AUDIO_USAGE_UNKNOWN },
                        { "AUDIO_USAGE_MEDIA", UsageEnumType::AUDIO_USAGE_MEDIA },
                        { "AUDIO_USAGE_VOICE_COMMUNICATION", UsageEnumType::AUDIO_USAGE_VOICE_COMMUNICATION },
                        { "AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING", UsageEnumType::AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING },
                        { "AUDIO_USAGE_ALARM", UsageEnumType::AUDIO_USAGE_ALARM },
                        { "AUDIO_USAGE_NOTIFICATION", UsageEnumType::AUDIO_USAGE_NOTIFICATION },
                        { "AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE", UsageEnumType::AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE },
                        { "AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST", UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST },
                        { "AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT", UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT },
                        { "AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED", UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED },
                        { "AUDIO_USAGE_NOTIFICATION_EVENT", UsageEnumType::AUDIO_USAGE_NOTIFICATION_EVENT },
                        { "AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY", UsageEnumType::AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY },
                        { "AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE", UsageEnumType::AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE },
                        { "AUDIO_USAGE_ASSISTANCE_SONIFICATION", UsageEnumType::AUDIO_USAGE_ASSISTANCE_SONIFICATION },
                        { "AUDIO_USAGE_GAME", UsageEnumType::AUDIO_USAGE_GAME },
                        { "AUDIO_USAGE_VIRTUAL_SOURCE", UsageEnumType::AUDIO_USAGE_VIRTUAL_SOURCE },
                        { "AUDIO_USAGE_ASSISTANT", UsageEnumType::AUDIO_USAGE_ASSISTANT },
                        { "AUDIO_USAGE_CALL_ASSISTANT", UsageEnumType::AUDIO_USAGE_CALL_ASSISTANT },
                        { "AUDIO_USAGE_EMERGENCY", UsageEnumType::AUDIO_USAGE_EMERGENCY },
                        { "AUDIO_USAGE_SAFETY", UsageEnumType::AUDIO_USAGE_SAFETY },
                        { "AUDIO_USAGE_VEHICLE_STATUS", UsageEnumType::AUDIO_USAGE_VEHICLE_STATUS },
                        { "AUDIO_USAGE_ANNOUNCEMENT", UsageEnumType::AUDIO_USAGE_ANNOUNCEMENT },
                    };

                    UsageEnumType stringToUsageEnumType(const std::string& value) {
                        auto enumValue = UsageEnumTypeString.find(value);
                        return enumValue != UsageEnumTypeString.end() ? enumValue->second : UsageEnumType::UNKNOWN;
                    }

                    std::string toString(UsageEnumType o) {
                        switch (o) {
                            case UsageEnumType::AUDIO_USAGE_UNKNOWN: return "AUDIO_USAGE_UNKNOWN";
                            case UsageEnumType::AUDIO_USAGE_MEDIA: return "AUDIO_USAGE_MEDIA";
                            case UsageEnumType::AUDIO_USAGE_VOICE_COMMUNICATION: return "AUDIO_USAGE_VOICE_COMMUNICATION";
                            case UsageEnumType::AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING: return "AUDIO_USAGE_VOICE_COMMUNICATION_SIGNALLING";
                            case UsageEnumType::AUDIO_USAGE_ALARM: return "AUDIO_USAGE_ALARM";
                            case UsageEnumType::AUDIO_USAGE_NOTIFICATION: return "AUDIO_USAGE_NOTIFICATION";
                            case UsageEnumType::AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE: return "AUDIO_USAGE_NOTIFICATION_TELEPHONY_RINGTONE";
                            case UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST: return "AUDIO_USAGE_NOTIFICATION_COMMUNICATION_REQUEST";
                            case UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT: return "AUDIO_USAGE_NOTIFICATION_COMMUNICATION_INSTANT";
                            case UsageEnumType::AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED: return "AUDIO_USAGE_NOTIFICATION_COMMUNICATION_DELAYED";
                            case UsageEnumType::AUDIO_USAGE_NOTIFICATION_EVENT: return "AUDIO_USAGE_NOTIFICATION_EVENT";
                            case UsageEnumType::AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY: return "AUDIO_USAGE_ASSISTANCE_ACCESSIBILITY";
                            case UsageEnumType::AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE: return "AUDIO_USAGE_ASSISTANCE_NAVIGATION_GUIDANCE";
                            case UsageEnumType::AUDIO_USAGE_ASSISTANCE_SONIFICATION: return "AUDIO_USAGE_ASSISTANCE_SONIFICATION";
                            case UsageEnumType::AUDIO_USAGE_GAME: return "AUDIO_USAGE_GAME";
                            case UsageEnumType::AUDIO_USAGE_VIRTUAL_SOURCE: return "AUDIO_USAGE_VIRTUAL_SOURCE";
                            case UsageEnumType::AUDIO_USAGE_ASSISTANT: return "AUDIO_USAGE_ASSISTANT";
                            case UsageEnumType::AUDIO_USAGE_CALL_ASSISTANT: return "AUDIO_USAGE_CALL_ASSISTANT";
                            case UsageEnumType::AUDIO_USAGE_EMERGENCY: return "AUDIO_USAGE_EMERGENCY";
                            case UsageEnumType::AUDIO_USAGE_SAFETY: return "AUDIO_USAGE_SAFETY";
                            case UsageEnumType::AUDIO_USAGE_VEHICLE_STATUS: return "AUDIO_USAGE_VEHICLE_STATUS";
                            case UsageEnumType::AUDIO_USAGE_ANNOUNCEMENT: return "AUDIO_USAGE_ANNOUNCEMENT";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, FlagType> FlagTypeString {
                        { "AUDIO_FLAG_NONE", FlagType::AUDIO_FLAG_NONE },
                        { "AUDIO_FLAG_AUDIBILITY_ENFORCED", FlagType::AUDIO_FLAG_AUDIBILITY_ENFORCED },
                        { "AUDIO_FLAG_SECURE", FlagType::AUDIO_FLAG_SECURE },
                        { "AUDIO_FLAG_SCO", FlagType::AUDIO_FLAG_SCO },
                        { "AUDIO_FLAG_BEACON", FlagType::AUDIO_FLAG_BEACON },
                        { "AUDIO_FLAG_HW_AV_SYNC", FlagType::AUDIO_FLAG_HW_AV_SYNC },
                        { "AUDIO_FLAG_HW_HOTWORD", FlagType::AUDIO_FLAG_HW_HOTWORD },
                        { "AUDIO_FLAG_BYPASS_INTERRUPTION_POLICY", FlagType::AUDIO_FLAG_BYPASS_INTERRUPTION_POLICY },
                        { "AUDIO_FLAG_BYPASS_MUTE", FlagType::AUDIO_FLAG_BYPASS_MUTE },
                        { "AUDIO_FLAG_LOW_LATENCY", FlagType::AUDIO_FLAG_LOW_LATENCY },
                        { "AUDIO_FLAG_DEEP_BUFFER", FlagType::AUDIO_FLAG_DEEP_BUFFER },
                        { "AUDIO_FLAG_NO_MEDIA_PROJECTION", FlagType::AUDIO_FLAG_NO_MEDIA_PROJECTION },
                        { "AUDIO_FLAG_MUTE_HAPTIC", FlagType::AUDIO_FLAG_MUTE_HAPTIC },
                        { "AUDIO_FLAG_NO_SYSTEM_CAPTURE", FlagType::AUDIO_FLAG_NO_SYSTEM_CAPTURE },
                        { "AUDIO_FLAG_CAPTURE_PRIVATE", FlagType::AUDIO_FLAG_CAPTURE_PRIVATE },
                    };

                    FlagType stringToFlagType(const std::string& value) {
                        auto enumValue = FlagTypeString.find(value);
                        return enumValue != FlagTypeString.end() ? enumValue->second : FlagType::UNKNOWN;
                    }

                    std::string toString(FlagType o) {
                        switch (o) {
                            case FlagType::AUDIO_FLAG_NONE: return "AUDIO_FLAG_NONE";
                            case FlagType::AUDIO_FLAG_AUDIBILITY_ENFORCED: return "AUDIO_FLAG_AUDIBILITY_ENFORCED";
                            case FlagType::AUDIO_FLAG_SECURE: return "AUDIO_FLAG_SECURE";
                            case FlagType::AUDIO_FLAG_SCO: return "AUDIO_FLAG_SCO";
                            case FlagType::AUDIO_FLAG_BEACON: return "AUDIO_FLAG_BEACON";
                            case FlagType::AUDIO_FLAG_HW_AV_SYNC: return "AUDIO_FLAG_HW_AV_SYNC";
                            case FlagType::AUDIO_FLAG_HW_HOTWORD: return "AUDIO_FLAG_HW_HOTWORD";
                            case FlagType::AUDIO_FLAG_BYPASS_INTERRUPTION_POLICY: return "AUDIO_FLAG_BYPASS_INTERRUPTION_POLICY";
                            case FlagType::AUDIO_FLAG_BYPASS_MUTE: return "AUDIO_FLAG_BYPASS_MUTE";
                            case FlagType::AUDIO_FLAG_LOW_LATENCY: return "AUDIO_FLAG_LOW_LATENCY";
                            case FlagType::AUDIO_FLAG_DEEP_BUFFER: return "AUDIO_FLAG_DEEP_BUFFER";
                            case FlagType::AUDIO_FLAG_NO_MEDIA_PROJECTION: return "AUDIO_FLAG_NO_MEDIA_PROJECTION";
                            case FlagType::AUDIO_FLAG_MUTE_HAPTIC: return "AUDIO_FLAG_MUTE_HAPTIC";
                            case FlagType::AUDIO_FLAG_NO_SYSTEM_CAPTURE: return "AUDIO_FLAG_NO_SYSTEM_CAPTURE";
                            case FlagType::AUDIO_FLAG_CAPTURE_PRIVATE: return "AUDIO_FLAG_CAPTURE_PRIVATE";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, SourceEnumType> SourceEnumTypeString {
                        { "AUDIO_SOURCE_DEFAULT", SourceEnumType::AUDIO_SOURCE_DEFAULT },
                        { "AUDIO_SOURCE_MIC", SourceEnumType::AUDIO_SOURCE_MIC },
                        { "AUDIO_SOURCE_VOICE_UPLINK", SourceEnumType::AUDIO_SOURCE_VOICE_UPLINK },
                        { "AUDIO_SOURCE_VOICE_DOWNLINK", SourceEnumType::AUDIO_SOURCE_VOICE_DOWNLINK },
                        { "AUDIO_SOURCE_VOICE_CALL", SourceEnumType::AUDIO_SOURCE_VOICE_CALL },
                        { "AUDIO_SOURCE_CAMCORDER", SourceEnumType::AUDIO_SOURCE_CAMCORDER },
                        { "AUDIO_SOURCE_VOICE_RECOGNITION", SourceEnumType::AUDIO_SOURCE_VOICE_RECOGNITION },
                        { "AUDIO_SOURCE_VOICE_COMMUNICATION", SourceEnumType::AUDIO_SOURCE_VOICE_COMMUNICATION },
                        { "AUDIO_SOURCE_REMOTE_SUBMIX", SourceEnumType::AUDIO_SOURCE_REMOTE_SUBMIX },
                        { "AUDIO_SOURCE_UNPROCESSED", SourceEnumType::AUDIO_SOURCE_UNPROCESSED },
                        { "AUDIO_SOURCE_VOICE_PERFORMANCE", SourceEnumType::AUDIO_SOURCE_VOICE_PERFORMANCE },
                        { "AUDIO_SOURCE_ECHO_REFERENCE", SourceEnumType::AUDIO_SOURCE_ECHO_REFERENCE },
                        { "AUDIO_SOURCE_FM_TUNER", SourceEnumType::AUDIO_SOURCE_FM_TUNER },
                    };

                    SourceEnumType stringToSourceEnumType(const std::string& value) {
                        auto enumValue = SourceEnumTypeString.find(value);
                        return enumValue != SourceEnumTypeString.end() ? enumValue->second : SourceEnumType::UNKNOWN;
                    }

                    std::string toString(SourceEnumType o) {
                        switch (o) {
                            case SourceEnumType::AUDIO_SOURCE_DEFAULT: return "AUDIO_SOURCE_DEFAULT";
                            case SourceEnumType::AUDIO_SOURCE_MIC: return "AUDIO_SOURCE_MIC";
                            case SourceEnumType::AUDIO_SOURCE_VOICE_UPLINK: return "AUDIO_SOURCE_VOICE_UPLINK";
                            case SourceEnumType::AUDIO_SOURCE_VOICE_DOWNLINK: return "AUDIO_SOURCE_VOICE_DOWNLINK";
                            case SourceEnumType::AUDIO_SOURCE_VOICE_CALL: return "AUDIO_SOURCE_VOICE_CALL";
                            case SourceEnumType::AUDIO_SOURCE_CAMCORDER: return "AUDIO_SOURCE_CAMCORDER";
                            case SourceEnumType::AUDIO_SOURCE_VOICE_RECOGNITION: return "AUDIO_SOURCE_VOICE_RECOGNITION";
                            case SourceEnumType::AUDIO_SOURCE_VOICE_COMMUNICATION: return "AUDIO_SOURCE_VOICE_COMMUNICATION";
                            case SourceEnumType::AUDIO_SOURCE_REMOTE_SUBMIX: return "AUDIO_SOURCE_REMOTE_SUBMIX";
                            case SourceEnumType::AUDIO_SOURCE_UNPROCESSED: return "AUDIO_SOURCE_UNPROCESSED";
                            case SourceEnumType::AUDIO_SOURCE_VOICE_PERFORMANCE: return "AUDIO_SOURCE_VOICE_PERFORMANCE";
                            case SourceEnumType::AUDIO_SOURCE_ECHO_REFERENCE: return "AUDIO_SOURCE_ECHO_REFERENCE";
                            case SourceEnumType::AUDIO_SOURCE_FM_TUNER: return "AUDIO_SOURCE_FM_TUNER";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                    const std::map<std::string, PfwCriterionTypeEnum> PfwCriterionTypeEnumString {
                        { "inclusive", PfwCriterionTypeEnum::inclusive },
                        { "exclusive", PfwCriterionTypeEnum::exclusive },
                    };

                    PfwCriterionTypeEnum stringToPfwCriterionTypeEnum(const std::string& value) {
                        auto enumValue = PfwCriterionTypeEnumString.find(value);
                        return enumValue != PfwCriterionTypeEnumString.end() ? enumValue->second : PfwCriterionTypeEnum::UNKNOWN;
                    }

                    std::string toString(PfwCriterionTypeEnum o) {
                        switch (o) {
                            case PfwCriterionTypeEnum::inclusive: return "inclusive";
                            case PfwCriterionTypeEnum::exclusive: return "exclusive";
                            default: return std::to_string(static_cast<int>(o));
                        }
                    }

                } // configuration
            } // engine
        } // policy
    } // audio
} // android
