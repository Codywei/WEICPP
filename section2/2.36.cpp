/**
decltype返回表达式结果对应的类型
*/
#include <iostream>
int main()
{
	//变量，类型，值
	//a    int   4
	//b    int   4
	//c    int   4
	//d    int&  4
	int a = 3, b = 4;
	decltype(a) c = a;
	//双层括号代表引用
	decltype((b)) d = a;
	++c;
	++d;
	std::cout << a << " " << b << " " << c << " " << d << std::endl;
     
	return 0;
}