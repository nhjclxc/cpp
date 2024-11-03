
#include<iostream>

using namespace std;


/*
* 数组
*/
void test01()
{
	// 数组的定义方式
	// 1、数据类型 数组名[数组长度];
	// 2、数据类型 数组名[数组长度] = {值1, 值2, 值3, ... };
	// 3、数据类型 数组名[] = {值1, 值2, 值3, ... };
	// 4、使用指针来声明数组：数据类型* 数组名 = new 数据类型[数组长度];

	int arr1[10];
	cout << arr1[0] << endl;
	arr1[0] = 666;
	cout << arr1[0] << endl;


	// 2、数据类型 数组名[数组长度] = {值1, 值2, 值3, ... };
	int arr2[5] = { 1,2,3,4,5 };
	cout << arr2[0] << endl;
	cout << arr2 << endl;

	// 计算数组长度。sizeof(arr2)表示这个变量所占的内存有多大，sizeof(arr2[0])表示一个数据占用的内存有多大
	int length = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i] << endl;
	}


	// 3、数据类型 数组名[] = {值1, 值2, 值3, ... };
	int arr3[] = { 5,6,7,8,9 };





}

/*
* 一维数组名的作用
*/
void test02()
{
	// 作用1：可以统计整个数组在内存中的长度
	// 作用2：可以获取数组在内存中的首地址
	int arr1[5] = { 1,2,3,4,5 };
	cout << "数组长度sizeof(arr1)：" << sizeof(arr1) << endl;
	cout << "数组长度sizeof(arr1[0])：" << sizeof(arr1[0]) << endl;
	cout << "数组长度：" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "首地址(x16)：" << arr1 << endl;
	cout << "首地址(x10)：" << (int)arr1 << endl;
	cout << "第0个元素的地址：" << &arr1[0] << ", 对应的值为："<< arr1[0] << endl; // &表示取出arr1[0]变量的地址，&是一个取址符号
	cout << "第1个元素的地址：" << &arr1[1] << ", 对应的值为：" << arr1[1] << endl; // &表示取出arr1[0]变量的地址，&是一个取址符号
	cout << "第2个元素的地址：" << &arr1[2] << ", 对应的值为：" << arr1[2] << endl; // &表示取出arr1[0]变量的地址，&是一个取址符号
	cout << "第3个元素的地址：" << &arr1[3] << ", 对应的值为：" << arr1[3] << endl; // &表示取出arr1[0]变量的地址，&是一个取址符号
	cout << "第4个元素的地址：" << &arr1[4] << ", 对应的值为：" << arr1[4] << endl; // &表示取出arr1[0]变量的地址，&是一个取址符号
	cout << "第5个元素的地址：" << &arr1[5] << ", 对应的值为：" << arr1[5] << endl; // &表示取出arr1[0]变量的地址，&是一个取址符号

	// 注意：数组的首地址就是第一个元素的地址
	

}


/*
* c++中如何给一个函数传递数组
* 在 C++ 中，使用 sizeof(arr) / sizeof(arr[0]) 来获取数组的大小在函数中是不准确的，因为当数组作为参数传递时，
它会退化为指针。因此，sizeof(arr) 将返回指针的大小，而不是数组的实际大小。

在 C++ 中，当你将数组作为参数传递给函数时，实际上是将数组的指针传递过去，而不是整个数组。
这意味着在函数内部，sizeof(arr) 返回的是指针的大小，而不是数组的实际大小。
因此，使用 sizeof(arr) 来计算数组的长度是错误的。
*/
void print_array(int arr[])
{
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}
void print_array(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}
/*
* 指针数组
*/
void test03()
{

	// 找出数组中最小的值
	int arr1[] = { 11,32,52,1,85,45,77 };
	int min = arr1[0];
	for (int i = 1; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		if ( arr1[i] < min)
		{
			min = arr1[i];
		}
	}
	cout << "最小的值为：" << min << endl;


	// 数组逆置
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	cout << "逆置前：";
	print_array(arr2, sizeof(arr2) / sizeof(arr2[0]));
	int length = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < length / 2; i++)
	{
		int temp = arr2[i];
		arr2[i] = arr2[length - i - 1];
		arr2[length - i - 1] = temp;
	}
	cout << "逆置后：";
	print_array(arr2, sizeof(arr2) / sizeof(arr2[0]));



}



/*
* 实现冒泡排序
*	从前往后比，比较每一对相邻的两个元素，如果第一个比第二个大，就交换他们
*/
void bubble_sort_test()
{
	int arr[] = { 8,2,4,5,6,3,1,7,9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "排序前：";
	print_array(arr, length);
	
	for (int i = 0; i < length - 1; i++)
	{
		// 每一对
		for (int j = 0; j < length - i - 1; j++)
		{
			// 比较相邻的位置
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

	cout << "排序后：";
	print_array(arr, length);
}

/*
* 二维数组
*/

void print_array2(int** arr, int rows, int clos)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < clos; j++)
		{
			cout << arr[i][j] << ", ";
		}
		cout << endl;
	}
	cout << endl;
}

void test04()
{
	//1、数据类型 数组名[行数][列数];
	int arr1[3][4];

	// 2、数据类型 数组名[行数][列数] = {{1-1，1-2，1-3，...}, {2-1，2-2，2-3，...}, ...};
	int arr2[3][4] = { 
		{1,2,3,4}, 
		{5,6,7,8}, 
		{9,11,12,13} 
	};

	// 3、数据类型 数组名[行数][列数] = {1，2，3，4，5，6，7，8, ...}; //c++会自动根据总的元素个数和声明的行数和列数进行数据整理
	int arr3[3][4] = { 1,2,3,4,5,6,7,8,9,11,12,13 };

	// 4、数据类型 数组名[][列数] = {1，2，3，4，5，6，7，8, ...};
	int arr4[][4] = { 1,2,3,4,5,6,7,8,9,11,12,13 };

	// 在 C++ 中，直接将静态二维数组（例如 int arr2[3][4]）传递给一个接受 int** 的函数（如 print_array2）是不可行的，因为它们的内存布局不同。对于静态数组，可以使用指向数组的指针或模板来正确传递。以下是两种方法：
	//print_array2(arr2, 3, 4);


	// 二维数组名作用
	//	1、查看二维数组所占的内存空间
	//	2、获取二维数组首地址
	cout << "查看二维数组所占的内存空间：" << sizeof(arr2) << endl;
	cout << "查看二维数组所占的内存空间：" << sizeof(arr2[0]) << endl;
	cout << "查看二维数组所占的内存空间：" << sizeof(arr2[0][0]) << endl;
	cout << "查看二维数组所占的内存空间：" << sizeof(arr2) / sizeof(arr2[0][0]) << endl;
	cout << "行数：" << sizeof(arr2) / sizeof(arr2[0]) << endl;  // 行数 = 总大小 / 每一行大小
	cout << "列数：" << sizeof(arr2[0]) / (sizeof(arr2[0][0])) << endl;// 列数 = 每一行大小 / 每一元素大小

	cout << "获取二维数组首地址：" << &arr2 << endl;
	cout << "获取二维数组首地址：" << &arr2[0] << endl;
	cout << "获取二维数组首地址：" << &arr2[0][0] << endl;

	// 按行统计每一行的总数
	const int row_size = sizeof(arr2) / sizeof(arr2[0]);
	int col_size = sizeof(arr2[0]) / (sizeof(arr2[0][0]));
	int arr_total[row_size];
	for (int i = 0; i < row_size; i++)
	{
		int row_total = 0;
		for (int j = 0; j < col_size; j++)
		{
			row_total += arr2[i][j];
		}
		arr_total[i] = row_total;
	}
	print_array(arr_total, row_size);
}




void test11()
{

	// 4、使用指针来声明数组：数据类型* 数组名 = new 数据类型[数组长度];
	//int arr11[10] = new int[10];
	// 在 C++ 中，使用 new 关键字动态分配内存时，不能将其结果直接赋值给一个静态数组。arr11 是一个静态数组，
	// 应该用来声明固定大小的数组，而动态分配的数组应该使用指针来接收。
	// 使用指针来动态分配数组
	int length4 = 10;
	int* arr4 = new int[length4]; // 使用new 关键字动态声明的数组就不要使用sizeof来计算长度了
	//int length4 = sizeof(arr4) / sizeof(arr4[0]);
	cout << "================== " << length4 << endl;
	for (int i = 0; i < length4; i++)
	{
		arr4[i] = i * 2;
	}
	for (int i = 0; i < length4; i++)
	{
		cout << arr4[i] << endl;
	}

	length4 *= 2;
	cout << "================== " << length4 << endl;
	arr4 = new int[length4];
	for (int i = 0; i < length4; i++)
	{
		arr4[i] = i * 2;
	}
	for (int i = 0; i < length4; i++)
	{
		cout << arr4[i] << endl;
	}


}

//int main()
//{
//
//	//test01();
//
//	//test02();
//
//	//test03();
//
//	//bubble_sort_test();
//
//	test04();
//
//
//	return 0;
//}


