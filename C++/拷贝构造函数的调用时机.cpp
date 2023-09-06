#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//拷贝构造函数调用时机三种情况如下:
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "默认构造函数的调用" << endl;
	}
	Person(int age)
	{
		cout << "有参构造函数的调用" << endl;
		m_Age = age;
	}
	Person(const Person &p)
	{
		cout << "拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
	int m_Age;
};
//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(10);
	Person p2(p1);

	cout<<"p2的年龄为："<<p2.m_Age<<endl;
}
//2.值传递的方式给函数参数传值
void dowork(Person p)
{
	;
}
void test02()
{
	Person p3;
	dowork(p3);
}
//3.值方式返回局部对象
Person Dowork()
{
	Person p;
	cout << (int*)&p << endl;
	return p;
}
void test03()
{
	Person p = Dowork();
	cout << (int*)&p<< endl;
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}