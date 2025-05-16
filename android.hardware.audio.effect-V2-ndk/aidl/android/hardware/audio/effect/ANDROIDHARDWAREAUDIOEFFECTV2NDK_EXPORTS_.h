#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOEFFECTV2NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOEFFECTV2NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOEFFECTV2NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOEFFECTV2NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOEFFECTV2NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOEFFECTV2NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOEFFECTV2NDK_API
#endif  // defined(ANDROIDHARDWAREAUDIOEFFECTV2NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
