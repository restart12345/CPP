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
	int&c = b;//c相当于b的别名
	//int &c;这样操作不行，引用必须初始化
	//c=a  引用一旦初始化，就不能更改，这里这个操作仅仅是普通的赋值,而不是更改引用
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;
	return 0;
}