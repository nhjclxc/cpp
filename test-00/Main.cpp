#include <iostream>

using namespace std;

#define PI 3.1415926



void test()
{
	cout << "12345";

	int a, b;
	cout << "�������һ������" << endl;
	cin >> a;
	cout << "������ڶ�������" << endl;
	cin >> b;

	cout << "���������ۼӺ��ǣ�" << (a + b) << endl;
}

/*
ʵ��9*9�˷���
*/
void MultiplicationTable()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << (i * j) << "  ";
		}
		cout << endl;
	}
}

/*
4. ��Ϊ��Ʊϵͳ��һ���֣���Ҫһ�����������Ʒ�ĵ��ۺͶ����������� 
����Ӧ������������ܳɱ���ǰ���Ƕ�����ǰ 100 �������ȡ������İ����۵� 75%��ȡ
�����뵥��: 10.80
�����붩������: 150
�ܳɱ�: 1485.00
*/
void test03()
{
	float price;
	int num;
	float total_amount;

	cout << "�����뵥��: ";
	cin >> price;
	cout << "�����붩������: ";
	cin >> num;

	if (num < 0)
	{
		throw new runtime_error("��������С��0������");
	}

	if (num <= 100)
	{
		total_amount = price * num;
	}
	else
	{
		total_amount = price * 100 + price * (num - 100) * 0.75;
	}

	cout << "�ܳɱ�: " << total_amount << endl;
}

/*
6.��дһ�� C++������ʾԱ����Сʱ֧�����ʺ͹���ʱ�䡣
���㹤���ܶ����ʱ�� X ÿСʱ���ʣ���Ԥ�۽�˰������ʣ����㹤���ܶ�-Ԥ�۽�˰���
Ԥ�۽�˰���ǰ������°ٷֱȼ���

��ʾԱ�����ܹ�ʱ��Ԥ�۽�˰���;���������
3000���¿�10%
3000~4000���¿�12%
4000~5000���¿�15%
5000���Ͽ�20%
Ա�����ʼ���
----------------------------------
������������:
ÿСʱ����: 35.00 Ԫ
��ʱ: 100
������ϸ:
�ܹ��� : 3500.00 Ԫ
Ԥ��˰: 420.00 Ԫ

ԭ�����ӣ�https://blog.csdn.net/m0_58054832/article/details/122486894
*/
void test04()
{
	float amount;
	int work_hours;
	float total_amount;
	float give;

	cout << "ÿСʱ����: ";
	cin >> amount;
	cout << "��ʱ: ";
	cin >> work_hours;

	total_amount = amount * work_hours;

	if (total_amount < 3000.00)
	{
		give = total_amount * 0.10;
	} 
	else if (3000.00 <= total_amount && total_amount < 4000.00)
	{
		give = total_amount * 0.12;
	}
	else if (4000.00 <= total_amount && total_amount < 5000.00)
	{
		give = total_amount * 0.15;
	}
	else
	{
		give = total_amount * 0.20;
	}


	cout << "�ܹ���: " << total_amount << " Ԫ�� " << endl;
	cout << "Ԥ��˰: " << give << " Ԫ�� " << endl;

}


int main()
{
	//test();

	// ʵ��9*9�˷���
	//MultiplicationTable();

	// ʵ�ֲ������
	//test03();

	//test04();


	cout << "PI = " << PI << endl;

	//PI = 3.0;
	//cout << "PI = " << PI << endl;

	const int PP = 3.1415926;

	cout << "PP = " << PP << endl;
	//PP = 3.2;
	//cout << "PP = " << PP << endl;


}
