#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base���캯��!" << endl;
	}
	~Base()
	{
		cout << "Base��������!" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son���캯��!" << endl;
	}
	~Son()
	{
		cout << "Son��������!" << endl;
	}
};

void test()
{
	//Base b;

	//�̳��еĹ��������˳�����£�
	//�ȹ��츸�࣬�ٹ������࣬������˳���빹���˳���෴
	//�����������ǰ���ȴ����������
	Son s;
}
int main()
{
	test();
	return 0;
}