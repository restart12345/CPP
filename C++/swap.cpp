#define  _CRT_SECURE_NO_WARNINGS 1
#include"swap.h"
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int main()
{
	int a = 10, b = 20;
	swap(a, b);
	return 0;
}