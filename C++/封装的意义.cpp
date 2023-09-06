#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//封装的意义:1.将属性和行为作为一个整体，表现生活中的事物 2.将属性和行为加以权限控制
//设计一个圆类,求圆的周长
const double PI = 3.14;
class Circle {
	//访问权限
	//公共权限
public:
	//圆的属性
	//半径
	int m_r;
	//圆的行为
	//获取圆的周长
	double CalculateZC()
	{
		return 2 * PI*m_r;
	}
};
int main()
{
	//通过圆类，创建具体的圆(对象)
	//实例化  (通过一个类，创建一个对象)
	Circle C1;
	//给圆的属性赋值
	C1.m_r = 10;
	cout << "圆的周长为: " << C1.CalculateZC() << endl;
	return 0;
}