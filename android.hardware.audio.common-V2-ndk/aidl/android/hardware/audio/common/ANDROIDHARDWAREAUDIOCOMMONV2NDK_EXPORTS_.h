#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOCOMMONV2NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOMMONV2NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOCOMMONV2NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV2NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOCOMMONV2NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOMMONV2NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOCOMMONV2NDK_API
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV2NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
