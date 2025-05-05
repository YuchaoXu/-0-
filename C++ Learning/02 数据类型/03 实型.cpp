#include<iostream>
using namespace std;
/*
实型（浮点型）：用于表示小数
1. 单精度float：4字节
2.双精度double：8字节
两者区别在于表示的有效数字范围不同
*/

int main3()
{
	//单精度
	float f1 = 3.14f;//若3.14后面不写f，首先默认3.14为double，之后多做一步转换转换为float；所以通常在float后面加f，这样系统会直接认为3.14为float
	cout << "f1 = " << f1 << endl;

	//双精度
	double d1 = 3.14;
	cout << "d1 = " << d1 << endl;
	//默认情况下，c++输出一个小数，最多只能显示6为有效数字

	//统计float和double占用内存空间
	cout << "float占用的内存空间为:" << sizeof(f1) << endl; //4字节
	cout << "double占用的内存空间为:" << sizeof(d1) << endl; //8字节

	//科学计数法
	float f2 = 3e2;

	float f3 = 3e-2;
	cout << "f2 = " << f2 << endl;
	cout << "f3 = " << f3 << endl;

	system("pause");
	return 0;

}