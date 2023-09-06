#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int func1(int a,int b=10,int c=20)
{
	return a + b + c;
}
//1.如果某个位置参数有默认值，那么这个位置往后，从左向右，必须都要有默认值
//2.函数的实现和声明只能有一个有默认值(否则会有二义性)
int func2(int a, int b);
int func2(int a = 10, int b = 30)
{
	return a + b;
}
int main()
{
	cout << func1(10) << endl;
	cout << func2(20,30) << endl;//最后使用数据是传入数据
	return 0;
}