#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//������ռλ����Ҳ������Ĭ��ֵ,����int=10����д
void func(int a, int=10)
{
	cout << "this is func" << endl;
}
int main()
{
	func(10, 10);//���ú���ռλ����һ��Ҫ�
	return 0;
}