#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base-func()��������" << endl;
	}
	void func(int a)
	{
		cout << "Base-func(int a)��������" << endl;
	}

	int m_A;

};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "son-func()��������" << endl;
	}
	int m_A;
};

//ͬ����Ա����
void test01()
{
	Son s;
	//���������Ա����  ֱ��ͨ�� . �ķ�ʽ���ʼ���
	//���ʸ����Ա����  ��Ҫ����������
	cout << s.m_A << endl;
	cout << s.Base::m_A << endl;
}

//ͬ����Ա����
void test02()
{
	Son s;
	//���������Ա����  ֱ��ͨ�� . �ķ�ʽ���ʼ���
	//���ʸ����Ա����  ��Ҫ����������
	s.func();
	s.Base::func();

	//s.func(10);   �����غ�������ԭ�����£�ֻҪ�����븸������ͬ������������ͻὫ�����е�ͬ����������,��Ҫ������Ҫ����������
	s.Base::func(10);
}
int main()
{
	test01();
	test02();
	return 0;
}