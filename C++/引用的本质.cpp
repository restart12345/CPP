#define  _CRT_SECURE_NO_WARNINGS 1
/*---------���õı�����ָ�볣��---------*/
#include<iostream>
using namespace std;
//�Զ�ת����int*const ref=&a;
void func(int&ref)
{
	ref = 100;//�Զ�ת����*ref=100
}
int main()
{
	int a = 10;
	//�Զ�ת����int* const ref=&a;ָ�볣����ָ�򲻿����޸�,��Ҳ��˵����Ϊʲô�����ڳ�ʼ�������޸�
	int &ref = a;

	ref = 20; //�Զ�ת����*ref=20;
	
	cout << "ref=" << ref << endl;
	cout << "a=" << a << endl;
	func(a);
	cout << "ref=" << ref << endl;
	cout << "a=" << a << endl;
	return 0;
}