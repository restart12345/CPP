#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int arr[100];
int main()
{
	cout << "����������ռ�ڴ�ռ�Ϊ:" << sizeof(arr)<< endl;
	cout << "���鵥��Ԫ����ռ�ڴ�ռ�Ϊ:" << sizeof(arr[0]) << endl;
	cout << "����Ԫ�ظ���Ϊ:" << sizeof(arr) / sizeof(arr[0]) << endl;


	cout << "�����׵�ַΪ:" << (int)arr << endl;
	cout << "������Ԫ�ص�ַΪ:" << (int)(&arr[0]) << endl;
	cout<< "����ڶ���Ԫ�ص�ַΪ:" << (int)(&arr[1]) << endl;

	//�������ǳ��������ܽ��и�ֵ
	return 0;
}
