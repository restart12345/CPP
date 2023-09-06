#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	int arr[9] = { 4,0,7,5,8,9,2,1,3 };
	cout << "ÅÅÐòÇ°: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 9-1; i++)
	{
		for (int j = 0; j < 9 - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "ÅÅÐòºó: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}