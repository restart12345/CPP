#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//�̳��﷨:            class ���� : �̳з�ʽ ���� 
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ����ѧҳ������......" << endl;
	}
	void footer()
	{
		cout << "������΢�š���ҵģʽ......" << endl;
	}
	void leftlist()
	{
		cout << "C++,JAVA,PYTHON...." << endl;
	}
};
//�ü̳����̳и���Ĺ��ԣ�ͬʱ����ӵ���Լ�������
class Java:public BasePage
{
public:
	void content()
	{
		cout << "Java�Ľ�ѧ��Ƶ" << endl;
	}
};
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Python�Ľ�ѧ��Ƶ" << endl;
	}
};
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPP�Ľ�ѧ��Ƶ" << endl;
	}
};

void test01()
{
	cout << "Java��Ƶ����ҳ������" << endl;
	Java ja;
	ja.header();
	ja.leftlist();
	ja.footer();
	ja.content();
	cout << "/*----------------------*/" << endl;

	cout << "CPP��Ƶ����ҳ������" << endl;
	CPP cpp;
	cpp.header();
	cpp.leftlist();
	cpp.footer();
	cpp.content();
	cout << "/*----------------------*/" << endl;

	cout << "Python��Ƶ����ҳ������" << endl;
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

//�ܽ᣺�̳еĺô������Լ����ظ��Ĵ���
// class A : public B       A���Ϊ���� �� ������    B���Ϊ���� �� ����

//�������еĳ�Ա���������󲿷�
//һ���Ǵӻ���̳й����ģ�һ�����Լ����ӵĳ�Ա
//�ӻ���̳й����ı����˹��ԣ��������ĳ�Ա�����˸���