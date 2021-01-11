#include "dev.h"
//封装的除法函数
int dev(int x, int y)
{
	if (y == 0)
	{
		printf("除数不能为0！\n");
		return 0;
	}
	else
	{
		printf("%d / %d = %d\n", x, y, x / y);
		return x / y;
	}
}