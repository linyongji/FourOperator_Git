
#include "Opera_api.h"
#include "dev.h"
int main()
{
	int a = 2147483647, b = 3;
	add_api(a, b);//���� �ӷ��ӿ�add_api
	sub_api(a, b);//���� �����ӿ�sub_api
	mul_api(a, b);	//���� �˷��ӿ�mul_api
	dev(a, b);//���� �����ӿ�dev_api

	return 0;
}