#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//�������������()Ҳ��������
//�������غ��ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����


//��ӡ��
class MyPrint
{
public:
	//���غ������������()
	void operator()(string test)
	{
		cout << test << endl;
	}
};
void test01()
{
	MyPrint myprint;
	myprint("helloworld");

	//������������
	MyPrint()("helloworld");
}
//�ӷ���
class MyAdd
{
public:
	//���غ������������()
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;
	
	//������������
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	test01();
	test02();
	return 0;
}