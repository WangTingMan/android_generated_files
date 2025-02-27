#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS)
#define VENDORQTIHARDWAREBLUETOOTHAUDIO21_API __declspec(dllexport)
#else
#define VENDORQTIHARDWAREBLUETOOTHAUDIO21_API __declspec(dllimport)
#endif  // defined(VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS)

#else  // defined(WIN32)
#if defined(VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS)
#define VENDORQTIHARDWAREBLUETOOTHAUDIO21_API __attribute__((visibility("default")))
#else
#define VENDORQTIHARDWAREBLUETOOTHAUDIO21_API
#endif  // defined(VENDORQTIHARDWAREBLUETOOTHAUDIO21_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
