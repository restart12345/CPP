#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//重载关系运算符,可以让两个自定义类型对象进行对比操作

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	bool operator==(Person&p)
	{
		if (this->m_Age == p.m_Age&&this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}
	bool operator!=(Person&p)
	{
		if (this->m_Age == p.m_Age&&this->m_Name == p.m_Name)
		{
			return false;
		}
		return true;
	}

	string m_Name;
	int m_Age;
};
void test()
{
	Person p1("Tom", 19);
	Person p2("Jerry", 19);

	if (p1 == p2)
	{
		cout << "p1和p2是相等的" << endl;
	}
	else
	{
		cout << "p1和p2是不相等的" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1和p2是不相等的" << endl;
	}
	else
	{
		cout << "p1和p2是相等的" << endl;
	}
}
int main()
{
	test();
	return 0;
}