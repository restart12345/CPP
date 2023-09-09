#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//���ظ�ֵ�������Ϊ�˽��ǳ���������ڴ�ռ��ظ��ͷŵ�����
class Person
{
	friend void test01();
public:
	Person(int age)
	{
		m_Age = new int(age);
	}
	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	//���ظ�ֵ�����
	Person& operator=(Person&p)
	{
		//m.Age=p.m_Age;    �������ṩ����ǳ����


		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}

		m_Age = new int(*p.m_Age);
		//���ݶ�������private�����������ʵ�������е��κη��������Է��ʸ�����κ�ʾ����˽������;�������ֹ��ʽ��������ʾ����˽�����ݳ�Ա�ķ�����
		//����û��һ�ַ������Ա���ʾ���е�����˽�С�

		//���ض�����,��������ʵ������
		return *this;
	}
private:
	int *m_Age;
};
void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(40);

	p3 = p1 = p2;
	cout << "p1��������:" << *p1.m_Age << endl;
	cout << "p2��������:" << *p2.m_Age << endl;
	cout << "p3��������:" << *p3.m_Age << endl;
}
int main()
{
	test01();
	return 0;
}

//����֪ʶ��:
//int a,b; a=b;   C������a=b���ص�����ֵ,��C++��a=b���ص�����ֵ  https://www.zhihu.com/question/51773910