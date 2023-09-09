#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//常函数  (成员函数后加上const就叫常函数)
class Person
{
public:
	//Person* const this;指向对象p,其指向不可以修改,加上const变成 const Person* const this ,指向和值都不可以修改
	void showPerson()const
	{
		//m_A = 100;     //其实这一行相当于this->m_A=100;  this指针本质上是指针常量，其指向不能修改，而前面加上const，其指向的值也不能修改了
		m_B = 200;
	}
	void func()
	{

	} 
	int m_A;
	mutable int m_B; //特殊变量,在变量前加上mutable,即使在常函数中，也可以修改这个值
};
void test01()
{
	Person p; 
	p.showPerson();
	cout << "m_B的值是" << p.m_B<<endl;
}
//常对象
void test02()
{
	const Person p;  //在对象前加上const，变为常对象
	//p.m_A = 200;
	p.m_B = 300;  //m_B是特殊变量，在常对象下也可以修改
	cout << "m_B的值是" << p.m_B<<endl;
	p.showPerson();  //常对象只能调用常函数
	/*p.func();*/    //因为在非常函数中，可以对成员属性进行修改，但是常对象是不能对一般成员属性进行修改的,调用非常函数可能会侧面修改成员属性
}
int main()
{
	test01();
	test02();
	return 0;
}