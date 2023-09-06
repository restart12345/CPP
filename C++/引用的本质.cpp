#define  _CRT_SECURE_NO_WARNINGS 1
/*---------引用的本质是指针常量---------*/
#include<iostream>
using namespace std;
//自动转换成int*const ref=&a;
void func(int&ref)
{
	ref = 100;//自动转换成*ref=100
}
int main()
{
	int a = 10;
	//自动转换成int* const ref=&a;指针常量的指向不可以修改,这也就说明了为什么引用在初始化后不能修改
	int &ref = a;

	ref = 20; //自动转换成*ref=20;
	
	cout << "ref=" << ref << endl;
	cout << "a=" << a << endl;
	func(a);
	cout << "ref=" << ref << endl;
	cout << "a=" << a << endl;
	return 0;
}