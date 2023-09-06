#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//构造函数:主要作用在于创建对象时为对象的成员属性赋值,构造函数由编译器自动调用，无需手动调用
//析构函数:主要作用在于对象销毁前自动调用，执行一些清理工作
class Person
{
public:
	Person()  //构造函数  类名(){}
	{
		cout << "构造函数的调用" << endl;
	}
	~Person() //析构函数  ~类名(){}
	{
		cout << "析构函数的调用" << endl;
	}
};
//void test01()
//{
//	Person p;
//}
int main()
{
	/*test01();*/
	Person p;
	system("pause");
	return 0;
}