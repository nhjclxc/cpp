#include <iostream>

using namespace std;

#define PI 3.1415926



void test()
{
	cout << "12345";

	int a, b;
	cout << "请输入第一个数：" << endl;
	cin >> a;
	cout << "请输入第二个数：" << endl;
	cin >> b;

	cout << "两个数的累加和是：" << (a + b) << endl;
}

/*
实现9*9乘法表
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
4. 作为发票系统的一部分，需要一个程序输入产品的单价和订购的数量。 
程序应该输出订单的总成本，前提是订单的前 100 项按单价收取，其余的按单价的 75%收取
请输入单价: 10.80
请输入订购数量: 150
总成本: 1485.00
*/
void test03()
{
	float price;
	int num;
	float total_amount;

	cout << "请输入单价: ";
	cin >> price;
	cout << "请输入订购数量: ";
	cin >> num;

	if (num < 0)
	{
		throw new runtime_error("数量不能小于0！！！");
	}

	if (num <= 100)
	{
		total_amount = price * num;
	}
	else
	{
		total_amount = price * 100 + price * (num - 100) * 0.75;
	}

	cout << "总成本: " << total_amount << endl;
}

/*
6.编写一个 C++程序，提示员工按小时支付工资和工作时间。
计算工资总额（工作时长 X 每小时工资），预扣缴税款，净工资（计算工资总额-预扣缴税款）。
预扣缴税款是按照以下百分比计算

显示员工的总工时，预扣缴税，和净工资样例
3000以下扣10%
3000~4000以下扣12%
4000~5000以下扣15%
5000以上扣20%
员工工资计算
----------------------------------
输入以下数据:
每小时工资: 35.00 元
工时: 100
付款详细:
总工资 : 3500.00 元
预缴税: 420.00 元

原文链接：https://blog.csdn.net/m0_58054832/article/details/122486894
*/
void test04()
{
	float amount;
	int work_hours;
	float total_amount;
	float give;

	cout << "每小时工资: ";
	cin >> amount;
	cout << "工时: ";
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


	cout << "总工资: " << total_amount << " 元。 " << endl;
	cout << "预缴税: " << give << " 元。 " << endl;

}


int main()
{
	//test();

	// 实现9*9乘法表
	//MultiplicationTable();

	// 实现财务记账
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
