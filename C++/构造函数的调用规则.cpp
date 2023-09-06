#define  _CRT_SECURE_NO_WARNINGS 1
//默认情况下，C++编译器至少给一个类添加3个函数
//1.默认构造函数(无参,函数体为空)
//2.默认析构函数(无参,函数体为空)
//3.默认拷贝构造函数,对属性进行值拷贝

//构造函数调用规则如下:
//如果用户定义有参构造函数,C++将不再提供默认无参构造，但仍然提供默认拷贝构造
//如果用户定义拷贝构造函数,C++将不再提供其他构造函数
#include<iostream>
using namespace std;
class Person
{
public:
	//Person()
	//{
	//	cout << "默认构造函数的调用" << endl;
	//}
	Person(int a)
	{
		cout << "有参构造函数的调用" << endl;
		m_Age = a;
	}
	//Person(const Person&p)
	//{
	//	cout << "拷贝构造函数的调用" << endl;
	//	m_Age = p.m_Age;
	//}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int m_Age;
};
void test01()
{
	Person p1(18);
	Person p2(p1);
	cout << "p2的年龄为:" << p2.m_Age << endl;
}
//void test02()
//{
//	Person p3(28);
//	Person p4(p3);
//	cout << "p4的年龄为: " << p4.m_Age << endl;
//}
//void test03()
//{
//	Person p5;
//	Person p6(10);
//}
int main()
{
	test01();
	//test02();
	return 0;
}