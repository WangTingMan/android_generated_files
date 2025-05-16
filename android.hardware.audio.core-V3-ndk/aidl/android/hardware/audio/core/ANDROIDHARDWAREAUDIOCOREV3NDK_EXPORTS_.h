#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOCOREV3NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOREV3NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOCOREV3NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOCOREV3NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOCOREV3NDK_EXPORTS)
#define ANDROIDHARDWAREAUDIOCOREV3NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOCOREV3NDK_API
#endif  // defined(ANDROIDHARDWAREAUDIOCOREV3NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
