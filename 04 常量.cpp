#include<iostream>
using namespace std;
/*
常量：用于记录程序中不可修改的数据
	1.宏常量：#define 常量名 常量值
				通常在文件上方定义，表示一个常量
	2.const修饰的变量: const 数据类型 常量名 = 常量值
				通常在变量定义前加关键字const，修饰变量为常量，不可修改
*/

// #define 宏常量
#define Day 7

int main4()
{
	//Day = 14  //Day是常量，若修改Day会报错
	cout << "一周总共有：" << Day << "天" << endl;

	//const修饰的变量
	const int month = 12;
	// month = 24; //const修饰的变量也被称为常量，也不可修改

	cout << "一年总共有：" << month << "月" << endl;

	system("pause");
	return 0;
}