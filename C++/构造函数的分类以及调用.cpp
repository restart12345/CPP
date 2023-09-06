#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//构造函数分类: 1.按参数分:有参构造和无参构造 2.按类型分:普通构造和拷贝构造
//构造函数调用方法:1.括号法 2.显式法 3.隐式转换法
class Person
{
public: 
	Person()
	{  
		cout << "无参构造函数的调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "有参构造函数的调用" << endl;
	}
	Person(const Person &p)
	{
		age = p.age;
		cout << "拷贝构造函数的调用" << endl;
	}
	~Person()
	{
		cout << "析构函数的调用" << endl;
	}
public:
	int age;
};
void test01()
{
	Person p; //无参构造函数的调用
}
void test02()
{
	//1.括号法 (常用)
	Person p1(10);
	Person p2(p1);
	//cout << "p1的年龄为: " << p1.age<<endl;
	//cout << "p2的年龄为: " << p2.age <<endl;

	//2.显式法
	Person p3 = Person(10);
	Person p4 = Person(p3);
	//Person(20);		Person(20) 称为匿名对象 当前行结束后,马上析构
	//cout << "p3的年龄为: " << p3.age<<endl;
	//cout << "p4的年龄为: " << p4.age <<endl;

	//3.隐式转换法
	Person p5 = 10;  //相当于Person p5= Person(10)
	Person p6 = p5;
	//cout << "p5的年龄为: " << p5.age<<endl;
	//cout << "p6的年龄为: " << p6.age <<endl;

}
int main()
{
	test01();
	test02();
	return 0;
}
//注意事项 1.调用无参构造函数的时候,不要写成 Person p1(),不能加括号,编译器会当作是函数声明
//		   2.Person(10) 称为匿名对象 当前行结束后,马上析构 
//		   3.不能利用 拷贝构造函数 初始化匿名对象 编译器会认为是对象声明 比如 Person p2=Person(10)
//																			  Person p3=Person(p2);
//																			  Person(p3);//编译器会认为是Person p3; 发生重定义
       