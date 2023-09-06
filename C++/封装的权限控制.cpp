#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
//访问权限有三种:
//1.public 公共权限 类内可以访问 类外可以访问
//2.protected 保护权限 类内可以访问 类外不可以访问  儿子可以继承父亲中的保护内容
//3.private 私有权限 类内可以访问 类外不可以访问	儿子不可以继承父亲中的私有内容	
class Person {
public:
	string s_name;
protected:
	string s_car;//车
private:
	int password;//银行卡密码
public:
	void func()
	{
		s_name = "张三";
		s_car = "奔驰";
		password = 820190;
	}
};
int main()
{
	Person A;
	A.s_name = "李四";
	//A.s_car = "法拉利";
	//A.password = 80979;
	A.func();
	return 0;
}