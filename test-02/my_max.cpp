#include"my_max.h"


/*
* 02.源函数的多文件编写
*/
int my_max_impl(int num1, int num2)
{
	int max = num1 > num2 ? num1 : num2;
	return max;
}
