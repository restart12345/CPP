#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	cout << "bool������ռ�ڴ�ռ��С: " << sizeof(bool) << endl;
	return 0;
}