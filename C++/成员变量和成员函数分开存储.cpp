#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//��Ա�����ͳ�Ա�����Ƿֿ��洢��
class Person
{
	int m_A;   //�Ǿ�̬��Ա����   ������Ķ�����

	static int m_B; //��̬��Ա����  ��������Ķ�����

	void func1(){}  //�Ǿ�̬��Ա����  ��������Ķ�����

	static void func2(){} //��̬��Ա���� ��������Ķ�����
};
void test01()
{
	Person p;
	cout << "p�Ĵ�СΪ: " << sizeof(p) << endl;
	//�ն���ռ���ڴ�ռ�Ϊ:1
	//C++���������ÿһ���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
}
void test02()
{
	Person p1;
	cout << "p1�Ĵ�СΪ: " << sizeof(p1) << endl;
}
int main()
{
	/*test01();*/
	test02();
	return 0;
}