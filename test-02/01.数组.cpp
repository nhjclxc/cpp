
#include<iostream>

using namespace std;


/*
* ����
*/
void test01()
{
	// ����Ķ��巽ʽ
	// 1���������� ������[���鳤��];
	// 2���������� ������[���鳤��] = {ֵ1, ֵ2, ֵ3, ... };
	// 3���������� ������[] = {ֵ1, ֵ2, ֵ3, ... };
	// 4��ʹ��ָ�����������飺��������* ������ = new ��������[���鳤��];

	int arr1[10];
	cout << arr1[0] << endl;
	arr1[0] = 666;
	cout << arr1[0] << endl;


	// 2���������� ������[���鳤��] = {ֵ1, ֵ2, ֵ3, ... };
	int arr2[5] = { 1,2,3,4,5 };
	cout << arr2[0] << endl;
	cout << arr2 << endl;

	// �������鳤�ȡ�sizeof(arr2)��ʾ���������ռ���ڴ��ж��sizeof(arr2[0])��ʾһ������ռ�õ��ڴ��ж��
	int length = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < length; i++)
	{
		cout << arr2[i] << endl;
	}


	// 3���������� ������[] = {ֵ1, ֵ2, ֵ3, ... };
	int arr3[] = { 5,6,7,8,9 };





}

/*
* һά������������
*/
void test02()
{
	// ����1������ͳ�������������ڴ��еĳ���
	// ����2�����Ի�ȡ�������ڴ��е��׵�ַ
	int arr1[5] = { 1,2,3,4,5 };
	cout << "���鳤��sizeof(arr1)��" << sizeof(arr1) << endl;
	cout << "���鳤��sizeof(arr1[0])��" << sizeof(arr1[0]) << endl;
	cout << "���鳤�ȣ�" << sizeof(arr1) / sizeof(arr1[0]) << endl;
	cout << "�׵�ַ(x16)��" << arr1 << endl;
	cout << "�׵�ַ(x10)��" << (int)arr1 << endl;
	cout << "��0��Ԫ�صĵ�ַ��" << &arr1[0] << ", ��Ӧ��ֵΪ��"<< arr1[0] << endl; // &��ʾȡ��arr1[0]�����ĵ�ַ��&��һ��ȡַ����
	cout << "��1��Ԫ�صĵ�ַ��" << &arr1[1] << ", ��Ӧ��ֵΪ��" << arr1[1] << endl; // &��ʾȡ��arr1[0]�����ĵ�ַ��&��һ��ȡַ����
	cout << "��2��Ԫ�صĵ�ַ��" << &arr1[2] << ", ��Ӧ��ֵΪ��" << arr1[2] << endl; // &��ʾȡ��arr1[0]�����ĵ�ַ��&��һ��ȡַ����
	cout << "��3��Ԫ�صĵ�ַ��" << &arr1[3] << ", ��Ӧ��ֵΪ��" << arr1[3] << endl; // &��ʾȡ��arr1[0]�����ĵ�ַ��&��һ��ȡַ����
	cout << "��4��Ԫ�صĵ�ַ��" << &arr1[4] << ", ��Ӧ��ֵΪ��" << arr1[4] << endl; // &��ʾȡ��arr1[0]�����ĵ�ַ��&��һ��ȡַ����
	cout << "��5��Ԫ�صĵ�ַ��" << &arr1[5] << ", ��Ӧ��ֵΪ��" << arr1[5] << endl; // &��ʾȡ��arr1[0]�����ĵ�ַ��&��һ��ȡַ����

	// ע�⣺������׵�ַ���ǵ�һ��Ԫ�صĵ�ַ
	

}


/*
* c++����θ�һ��������������
* �� C++ �У�ʹ�� sizeof(arr) / sizeof(arr[0]) ����ȡ����Ĵ�С�ں������ǲ�׼ȷ�ģ���Ϊ��������Ϊ��������ʱ��
�����˻�Ϊָ�롣��ˣ�sizeof(arr) ������ָ��Ĵ�С�������������ʵ�ʴ�С��

�� C++ �У����㽫������Ϊ�������ݸ�����ʱ��ʵ�����ǽ������ָ�봫�ݹ�ȥ���������������顣
����ζ���ں����ڲ���sizeof(arr) ���ص���ָ��Ĵ�С�������������ʵ�ʴ�С��
��ˣ�ʹ�� sizeof(arr) ����������ĳ����Ǵ���ġ�
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
* ָ������
*/
void test03()
{

	// �ҳ���������С��ֵ
	int arr1[] = { 11,32,52,1,85,45,77 };
	int min = arr1[0];
	for (int i = 1; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		if ( arr1[i] < min)
		{
			min = arr1[i];
		}
	}
	cout << "��С��ֵΪ��" << min << endl;


	// ��������
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	cout << "����ǰ��";
	print_array(arr2, sizeof(arr2) / sizeof(arr2[0]));
	int length = sizeof(arr2) / sizeof(arr2[0]);
	for (int i = 0; i < length / 2; i++)
	{
		int temp = arr2[i];
		arr2[i] = arr2[length - i - 1];
		arr2[length - i - 1] = temp;
	}
	cout << "���ú�";
	print_array(arr2, sizeof(arr2) / sizeof(arr2[0]));



}



/*
* ʵ��ð������
*	��ǰ����ȣ��Ƚ�ÿһ�����ڵ�����Ԫ�أ������һ���ȵڶ����󣬾ͽ�������
*/
void bubble_sort_test()
{
	int arr[] = { 8,2,4,5,6,3,1,7,9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	cout << "����ǰ��";
	print_array(arr, length);
	
	for (int i = 0; i < length - 1; i++)
	{
		// ÿһ��
		for (int j = 0; j < length - i - 1; j++)
		{
			// �Ƚ����ڵ�λ��
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

	cout << "�����";
	print_array(arr, length);
}

/*
* ��ά����
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
	//1���������� ������[����][����];
	int arr1[3][4];

	// 2���������� ������[����][����] = {{1-1��1-2��1-3��...}, {2-1��2-2��2-3��...}, ...};
	int arr2[3][4] = { 
		{1,2,3,4}, 
		{5,6,7,8}, 
		{9,11,12,13} 
	};

	// 3���������� ������[����][����] = {1��2��3��4��5��6��7��8, ...}; //c++���Զ������ܵ�Ԫ�ظ���������������������������������
	int arr3[3][4] = { 1,2,3,4,5,6,7,8,9,11,12,13 };

	// 4���������� ������[][����] = {1��2��3��4��5��6��7��8, ...};
	int arr4[][4] = { 1,2,3,4,5,6,7,8,9,11,12,13 };

	// �� C++ �У�ֱ�ӽ���̬��ά���飨���� int arr2[3][4]�����ݸ�һ������ int** �ĺ������� print_array2���ǲ����еģ���Ϊ���ǵ��ڴ沼�ֲ�ͬ�����ھ�̬���飬����ʹ��ָ�������ָ���ģ������ȷ���ݡ����������ַ�����
	//print_array2(arr2, 3, 4);


	// ��ά����������
	//	1���鿴��ά������ռ���ڴ�ռ�
	//	2����ȡ��ά�����׵�ַ
	cout << "�鿴��ά������ռ���ڴ�ռ䣺" << sizeof(arr2) << endl;
	cout << "�鿴��ά������ռ���ڴ�ռ䣺" << sizeof(arr2[0]) << endl;
	cout << "�鿴��ά������ռ���ڴ�ռ䣺" << sizeof(arr2[0][0]) << endl;
	cout << "�鿴��ά������ռ���ڴ�ռ䣺" << sizeof(arr2) / sizeof(arr2[0][0]) << endl;
	cout << "������" << sizeof(arr2) / sizeof(arr2[0]) << endl;  // ���� = �ܴ�С / ÿһ�д�С
	cout << "������" << sizeof(arr2[0]) / (sizeof(arr2[0][0])) << endl;// ���� = ÿһ�д�С / ÿһԪ�ش�С

	cout << "��ȡ��ά�����׵�ַ��" << &arr2 << endl;
	cout << "��ȡ��ά�����׵�ַ��" << &arr2[0] << endl;
	cout << "��ȡ��ά�����׵�ַ��" << &arr2[0][0] << endl;

	// ����ͳ��ÿһ�е�����
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

	// 4��ʹ��ָ�����������飺��������* ������ = new ��������[���鳤��];
	//int arr11[10] = new int[10];
	// �� C++ �У�ʹ�� new �ؼ��ֶ�̬�����ڴ�ʱ�����ܽ�����ֱ�Ӹ�ֵ��һ����̬���顣arr11 ��һ����̬���飬
	// Ӧ�����������̶���С�����飬����̬���������Ӧ��ʹ��ָ�������ա�
	// ʹ��ָ������̬��������
	int length4 = 10;
	int* arr4 = new int[length4]; // ʹ��new �ؼ��ֶ�̬����������Ͳ�Ҫʹ��sizeof�����㳤����
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


