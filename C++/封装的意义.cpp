#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//��װ������:1.�����Ժ���Ϊ��Ϊһ�����壬���������е����� 2.�����Ժ���Ϊ����Ȩ�޿���
//���һ��Բ��,��Բ���ܳ�
const double PI = 3.14;
class Circle {
	//����Ȩ��
	//����Ȩ��
public:
	//Բ������
	//�뾶
	int m_r;
	//Բ����Ϊ
	//��ȡԲ���ܳ�
	double CalculateZC()
	{
		return 2 * PI*m_r;
	}
};
int main()
{
	//ͨ��Բ�࣬���������Բ(����)
	//ʵ����  (ͨ��һ���࣬����һ������)
	Circle C1;
	//��Բ�����Ը�ֵ
	C1.m_r = 10;
	cout << "Բ���ܳ�Ϊ: " << C1.CalculateZC() << endl;
	return 0;
}