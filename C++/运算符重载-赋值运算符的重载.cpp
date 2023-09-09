#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//重载赋值运算符是为了解决浅拷贝带来内存空间重复释放的问题
class Person
{
	friend void test01();
public:
	Person(int age)
	{
		m_Age = new int(age);
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//重载赋值运算符
	Person& operator=(Person&p)
	{
		//m.Age=p.m_Age;    编译器提供的是浅拷贝


		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);
		//数据对于类是private，而不是类的实例，类中的任何方法都可以访问该类的任何示例的私有数据;除非你禁止显式访问其他示例的私有数据成员的方法，
		//否则没有一种方法可以保持示例中的数据私有。

		//返回对象本身,这样可以实现连等
		return *this;
	}
private:
	int *m_Age;
};
void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(40);

	p3 = p1 = p2;
	cout << "p1的年龄是:" << *p1.m_Age << endl;
	cout << "p2的年龄是:" << *p2.m_Age << endl;
	cout << "p3的年龄是:" << *p3.m_Age << endl;
}
int main()
{
	test01();
	return 0;
}

//补充知识点:
//int a,b; a=b;   C语言中a=b返回的是右值,而C++中a=b返回的是左值  https://www.zhihu.com/question/51773910