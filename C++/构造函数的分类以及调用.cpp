#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//���캯������: 1.��������:�вι�����޲ι��� 2.�����ͷ�:��ͨ����Ϳ�������
//���캯�����÷���:1.���ŷ� 2.��ʽ�� 3.��ʽת����
class Person
{
public: 
	Person()
	{  
		cout << "�޲ι��캯���ĵ���" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "�вι��캯���ĵ���" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "�������캯���ĵ���" << endl;
	}
	~Person()
	{
		cout << "���������ĵ���" << endl;
	}
public:
	int age;
};
void test01()
{
	Person p; //�޲ι��캯���ĵ���
}
void test02()
{
	//1.���ŷ� (����)
	Person p1(10);
	Person p2(p1);
	//cout << "p1������Ϊ: " << p1.age<<endl;
	//cout << "p2������Ϊ: " << p2.age <<endl;

	//2.��ʽ��
	Person p3 = Person(10);
	Person p4 = Person(p3);
	//Person(20);		Person(20) ��Ϊ�������� ��ǰ�н�����,��������
	//cout << "p3������Ϊ: " << p3.age<<endl;
	//cout << "p4������Ϊ: " << p4.age <<endl;

	//3.��ʽת����
	Person p5 = 10;  //�൱��Person p5= Person(10)
	Person p6 = p5;
	//cout << "p5������Ϊ: " << p5.age<<endl;
	//cout << "p6������Ϊ: " << p6.age <<endl;

}
int main()
{
	test01();
	test02();
	return 0;
}
//ע������ 1.�����޲ι��캯����ʱ��,��Ҫд�� Person p1(),���ܼ�����,�������ᵱ���Ǻ�������
//		   2.Person(10) ��Ϊ�������� ��ǰ�н�����,�������� 
//		   3.�������� �������캯�� ��ʼ���������� ����������Ϊ�Ƕ������� ���� Person p2=Person(10)
//																			  Person p3=Person(p2);
//																			  Person(p3);//����������Ϊ��Person p3; �����ض���
       