#include<iostream>
using namespace std;

// 定义结构体
struct Student
{
	string name;
	int age;
	double score;
};


void test41()
{
	
	// 传教一个结构体对象
	//struct Student s1;
	Student s1;
	s1.age = 18;
	s1.name = "小美";
	s1.score = 80.00;

	cout << "name = " << s1.name << ", age = " << s1.age << ", score = " << s1.score << endl;

	//struct Student s2 = {"大漂亮", 20, 99.20};
	Student s2 = {"大漂亮", 20, 99.20};
	cout << "name = " << s2.name << ", age = " << s2.age << ", score = " << s2.score << endl;
}

/*
* 结构体数组,数组中的每一个数据都是结构体对象
*/
void test42()
{

	Student arr[] = {
		{"小妹", 20, 91.20},
		{"小帅", 22, 92.20},
		{"大漂亮", 28, 99.20},
	};

	int length = sizeof(arr) / sizeof(Student);
	//遍历结构体数组
	for (int i = 0; i < length; i++)
	{
		cout << "name = " << arr[i].name << ", age = " << arr[i].age << ", score = " << arr[i].score << endl;
	}

}

/*
* 结构体指针
*/
void test43()
{
	// 通过指针访问结构体中的成员
	// 利用操作符 -> 可以通过结构体指针访问结构体属性

	Student stu = { "大漂亮", 20, 99.20 };
	Student* pstu = &stu;

	cout << "name = " << pstu->name << ", age = " << pstu->age << ", score = " << pstu->score << endl;


}

/*嵌套结构体
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