#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	//����:���� ѧ��
	string name;
	string id;
	//��Ϊ:������ѧ�ŵ�չʾ
	void Showname()
	{
		cout << "��ͬѧ����Ϊ: " << name << endl;
	}
	void Showid()
	{
		cout << "��ͬѧѧ��Ϊ: " << id << endl;
	}
	//�������һ����ֵ��Ϊ
	void Setname(string s_name)
	{
		name = s_name;
	}
	void Setid(string s_id)
	{
		id = s_id;
	}
};
int main()
{
	Student A;
	//A.name = "����";
	A.Setname("����");
	//A.id = "08768658";
	A.Setid("08768658");
	A.Showname();
	A.Showid();
	return 0;
}