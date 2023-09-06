#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
class Student {
public:
	//属性:姓名 学号
	string name;
	string id;
	//行为:姓名和学号的展示
	void Showname()
	{
		cout << "该同学姓名为: " << name << endl;
	}
	void Showid()
	{
		cout << "该同学学号为: " << id << endl;
	}
	//可以设计一个赋值行为
	void Setname(string s_name)
	{
		name = s_name;
	}
	void Setid(string s_id)
	{
		id = s_id;
	}
};
int main()
{
	Student A;
	//A.name = "张三";
	A.Setname("张三");
	//A.id = "08768658";
	A.Setid("08768658");
	A.Showname();
	A.Showid();
	return 0;
}