#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int& test01()//���ÿ�����Ϊ�����ķ���ֵ����
{
	static int a = 10;//��ס���Ҫ���أ����ܷ��ؾֲ����������Է���һ����ȫ�����ľ�̬����
	return a;
}
int main()
{
	int&ref1 = test01();//��һ�����ñ������պ����ķ���ֵ
	cout << "ref1=" << ref1 << endl;
	cout << "ref1="<<ref1 << endl;
	test01() = 1000;//������Ϊ����ֵ�ĺ����ǿ�����Ϊ��ֵ�Ӷ������޸ĵ�

	//!!!!!//��������ֵʱ�����һ����ʱ������Ϊ��������ֵ�ĸ���������������ʱ�������ֵ�ĸ�����
	//!!!!!//������������������ʱ��û�и��Ʒ���ֵ���෴�����ص��Ƕ�����

	cout << "ref1=" << ref1 << endl;
	cout << "ref1=" << ref1 << endl;
	ref1 = 205;
	cout << "ref1=" << ref1 << endl;
	cout << "ref1=" << ref1 << endl;
	return 0;
}