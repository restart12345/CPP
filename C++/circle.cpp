#define  _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
//设置半径
void Circle::SetR(int R) //由于SetR以及下边的函数为成员函数,成员函数的作用域要加上 Circle::
{
	C_R = R;
}
//获取半径
int Circle::GetR()
{
	return C_R;
}
//设置圆心
void Circle::SetCenter(int x, int y)
{
	center.SetPoint(x, y);
}
//返回圆心
Point Circle::GetCenter()
{
	return center;
}
