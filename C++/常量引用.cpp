#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void Showvalue(const int& val)//���������ó�����������ֹ������޸�ʵ��
{
	//val = 1000; �˴�չʾ�����
	cout << "val=" << val << endl;
}
int main()
{
	//int &ref = 10;  ���ñ�����Ҫһ���Ϸ����ڴ�ռ�(����ջ���������ϵĿռ�),������д���
	//����const,������������Ż�����:int temp=10;const int& ref=temp;
	const int&ref = 10;
	//ref = 100;  ���д���,���ʽ�����ǿ��޸ĵ���ֵ
	int a = 10;
	//���������ó�����������ֹ������޸�ʵ��
	Showvalue(a);
	cout << "a=" << a << endl;
	return 0;
}