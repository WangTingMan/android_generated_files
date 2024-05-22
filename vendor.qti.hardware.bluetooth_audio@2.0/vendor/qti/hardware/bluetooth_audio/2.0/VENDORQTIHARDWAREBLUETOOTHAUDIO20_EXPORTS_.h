#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(VENDORQTIHARDWAREBLUETOOTHAUDIO20_EXPORTS)
#define VENDORQTIHARDWAREBLUETOOTHAUDIO20_API __declspec(dllexport)
#else
#define VENDORQTIHARDWAREBLUETOOTHAUDIO20_API __declspec(dllimport)
#endif  // defined(VENDORQTIHARDWAREBLUETOOTHAUDIO20_EXPORTS)

#else  // defined(WIN32)
#if defined(VENDORQTIHARDWAREBLUETOOTHAUDIO20_EXPORTS)
#define VENDORQTIHARDWAREBLUETOOTHAUDIO20_API __attribute__((visibility("default")))
#else
#define VENDORQTIHARDWAREBLUETOOTHAUDIO20_API
#endif  // defined(VENDORQTIHARDWAREBLUETOOTHAUDIO20_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
