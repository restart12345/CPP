#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//函数的占位参数也可以有默认值,比如int=10这样写
void func(int a, int=10)
{
	cout << "this is func" << endl;
}
int main()
{
	func(10, 10);//调用函数占位参数一定要填补
	return 0;
}