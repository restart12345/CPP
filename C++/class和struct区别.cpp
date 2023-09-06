#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//struct和class唯一区别就在于默认访问权限的不同
class C1 {
	int m1;//默认为私有
};
struct C2 {
	int m2;//默认为公共
};
int main()
{
	C1 c1;
	//c1.m1 = 10; //错误，访问权限为私有
	C2 c2;
	c2.m2 = 100;//正确,访问权限为公共
	return 0;
}