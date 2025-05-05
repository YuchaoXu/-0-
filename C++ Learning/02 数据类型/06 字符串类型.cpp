#include<iostream>
using namespace std;
#include<string>


/*
字符串型：用于表示一串字符
语法：string 变量名 = "字符串值"
*/
int main6()
{
	//C风格字符串   语法：char 字符串名[] = "字符串值"   注意：双引号
	char str[] = "hello world";
	cout << str << endl;

	//C++风格字符串
	string str2 = "hello world";
	cout << str2 << endl;
	system("pause");
	return 0;

}