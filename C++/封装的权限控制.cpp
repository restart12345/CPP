#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//����Ȩ��������:
//1.public ����Ȩ�� ���ڿ��Է��� ������Է���
//2.protected ����Ȩ�� ���ڿ��Է��� ���ⲻ���Է���  ���ӿ��Լ̳и����еı�������
//3.private ˽��Ȩ�� ���ڿ��Է��� ���ⲻ���Է���	���Ӳ����Լ̳и����е�˽������	
class Person {
public:
	string s_name;
protected:
	string s_car;//��
private:
	int password;//���п�����
public:
	void func()
	{
		s_name = "����";
		s_car = "����";
		password = 820190;
	}
};
int main()
{
	Person A;
	A.s_name = "����";
	//A.s_car = "������";
	//A.password = 80979;
	A.func();
	return 0;
}