#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//继承语法:            class 子类 : 继承方式 父类 
class BasePage
{
public:
	void header()
	{
		cout << "首页、教学页、工具......" << endl;
	}
	void footer()
	{
		cout << "合作、微信、商业模式......" << endl;
	}
	void leftlist()
	{
		cout << "C++,JAVA,PYTHON...." << endl;
	}
};
//用继承来继承父类的共性，同时子类拥有自己的特性
class Java:public BasePage
{
public:
	void content()
	{
		cout << "Java的教学视频" << endl;
	}
};
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python的教学视频" << endl;
	}
};
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPP的教学视频" << endl;
	}
};

void test01()
{
	cout << "Java视频下载页面如下" << endl;
	Java ja;
	ja.header();
	ja.leftlist();
	ja.footer();
	ja.content();
	cout << "/*----------------------*/" << endl;

	cout << "CPP视频下载页面如下" << endl;
	CPP cpp;
	cpp.header();
	cpp.leftlist();
	cpp.footer();
	cpp.content();
	cout << "/*----------------------*/" << endl;

	cout << "Python视频下载页面如下" << endl;
	Python py;
	py.header();
	py.leftlist();
	py.footer();
	py.content();

}
int main()
{
	test01();
	return 0;
}

//总结：继承的好处，可以减少重复的代码
// class A : public B       A类称为子类 或 派生类    B类称为父类 或 基类

//派生类中的成员，包含两大部分
//一类是从基类继承过来的，一类是自己增加的成员
//从基类继承过来的表现了共性，而新增的成员体现了个性