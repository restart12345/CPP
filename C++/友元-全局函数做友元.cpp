#define  _CRT_SECURE_NO_WARNINGS 1
//�ڳ������Щ˽������Ҳ�������������һЩ������������з��ʣ�����Ҫ�õ���Ԫ�ļ���
//��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽�г�Ա
//��Ԫ�ؼ��� friend
#include<iostream>
#include<string>
using namespace std;
class Building
{
	//���߱�����Goodgayȫ�ֺ��� ��Building��ĺ����� ���Է������е�˽������
	friend void Goodgay(Building*building);
public:
	Building()
	{
		m_SittingRoom = "����";
		m_BedRoom = "����";
	}
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};
//ȫ�ֺ���
void Goodgay(Building*building)
{
	cout << "�û���ȫ�ֺ������ڷ���: " << building->m_SittingRoom << endl;
	cout << "�û���ȫ�ֺ������ڷ���: " << building->m_BedRoom << endl;
}
void test01()
{
	Building s;
	Goodgay(&s);
}
int main()
{
	test01();
	return 0;
}