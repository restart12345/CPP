#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//this ָ�����;: 1.���βκͳ�Ա����ͬ��ʱ������thisָ���������
//                 2.����ķǾ�̬��Ա�����з��ض�������ʹ�� return *this          
class Person
{
public:
	//1.������Ƴ�ͻ
	Person(int age)
	{
		//thisָ�� ָ�� �����ó�Ա���� �����Ķ���
		this->age = age;
	}
	//2.���ض������� return *this
	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;
		return *this ; 
	}
	int age;
};

void test01()
{
	Person p(18);
	cout << "p��������: " << p.age << endl;
}
void test02()
{
	Person p1(10);

	Person p2(10);

	//��ʽ���˼��
	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2��������: " << p2.age << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}