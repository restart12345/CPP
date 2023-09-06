#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
/*---------成员属性私有化--------*/
//优点1:将所有成员属性设为私有,可以自己控制读写权限
//优点2:对于写权限,我们可以检测数据的有效性
class Person 
{
public:
	//设置名字(写)
	void Setname(string Name)
	{
		p_name = Name;
	}
	//获取名字(读)
	string Getname()
	{
		return p_name;
	}
	void Setage(int age)
	{
		p_age = age;
		if (p_age < 0 || p_age>150)//检测数据有效性
		{
			p_age = 0;
			cout << "年龄设置有误" << endl;
			return;
		}
	}
	int Getage()
	{
		return p_age;
	}
	void Setlover(string lover)
	{
		p_lover = lover;
	}
private:
	//人的名字   (可读可写)
	string p_name;
	//人的年龄 (可读可写)
	int p_age;
	//配偶    (只写)
	string p_lover;
};
int main()
{
	Person P;
	P.Setname("张三");
	cout <<"姓名为: " << P.Getname() << endl;
	P.Setage(1000);
	cout << "年龄为: " << P.Getage() << endl;
	P.Setlover("王五");
	return 0;
}