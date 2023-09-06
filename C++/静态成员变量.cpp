#define  _CRT_SECURE_NO_WARNINGS 1
//静态成员就是在成员变量和成员函数前加上关键字static,称为静态成员
//静态成员分为静态成员变量和静态成员函数
//静态成员变量:
//1.所有对象共享一份数据
//2.在编译阶段分配内存
//3.类内声明，类外初始化
#include<iostream>
using namespace std;
class Person
{	
public:
	static int m_A;
private:
	static int m_B;	//静态成员变量也是有访问权限的
};
int Person::m_A = 100;//类外初始化
int Person::m_B = 200;
void test01()
{
	Person p1;
	cout << p1.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p2.m_A << endl;
}
//静态变量不属于某个特定对象，所有对象共享一份数据
//因此静态成员变量有两种访问方式
void test02()
{
	//1.通过对象进行访问
	Person p;
	cout << p.m_A << endl;
	//2.通过类名进行访问
	cout<<Person::m_A << endl;

	/*cout << Person::m_B << endl;*/  //静态成员变量也是有访问权限的
}
int main()
{
	/*test01();*/
	test02();
	return 0;
}