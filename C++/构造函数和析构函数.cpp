#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//���캯��:��Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ,���캯���ɱ������Զ����ã������ֶ�����
//��������:��Ҫ�������ڶ�������ǰ�Զ����ã�ִ��һЩ������
class Person
{
public:
	Person()  //���캯��  ����(){}
	{
		cout << "���캯���ĵ���" << endl;
	}
	~Person() //��������  ~����(){}
	{
		cout << "���������ĵ���" << endl;
	}
};
//void test01()
//{
//	Person p;
//}
int main()
{
	/*test01();*/
	Person p;
	system("pause");
	return 0;
}