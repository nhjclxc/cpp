#include<iostream>
using namespace std;


/*ָ��
*	ָ��Ļ�������:����ͨ��ָ���ӷ����ڴ�
*		�ڴ����Ǵ�0��ʼ��¼��,һ��ʹ��ʮ�����Ƶ����ֱ�ʾ
*		��������ָ����������ַ
*	ָ���﷨:
*		��������* ������;
* 
*/

void test31()
{
	int a = 10;

	int* pa = &a; // ָ�뱣��һ����ַ,ָ�����һ����ַ ָ�����ǰ���һ��*��ʾ����Ŷ����ָ��ָ���ַ��ֵ

	cout << "a = " << a << endl;
	cout << "&a = " << &a << endl;
	cout << "pa = " << pa << endl;
	cout << "*pa = " << *pa << endl; // ������,Ҳ���ǻ�ȡ��pa����ָ�������ָ���ַ��ֵ
	cout << "&pa = " << &pa << endl;
	cout << "================" << endl;

	*pa = 666;  // *pa������,ͬʱ�������ڴ����汣���ֵ
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
	// ָ�������ռ�е��ڴ�ռ�

	// ָ�����ǵ�ַ,ָ��Ĵ�С��ϵͳ�ܹ���ء��� 32 λϵͳ�У�ָ��ͨ��ռ�� 4 �ֽڣ����� 64 λϵͳ�У�ָ��ͨ��ռ�� 8 �ֽڡ�

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
	// ��ָ���Ұָ��
	// ��ָ��:ָ�����ָ���ڴ��б��Ϊ0�Ŀռ�
	// ��ָ��һ��������ʼ���ڴ����
	// ע��:��ָ��ָ����ڴ��ǲ����Է��ʵ�
	int a = 666;
	int* p = NULL;

	//cout << *p << endl; // �������쳣: ��ȡ����Ȩ�޳�ͻ��p �� nullptr��
	cout << p << endl;
	cout << NULL << endl;

	p = &a;
	cout << p << endl;
	cout << *p << endl;


	// Ұָ����û�б���ʼ����ָ��,ָ֨֨֨����ڴ�ռ��ǷǷ���
	int * pp = (int *)0x123456;
	cout << pp << endl;
	cout << *pp << endl; // �������쳣: ��ȡ����Ȩ�޳�ͻ��pp �� 0x123456��


}

void test34()
{
	// const ����ָ��
	// const����ָ�� --- ����ָ��
	// const���γ��� --- ָ�볣��
	// const������ָ��,�����γ���



	// const����ָ�� --- ����ָ��,��ʱconst���ε���ָ��
	int a = 666;
	const int* pa = &a; // ����ָ��,ָ��ָ������޸�,����ָ��ָ���ֵ�������޸�(Ҳ����ָ�뱣��ĵ�ַָ����Ǹ�ֵ�������޸�),��pcָ��ָ��������ַ��û�����
	cout << a << endl;
	cout << *pa << endl;
	cout << pa << endl;
	//*pa = 888; // ָ����ָ���ֵ�ǲ������޸ĵ�. ����, ���ʽ�����ǿ��޸ĵ���ֵ
	int b = 6626;
	pa = &b; // ָ����ָ��ĵ�ַ�����޸�, �޸�ָ��,����ָ���ֵ��ԭֵ,����û����
	cout << *pa << endl;
	cout << pa << endl;
	
	cout << "----------------" << endl;

	int c = 888;
	int* const pc = &c;// ָ�볣��,��pc�������������ֵ���ܱ�,Ҳ����pc��ָ��ĵ�ַ���ܱ�
	cout << c << endl;
	cout << *pc << endl;
	cout << pc << endl;
	int d = 456;
	//pc = &d; // pcҪָ��������ַ�ǲ������
	c = 999; // pcָ���ڴ��ַ�����ֵ�ǿ����޸ĵ�
	cout << c << endl;
	cout << *pc << endl;
	cout << pc << endl;


	cout << "----------------" << endl;
	// const������ָ��,�����γ���
	int cc = 555;
	const int* const pp = &cc;




}

/*
* ָ�������
*/
void test35()
{

	// ����ָ���������
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++)
	{
		cout << "arr[" << i << "]=" << arr[i] << endl;
	}
	int* parr = arr;

	for (int i = 0; i < 10; i++)
	{
		// *parr+1��ָ�����ƫ��һ��λ��
		cout << "p[" << i << "]=" << *parr + i << endl;
	}

}

/*ָ��ͺ���
*/
// �������ֵ�ǵ�ַ��ʱ��,Ҫʹ��ָ��������
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
	// ��ָ��Ҫ��Ϊ�����Ĳ�����ʱ��,Ҫȡ��ָ����ָ��ĵ�ַ,��Ϊ�β�
	swap(&a, &b); // ��ַ���� 
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
