#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHIDLTOKEN10_EXPORTS_IMPL)
#define ANDROIDHIDLTOKEN10_API __declspec(dllexport)
#else
#define ANDROIDHIDLTOKEN10_API __declspec(dllimport)
#endif  // defined(ANDROIDHIDLTOKEN10_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHIDLTOKEN10_EXPORTS_IMPL)
#define ANDROIDHIDLTOKEN10_API __attribute__((visibility("default")))
#else
#define ANDROIDHIDLTOKEN10_API
#endif  // defined(ANDROIDHIDLTOKEN10_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
