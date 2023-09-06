#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	//1.整型的输入
	/*int a = 0;
	cout << "请给整型变量a赋值: " << endl;
	cin >> a;
	cout << "整型变量a的值为:" << a << endl;*/
	
	//2.浮点型的输入
	//float a = 3.14f;
	//cout << "请给浮点型变量a赋值: " << endl;
	//cin >> a;
	//cout << "浮点型变量的值为:" << a << endl;

	//3.字符型的输入
	//char c = 'a';
	//cout << "请给字符型变量c赋值: " << endl;
	//cin >> c;
	//cout << "字符型变量c为:" << c << endl;

	//4.字符串类型数据的输入
	//string s = "hello world";
	//cout << "请为字符串重新赋值: " << endl;
	//cin >> s;
	//cout << "字符串为:" << s << endl;

	//5.布尔类型的输入
	bool flag = false;
	cout << "请为布尔类型变量flag赋值: " << endl;
	cin >>flag;    //flag输入为非0值的时候    flag=1;
	cout << "修改后的flag= " << flag<<endl;
	return 0;
}