#define  _CRT_SECURE_NO_WARNINGS 1
//Ĭ������£�C++���������ٸ�һ�������3������
//1.Ĭ�Ϲ��캯��(�޲�,������Ϊ��)
//2.Ĭ����������(�޲�,������Ϊ��)
//3.Ĭ�Ͽ������캯��,�����Խ���ֵ����

//���캯�����ù�������:
//����û������вι��캯��,C++�������ṩĬ���޲ι��죬����Ȼ�ṩĬ�Ͽ�������
//����û����忽�����캯��,C++�������ṩ�������캯��
#include<iostream>
using namespace std;
class Person
{
public:
	//Person()
	//{
	//	cout << "Ĭ�Ϲ��캯���ĵ���" << endl;
	//}
	Person(int a)
	{
		cout << "�вι��캯���ĵ���" << endl;
		m_Age = a;
	}
	//Person(const Person&p)
	//{
	//	cout << "�������캯���ĵ���" << endl;
	//	m_Age = p.m_Age;
	//}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
	int m_Age;
};
void test01()
{
	Person p1(18);
	Person p2(p1);
	cout << "p2������Ϊ:" << p2.m_Age << endl;
}
//void test02()
//{
//	Person p3(28);
//	Person p4(p3);
//	cout << "p4������Ϊ: " << p4.m_Age << endl;
//}
//void test03()
//{
//	Person p5;
//	Person p6(10);
//}
int main()
{
	test01();
	//test02();
	return 0;
}