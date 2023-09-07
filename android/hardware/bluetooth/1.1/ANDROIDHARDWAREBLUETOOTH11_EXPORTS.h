#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREBLUETOOTH11_EXPORTS_IMPL)
#define ANDROIDHARDWAREBLUETOOTH11_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTH11_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREBLUETOOTH11_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREBLUETOOTH11_EXPORTS_IMPL)
#define ANDROIDHARDWAREBLUETOOTH11_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTH11_API
#endif  // defined(ANDROIDHARDWAREBLUETOOTH11_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
