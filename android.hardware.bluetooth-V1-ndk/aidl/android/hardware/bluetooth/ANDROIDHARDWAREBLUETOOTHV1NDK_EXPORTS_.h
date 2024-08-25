#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHV1NDK_API __declspec(dllexport)
#else
#define ANDROIDHARDWAREBLUETOOTHV1NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS)
#define ANDROIDHARDWAREBLUETOOTHV1NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREBLUETOOTHV1NDK_API
#endif  // defined(ANDROIDHARDWAREBLUETOOTHV1NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
