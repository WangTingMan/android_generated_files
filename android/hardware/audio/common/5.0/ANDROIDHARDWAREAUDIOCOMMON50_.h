#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS_IMPL)
#define ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS __declspec(dllexport)
#else
#define ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS __declspec(dllimport)
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS_IMPL)
#define ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS __attribute__((visibility("default")))
#else
#define ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS
#endif  // defined(ANDROIDHARDWAREAUDIOCOMMON50_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
