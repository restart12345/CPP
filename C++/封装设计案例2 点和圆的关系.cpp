#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"circle.h"
#include"point.h"
//class Point
//{
//public:
//	//���õ�����
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
//	//���ð뾶
//	void SetR(int R)
//	{
//		C_R = R;
//	}
//	//��ȡ�뾶
//	int GetR()
//	{
//		return C_R;
//	}
//	//����Բ��
//	void SetCenter(int x,int y)
//	{
//		center.SetPoint(x, y);
//	}
//	//����Բ��
//	Point GetCenter()
//	{
//		return center;
//	}
//private:
//	int C_R;
//	Point center;   //�����п�������һ������Ϊ����ĳ�Ա
//};
void IsinCircle(Circle &C,Point &P)
{
	int distance = (P.GetX() - C.GetCenter().GetX())*(P.GetX() - C.GetCenter().GetX()) +
		(P.GetY() - C.GetCenter().GetY())*(P.GetY() - C.GetCenter().GetY());
	int rdistance = C.GetR()*C.GetR();
	if (distance ==rdistance )
	{
		cout << "����Բ��" << endl;
	}
	else if (distance < rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
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