#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS_API
#endif  // defined(ANDROIDHARDWAREBLUETOOTHAUDIOV4NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
