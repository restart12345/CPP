#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void func2(int &a)
{
	cout << "func2(int &a)�ĵ���" << endl;
}
void func2(const int &a)
{
	cout << "func2(const int &a)�ĵ���" << endl;
}
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//}
//void func(int a,int b=10)
//{
//	cout << "func(int a,int b=10)�ĵ���" << endl;
//}
int main()
{
	int a = 10;
	func2(a);//func2(int &a)�ĵ��� ����һ���ɶ���д�ı���
	func2(10);//func2(const int &a)�ĵ��� ����һ��ֻ������
	//func(10);    ������������Ĭ�ϲ���,��������ֶ����������Ӧ������
	return 0;
}