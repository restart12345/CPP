#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//struct��classΨһ���������Ĭ�Ϸ���Ȩ�޵Ĳ�ͬ
class C1 {
	int m1;//Ĭ��Ϊ˽��
};
struct C2 {
	int m2;//Ĭ��Ϊ����
};
int main()
{
	C1 c1;
	//c1.m1 = 10; //���󣬷���Ȩ��Ϊ˽��
	C2 c2;
	c2.m2 = 100;//��ȷ,����Ȩ��Ϊ����
	return 0;
}