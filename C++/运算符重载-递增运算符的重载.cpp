#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//作用：通过重载递增运算符，实现自己的整型数据
//总结：前置递增返回引用，后置递增返回值

//自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream&cout, MyInteger myinteger);
public:
	MyInteger();
	//重载前置++运算符    返回引用为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		//先进行++操作
		m_num++;
		//再返回对象本身
		return *this;
	}
	//重载后置++运算符   
	MyInteger operator++(int)    //用占位参数int来重载函数,区分前置++和后置++
	{
		//先记录当时结果
		MyInteger temp=*this;
		//后递增
		this->m_num++;
		//最后将记录结果返回
		return temp;
	}
private:
	int m_num;
};
MyInteger::MyInteger()
{
	this->m_num = 0;
}
ostream& operator<<(ostream&cout, MyInteger myinteger)  //     <<运算符的重载
{
	cout << myinteger.m_num;
	return cout;
}
void test01()
{
	MyInteger myinteger;
	cout << myinteger << endl;
}
void test02()
{
	MyInteger myinteger;
	cout << ++(++myinteger) << endl;
	cout << myinteger << endl;
}
void test03()
{
	MyInteger myinteger;
	cout << myinteger++ << endl;
	cout << myinteger << endl;
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}