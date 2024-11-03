
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>


using namespace std;

/*
数据类型：
	整型：short、int、long、long long
	实型（浮点型）：float、double
	字符型：char，只能使用单引号''，且只能使用一个字符
	字符串：
		c风格：char 变量名[] = "aaaaa";
		c++风格：string str = "bbbbb";
	布尔类型：bool

*/

/*
*
* sizeof关键字，统计数据类型所占内存大小
*
*	sizeof(数据类型 / 变量)
*/
void test01()
{

	short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;

	cout << "short = " << sizeof(short) << ", " << sizeof(a) << endl;
	cout << "int = " << sizeof(int) << ", " << sizeof(b) << endl;
	cout << "long = " << sizeof(long) << ", " << sizeof(c) << endl;
	cout << "long long = " << sizeof(long long) << ", " << sizeof(d) << endl;


	double d1 = 10e2;
	double d2 = 10e-2;

	cout << "d1 = " << d1 << endl;
	cout << "d2 = " << d2 << endl;


	char ch = 'a';
	cout << sizeof(char) << ", " << sizeof(ch) << endl;
	cout << int(ch) << endl;


	char str1[] = "aaaaa";
	string str2 = "bbbbb";

	cout << "sizeof() = " << sizeof(str1) << ", str1 = " << str1 << endl;
	cout << "sizeof() = " << sizeof(str2) << ", str2 = " << str2 << endl;


	int num1 = 2;
	int num2 = num1 >> 1; // 右移除2
	int num3 = num1 << 1; // 左移除2

	cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << endl;

}

int get_max(int num1, int num2)
{
	return num1 >= num2 ? num1 : num2;
}

int get_max(int a, int b, int c)
{
	return get_max(get_max(a, b), c);
}


/*
* 求三个数中最大的一个
*/
void test02()
{

	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	int max = get_max(a, b, c);

	cout << "最大的数为：" << max << endl;
}

/*
* 交换两个变量的值
*/

void swap1(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void swap2(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void test03()
{
	int a = 10, b = 20;

	cout << "未交换前：a = " << a << "，b = " << b << endl;
	swap1(a, b);
	cout << "交换后：a = " << a << "，b = " << b << endl;
	swap2(&a, &b);
	cout << "交换后：a = " << a << "，b = " << b << endl;

}



void test04()
{

	//使用时间作为随机数的种子
	srand((unsigned int)time(NULL));


	//生成一个1到100的随机数
	int value = rand() % 100 + 1;

	int answer = -1;
	do {
		cout << "请输入一个数：";
		cin >> answer;
		if (answer > value)
		{
			cout << "过大" << endl;
		} else if (answer < value)
		{
			cout << "过小" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;
			
		}
	} while (true);


	int type = 1;

	switch (type)
	{
		case 1:
			cout << "类型1" << endl;
			break;
		case 2:
			cout << "类型2" << endl;
			break;
		case 3:
			cout << "类型3" << endl;
			break;
		default:
			cout << "默认类型" << endl;
			break;
	}




}

/*
* 水仙花数
*/
void test05()
{

	int num = 100;
	while (num < 1000)
	{
		// 求百位
		int bai = num / 100;
		// 求十位
		int shi = num / 10 % 10;
		// 求个位
		int ge = num % 10;


		if (pow(bai, 3) + pow(shi, 3) + pow(ge, 3) == num )
		{
			cout << num << endl;
		}
		num++;
	}

}

/*
* 敲桌子
*/
void test06()
{

	for (int i = 1; i <= 100; i++)
	{
		int flag = i % 7 == 0;
		int shi = i / 10;
		int ge  = i % 10;

		if (flag || shi == 7 || ge == 7)
		{
			cout << "敲桌子，";
		}
		cout << "数字：" << i << endl;

	}



}


/*
* 嵌套循环
*/
void test07()
{
	// 打印10*10的*
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << " * ";
		}
		cout << endl;
	}
}



int main()
{

	//test01();
	
	//test02();

	//test03();

	//test04();

	//test05();
	
	//test06();

	test07();
	


	return 0;
}


