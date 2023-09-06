#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class Circle
{
public:
	//设置半径
	void SetR(int R);
	//获取半径
	int GetR();
	//设置圆心
	void SetCenter(int x, int y);
	//返回圆心
	Point GetCenter();
private:
	int C_R;
	Point center;
};