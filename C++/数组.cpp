#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int arr[100];
int main()
{
	cout << "整个数组所占内存空间为:" << sizeof(arr)<< endl;
	cout << "数组单个元素所占内存空间为:" << sizeof(arr[0]) << endl;
	cout << "数组元素个数为:" << sizeof(arr) / sizeof(arr[0]) << endl;


	cout << "数组首地址为:" << (int)arr << endl;
	cout << "数组首元素地址为:" << (int)(&arr[0]) << endl;
	cout<< "数组第二个元素地址为:" << (int)(&arr[1]) << endl;

	//数组名是常量，不能进行赋值
	return 0;
}
