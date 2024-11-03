
#include<iostream>

// 使用自己编写的c++源码
#include"my_max.h"

using namespace std;


// 函数声明
/*
* 加法函数
*/
int add(int num1, int num2);


/*
* 函数的分文件编写
* 1.创建后缀名为.h的头文件，并在头文件中声明函数
* 2.创建后缀名为.cpp的源文件，并在源文件中实现函数定义，
* 3.关联头文件和源文件.将.h的头文件引入.cpp的源文件,使用双引号#include"头文件名.h",注意:源文件名和头文件名尽量保持一致
* 4.在要使用的源文件的cpp文件中引入，使用语法#include"头文件名.h"
* 5.在要使用的cpp文件中使用头文件中声明的函数
* 
* #include<系统相关的头文件名>
* #include"自定义相关的头文件名.h"
* 
*/

//int main()
//{
//
//	cout << add(111,222) << endl;
//
//
//	cout << my_max_impl(666,222) << endl;
//
//
//
//	return 0;
//}


// 函数的实现

int add(int num1, int num2)
{
	return num1 + num2;
}