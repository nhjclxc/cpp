#include<iostream>
using namespace std;


/*指针
*	指针的基本概念:可以通过指针间接访问内存
*		内存编号是从0开始记录的,一般使用十六进制的数字表示
*		可以利用指针变量保存地址
*	指针语法:
*		数据类型* 变量名;
* 
*/

void test31()
{
	int a = 10;

	int* pa = &a; // 指针保存一个地址,指针就是一个地址 指针变量前面加一个*表示湖区哦整个指针指向地址的值

	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl; // 解引用,也就是获取到pa整个指针变量所指向地址的值
	cout << "&pa = " << &pa << endl;
	cout << "================" << endl;

	*pa = 666;  // *pa接引用,同时操作该内存里面保存的值
	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl;
	cout << "&pa = " << &pa << endl;
	cout << "================" << endl;

	int** ppa = &pa;
	cout << "ppa = " << ppa << endl;
	cout << "*ppa = " << *ppa << endl;
	cout << "&ppa = " << &ppa << endl;
	cout << "================" << endl;
}


void test32()
{
	// 指针变量所占有的内存空间

	// 指针存的是地址,指针的大小与系统架构相关。在 32 位系统中，指针通常占用 4 字节，而在 64 位系统中，指针通常占用 8 字节。

	cout << "sizeof(short) = " << sizeof(short) << ", sizeof(short *) = " << sizeof(short *) << endl;
	cout << "sizeof(int) = " << sizeof(int) << ", sizeof(int *) = " << sizeof(int *) << endl;
	cout << "sizeof(flaot) = " << sizeof(float) << ", sizeof(float *) = " << sizeof(float *) << endl;
	cout << "sizeof(double) = " << sizeof(double) << ", sizeof(double *) = " << sizeof(double*) << endl;
	cout << "sizeof(long) = " << sizeof(long) << ", sizeof(long *) = " << sizeof(long *) << endl;
	cout << "sizeof(char) = " << sizeof(char) << ", sizeof(char *) = " << sizeof(char*) << endl;
	cout << "sizeof(bool) = " << sizeof(bool) << ", sizeof(bool *) = " << sizeof(bool*) << endl;

}

void test33()
{
	// 空指针和野指针
	// 空指针:指针变量指向内存中编号为0的空间
	// 空指针一般用来初始化内存变量
	// 注意:空指针指向的内存是不可以访问的
	int a = 666;
	int* p = NULL;

	//cout << *p << endl; // 引发了异常: 读取访问权限冲突。p 是 nullptr。
	cout << p << endl;
	cout << NULL << endl;

	p = &a;
	cout << p << endl;
	cout << *p << endl;


	// 野指针是没有被初始化的指针,吱吱吱指向的内存空间是非法的
	int * pp = (int *)0x123456;
	cout << pp << endl;
	cout << *pp << endl; // 引发了异常: 读取访问权限冲突。pp 是 0x123456。


}

void test34()
{
	// const 修饰指针
	// const修饰指针 --- 常量指针
	// const修饰常量 --- 指针常量
	// const既修饰指针,又修饰常量



	// const修饰指针 --- 常量指针,此时const修饰的是指针
	int a = 666;
	const int* pa = &a; // 常量指针,指针指向可以修改,但是指针指向的值不可以修改(也就是指针保存的地址指向的那个值不允许修改),将pc指针指向其他地址是没问题的
	cout << a << endl;
	cout << *pa << endl;
	cout << pa << endl;
	//*pa = 888; // 指针所指向的值是不可以修改的. 报错, 表达式必须是可修改的左值
	int b = 6626;
	pa = &b; // 指向所指向的地址可以修改, 修改指向,并且指向的值是原值,代码没问题
	cout << *pa << endl;
	cout << pa << endl;
	
	cout << "----------------" << endl;

	int c = 888;
	int* const pc = &c;// 指针常量,即pc整个变量保存的值不能变,也就是pc所指向的地址不能变
	cout << c << endl;
	cout << *pc << endl;
	cout << pc << endl;
	int d = 456;
	//pc = &d; // pc要指向其他地址是不允许的
	c = 999; // pc指向内存地址保存的值是可以修改的
	cout << c << endl;
	cout << *pc << endl;
	cout << pc << endl;


	cout << "----------------" << endl;
	// const既修饰指针,又修饰常量
	int cc = 555;
	const int* const pp = &cc;




}

/*
* 指针和数组
*/
void test35()
{

	// 利用指针访问数组
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	int* parr = arr;

	for (int i = 0; i < 10; i++)
	{
		// *parr+1则指针向后偏移一个位置
		cout << "p[" << i << "]=" << *parr + i << endl;
	}

}

/*指针和函数
*/
// 当传入的值是地址的时候,要使用指针来接收
void swap(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void test36()
{
	int a = 10, b = 20;

	cout << a << ", " << b << endl;
	// 当指针要作为函数的参数的时候,要取出指针所指向的地址,作为形参
	swap(&a, &b); // 地址传递 
	cout << a << ", " << b << endl;


}
void bubble_sort(int* parr, int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (*(parr + j) > *(parr + j + 1))
			{
				swap((parr + j), (parr + j + 1));
			}
		}
	}
}
void test37()
{
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	bubble_sort(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << ", ";
	}

}

//int main()
//{
//
//	//test31();
//
//	//test32();
//
//	//test33();
//
//	//test34();
//
//	//test35();
//
//	//test36();
//
//	test37();
//
//	return 0;
//}
