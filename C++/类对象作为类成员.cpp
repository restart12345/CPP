#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Phone
{
public:
	Phone(string name)
	{
		pName = name;
		cout << "PhoneĬ�Ϲ��캯���ĵ���" << endl;
	}
	~Phone()
	{
		cout << "Phone���������ĵ���" << endl;
	}
	string pName;
};
class Person
{
public:
	Person(string name,string pname):m_Name(name),m_phone(pname) //Phone phone=pname   ��ʽת����
	{
		cout << "PersonĬ�Ϲ��캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "Person���������ĵ���" << endl;
	}
	//����
	string m_Name;
	//�ֻ�
	Phone m_phone;
};
//�������������Ϊ�����Ա������ʱ�ȹ�������������ٹ��챾�����
//������˳���빹���˳���෴ 
void test01()
{
	Person p("����","ƻ��MAX");
	cout << p.m_Name << "����: " << p.m_phone.pName << endl;
}
int main()
{
	test01();
	return 0;
}