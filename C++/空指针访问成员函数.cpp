#define  _CRT_SECURE_NO_WARNINGS 1
//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ���Ҫע��thisָ��
//����õ���thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
#include<iostream>
using namespace std;
class Person 
{
public:
	void ShowClassName()
	{
		cout << "this is Person Class" << endl;
	}
	void ShowPersonAge()
	{
		if (this == NULL)
		{
			return;
		}
		cout << "The age of Person is " << m_Age << endl; //��ʵm_Ageǰ��һ��this->���൱��this->m_Age,��������ָ��Ϊ��,����ִ���
	}
	int m_Age;
};
void test01()
{
	Person*p=NULL;
	p->ShowClassName();
	p->ShowPersonAge();
}
int main()
{
	test01();
	return 0;
}