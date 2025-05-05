#include<iostream>
using namespace std;

/*
建议：给变量起名的时候，最好要做到见名知意
 
1.标识符不能是关键字
2.标识符只能由字母、数字、下划线组成
3.第一个字符必须为字母或下划线
4.标识符中的字母区分大小写
*/
int main6()
{
	//1.标识符不能是关键字
	//int int = 10;
	//2.标识符只能由字母、数字、下划线组成
	int abc = 10;
	int _abc = 20;
	int _123abc = 30;
	//int 123abc = 40; //3.第一个字符必须为字母或下划线

	//4.标识符中的字母区分大小写
	int aaa = 100;
	cout << aaa << endl;
	int AAA = 200;
	cout << AAA << endl;
	system("pause");
	return 0;
}