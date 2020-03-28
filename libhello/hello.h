#ifndef _HELLO__
#define _HELLO__

#if defined _WIN32
#if LIBHELLO_BUILD
#define LIBHELLO_API __declspec(dllexport)
#else
#define LIBHELLO_API __declspec(dllimport)
#endif
#else
#define LIBHELLO_API
#endif
LIBHELLO_API void show(const char* strShow);
#endif