#define  _CRT_SECURE_NO_WARNINGS 1
//������Ԫ
#include<iostream>
#include<string>
using namespace std;
class Building; //������,���߱������������
class Goodgay
{
public:
	Goodgay();
	void visit();//�ιۺ��� ����Building�е�����
private:
	Building*building;
};
class Building
{
	//���߱����� Goodgay����Building��ĺ�����,���Է��ʵ�Building���е�˽������
	friend class Goodgay;
public:
	Building();
public:
	string m_SittingRoom; //����
private:
	string m_BedRoom; //����
};
Building::Building() //����д��Ա���� Ҫ����������
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
Goodgay::Goodgay()
{
	//�������������
	building = new Building;
}
void Goodgay::visit()
{
	cout << "�û��������ڷ���: " << building->m_SittingRoom << endl;
	cout << "�û��������ڷ���: " << building->m_BedRoom << endl;
}
void test01()
{
	Goodgay gg;
	gg.visit();
}
int main()
{
	test01();
	return 0;
}