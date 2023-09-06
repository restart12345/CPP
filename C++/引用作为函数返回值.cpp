#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int& test01()//引用可以作为函数的返回值存在
{
	static int a = 10;//记住如果要返回，不能返回局部变量，可以返回一个在全局区的静态变量
	return a;
}
int main()
{
	int&ref1 = test01();//用一个引用变量接收函数的返回值
	cout << "ref1=" << ref1 << endl;
	cout << "ref1="<<ref1 << endl;
	test01() = 1000;//引用作为返回值的函数是可以作为左值从而进行修改的

	//!!!!!//函数返回值时会产生一个临时变量作为函数返回值的副本，而返回引用时不会产生值的副本。
	//!!!!!//当函数返回引用类型时，没有复制返回值。相反，返回的是对象本身

	cout << "ref1=" << ref1 << endl;
	cout << "ref1=" << ref1 << endl;
	ref1 = 205;
	cout << "ref1=" << ref1 << endl;
	cout << "ref1=" << ref1 << endl;
	return 0;
}