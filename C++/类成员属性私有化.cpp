#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
/*---------��Ա����˽�л�--------*/
//�ŵ�1:�����г�Ա������Ϊ˽��,�����Լ����ƶ�дȨ��
//�ŵ�2:����дȨ��,���ǿ��Լ�����ݵ���Ч��
class Person 
{
public:
	//��������(д)
	void Setname(string Name)
	{
		p_name = Name;
	}
	//��ȡ����(��)
	string Getname()
	{
		return p_name;
	}
	void Setage(int age)
	{
		p_age = age;
		if (p_age < 0 || p_age>150)//���������Ч��
		{
			p_age = 0;
			cout << "������������" << endl;
			return;
		}
	}
	int Getage()
	{
		return p_age;
	}
	void Setlover(string lover)
	{
		p_lover = lover;
	}
private:
	//�˵�����   (�ɶ���д)
	string p_name;
	//�˵����� (�ɶ���д)
	int p_age;
	//��ż    (ֻд)
	string p_lover;
};
int main()
{
	Person P;
	P.Setname("����");
	cout <<"����Ϊ: " << P.Getname() << endl;
	P.Setage(1000);
	cout << "����Ϊ: " << P.Getage() << endl;
	P.Setlover("����");
	return 0;
}