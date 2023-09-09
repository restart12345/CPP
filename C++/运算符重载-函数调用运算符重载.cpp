#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//函数调用运算符()也可以重载
//由于重载后的使用方式非常像函数的调用，因此称为仿函数
//仿函数没有固定写法，非常灵活


//打印类
class MyPrint
{
public:
	//重载函数调用运算符()
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test01()
{
	MyPrint myprint;
	myprint("helloworld");

	//匿名函数对象
	MyPrint()("helloworld");
}
//加法类
class MyAdd
{
public:
	//重载函数调用运算符()
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;
	
	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}