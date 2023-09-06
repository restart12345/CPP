#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Cube
{
public:
	//行为
	//设置长
	void SetL(int L)
	{
		m_l = L;
	}
	//获取长
	int GetL()
	{
		return m_l;
	}
	//设置宽
	void SetW(int W)
	{
		m_w = W;
	}
	//获取宽
	int GetW()
	{
		return m_w;
	}
	//设置高
	void SetH(int H)
	{
		m_h = H;
	}
	//获取高
	int GetH()
	{
		return m_h;
	}
	//获取立方体的表面积
	int CalculateS()
	{
		return 2*(m_l * m_w + m_l * m_h + m_w * m_h);
	}
	//获取立方体的体积
	int CalculateV()
	{
		return m_l * m_w*m_h;
	}
	//判断两个立方体是否相等的成员函数
	bool IsSameCube(Cube &C)
	{
		if (m_l == C.GetL() && m_h == C.GetH() && m_w == C.GetW())
		{
			return true;
		}
		return false;
	}
	//属性
private:
	int m_l;
	int m_w;
	int m_h;
};
bool IsSameCube(Cube &C1,Cube &C2)
{
	if (C1.GetL()==C2.GetL()&&C1.GetH()==C2.GetH()&&C1.GetW()==C2.GetW())
	{
		return true;
	}
	return false;
}
int main()
{
	Cube C1;
	C1.SetL(10);
	C1.SetW(10);
	C1.SetH(10);
	//cout << "立方体面积为: " << C1.CalculateS() << endl;
	//cout << "立方体体积为: "<<C1.CalculateV()<< endl;
	Cube C2;
	C2.SetL(10);
	C2.SetW(10);
	C2.SetH(9);
	//全局函数判断两个立方体是否相同(要传入两个参数)
	bool ret = IsSameCube(C1, C2);
	if (ret)
	{
		cout << "两个立方体相同" << endl;
	}
	else
	{
		cout << "两个立方体不相同" << endl;
	}
	//成员函数判断两个立方是否相同(只用传入一个参数)
	bool result=C1.IsSameCube(C2);
	if (result)
	{
		cout << "成员函数判断两个立方体相同" << endl;
	}
	else
	{
		cout << "成员函数判断两个立方体不相同" << endl;
	}
	return 0;
}