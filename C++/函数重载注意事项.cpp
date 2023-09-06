#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void func2(int &a)
{
	cout << "func2(int &a)的调用" << endl;
}
void func2(const int &a)
{
	cout << "func2(const int &a)的调用" << endl;
}
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//void func(int a,int b=10)
//{
//	cout << "func(int a,int b=10)的调用" << endl;
//}
int main()
{
	int a = 10;
	func2(a);//func2(int &a)的调用 传入一个可读可写的变量
	func2(10);//func2(const int &a)的调用 传入一个只读常量
	//func(10);    函数重载碰到默认参数,会出现这种二义性情况，应当避免
	return 0;
}