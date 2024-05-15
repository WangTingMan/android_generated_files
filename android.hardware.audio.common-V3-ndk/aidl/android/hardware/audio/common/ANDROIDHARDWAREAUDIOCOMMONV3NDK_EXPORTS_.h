#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOCOMMONV3NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOMMONV3NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOCOMMONV3NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV3NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOCOMMONV3NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOMMONV3NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOCOMMONV3NDK_API
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV3NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
