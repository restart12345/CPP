#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Person
{
	friend ostream& operator<<(ostream &out, Person&p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
};
ostream& operator<<(ostream &out,Person&p)
{
	out << "m_A=" << p.m_A << " " << "m_B=" << p.m_B;
	return out;
}
void test01()
{
	Person p(10,10);
	cout << p << " " << "helloworld" << endl;
}
int main()
{
	test01();
	return 0;
}