#define  _CRT_SECURE_NO_WARNINGS 1
#include"point.h"
void Point::SetPoint(int x, int y)
{
	p_x = x;
	p_y = y;
}
int Point::GetX()
{
	return p_x;
}
int Point::GetY()
{
	return p_y;
}
