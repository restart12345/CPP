#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//this 指针的用途: 1.当形参和成员变量同名时，可用this指针进行区分
//                 2.在类的非静态成员函数中返回对象本身，可使用 return *this          
class Person
{
public:
	//1.解决名称冲突
	Person(int age)
	{
		//this指针 指向 被调用成员函数 所属的对象
		this->age = age;
	}
	//2.返回对象本身用 return *this
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		return *this ; 
	}
	int age;
};

void test01()
{
	Person p(18);
	cout << "p的年龄是: " << p.age << endl;
}
void test02()
{
	Person p1(10);

	Person p2(10);

	//链式编程思想
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄是: " << p2.age << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}