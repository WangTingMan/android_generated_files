#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_EXPORTS_IMPL)
#define ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API __declspec(dllexport)
#else
#define ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_EXPORTS_IMPL)

#else  // defined(WIN32)
#if defined(ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_EXPORTS_IMPL)
#define ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_API
#endif  // defined(ANDROIDMEDIAAUDIOCOMMONTYPESV4NDK_EXPORTS_IMPL)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif

