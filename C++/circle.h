#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"point.h"
class Circle
{
public:
	//���ð뾶
	void SetR(int R);
	//��ȡ�뾶
	int GetR();
	//����Բ��
	void SetCenter(int x, int y);
	//����Բ��
	Point GetCenter();
private:
	int C_R;
	Point center;
};