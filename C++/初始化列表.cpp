#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Person
{
public:
	//Person(int a, int b, int c) //传统初始化
	//{
	//	m_A = a;
	//	m_B = b; 
	//	m_C = c;
	//}
	//Person() :m_A(30), m_B(20), m_C(10) //初始化列表 
	//{
	//
	//}
	Person(int a,int b,int c):m_A(a),m_B(b),m_C(c){} //更加灵活的初始化
	int m_A;
	int m_B;
	int m_C;
};
void test01()
{
	Person p(11,89,20);
	cout << "m_A=" << p.m_A << endl;
	cout << "m_B=" << p.m_B << endl;
	cout << "m_C=" << p.m_C << endl;
}
int main()
{
	test01();
	return 0;
}