#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS_API
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV1NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
