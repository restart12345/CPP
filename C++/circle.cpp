#define  _CRT_SECURE_NO_WARNINGS 1
#include"circle.h"
//���ð뾶
void Circle::SetR(int R) //����SetR�Լ��±ߵĺ���Ϊ��Ա����,��Ա������������Ҫ���� Circle::
{
	C_R = R;
}
//��ȡ�뾶
int Circle::GetR()
{
	return C_R;
}
//����Բ��
void Circle::SetCenter(int x, int y)
{
	center.SetPoint(x, y);
}
//����Բ��
Point Circle::GetCenter()
{
	return center;
}
