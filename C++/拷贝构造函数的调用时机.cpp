#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
//�������캯������ʱ�������������:
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age)
	{
		cout << "�вι��캯���ĵ���" << endl;
		m_Age = age;
	}
	Person(const Person &p)
	{
		cout << "�������캯���ĵ���" << endl;
		m_Age = p.m_Age;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	int m_Age;
};
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test01()
{
	Person p1(10);
	Person p2(p1);

	cout<<"p2������Ϊ��"<<p2.m_Age<<endl;
}
//2.ֵ���ݵķ�ʽ������������ֵ
void dowork(Person p)
{
	;
}
void test02()
{
	Person p3;
	dowork(p3);
}
//3.ֵ��ʽ���ؾֲ�����
Person Dowork()
{
	Person p;
	cout << (int*)&p << endl;
	return p;
}
void test03()
{
	Person p = Dowork();
	cout << (int*)&p<< endl;
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}