#define  _CRT_SECURE_NO_WARNINGS 1
//��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static,��Ϊ��̬��Ա
//��̬��Ա��Ϊ��̬��Ա�����;�̬��Ա����
//��̬��Ա����:
//1.���ж�����һ������
//2.�ڱ���׶η����ڴ�
//3.���������������ʼ��
#include<iostream>
using namespace std;
class Person
{	
public:
	static int m_A;
private:
	static int m_B;	//��̬��Ա����Ҳ���з���Ȩ�޵�
};
int Person::m_A = 100;//�����ʼ��
int Person::m_B = 200;
void test01()
{
	Person p1;
	cout << p1.m_A << endl;
	Person p2;
	p2.m_A = 200;
	cout << p2.m_A << endl;
}
//��̬����������ĳ���ض��������ж�����һ������
//��˾�̬��Ա���������ַ��ʷ�ʽ
void test02()
{
	//1.ͨ��������з���
	Person p;
	cout << p.m_A << endl;
	//2.ͨ���������з���
	cout<<Person::m_A << endl;

	/*cout << Person::m_B << endl;*/  //��̬��Ա����Ҳ���з���Ȩ�޵�
}
int main()
{
	/*test01();*/
	test02();
	return 0;
}