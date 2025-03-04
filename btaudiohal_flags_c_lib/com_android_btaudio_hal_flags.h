#pragma once



#ifdef __cplusplus

#include <memory>

namespace com::android::btaudio::hal::flags {

class flag_provider_interface {
public:
    virtual ~flag_provider_interface() = default;
    virtual bool dsa_lea() = 0;
    virtual bool leaudio_report_broadcast_ac_to_hal() = 0;
};

extern std::unique_ptr<flag_provider_interface> provider_;


inline bool dsa_lea() {
    return true;
}
inline bool leaudio_report_broadcast_ac_to_hal() {
    return true;
}

}

extern "C" {
#endif // __cplusplus


bool com_android_btaudio_hal_flags_dsa_lea();
bool com_android_btaudio_hal_flags_leaudio_report_broadcast_ac_to_hal();

#ifdef __cplusplus
} // extern "C"
#endif

