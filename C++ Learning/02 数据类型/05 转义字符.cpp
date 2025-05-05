#include<iostream>
using namespace std;
/*
转义字符用于表示一些不能显示出来的ASCII字符
例如 ： \n :换行
		\\ ：
		\t ：

*/
int main5()
{
	//换行符 \n
	cout << "hello world" << endl << "hahahaha" << endl; //endl其实就相当于换行符\n
	cout << "hello world\n";
	//反斜杠
	cout << "\\" << endl; // 输出 反斜杠\
	//水平制表符 \t
	cout << "a\thelloworld" << endl;
	cout << "aa\thelloworld" << endl;
	cout << "aaa\thelloworld" << endl;
	cout << "aaaa\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	cout << "aaaaaa\thelloworld" << endl;
	cout << "aaaaaaa\thelloworld" << endl;//水平制表符：\t签名的内容和空格加起来一共8个字符，通常用来做一个对齐输出数据
	system("pause");
	return 0;
}