#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//�����̳�
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 100;   //�����еĹ�����Ա�������л��ǹ�����Ա
		m_B = 100;   //�����еı�����Ա�������л��Ǳ�����Ա
		//m_C = 100; //�����е�˽�г�Ա,���಻�ɷ���
	}
};
void test01()
{
	Son1 son;
	son.m_A = 10;
	//son.m_B = 10; //������Ա���ⲻ�ܷ���
}

//�����̳�
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100; //�����еĹ�����Ա�������б�Ϊ������Ա
		m_B = 100; //�����еı�����Ա�������л��Ǳ�����Ա
		//m_C = 100; //�����е�˽�г�Ա,���಻�ɷ���
	}
};

void test02()
{
	Son2 son;
	//son.m_A = 10;	//���еı�����Ա,���ⲻ�ɷ���
	//son.m_B = 10;	//���еı�����Ա,���ⲻ�ɷ���
}

//˽�м̳�
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 :private Base3
{
public:
	void func()
	{
		m_A = 100;	  //�����еĹ�����Ա,�����б�Ϊ˽�г�Ա
		m_B = 100;	  //�����еı�����Ա,�����б�Ϊ˽�г�Ա	 
		//m_C = 100;  //�����е�˽�г�Ա,���಻�ɷ���
	}
};

class GrandSon :public Son3
{
public:
	void func()
	{
		//m_A = 10;     ����˽�г�Ա���಻���Է���
		//m_B = 10;		����˽�г�Ա���಻���Է���	
	}
};

void test03()
{
	Son3 son;
	//son.m_A = 10;  ����˽�г�Ա���ⲻ�ܷ���
	//son.m_B = 10;  ����˽�г�Ա���ⲻ�ܷ���
}
int main()
{
	return 0;
}