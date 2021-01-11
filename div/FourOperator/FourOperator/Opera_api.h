#pragma once
#include"sub.h"
#include<Windows.h>
#include <stdio.h>
#pragma comment(lib,"./B.lib")

typedef int(WINAPI* MulFunc)(int x, int y);
long long mul_api(int x, int y);
int sub_api(int x, int y);
long long add_api(int x, int y);
