#define  _CRT_SECURE_NO_WARNINGS 1
//��̬��Ա����
//1.���ж�����ͬһ������
//2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
//3.��̬��Ա����Ҳ�з���Ȩ��
#include<iostream>
using namespace std;
class Person
{
public:
	static void func1()
	{
		age = 10;
		/*height = 100;*/  //��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		cout << "void func1�ĵ���" << endl;
	}
	static int age;
	int height;
private:
	static void func2()
	{
		cout << "void fun2�ĵ���" << endl;
	}
	
};
int Person::age = 0;
void test01()
{
	//ͨ�����ַ�ʽ���ʾ�̬����
	//1.ͨ��������з���
	Person p;
	p.func1();
	/*p.func2();*/

	//2.ͨ���������з���
	Person::func1();
	/*Person::func2();*/
}
int main()
{
	test01();
	return 0;
}