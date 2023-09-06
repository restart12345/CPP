#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	//1.设置随机数
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	
	int val = 0;
	while (1)
	{
		cin >> val;
		if (val > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (val < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "恭喜你猜对了" << endl;
			break;
		}
	}
	return 0;
}