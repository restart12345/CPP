#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	bool flag = true;
	cout << flag << endl;
	flag = false;
	cout << flag << endl;

	cout << "bool类型所占内存空间大小: " << sizeof(bool) << endl;
	return 0;
}