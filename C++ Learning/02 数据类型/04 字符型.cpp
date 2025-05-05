#include<iostream>
using namespace std;
/*
字符型变量用于显示单个字符
语法:char ch = 'a'； 注意：
						1.单引号
						2.单引号内只能有一个字符，而不可以是字符串

C和C++中字符型变量只占用一个字节。
字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放到存储单元
*/
int main4()
{
	//字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;
	//字符型变量所占内存大小
	cout << "字符型变量所占内存：" << sizeof(char) << endl;

	//字符型变量常见错误
	//char ch2 = "b";   //创建字符型变量要用单引号
	//char ch2 = 'abcde';   //字符型变量只能有一个字符，而不应该有字符串
	
	//字符型变量对应的ACSII编码
	cout << (int)ch << endl; //将字符变量强行转成int，打印出来是97，即a对应的ACSII码
	/*记住
	a - 97
	A-65
	*/
	system("pause");
	return 0;
}