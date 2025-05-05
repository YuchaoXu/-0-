#include<iostream>
using namespace std;
/*
布尔类型：布尔类型代表真或假的值

bool：
	true ---真（本质是1）
	false ---假（本质是0）
	布尔类型只占1个字节大小
*/
int main7()
{
	//创建布尔数据类型
	bool flag = true;  //true代表1
	cout << flag << endl;

	flag = false;		//false代表0
	cout << flag << endl;

	//查看bool所占内存空间  
	cout << "布尔类型所占的内存空间" << sizeof(bool) << endl;  //bool类型的内存空间为1

	system("pause");
	return 0;

}