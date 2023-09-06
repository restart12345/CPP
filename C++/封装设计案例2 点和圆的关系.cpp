#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//class Point
//{
//public:
//	//设置点坐标
//	void SetPoint(int x, int y)
//	{
//		p_x = x;
//		p_y = y;
//	}
//	int GetX()
//	{
//		return p_x;
//	}
//	int GetY()
//	{
//		return p_y;
//	}
//private:
//	int p_x;
//	int p_y;
//};
//class Circle
//{
//public:
//	//设置半径
//	void SetR(int R)
//	{
//		C_R = R;
//	}
//	//获取半径
//	int GetR()
//	{
//		return C_R;
//	}
//	//设置圆心
//	void SetCenter(int x,int y)
//	{
//		center.SetPoint(x, y);
//	}
//	//返回圆心
//	Point GetCenter()
//	{
//		return center;
//	}
//private:
//	int C_R;
//	Point center;   //在类中可以让另一个类作为本类的成员
//};
void IsinCircle(Circle &C,Point &P)
{
	int distance = (P.GetX() - C.GetCenter().GetX())*(P.GetX() - C.GetCenter().GetX()) +
		(P.GetY() - C.GetCenter().GetY())*(P.GetY() - C.GetCenter().GetY());
	int rdistance = C.GetR()*C.GetR();
	if (distance ==rdistance )
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rdistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}
int  main()
{
	Circle C;
	C.SetR(10);
	C.SetCenter(10, 0);
	Point P;
	P.SetPoint(10,9);
	IsinCircle(C, P);
	return 0;
}