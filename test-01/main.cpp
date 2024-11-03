
#include <iostream>
#include <string>
#include <ctime>
#include <cmath>


using namespace std;

/*
�������ͣ�
	���ͣ�short��int��long��long long
	ʵ�ͣ������ͣ���float��double
	�ַ��ͣ�char��ֻ��ʹ�õ�����''����ֻ��ʹ��һ���ַ�
	�ַ�����
		c���char ������[] = "aaaaa";
		c++���string str = "bbbbb";
	�������ͣ�bool

*/

/*
*
* sizeof�ؼ��֣�ͳ������������ռ�ڴ��С
*
*	sizeof(�������� / ����)
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
	int num2 = num1 >> 1; // ���Ƴ�2
	int num3 = num1 << 1; // ���Ƴ�2

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
* ��������������һ��
*/
void test02()
{

	int a, b, c;

	cin >> a;
	cin >> b;
	cin >> c;

	int max = get_max(a, b, c);

	cout << "������Ϊ��" << max << endl;
}

/*
* ��������������ֵ
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

	cout << "δ����ǰ��a = " << a << "��b = " << b << endl;
	swap1(a, b);
	cout << "������a = " << a << "��b = " << b << endl;
	swap2(&a, &b);
	cout << "������a = " << a << "��b = " << b << endl;

}



void test04()
{

	//ʹ��ʱ����Ϊ�����������
	srand((unsigned int)time(NULL));


	//����һ��1��100�������
	int value = rand() % 100 + 1;

	int answer = -1;
	do {
		cout << "������һ������";
		cin >> answer;
		if (answer > value)
		{
			cout << "����" << endl;
		} else if (answer < value)
		{
			cout << "��С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			break;
			
		}
	} while (true);


	int type = 1;

	switch (type)
	{
		case 1:
			cout << "����1" << endl;
			break;
		case 2:
			cout << "����2" << endl;
			break;
		case 3:
			cout << "����3" << endl;
			break;
		default:
			cout << "Ĭ������" << endl;
			break;
	}




}

/*
* ˮ�ɻ���
*/
void test05()
{

	int num = 100;
	while (num < 1000)
	{
		// ���λ
		int bai = num / 100;
		// ��ʮλ
		int shi = num / 10 % 10;
		// ���λ
		int ge = num % 10;


		if (pow(bai, 3) + pow(shi, 3) + pow(ge, 3) == num )
		{
			cout << num << endl;
		}
		num++;
	}

}

/*
* ������
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
			cout << "�����ӣ�";
		}
		cout << "���֣�" << i << endl;

	}



}


/*
* Ƕ��ѭ��
*/
void test07()
{
	// ��ӡ10*10��*
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


