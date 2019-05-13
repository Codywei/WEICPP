/**
输入运算符和getline函数的区别
*/
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	//string类的输入运算符会跳过开始的空白字符（cin>>）
	//从第一非空白字符开始读取
	//遇到之后的第一个空白字符结束读取，空白字符还会留在输入流中

	//getline函数会读取所有的空白字符，直到遇到换行为止
	//读取换行并丢弃

	string str;
	getline(cin, str);
	cout << str;
	return 0;
}