#ifndef _SUB_H_
#define _SUB_H_

#ifdef DLL_EXPORTS
#define SUB_API _declspec(dllexport)
#else
#define SUB_API _declspec(dllimport)
#endif

SUB_API long long sub(int x, int y);
#endif

