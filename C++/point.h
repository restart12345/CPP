#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
class Point
{
public:
	//ÉèÖÃµã×ø±ê
	void SetPoint(int x, int y);
	int GetX();
	int GetY();
private:
	int p_x;
	int p_y;
};