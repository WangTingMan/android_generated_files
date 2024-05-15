#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO22_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHAUDIO22_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO22_API __declspec(dllimport)
#endif  // defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO22_EXPORTS)

#else  // defined(WIN32)
#if defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO22_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHAUDIO22_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHAUDIO22_API
#endif  // defined(VENDORMEDIATEKHARDWAREBLUETOOTHAUDIO22_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
