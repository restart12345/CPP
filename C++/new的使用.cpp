#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int* func1()
{
	int*p = new int(10);//����new���ٵ������ݵ��ڴ�ռ�
	return p;
}
void test01()
{
	int*p1 = func1();
	*p1 = 20;
	cout <<"p1="<< *p1 << endl;
	delete p1;//�ͷŵ��������ڴ�
}
void test02()
{
	int*arr = new int[10];//����new���������ڴ�ռ�
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;//�ͷ������ڴ�ռ�,ע�����[]
}
int main()
{
	test01();
	test02();
	return 0;
}