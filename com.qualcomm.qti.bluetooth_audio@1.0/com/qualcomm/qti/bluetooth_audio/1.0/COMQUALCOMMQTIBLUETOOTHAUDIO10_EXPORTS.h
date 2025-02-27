#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS)
#define COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS_API __declspec(dllexport)
#else
#define COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS_API __declspec(dllimport)
#endif  // defined(COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS)

#else  // defined(WIN32)
#if defined(COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS)
#define COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS_API __attribute__((visibility("default")))
#else
#define COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS_API
#endif  // defined(COMQUALCOMMQTIBLUETOOTHAUDIO10_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
