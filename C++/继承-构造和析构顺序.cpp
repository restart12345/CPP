#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base构造函数!" << endl;
	}
	~Base()
	{
		cout << "Base析构函数!" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son构造函数!" << endl;
	}
	~Son()
	{
		cout << "Son析构函数!" << endl;
	}
};

void test()
{
	//Base b;

	//继承中的构造和析构顺序如下：
	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
	//创建子类对象前会先创建父类对象
	Son s;
}
int main()
{
	test();
	return 0;
}