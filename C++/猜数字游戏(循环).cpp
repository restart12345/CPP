#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	//1.���������
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	
	int val = 0;
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;
			break;
		}
	}
	return 0;
}