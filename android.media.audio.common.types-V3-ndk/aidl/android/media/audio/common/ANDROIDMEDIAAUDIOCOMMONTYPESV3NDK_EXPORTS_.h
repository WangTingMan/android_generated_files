#pragma once

#if defined(WIN32) || defined(_MSC_VER)

#if defined(ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS)
#define ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API __declspec(dllexport)
#else
#define ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API __declspec(dllimport)
#endif  // defined(ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS)

#else  // defined(WIN32)
#if defined(ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS)
#define ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API __attribute__((visibility("default")))
#else
#define ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_API
#endif  // defined(ANDROIDMEDIAAUDIOCOMMONTYPESV3NDK_EXPORTS)
#endif

#ifdef _WIN32
#ifdef interface
#undef interface
#endif
#endif
