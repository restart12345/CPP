#define  _CRT_SECURE_NO_WARNINGS 1
//C++中空指针也是可以调用成员函数的，但要注意this指针
//如果用到了this指针，需要加以判断保证代码的健壮性
#include<iostream>
using namespace std;
class Person 
{
public:
	void ShowClassName()
	{
		cout << "this is Person Class" << endl;
	}
	void ShowPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "The age of Person is " << m_Age << endl; //其实m_Age前有一个this->，相当于this->m_Age,如果传入的指针为空,会出现错误
	}
	int m_Age;
};
void test01()
{
	Person*p=NULL;
	p->ShowClassName();
	p->ShowPersonAge();
}
int main()
{
	test01();
	return 0;
}