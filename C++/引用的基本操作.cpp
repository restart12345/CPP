#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void swap(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	int&c = b;//c�൱��b�ı���
	//int &c;�����������У����ñ����ʼ��
	//c=a  ����һ����ʼ�����Ͳ��ܸ��ģ��������������������ͨ�ĸ�ֵ,�����Ǹ�������
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	return 0;
}