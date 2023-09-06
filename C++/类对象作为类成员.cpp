#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
	Phone(string name)
	{
		pName = name;
		cout << "Phone默认构造函数的调用" << endl;
	}
	~Phone()
	{
		cout << "Phone析构函数的调用" << endl;
	}
	string pName;
};
class Person
{
public:
	Person(string name,string pname):m_Name(name),m_phone(pname) //Phone phone=pname   隐式转换法
	{
		cout << "Person默认构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "Person析构函数的调用" << endl;
	}
	//姓名
	string m_Name;
	//手机
	Phone m_phone;
};
//当其他类对象作为本类成员，构造时先构造其他类对象，再构造本类对象
//析构的顺序与构造的顺序相反 
void test01()
{
	Person p("张三","苹果MAX");
	cout << p.m_Name << "拿着: " << p.m_phone.pName << endl;
}
int main()
{
	test01();
	return 0;
}