#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Cube
{
public:
	//��Ϊ
	//���ó�
	void SetL(int L)
	{
		m_l = L;
	}
	//��ȡ��
	int GetL()
	{
		return m_l;
	}
	//���ÿ�
	void SetW(int W)
	{
		m_w = W;
	}
	//��ȡ��
	int GetW()
	{
		return m_w;
	}
	//���ø�
	void SetH(int H)
	{
		m_h = H;
	}
	//��ȡ��
	int GetH()
	{
		return m_h;
	}
	//��ȡ������ı����
	int CalculateS()
	{
		return 2*(m_l * m_w + m_l * m_h + m_w * m_h);
	}
	//��ȡ����������
	int CalculateV()
	{
		return m_l * m_w*m_h;
	}
	//�ж������������Ƿ���ȵĳ�Ա����
	bool IsSameCube(Cube &C)
	{
		if (m_l == C.GetL() && m_h == C.GetH() && m_w == C.GetW())
		{
			return true;
		}
		return false;
	}
	//����
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
	//cout << "���������Ϊ: " << C1.CalculateS() << endl;
	//cout << "���������Ϊ: "<<C1.CalculateV()<< endl;
	Cube C2;
	C2.SetL(10);
	C2.SetW(10);
	C2.SetH(9);
	//ȫ�ֺ����ж������������Ƿ���ͬ(Ҫ������������)
	bool ret = IsSameCube(C1, C2);
	if (ret)
	{
		cout << "������������ͬ" << endl;
	}
	else
	{
		cout << "���������岻��ͬ" << endl;
	}
	//��Ա�����ж����������Ƿ���ͬ(ֻ�ô���һ������)
	bool result=C1.IsSameCube(C2);
	if (result)
	{
		cout << "��Ա�����ж�������������ͬ" << endl;
	}
	else
	{
		cout << "��Ա�����ж����������岻��ͬ" << endl;
	}
	return 0;
}