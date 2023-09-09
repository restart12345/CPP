#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func()函数调用" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)函数调用" << endl;
	}

	int m_A;

};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "son-func()函数调用" << endl;
	}
	int m_A;
};

//同名成员属性
void test01()
{
	Son s;
	//访问子类成员属性  直接通过 . 的方式访问即可
	//访问父类成员属性  需要加上作用域
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
}

//同名成员函数
void test02()
{
	Son s;
	//访问子类成员函数  直接通过 . 的方式访问即可
	//访问父类成员函数  需要加上作用域
	s.func();
	s.Base::func();

	//s.func(10);   该重载函数报错，原因如下：只要子类与父类中有同名函数，子类就会将父类中的同名函数隐藏,想要访问需要加上作用域
	s.Base::func(10);
}
int main()
{
	test01();
	test02();
	return 0;
}