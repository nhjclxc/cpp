#include<iostream>
using namespace std;

// ����ṹ��
struct Student
{
	string name;
	int age;
	double score;
};


void test41()
{
	
	// ����һ���ṹ�����
	//struct Student s1;
	Student s1;
	s1.age = 18;
	s1.name = "С��";
	s1.score = 80.00;

	cout << "name = " << s1.name << ", age = " << s1.age << ", score = " << s1.score << endl;

	//struct Student s2 = {"��Ư��", 20, 99.20};
	Student s2 = {"��Ư��", 20, 99.20};
	cout << "name = " << s2.name << ", age = " << s2.age << ", score = " << s2.score << endl;
}

/*
* �ṹ������,�����е�ÿһ�����ݶ��ǽṹ�����
*/
void test42()
{

	Student arr[] = {
		{"С��", 20, 91.20},
		{"С˧", 22, 92.20},
		{"��Ư��", 28, 99.20},
	};

	int length = sizeof(arr) / sizeof(Student);
	//�����ṹ������
	for (int i = 0; i < length; i++)
	{
		cout << "name = " << arr[i].name << ", age = " << arr[i].age << ", score = " << arr[i].score << endl;
	}

}

/*
* �ṹ��ָ��
*/
void test43()
{
	// ͨ��ָ����ʽṹ���еĳ�Ա
	// ���ò����� -> ����ͨ���ṹ��ָ����ʽṹ������

	Student stu = { "��Ư��", 20, 99.20 };
	Student* pstu = &stu;

	cout << "name = " << pstu->name << ", age = " << pstu->age << ", score = " << pstu->score << endl;


}

/*Ƕ�׽ṹ��
*/
struct ClassRoom
{
	string class_name;
	Student stus[3];
};


int main()
{


	//test41();

	//test42();

	//test43();



	return 0;
}