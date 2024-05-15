#pragma once
#include "btaudiohal_flags_c_lib_export_.h"


#ifdef __cplusplus

#include <memory>

namespace com::android::btaudio::hal::flags {

class flag_provider_interface {
public:
    virtual ~flag_provider_interface() = default;
    virtual bool dsa_lea() = 0;
};

BTAUDIOHALFLAGSCLIB_API extern std::unique_ptr<flag_provider_interface> provider_;


inline bool dsa_lea() {
    return false;
}

}

extern "C" {
#endif // __cplusplus


BTAUDIOHALFLAGSCLIB_API bool com_android_btaudio_hal_flags_dsa_lea();

#ifdef __cplusplus
} // extern "C"
#endif

