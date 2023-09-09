#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son:public Base
{
public:
	int m_D;
};

void test()
{
	//父类中的非静态成员属性都会被子类继承下去
	//父类中私有成员属性 是被编译器隐藏了，因此是访问不到的，但是确实被继承下去了
	cout << "sizeof(Son) = "<<sizeof(Son) << endl;
}
int main()
{
	test();
	return 0;
}

//可以通过开始菜单中Visual Studio 2017下的开发人员命令提示符
//访问本文件所在盘    C:
//访问文件所在文件夹    cd  具体路径
//查看当前文件夹下的所有文件  dir
//用命令查看单个类   cl/d1 reportSingleClass类名(这里是Son)Layout  "文件名(继承-继承对象模型.cpp)" 