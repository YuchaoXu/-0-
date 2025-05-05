#include<iostream>
using namespace std;
/*
c++规定在创建一个变量或者常量时，必须指定出相应的数据类型，否则无法给变量分配内存
*/
int main1()
{
	//整型
	//1.短整型 (-32768~32767) 若超出范围，比如32768超出上限，则回到下限，num1输出-32768
	short num1 = 32768;

	//2.整型
	int num2 = 32768;

	//3.长整型
	long num3 = 10;

	//4.长长整型
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;
	system("pause");
	return 0;
}