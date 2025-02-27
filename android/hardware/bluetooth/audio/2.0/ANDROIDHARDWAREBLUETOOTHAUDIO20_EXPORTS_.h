#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS_IMPL)
#define ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS_IMPL)
#define ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS
#endif  // defined(ANDROIDHARDWAREBLUETOOTHAUDIO20_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
