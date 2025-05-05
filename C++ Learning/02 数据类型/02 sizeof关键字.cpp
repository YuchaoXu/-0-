#include<iostream>
using namespace std;
/*
利用sizeof关键字可以统计数据类型所占内存大小
语法：sizeof(数据类型/变量)
*/
int main2()
{
	//整型：short (2)  int (4) long (4)    long long  (8)
	//sizeof(数据类型/变量)

	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "short占用内存空间为：" << sizeof(num1) << endl;
	cout << "short占用内存空间为：" << sizeof(short) << endl;
	cout << "int占用内存空间为：" << sizeof(num2) << endl;
	cout << "long占用内存空间为：" << sizeof(num3) << endl;
	cout << "long long占用内存空间为：" << sizeof(num4) << endl;

	system("pause");
	return 0;
}