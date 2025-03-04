#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOCOMMONV4NDK_EXPORTS_IMPL)
#define ANDROIDHARDWAREAUDIOCOMMONV4NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOCOMMONV4NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV4NDK_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOCOMMONV4NDK_EXPORTS_IMPL)
#define ANDROIDHARDWAREAUDIOCOMMONV4NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOCOMMONV4NDK_API
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMONV4NDK_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
