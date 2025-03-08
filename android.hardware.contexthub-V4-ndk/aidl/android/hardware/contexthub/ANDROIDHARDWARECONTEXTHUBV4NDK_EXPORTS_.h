#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_IMPL)
#define ANDROIDHARDWARECONTEXTHUBV4NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWARECONTEXTHUBV4NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_IMPL)
#define ANDROIDHARDWARECONTEXTHUBV4NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWARECONTEXTHUBV4NDK_API
#endif  // defined(ANDROIDHARDWARECONTEXTHUBV4NDK_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
