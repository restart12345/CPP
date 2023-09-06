#define  _CRT_SECURE_NO_WARNINGS 1
//1.浅拷贝:简单的赋值操作
//2.深拷贝:在堆区里重新申请内存空间,进行拷贝操作
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "无参构造函数的调用" << endl;
	}
	Person(int age,int height)
	{
		cout << "有参构造函数的调用" << endl;
		m_Age = age;
		m_Height = new int(height);
	}
	Person(const Person&p)
	{
		cout << "拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
		m_Height = new int(*(p.m_Height));
	}
	~Person()
	{
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "析构函数的调用" << endl;
	}
	int m_Age;
	int *m_Height;
};
int main()
{
	Person p1(20,170);
	cout << "p1的年龄是: " << p1.m_Age<<" p1的身高是: "<<*(p1.m_Height)<<endl;
	Person p2(p1);
	cout << "p2的年龄是: " << p2.m_Age <<" p2的身高是: " << *(p2.m_Height) << endl;
}
//总结:如果属性有在堆区开辟的,一定要自己提供拷贝构造函数，防止浅拷贝带来的问题