#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO21_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_API __declspec(dllimport)
#endif  // defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO21_EXPORTS)

#else  // defined(WIN32)
#if defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO21_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO21_API
#endif  // defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO21_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
