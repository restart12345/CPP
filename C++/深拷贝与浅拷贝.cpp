#define  _CRT_SECURE_NO_WARNINGS 1
//1.ǳ����:�򵥵ĸ�ֵ����
//2.���:�ڶ��������������ڴ�ռ�,���п�������
#include<iostream>
using namespace std;
class Person
{
public:
	Person()
	{
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	Person(int age,int height)
	{
		cout << "�вι��캯���ĵ���" << endl;
		m_Age = age;
		m_Height = new int(height);
	}
	Person(const Person&p)
	{
		cout << "�������캯���ĵ���" << endl;
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
		cout << "���������ĵ���" << endl;
	}
	int m_Age;
	int *m_Height;
};
int main()
{
	Person p1(20,170);
	cout << "p1��������: " << p1.m_Age<<" p1�������: "<<*(p1.m_Height)<<endl;
	Person p2(p1);
	cout << "p2��������: " << p2.m_Age <<" p2�������: " << *(p2.m_Height) << endl;
}
//�ܽ�:����������ڶ������ٵ�,һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������