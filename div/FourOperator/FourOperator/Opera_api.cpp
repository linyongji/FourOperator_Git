#pragma once
#include "Opera_api.h"
#include"../../../add/A/A/add.h"
//��װ�ļӷ�����
long long add_api(int x, int y)
{
	long long res = add(x, y);
	printf("%d + %d = %lld\n", x, y, res);
	return res;
}
//.��װ�ļ�������
int sub_api(int x, int y)
{
	printf("%d - %d = %d\n", x, y, x - y);
	return x - y;
}
//��װ�ĳ˷�����
long long mul_api(int x, int y)
{
	long long res;
	HMODULE hdll = LoadLibrary("../../../mul/C/Debug/C.dll");
	if (hdll != NULL)
	{
		MulFunc MUL1 = (MulFunc)GetProcAddress(hdll, (char*)(1));
		if (MUL1 != NULL)
		{
			res = MUL1(x,y);
			return res;
		}
		FreeLibrary(hdll);
	}
}



