#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int func1(int a,int b=10,int c=20)
{
	return a + b + c;
}
//1.���ĳ��λ�ò�����Ĭ��ֵ����ô���λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
//2.������ʵ�ֺ�����ֻ����һ����Ĭ��ֵ(������ж�����)
int func2(int a, int b);
int func2(int a = 10, int b = 30)
{
	return a + b;
}
int main()
{
	cout << func1(10) << endl;
	cout << func2(20,30) << endl;//���ʹ�������Ǵ�������
	return 0;
}