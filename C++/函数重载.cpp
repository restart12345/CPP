#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//��������,��߸�����
//������������:1.������ͬһ�������� 2.��������ͬ 3.�������β� ���Ͳ�ͬ ���� ������ͬ ���� ˳��ͬ
void func()
{
	cout << "func()�ĵ���" << endl;
}
void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}
int main()
{
	func();
	func(10);
	func(3.14);
	func(10,3.14);
	func(3.14,10);
	return 0;
}