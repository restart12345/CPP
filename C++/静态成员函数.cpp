#define  _CRT_SECURE_NO_WARNINGS 1
//静态成员函数
//1.所有对象共享同一个函数
//2.静态成员函数只能访问静态成员变量
//3.静态成员函数也有访问权限
#include<iostream>
using namespace std;
class Person
{
public:
	static void func1()
	{
		age = 10;
		/*height = 100;*/  //静态成员函数只能访问静态成员变量
		cout << "void func1的调用" << endl;
	}
	static int age;
	int height;
private:
	static void func2()
	{
		cout << "void fun2的调用" << endl;
	}
	
};
int Person::age = 0;
void test01()
{
	//通过两种方式访问静态函数
	//1.通过对象进行访问
	Person p;
	p.func1();
	/*p.func2();*/

	//2.通过类名进行访问
	Person::func1();
	/*Person::func2();*/
}
int main()
{
	test01();
	return 0;
}