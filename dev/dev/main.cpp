
#include "Opera_api.h"
#include "dev.h"
int main()
{
	int a = 2147483647, b = 3;
	add_api(a, b);//调用 加法接口add_api
	sub_api(a, b);//调用 减法接口sub_api
	mul_api(a, b);	//调用 乘法接口mul_api
	dev(a, b);//调用 除法接口dev_api

	return 0;
}