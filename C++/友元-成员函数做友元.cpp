#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit1();//让visit1函数可以访问Building中的私有成员
	void visit2();//让visit2函数不可以访问Building中的私有成员
private:
	Building*building;
};
class Building
{
	//告诉编译器  GoodGay类中的visit1成员函数 是Building的好朋友，可以访问私有内容
	friend void GoodGay::visit1();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit1()
{
	cout << "visit1成员函数正在访问: " << building->m_SittingRoom << endl;
	cout << "visit1成员函数正在访问: " << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2成员函数正在访问: " << building->m_SittingRoom << endl;
	//cout << "visit2成员函数正在访问: " << building->m_BedRoom << endl;
}
void test01()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}
int main()
{
	test01();
	return 0;
}