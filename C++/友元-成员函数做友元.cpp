#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Building;
class GoodGay
{
public:
	GoodGay();
	void visit1();//��visit1�������Է���Building�е�˽�г�Ա
	void visit2();//��visit2���������Է���Building�е�˽�г�Ա
private:
	Building*building;
};
class Building
{
	//���߱�����  GoodGay���е�visit1��Ա���� ��Building�ĺ����ѣ����Է���˽������
	friend void GoodGay::visit1();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//����ʵ�ֳ�Ա����
Building::Building()
{
	m_SittingRoom = "����";
	m_BedRoom = "����";
}
GoodGay::GoodGay()
{
	building = new Building;
}
void GoodGay::visit1()
{
	cout << "visit1��Ա�������ڷ���: " << building->m_SittingRoom << endl;
	cout << "visit1��Ա�������ڷ���: " << building->m_BedRoom << endl;
}
void GoodGay::visit2()
{
	cout << "visit2��Ա�������ڷ���: " << building->m_SittingRoom << endl;
	//cout << "visit2��Ա�������ڷ���: " << building->m_BedRoom << endl;
}
void test01()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}
int main()
{
	test01();
	return 0;
}