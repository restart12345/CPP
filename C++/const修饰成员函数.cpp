#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//������  (��Ա���������const�ͽг�����)
class Person
{
public:
	//Person* const this;ָ�����p,��ָ�򲻿����޸�,����const��� const Person* const this ,ָ���ֵ���������޸�
	void showPerson()const
	{
		//m_A = 100;     //��ʵ��һ���൱��this->m_A=100;  thisָ�뱾������ָ�볣������ָ�����޸ģ���ǰ�����const����ָ���ֵҲ�����޸���
		m_B = 200;
	}
	void func()
	{

	} 
	int m_A;
	mutable int m_B; //�������,�ڱ���ǰ����mutable,��ʹ�ڳ������У�Ҳ�����޸����ֵ
};
void test01()
{
	Person p; 
	p.showPerson();
	cout << "m_B��ֵ��" << p.m_B<<endl;
}
//������
void test02()
{
	const Person p;  //�ڶ���ǰ����const����Ϊ������
	//p.m_A = 200;
	p.m_B = 300;  //m_B������������ڳ�������Ҳ�����޸�
	cout << "m_B��ֵ��" << p.m_B<<endl;
	p.showPerson();  //������ֻ�ܵ��ó�����
	/*p.func();*/    //��Ϊ�ڷǳ������У����ԶԳ�Ա���Խ����޸ģ����ǳ������ǲ��ܶ�һ���Ա���Խ����޸ĵ�,���÷ǳ��������ܻ�����޸ĳ�Ա����
}
int main()
{
	test01();
	test02();
	return 0;
}