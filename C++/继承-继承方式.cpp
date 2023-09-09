#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//公共继承
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
		m_A = 100;   //父类中的公共成员，子类中还是公共成员
		m_B = 100;   //父类中的保护成员，子类中还是保护成员
		//m_C = 100; //父类中的私有成员,子类不可访问
	}
};
void test01()
{
	Son1 son;
	son.m_A = 10;
	//son.m_B = 10; //保护成员类外不能访问
}

//保护继承
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
		m_A = 100; //父类中的公共成员，子类中变为保护成员
		m_B = 100; //父类中的保护成员，子类中还是保护成员
		//m_C = 100; //父类中的私有成员,子类不可访问
	}
};

void test02()
{
	Son2 son;
	//son.m_A = 10;	//类中的保护成员,类外不可访问
	//son.m_B = 10;	//类中的保护成员,类外不可访问
}

//私有继承
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
		m_A = 100;	  //父类中的公共成员,子类中变为私有成员
		m_B = 100;	  //父类中的保护成员,子类中变为私有成员	 
		//m_C = 100;  //父类中的私有成员,子类不可访问
	}
};

class GrandSon :public Son3
{
public:
	void func()
	{
		//m_A = 10;     父类私有成员子类不可以访问
		//m_B = 10;		父类私有成员子类不可以访问	
	}
};

void test03()
{
	Son3 son;
	//son.m_A = 10;  类中私有成员类外不能访问
	//son.m_B = 10;  类中私有成员类外不能访问
}
int main()
{
	return 0;
}