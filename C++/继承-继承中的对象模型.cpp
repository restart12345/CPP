#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son:public Base
{
public:
	int m_D;
};

void test()
{
	//�����еķǾ�̬��Ա���Զ��ᱻ����̳���ȥ
	//������˽�г�Ա���� �Ǳ������������ˣ�����Ƿ��ʲ����ģ�����ȷʵ���̳���ȥ��
	cout << "sizeof(Son) = "<<sizeof(Son) << endl;
}
int main()
{
	test();
	return 0;
}

//����ͨ����ʼ�˵���Visual Studio 2017�µĿ�����Ա������ʾ��
//���ʱ��ļ�������    C:
//�����ļ������ļ���    cd  ����·��
//�鿴��ǰ�ļ����µ������ļ�  dir
//������鿴������   cl/d1 reportSingleClass����(������Son)Layout  "�ļ���(�̳�-�̳ж���ģ��.cpp)" 