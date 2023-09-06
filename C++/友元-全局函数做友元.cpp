#define  _CRT_SECURE_NO_WARNINGS 1
//在程序里，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类 访问另一个类中的私有成员
//友元关键字 friend
#include<iostream>
#include<string>
using namespace std;
class Building
{
	//告诉编译器Goodgay全局函数 是Building类的好朋友 可以访问类中的私有内容
	friend void Goodgay(Building*building);
public:
	Building()
	{
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//全局函数
void Goodgay(Building*building)
{
	cout << "好基友全局函数正在访问: " << building->m_SittingRoom << endl;
	cout << "好基友全局函数正在访问: " << building->m_BedRoom << endl;
}
void test01()
{
	Building s;
	Goodgay(&s);
}
int main()
{
	test01();
	return 0;
}