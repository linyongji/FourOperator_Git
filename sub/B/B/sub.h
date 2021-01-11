#ifndef _SUB_H_
#define _SUB_H_

#ifdef sub_EXPORTS
#define sub_EXPORTS _declspec(dllexport)
#else
#define sub_EXPORTS _declspec(dllimport)
#endif

sub_EXPORTS int sub(int x, int y);

#endif

