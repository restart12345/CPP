#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int* func1()
{
	int*p = new int(10);//利用new开辟单个数据的内存空间
	return p;
}
void test01()
{
	int*p1 = func1();
	*p1 = 20;
	cout <<"p1="<< *p1 << endl;
	delete p1;//释放单个数据内存
}
void test02()
{
	int*arr = new int[10];//利用new开辟数组内存空间
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	delete[]arr;//释放数组内存空间,注意加上[]
}
int main()
{
	test01();
	test02();
	return 0;
}