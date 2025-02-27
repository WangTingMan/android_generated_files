#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS_IMPL)
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS_IMPL)
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS
#endif  // defined(ANDROIDHARDWAREBLUETOOTHAUDIO21_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
