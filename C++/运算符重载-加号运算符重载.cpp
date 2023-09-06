#define  _CRT_SECURE_NO_WARNINGS 1
//运算符重载:对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

//加号运算符重载
//作用:实现两个自定义数据类型的相加运算
#include<iostream>
using namespace std;
class Person
{
public:
	//1.成员函数 重载加号运算符
	//Person operator+(Person  &p)
	//{
	//	Person temp;
	//	temp.m_A = this->m_A + p.m_A;
	//	temp.m_B = this->m_B + p.m_B;
	//	return temp;
	//}
	int m_A;
	int m_B;
};
//2.全局函数  重载加号运算符
Person operator+(Person &p1,Person &p2)
{
	Person temp;
	temp.m_A = p1.m_A + p2.m_A;
	temp.m_B = p1.m_B + p2.m_B;
	return temp;
}
//运算符重载也可以发生函数重载
Person operator+(Person &p, int num)
{
	Person temp;
	temp.m_A = p.m_A + num;
	temp.m_B = p.m_B + num;
	return temp;
}
void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;

	//成员函数重载本质调用
	/*Person p3 = p1.operator+(p2);*/ 

	//全局函数重载本质调用
	/*Person p3 = operator+(p1, p2);*/

	Person p3 = p1 + p2;
	Person p4 = p1 + 100;
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p3.m_B=" << p3.m_B << endl;

	cout << "p4.m_A=" << p4.m_A << endl;
	cout << "p4.m_B=" << p4.m_B << endl;
}
int main()
{
	test01();
	return 0;
}