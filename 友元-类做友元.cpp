#define  _CRT_SECURE_NO_WARNINGS 1
//类做友元
#include<iostream>
#include<string>
using namespace std;
class Building; //先声明,告诉编译器有这个类
class Goodgay
{
public:
	Goodgay();
	void visit();//参观函数 访问Building中的属性
private:
	Building*building;
};
class Building
{
	//告诉编译器 Goodgay类是Building类的好朋友,可以访问到Building类中的私有内容
	friend class Goodgay;
public:
	Building();
public:
	string m_SittingRoom; //客厅
private:
	string m_BedRoom; //卧室
};
Building::Building() //类外写成员函数 要加上作用域
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}
Goodgay::Goodgay()
{
	//创建建筑物对象
	building = new Building;
}
void Goodgay::visit()
{
	cout << "好基友类正在访问: " << building->m_SittingRoom << endl;
	cout << "好基友类正在访问: " << building->m_BedRoom << endl;
}
void test01()
{
	Goodgay gg;
	gg.visit();
}
int main()
{
	test01();
	return 0;
}