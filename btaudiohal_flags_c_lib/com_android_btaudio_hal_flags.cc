#include "com_android_btaudio_hal_flags.h"




namespace com::android::btaudio::hal::flags {

class flag_provider : public flag_provider_interface {
    public:

        virtual bool dsa_lea() override {
            return false;
        }
    
    };

std::unique_ptr<flag_provider_interface> provider_ =
    std::make_unique<flag_provider>();
}


bool com_android_btaudio_hal_flags_dsa_lea() {
    return false;
}


