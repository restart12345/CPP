#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
void Showvalue(const int& val)//函数中利用常量引用来防止误操作修改实参
{
	//val = 1000; 此处展示误操作
	cout << "val=" << val << endl;
}
int main()
{
	//int &ref = 10;  引用本身需要一个合法的内存空间(比如栈区、堆区上的空间),因此这行错误
	//加上const,这里编译器会优化代码:int temp=10;const int& ref=temp;
	const int&ref = 10;
	//ref = 100;  这行错误,表达式必须是可修改的左值
	int a = 10;
	//函数中利用常量引用来防止误操作修改实参
	Showvalue(a);
	cout << "a=" << a << endl;
	return 0;
}