#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREBLUETOOTHA2DP10_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHA2DP10_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHA2DP10_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREBLUETOOTHA2DP10_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREBLUETOOTHA2DP10_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHA2DP10_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHA2DP10_API
#endif  // defined(ANDROIDHARDWAREBLUETOOTHA2DP10_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
