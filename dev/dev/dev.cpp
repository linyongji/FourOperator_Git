#include "dev.h"
//��װ�ĳ�������
int dev(int x, int y)
{
	if (y == 0)
	{
		printf("��������Ϊ0��\n");
		return 0;
	}
	else
	{
		printf("%d / %d = %d\n", x, y, x / y);
		return x / y;
	}
}