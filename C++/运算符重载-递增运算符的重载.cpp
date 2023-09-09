#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//���ã�ͨ�����ص����������ʵ���Լ�����������
//�ܽ᣺ǰ�õ����������ã����õ�������ֵ

//�Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream&cout, MyInteger myinteger);
public:
	MyInteger();
	//����ǰ��++�����    ��������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger& operator++()
	{
		//�Ƚ���++����
		m_num++;
		//�ٷ��ض�����
		return *this;
	}
	//���غ���++�����   
	MyInteger operator++(int)    //��ռλ����int�����غ���,����ǰ��++�ͺ���++
	{
		//�ȼ�¼��ʱ���
		MyInteger temp=*this;
		//�����
		this->m_num++;
		//��󽫼�¼�������
		return temp;
	}
private:
	int m_num;
};
MyInteger::MyInteger()
{
	this->m_num = 0;
}
ostream& operator<<(ostream&cout, MyInteger myinteger)  //     <<�����������
{
	cout << myinteger.m_num;
	return cout;
}
void test01()
{
	MyInteger myinteger;
	cout << myinteger << endl;
}
void test02()
{
	MyInteger myinteger;
	cout << ++(++myinteger) << endl;
	cout << myinteger << endl;
}
void test03()
{
	MyInteger myinteger;
	cout << myinteger++ << endl;
	cout << myinteger << endl;
}
int main()
{
	test01();
	test02();
	test03();
	return 0;
}