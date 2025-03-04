#include "com_android_btaudio_hal_flags.h"








namespace com::android::btaudio::hal::flags {

class flag_provider : public flag_provider_interface {
    public:

        
        virtual bool dsa_lea() override {
            return true;
        }
        virtual bool leaudio_report_broadcast_ac_to_hal() override {
            return true;
        }

    

    };

std::unique_ptr<flag_provider_interface> provider_ =
    std::make_unique<flag_provider>();
}


bool com_android_btaudio_hal_flags_dsa_lea() {
    return true;
}

bool com_android_btaudio_hal_flags_leaudio_report_broadcast_ac_to_hal() {
    return true;
}

